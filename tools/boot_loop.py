#!/usr/bin/env python3
"""One boot-loop iteration: relink, run the game, report the first stop (see PLAN.md).

  python3 tools/boot_loop.py [--no-link] [--timeout 20]

Reports: the function that stopped the game (tripwire stub, crash site, or tripwire caller),
its source and kind, whether it is SDK, its EU disassembly, and progress counters.
Also appends one line per run to build/boot_progress.log.
"""
import argparse
import json
import os
import re
import subprocess
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = os.path.join(ROOT, "..", "albw-decomp-ai")
EU_CODE = os.path.join(DECOMP, "rom", "eu_code.bin")


def sh(cmd, timeout=None):
    return subprocess.run(cmd, shell=True, capture_output=True, text=True, timeout=timeout, cwd=ROOT)


def source_of(addr):
    m = json.load(open(os.path.join(DECOMP, "functions.json")))
    g = json.load(open(os.path.join(DECOMP, "nonmatching.json")))
    native = [p for d in ("native/game", "native/sdk") for p in
              (os.path.join(ROOT, d, f) for f in (os.listdir(os.path.join(ROOT, d)) if os.path.isdir(os.path.join(ROOT, d)) else []))
              if "func_" + addr in open(p, errors="replace").read()]
    if native:
        return "native", native[0]
    e = m.get(addr, {})
    if e.get("status") in ("honest", "hack"):
        users = sum(1 for v in m.values() if v.get("path") == e["path"])
        return ("matched" if users == 1 else "ghidra(twin of %d)" % users), os.path.join(DECOMP, e["path"])
    if addr in g:
        return "ghidra", os.path.join(DECOMP, g[addr]["path"])
    fb = os.path.join(ROOT, "build", "decomp", "ghidra_fallback", addr[:3], "func_%s.c" % addr)
    return ("ghidra-fallback" if os.path.exists(fb) else "none"), fb


def is_sdk(addr):
    sdk = json.load(open(os.path.join(ROOT, "native", "sdk_map.json")))
    a = int(addr, 16)
    for blk in sdk["sdk_blocks_usa"]:
        lo, hi = (int(x, 16) for x in blk.split("-"))
        if lo <= a < hi:
            return True
    return addr in sdk["system_functions"]


def disasm(addr, n=48):
    m = json.load(open(os.path.join(DECOMP, "shared", "eu_usa_map.json")))
    eu = int(m[addr]["eu"], 16)
    py = os.path.join(DECOMP, ".venv", "bin", "python")
    code = ("from capstone import *;d=open(%r,'rb').read();md=Cs(CS_ARCH_ARM,CS_MODE_ARM)\n"
            "for i in md.disasm(d[%d:%d],%d):print('  %%08x  %%s %%s'%%(i.address,i.mnemonic,i.op_str))"
            % (EU_CODE, eu - 0x100000, eu - 0x100000 + 4 * n, eu))
    return subprocess.run([py, "-c", code], capture_output=True, text=True).stdout


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--no-link", action="store_true")
    ap.add_argument("--timeout", type=int, default=20)
    a = ap.parse_args()
    if not a.no_link:
        r = sh("tools/link.sh")
        if r.returncode:
            print("LINK FAILED\n" + (r.stdout + r.stderr)[-3000:])
            return
    t0 = time.time()
    r = sh("timeout %d gdb -q -batch -ex run -ex bt ./build/albw" % a.timeout, timeout=a.timeout + 30)
    out = r.stdout + r.stderr
    stages = re.findall(r"^startup: (.*)$", out, re.M)
    ctor = re.findall(r"^ctor (\d+)/", out, re.M)
    stub = re.search(r"FATAL: stub (\S+) called from", out)
    fatal = re.search(r"FATAL: (.*)", out)
    frames = [l for l in out.splitlines() if re.match(r"#\d+ ", l)]
    func = None
    if stub:
        func = re.search(r"func_([0-9A-F]{8})", stub.group(1))
        kind = "stub " + stub.group(1)
    else:
        # first frame that is a game function = crash site (or caller of the tripwire)
        for l in frames:
            m = re.search(r"\bfunc_([0-9A-F]{8})\b", l)
            if m and "runtime_fatal" not in l:
                func = m
                break
        kind = ("tripwire: " + fatal.group(1)) if fatal else ("signal: " + (re.search(r"received signal (\S+)", out) or re.search("(.*)$", "")).group(1))
    print("=" * 78)
    print("stage reached: %s | constructors done: %s" % (stages[-1] if stages else "-", ctor[-1] if ctor else "-"))
    print("stop: %s" % kind)
    if not func:
        print("\n".join(frames[:12]) or out[-2000:])
        return
    addr = func.group(1)
    src_kind, path = source_of(addr)
    print("function: func_%s | %s | source: %s\n  %s" % (addr, "SDK -> native replacement" if is_sdk(addr)
          else "game -> decompile", src_kind, os.path.relpath(path, ROOT)))
    print("backtrace:\n  " + "\n  ".join(frames[:8]))
    if os.path.exists(path):
        body = [l for l in open(path, errors="replace").read().splitlines() if not l.startswith(("extern", "#include"))]
        print("source:\n" + "\n".join("  " + l for l in body[:60] if l.strip()))
    print("EU disassembly:\n" + disasm(addr))
    with open(os.path.join(ROOT, "build", "boot_progress.log"), "a") as fh:
        fh.write("%s ctors=%s stage=%s stop=%s func=%s src=%s\n" % (time.strftime("%F %T"), ctor[-1] if ctor else "-",
                 stages[-1] if stages else "-", kind[:60], addr, src_kind))


if __name__ == "__main__":
    main()
