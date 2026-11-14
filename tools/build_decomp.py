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
import sys

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


# A call statement on its own line: direct (func_<ADDR>(...)) or through a function pointer
# ((**(code **)(...))(...)). [^;] spans Ghidra's wrapped argument lines.
_CALL_STMT = r"((?:func_([0-9A-F]{8})|\(\*+\(code \*+\)[^;]*?\))\((?:[^;])*?\));"
RE_CALL_THEN_RETURN = re.compile(r"(\n[ \t]+)" + _CALL_STMT + r"\s*\n[ \t]+return;")
RE_CALL_AT_END = re.compile(r"(\n[ \t]+)" + _CALL_STMT + r"(\s*\n\}\s*)$")


RE_VCALL_NOARGS = re.compile(r"\(\*\*\(code \*\*\)\(\*([^;{}]*?) \+ (0x[0-9a-f]+|\d+)\)\)\(\)")
RE_VCALL0_NOARGS = re.compile(r"\(\*\*\(code \*\*\)\*([A-Za-z_]\w*)\)\(\)")


def virtual_this(text):
    """Virtual calls Ghidra printed with no arguments: `(**(code **)(*OBJ + K))()`. On ARM the
    object whose vtable is read is passed as `this` in r0 (it was already in r0, e.g. the
    previous call's result, so Ghidra did not list it). Pass OBJ explicitly; any further
    register arguments stay lost (those calls need a hand rewrite)."""
    def fix(m):
        obj = m.group(1)
        if obj.count("(") != obj.count(")"):
            return m.group(0)
        return "(**(code **)(*%s + %s))(%s)" % (obj, m.group(2), obj)
    text = RE_VCALL_NOARGS.sub(fix, text)
    return RE_VCALL0_NOARGS.sub(lambda m: "(**(code **)*%s)(%s)" % (m.group(1), m.group(1)), text)


_EU_CODE = None
RE_CODE_STR_ARG = re.compile(r"(?<=[(,])(\s*)(0x[0-9a-f]{5,6})(?=\s*[,)])")


def code_strings(text):
    """Ghidra prints `add rN, pc, #imm` references to strings stored among the code (task and
    heap names such as "TaskRender", the mount name "rom:") as plain integers, the EU address.
    A call argument that is such an address of a printable NUL-terminated string becomes the C
    string literal (only the contents matter to the callers: names, formats, magic tags)."""
    global _EU_CODE
    if _EU_CODE is None:
        p = os.path.join(ROOT, "..", "albw-decomp-ai", "rom", "eu_code.bin")
        _EU_CODE = open(p, "rb").read() if os.path.exists(p) else b""
    code = _EU_CODE

    def fix(m):
        a = int(m.group(2), 16)
        o = a - 0x100000
        if not (0x100000 <= a < 0x693000) or a % 4 or not code:
            return m.group(0)
        e = code.find(b"\0", o, o + 256)
        if e < 0 or e - o < 2 or not all(0x20 <= b < 0x7F for b in code[o:e]):
            return m.group(0)
        lit = code[o:e].decode("ascii").replace("\\", "\\\\").replace('"', '\\"')
        return '%s(int)"%s" /* EU %08X */' % (m.group(1), lit, a)
    return RE_CODE_STR_ARG.sub(fix, text)


