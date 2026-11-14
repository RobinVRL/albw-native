#!/usr/bin/env python3
"""Native build of the decompiled game code (steps 1-2 of README).

  python3 tools/build_decomp.py [--decomp ../albw-decomp-ai] [--jobs N] [--only ADDR,...]

1. Copies the decomp's src/ and shared/include/ into build/decomp/ with native-portability
   rewrites (armcc inline-asm scheduling hacks dropped, register pinning dropped, TLS reads
   turned into albw_tls()). The decomp repository itself is never modified.
2. Compiles every source that holds a function (matched first, else Ghidra-derived) with clang
   for 32-bit x86, one object per source.
3. Normalises symbols in each object (llvm-objcopy):
   - every global the object defines becomes local, except its own function(s), which are
     exported under the canonical name func_<USA ADDR>;
   - references to other functions under any address-bearing name (FUN_0010abcd,
     func_0x0010abcd, f_0010ABCD, ...) are renamed to func_<ADDR>;
   - references to data under any address-bearing name become data_<ADDR>.
   Result: one definition per function, one name per function and per datum.
4. Writes build/decomp/report.json and prints the link picture (duplicates, unresolved).
"""
import argparse
import collections
import concurrent.futures as cf
import json
import os
import re
import shutil
import subprocess

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OUT = os.path.join(ROOT, "build", "decomp")
TARGET = "i686-linux-gnu"
COMPAT = os.path.join(ROOT, "native", "albw_native.h")

# ------------------------------------------------------------------ rewrites
RE_TLS = re.compile(r"__asm\s*\{\s*mrc\s+p15\s*,\s*0\s*,\s*(\w+)\s*,\s*c13\s*,\s*c0\s*,\s*3\s*\}")
RE_ASM_BLOCK = re.compile(r"__asm\s*\{[^{}]*\}")
RE_REG_PIN = re.compile(r"__asm\s*\(\s*\"r\d+\"\s*\)")
RE_HEX_E = re.compile(r"(0[xX][0-9a-fA-F]*[eE])([+-])")


def rewrite(text):
    text = RE_TLS.sub(r"\1 = albw_tls();", text)
    text = RE_ASM_BLOCK.sub("", text)
    text = RE_REG_PIN.sub("", text)
    text = RE_HEX_E.sub(r"\1 \2 ", text)
    return text


def mirror(decomp):
    """Copy sources + headers with rewrites (only files that changed)."""
    n = 0
    for sub in ("src", os.path.join("shared", "include")):
        for dp, _, files in os.walk(os.path.join(decomp, sub)):
            for f in files:
                if not f.endswith((".c", ".cpp", ".cc", ".h", ".hpp", ".inc")):
                    continue
                s = os.path.join(dp, f)
                d = os.path.join(OUT, os.path.relpath(s, decomp))
                if os.path.exists(d) and os.path.getmtime(d) >= os.path.getmtime(s):
                    continue
                os.makedirs(os.path.dirname(d), exist_ok=True)
                with open(s, encoding="utf-8", errors="replace") as fh:
                    text = fh.read()
                with open(d, "w", encoding="utf-8") as fh:
                    fh.write(rewrite(text))
                n += 1
    return n


# ------------------------------------------------------------------ names
ADDR_IN_NAME = re.compile(r"(?:^|[^0-9A-Fa-f])(?:0x)?([0-9A-Fa-f]{8})(?![0-9A-Fa-f])")
FUNC_NAME = re.compile(r"^(?:func_|FUN_|f_|sub_|fn_|func_0x|FUN_0x)(?:0x)?([0-9A-Fa-f]{8})$")
DATA_NAME = re.compile(r"^(?:data_|ro_|bss_|DAT_|G_|g_|PTR_|ptr_|gData_|rodata_|str_|s_|tbl_|vt_|vtbl_)(?:0x)?([0-9A-Fa-f]{8})$")
TEXT_LO, TEXT_HI = 0x00100000, 0x00693000