def void_tail_returns(text, addr, sigs):
    """Ghidra types many forwarding functions `void` although r0 still holds the callee's result
    when they return (the call is the last instruction before the epilogue, e.g. EU 0010FC68
    `bl 0x110740; pop {r3, r4, r5, pc}`), and callers use that result. On ARM a function whose
    last action is a call returns that call's r0 whatever its C type, so this is exact machine
    semantics: such a `void` function returns the value of every call that directly precedes a
    return. Calls returning float/double (VFP s0, not r0) are left alone."""
    own = "func_" + addr
    m = re.search(r"\n\n(void)\s+%s\s*\(" % own, text)
    if not m:
        return text
    if addr in RETURNS_THIS:
        # proven from the machine code (tools/returns_this.py): r0 at every return is the
        # incoming r0, i.e. the function returns its first argument (constructors return this)
        pm = re.match(r"\s*\(\s*([^,)]*?)\bparam_1\s*[,)]", text[m.end() - 1:])
        body_at = text.index("{", m.end())
        body = text[body_at:]
        if pm and not re.search(r"\b(float|double)\b", pm.group(1)) and \
                not re.search(r"(?<!\*)\bparam_1\s*(?:[-+*/|&^]?=(?!=)|\+\+|--)|(?:\+\+|--)\s*param_1\b", body):
            body = re.sub(r"\breturn;", "return (undefined4)param_1;", body)
            if not re.search(r"return \(undefined4\)param_1;\s*\}\s*$", body):
                body = re.sub(r"\n\}\s*$", "\n  return (undefined4)param_1;\n}\n", body)
            return text[:m.start(1)] + "undefined4" + text[m.end(1):body_at] + body
        return text

    def ok(callee):
        sig = (sigs or {}).get("func_" + callee) if callee else None
        return not (sig and sig.split()[0] in ("float", "double"))

    def sub_ret(mm):
        return "%sreturn %s;" % (mm.group(1), mm.group(2)) if ok(mm.group(3)) else mm.group(0)

    def sub_end(mm):
        return "%sreturn %s;%s" % (mm.group(1), mm.group(2), mm.group(4)) if ok(mm.group(3)) else mm.group(0)

    body_at = m.end()
    body = RE_CALL_THEN_RETURN.sub(sub_ret, text[body_at:])
    body = RE_CALL_AT_END.sub(sub_end, body)
    if body == text[body_at:]:
        return text
    return text[:m.start(1)] + "undefined4" + text[m.end(1):body_at] + body


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
DATA_LO, DATA_HI = 0x00693000, 0x006FF000 + 0x289F0 + 0x87A44
ANY_ADDR_NAME = re.compile(r"^[A-Za-z][A-Za-z0-9]*_(?:0x)?([0-9A-Fa-f]{8})$")
_rt = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "native", "returns_this.json")
RETURNS_THIS = set(json.load(open(_rt))) if os.path.exists(_rt) else set()  # tools/returns_this.py
CTORS = set()  # USA addresses of the game's static constructors (filled in main)


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
    if m and DATA_LO <= int(m.group(1), 16) < DATA_HI:  # the address decides, not the prefix
        return "data_%08X" % int(m.group(1), 16)
    if m:
        a = int(m.group(1), 16)
        return "func_%08X" % a
    m = DATA_NAME.match(name) or ANY_ADDR_NAME.match(name)
    if m:
        a = int(m.group(1), 16)
        # only data names are canonicalised here: a DAT_/PTR_ name inside the code section is a
        # literal-pool word (defined by gen_data under its own name), never a function
        if DATA_LO <= a < DATA_HI:
            return "data_%08X" % a
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