MANGLED = re.compile(r"^_Z(\d+)")


def base_name(name):
    """Plain function name inside an Itanium-mangled free-function name (_Z<len><name>...)."""
    m = MANGLED.match(name)
    if not m:
        return name
    n = int(m.group(1))
    return name[m.end():m.end() + n]


def canon_ref(name):
    """Canonical name for a referenced symbol, or None to keep it."""
    name = base_name(name)
    m = FUNC_NAME.match(name) or re.match(r"^(?:g_|post_|pre_|call_|fn|f)_?(?:0x)?([0-9A-Fa-f]{8})$", name)
    if m:
        a = int(m.group(1), 16)
        return "func_%08X" % a
    m = DATA_NAME.match(name)
    if m:
        a = int(m.group(1), 16)
        return ("func_%08X" if TEXT_LO <= a < TEXT_HI else "data_%08X") % a
    return None


def nm(obj):
    out = subprocess.run(["llvm-nm", "--defined-only", "-g", "--format=just-symbols", obj],
                         capture_output=True, text=True).stdout.split()
    und = subprocess.run(["llvm-nm", "-u", "--format=just-symbols", obj], capture_output=True, text=True).stdout.split()
    full = subprocess.run(["llvm-nm", "--defined-only", "-g", obj], capture_output=True, text=True).stdout.splitlines()
    kinds = {}
    for l in full:
        p = l.split()
        if len(p) >= 3:
            kinds[p[2]] = p[1]
    return out, und, kinds


def call_roots(obj, funcs):
    """Functions in obj that no other function in obj references (-ffunction-sections)."""
    out = subprocess.run(["llvm-readelf", "-r", "--wide", obj], capture_output=True, text=True).stdout
    called, cur = set(), None
    for l in out.splitlines():
        m = re.match(r"Relocation section '\.rel\.text\.(\S+)'", l)
        if m:
            cur = m.group(1)
            continue
        if l.startswith("Relocation section"):
            cur = None
            continue
        p = l.split()
        if cur and len(p) >= 5 and p[4] != cur:
            called.add(p[4])
    return [f for f in funcs if f not in called]


def pick_primary(addr, defs, kinds, obj=None):
    funcs = [d for d in defs if kinds.get(d, "").upper() in ("T", "W")]
    hexa = addr.upper()
    exact = [d for d in funcs if d == "func_" + hexa]
    if exact:
        return exact[0]
    named = [d for d in funcs if hexa in d.upper()]
    if len(named) == 1:
        return named[0]
    if len(named) > 1:
        return min(named, key=len)
    if len(funcs) == 1:
        return funcs[0]
    if obj and funcs:
        roots = call_roots(obj, funcs)
        if len(roots) == 1:
            return roots[0]
    return None