def static_init(obj):
    """(section, value) of the compiler's static initialiser (_GLOBAL__sub_I_*) in obj, if any."""
    out = subprocess.run(["llvm-readelf", "-s", "-S", "--wide", obj], capture_output=True, text=True).stdout
    secs = {}
    for l in out.splitlines():
        m = re.match(r"\s*\[\s*(\d+)\]\s+(\S+)", l)
        if m:
            secs[m.group(1)] = m.group(2)
    for l in out.splitlines():
        p = l.split()
        if len(p) >= 8 and p[-1].startswith("_GLOBAL__sub_I_") and p[3] == "FUNC":
            return secs.get(p[6]), int(p[1], 16)
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
    prim, sinit = {}, {}
    for a in addrs:
        si = static_init(obj) if a in CTORS and obj != fin else None
        if si and si[0]:
            sinit[a] = si
            prim[a] = "func_" + a
            continue
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
                # generated game data (step 3) is the strong definition; weaken under both names
                # (objcopy may apply this before or after the rename)
                args += ["--weaken-symbol=" + c, "--weaken-symbol=" + d]
            else:
                args += ["--localize-symbol=" + d]
        # exports are weak: a native SDK replacement defining the same func_<ADDR> wins at link time
        for a, (sec, val) in sinit.items():
            args += ["--add-symbol", "func_%s=%s:%d,weak,function" % (a.upper(), sec, val)]
        # matched sources of functions that return their first argument on ARM (returns_this.json)
        # but are void in C: export them as func_<ADDR>__impl; link.sh adds a thunk func_<ADDR>
        # that calls the impl and returns the first argument (exact ARM r0 semantics)
        matched_src = not path.startswith("ghidra_fallback/") and "/nonmatching/" not in path
        for a, p in prim.items():
            want = "func_" + a.upper()
            if a in sinit:
                continue
            if matched_src and a.upper() in RETURNS_THIS:
                impl = want + "__impl"
                if p != want:
                    args += ["--add-symbol", "%s=%s:0,weak,function" % (impl, ".text." + p), "--localize-symbol=" + p]
                else:
                    args += ["--redefine-sym", "%s=%s" % (want, impl), "--weaken-symbol=" + want,
                             "--weaken-symbol=" + impl]
                continue
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
    global OUT, TARGET, CTORS
    if a.arch == "x86_64":
        OUT, TARGET = os.path.join(ROOT, "build", "decomp64"), "x86_64-linux-gnu"
    decomp = os.path.abspath(a.decomp)
    os.makedirs(OUT, exist_ok=True)
    # the game's static constructors (their source's _GLOBAL__sub_I_* is the function)
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    import gen_data, struct as _st
    code = open(os.path.join(decomp, "rom", "eu_code.bin"), "rb").read()
    emap = json.load(open(os.path.join(decomp, "shared", "eu_usa_map.json")))
    fn_of = {int(v["eu"], 16): "func_" + k for k, v in emap.items()}
    ctors, _ = gen_data.init_tables(code, lambda x: _st.unpack_from("<I", code, x - 0x100000)[0], fn_of)
    CTORS = {c[5:] for c in ctors}
    print("static constructors: %d" % len(CTORS))
    print("mirrored %d files" % mirror(decomp))

    matched = json.load(open(os.path.join(decomp, "functions.json")))
    ghidra = json.load(open(os.path.join(decomp, "nonmatching.json")))
    import_ghidra = load_decomp_tool(decomp, "import_ghidra")
    # Ghidra with full auto-analysis (real parameter counts) is preferred over the earlier
    # no-analysis dumps (decomp's src/nonmatching and build/ghidra_all)
    analyzed_dir = next((d for d in (os.path.join(ROOT, "build", "ghidra_analyzed2"), os.path.join(ROOT, "build", "ghidra_analyzed")) if os.path.isdir(d)), "")
    # tools/systemic_rebuild.sh: another dump (default off). Its converted sources go to
    # ghidra_fallback/<dump name>/..., so the default build's files are never overwritten.
    alt_dir = os.environ.get("ALBW_GHIDRA_DIR")
    fb_sub = os.environ.get("ALBW_FALLBACK_SUBDIR") or (os.path.basename(os.path.normpath(alt_dir)) if alt_dir else "")
    if alt_dir:
        analyzed_dir = os.path.abspath(alt_dir)
        print("Ghidra dump: %s -> ghidra_fallback/%s (ALBW_CONVERT_V2=%s)"
              % (analyzed_dir, fb_sub, os.environ.get("ALBW_CONVERT_V2", "")))
    fallback_dir = analyzed_dir if os.path.isdir(analyzed_dir) else os.path.join(ROOT, "build", "ghidra_all")

    eu2usa = {v["eu"].lower(): k for k, v in json.load(open(os.path.join(decomp, "shared", "eu_usa_map.json"))).items()}
    extra_path = os.environ.get("ALBW_EXTRA_FUNCTIONS") or os.path.join(ROOT, "native", "extra_functions.json")
    extra = json.load(open(extra_path)) if os.path.exists(extra_path) else {}  # USA -> EU
    eu2usa.update({eu.lower(): usa for usa, eu in extra.items()})
    extra_dir = os.environ.get("ALBW_GHIDRA_EXTRA_DIR") or os.path.join(ROOT, "build", "ghidra_extra")

    def eu_fun_to_usa(text):
        """Ghidra's own FUN_<EU address> names -> func_<USA address> (unknown starts stay FUN_)."""
        def fix(m):
            a = m.group(1)
            if a in eu2usa:
                return "func_" + eu2usa[a]
            if int(a, 16) < 0x110000:  # Thumb C runtime at the start of the code: same address in USA
                return "func_%08X" % int(a, 16)
            return m.group(0)
        return re.sub(r"\b(?:thunk_)?FUN_([0-9a-f]{8})\b", fix, text)

    sigs = import_ghidra.signatures(fallback_dir) if fallback_dir else {}
    print("callee prototypes from Ghidra: %d" % len(sigs))

    def ghidra_source(addr):
        """Per-address Ghidra C (mirrored path relative to OUT), or None."""
        raw = os.path.join(fallback_dir, "func_%s.c" % addr)
        if not os.path.exists(raw):
            raw = os.path.join(extra_dir, "func_%s.c" % addr)  # functions missing from the table
        if not os.path.exists(raw) and addr in ghidra:
            return ghidra[addr]["path"]
        if not os.path.exists(raw):
            return None
        rel = os.path.join("ghidra_fallback", fb_sub, addr[:3], "func_%s.c" % addr)
        dst = os.path.join(OUT, rel)
        if not os.path.exists(dst) or os.path.getmtime(dst) < os.path.getmtime(raw):
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            text = open(raw, encoding="utf-8", errors="replace").read()
            with open(dst, "w") as fh:
                fh.write(rewrite(eu_fun_to_usa(import_ghidra.convert(code_strings(virtual_this(void_tail_returns(text, addr, sigs))), addr, sigs))))
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
    for addr in set(matched) | set(ghidra) | set(extra):
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

    # names nobody can resolve: not address-named, not aliased, not system library, not defined
    import gen_stubs
    system = gen_stubs.system_symbols()
    aliases = set()
    for f in ("symbol_aliases.txt", "symbol_aliases_manual.txt"):
        path = os.path.join(ROOT, "native", f)
        if os.path.exists(path):
            aliases |= {l.split()[0] for l in open(path) if l.strip() and not l.startswith("#")}
    defined_all = {d for r in res if r["ok"] for d in r["defs"]}

    def unresolvable(name):
        return not (name.startswith(("func_", "data_", "DAT_", "PTR_", "_DAT_", "__")) or "Ram" in name
                    or name == "_GLOBAL_OFFSET_TABLE_"  # provided by the linker (PIC code)
                    or name in aliases or name in system or name in defined_all
                    or re.match(r"^[su]_.*_[0-9a-f]{8}$", name))

    # second round: matched sources whose function could not be identified, that failed to
    # compile, or that reference names nothing can resolve (generic names like g/reg/dtor from
    # permuter-style matches) fall back to the address's Ghidra decompilation
    retry = []
    why = collections.Counter()
    matched_paths = {r["path"] for r in res if source_of.get(r["addrs"][0]) == "matched"}
    for r in res:
        if source_of.get(r["addrs"][0]) != "matched":
            continue
        miss = r["addrs"] if not r["ok"] else r["missing_primary"]
        if r["ok"] and any(unresolvable(u) for u in r["und"]):
            miss = r["addrs"]
            why.update(u for u in r["und"] if unresolvable(u))
        for addr in miss:
            g = ghidra_source(addr)
            if g:
                retry.append((g, [addr], None))
                source_of[addr] = "ghidra"
    if retry:
        with cf.ThreadPoolExecutor(a.jobs) as ex:
            fb = list(ex.map(build_one, retry))
        # a matched object whose address now has a working Ghidra fallback must leave the link:
        # both export the same weak func_<ADDR>, and ld would keep whichever comes first (the
        # matched one, with its unresolvable names turned into tripwire stubs)
        replaced = {ad for r in fb if r["ok"] for ad in r["primary"]}
        res = [r for r in res if not (r["path"] in matched_paths and set(r["addrs"]) <= replaced)]
        res += fb
        print("fallback to Ghidra for %d matched functions (unidentified or not compiling)" % len(retry))
        print("  most common unresolvable names: %s" % why.most_common(25))
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
    objects = [os.path.join(OUT, "obj", r["path"] + ".final.o") for r in ok]
    rep = {"objects": objects, "sources": len(res), "compiled": len(ok), "failed": [(r["path"], r["error"]) for r in failed],
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