def build_one(job):
    path, addrs, decomp_flags = job
    src = os.path.join(OUT, path)
    obj = os.path.join(OUT, "obj", path + ".o")
    fin = os.path.join(OUT, "obj", path + ".final.o")
    os.makedirs(os.path.dirname(obj), exist_ok=True)
    cpp = path.endswith((".cpp", ".cc"))
    cmd = ["clang", "--target=" + TARGET, "-c", "-O1", "-g0", "-w", "-ffunction-sections",
           "-fdata-sections", "-fno-common", "-fno-strict-aliasing", "-fwrapv", "-fno-exceptions",
           "-ferror-limit=3", "-include", COMPAT,
           "-I", os.path.join(OUT, "shared", "include"), "-I", os.path.dirname(src)]
    if cpp:
        cmd += ["-x", "c++", "-std=gnu++11", "-fno-threadsafe-statics"]
    else:
        cmd += ["-std=gnu11", "-Wno-error=implicit-function-declaration", "-Wno-error=int-conversion",
                "-Wno-error=incompatible-pointer-types", "-Wno-error=incompatible-function-pointer-types",
                "-Wno-error=return-type"]
    if not (os.path.exists(fin) and os.path.getmtime(fin) >= os.path.getmtime(src)):
        r = subprocess.run(cmd + ["-o", obj, src], capture_output=True, text=True)
        if r.returncode:
            err = next((l for l in r.stderr.splitlines() if "error:" in l), r.stderr[:200])
            return {"path": path, "addrs": addrs, "ok": False, "error": err.split("error:", 1)[-1].strip()}
    else:
        obj = fin  # already normalised: re-derive the report from it
    defs, und, kinds = nm(obj)
    prim = {}
    for a in addrs:
        p = pick_primary(a, defs, kinds, obj)
        if p:
            prim[a] = p
    if obj != fin:
        args = ["llvm-objcopy"]
        exported = set(prim.values())
        for d in defs:
            if d in exported:
                continue
            c = canon_ref(d)
            if kinds.get(d, "").upper() in ("D", "B", "R", "V", "C") and c and c.startswith("data_"):
                if c != d:
                    args += ["--redefine-sym", "%s=%s" % (d, c)]
                args += ["--weaken-symbol=" + c]  # generated game data (step 3) is the strong definition
            else:
                args += ["--localize-symbol=" + d]
        # exports are weak: a native SDK replacement defining the same func_<ADDR> wins at link time
        for a, p in prim.items():
            want = "func_" + a.upper()
            if p != want:
                sec = ".text." + p
                args += ["--add-symbol", "%s=%s:0,weak,function" % (want, sec), "--localize-symbol=" + p]
            else:
                args += ["--weaken-symbol=" + want]
        for u in und:
            c = canon_ref(u)
            if c and c != u:
                args += ["--redefine-sym", "%s=%s" % (u, c)]
        r = subprocess.run(args + [obj, fin], capture_output=True, text=True)
        if r.returncode:
            return {"path": path, "addrs": addrs, "ok": False, "error": "objcopy: " + r.stderr.strip()[:200]}
        os.remove(obj)
        defs, und, kinds = nm(fin)
    return {"path": path, "addrs": addrs, "ok": True, "primary": prim,
            "missing_primary": [a for a in addrs if a not in prim], "defs": defs, "und": und}


def load_decomp_tool(decomp, name):
    import importlib.util
    spec = importlib.util.spec_from_file_location(name, os.path.join(decomp, "tools", name + ".py"))
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--decomp", default=os.path.join(ROOT, "..", "albw-decomp-ai"))
    ap.add_argument("--jobs", type=int, default=os.cpu_count())
    ap.add_argument("--only", default="")
    ap.add_argument("--arch", choices=("x86", "x86_64"), default="x86",
                    help="x86 = 32-bit intermediate build; x86_64 = the release target (tracks 64-bit health)")
    a = ap.parse_args()
    global OUT, TARGET
    if a.arch == "x86_64":
        OUT, TARGET = os.path.join(ROOT, "build", "decomp64"), "x86_64-linux-gnu"
    decomp = os.path.abspath(a.decomp)
    os.makedirs(OUT, exist_ok=True)
    print("mirrored %d files" % mirror(decomp))

    matched = json.load(open(os.path.join(decomp, "functions.json")))
    ghidra = json.load(open(os.path.join(decomp, "nonmatching.json")))
    import_ghidra = load_decomp_tool(decomp, "import_ghidra")
    fallback_dir = os.path.join(ROOT, "build", "ghidra_all")

    def ghidra_source(addr):
        """Per-address Ghidra C (mirrored path relative to OUT), or None."""
        if addr in ghidra:
            return ghidra[addr]["path"]
        raw = os.path.join(fallback_dir, "func_%s.c" % addr)
        if not os.path.exists(raw):
            return None
        rel = os.path.join("ghidra_fallback", addr[:3], "func_%s.c" % addr)
        dst = os.path.join(OUT, rel)
        if not os.path.exists(dst) or os.path.getmtime(dst) < os.path.getmtime(raw):
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            text = open(raw, encoding="utf-8", errors="replace").read()
            with open(dst, "w") as fh:
                fh.write(rewrite(import_ghidra.convert(text, addr)))
        return rel

    # A matched source is used only when it belongs to exactly one address: files shared by many
    # addresses ("twins") match shape only, with different callees/data per address, so each of
    # those addresses gets its own Ghidra decompilation instead.
    users = collections.Counter(e["path"] for e in matched.values() if e["status"] in ("honest", "hack"))
    by_path = collections.defaultdict(list)
    source_of = {}
    for addr, e in matched.items():
        if e["status"] in ("honest", "hack") and users[e["path"]] == 1:
            by_path[e["path"]].append(addr)
            source_of[addr] = "matched"
    for addr in set(matched) | set(ghidra):
        if addr in source_of:
            continue
        g = ghidra_source(addr)
        if g:
            by_path[g].append(addr)
            source_of[addr] = "ghidra"
    only = set(x.upper() for x in a.only.split(",") if x)
    jobs = [(p, sorted(ad), None) for p, ad in sorted(by_path.items()) if not only or only & set(ad)]
    with cf.ThreadPoolExecutor(a.jobs) as ex:
        res = list(ex.map(build_one, jobs))

    # second round: matched sources whose function could not be identified, or that failed to
    # compile, fall back to the address's Ghidra decompilation
    retry = []
    for r in res:
        if source_of.get(r["addrs"][0]) != "matched":
            continue
        miss = r["addrs"] if not r["ok"] else r["missing_primary"]
        for addr in miss:
            g = ghidra_source(addr)
            if g:
                retry.append((g, [addr], None))
                source_of[addr] = "ghidra"
    if retry:
        with cf.ThreadPoolExecutor(a.jobs) as ex:
            res += list(ex.map(build_one, retry))
        print("fallback to Ghidra for %d matched functions (unidentified or not compiling)" % len(retry))
    print("sources: %d matched, %d Ghidra" % (sum(v == "matched" for v in source_of.values()),
                                              sum(v == "ghidra" for v in source_of.values())))

    # final outcome per address: a later (fallback) success supersedes an earlier failure
    done = {a for r in res if r["ok"] for a in r["primary"]}
    ok = [r for r in res if r["ok"]]
    failed = [r for r in res if not r["ok"] and not set(r["addrs"]) <= done]
    defined = set()
    for r in ok:
        defined.update(r["defs"])
    und = collections.Counter()
    for r in ok:
        for u in r["und"]:
            if u not in defined:
                und[u] += 1
    have_fn = {a for r in ok for a in r["primary"]}
    no_primary = [(r["path"], a) for r in ok for a in r["missing_primary"] if a not in done]
    kinds = collections.Counter()
    for u in und:
        kinds["function" if u.startswith("func_") else "data" if u.startswith("data_") else
              "ghidra-pool(EU)" if "Ram" in u or u.startswith("DAT_") else "other"] += 1
    fails = collections.Counter(re.sub(r"'[^']*'", "'X'", r["error"])[:90] for r in failed)
    rep = {"sources": len(res), "compiled": len(ok), "failed": [(r["path"], r["error"]) for r in failed],
           "functions_exported": len(have_fn), "functions_total": len(source_of),
           "no_primary": no_primary, "unresolved": dict(und.most_common())}
    json.dump(rep, open(os.path.join(OUT, "report.json"), "w"), indent=1)
    print("sources %d | compiled %d | failed %d" % (len(res), len(ok), len(failed)))
    print("functions exported under func_<ADDR>: %d of %d with source (no clear primary symbol: %d)"
          % (len(have_fn), len(source_of), len(no_primary)))
    print("unresolved symbols: %d  %s" % (len(und), dict(kinds)))
    print("top compile failures:")
    for e, n in fails.most_common(12):
        print("  %5d  %s" % (n, e))


if __name__ == "__main__":
    main()
