#!/usr/bin/env python3
"""64-bit layout scan of native sources (low-4GB mode, native/64BIT.md).

  python3 tools/layout64_scan.py [--json out.json] [files or dirs ...]   (default: native/game
                                                                          native/robust native/sdk)

Compiles each file to x86-64 LLVM IR (-O1, the flags of tools/link64.sh) and reports functions
that use pointer-sized words in memory: pointer loads/stores (`load ptr` / `store ptr`), structs
with pointer members, or 8-byte integer accesses at the same time as int<->pointer casts. In the
32-bit build those words are 4 bytes, like the game's memory; on x86-64 they are 8, so such a
function reads/writes game objects with the wrong layout unless the field is a 4-byte game
pointer (ALBW_GP / gptr_t, native/include/gptr.h). Local pointer variables that stay in
registers do not show up (they are promoted out of memory at -O1).

Also prints the summary for the matched decomp sources of build/decomp64 (the *.layout64
sidecars written by build_decomp.py --arch x86_64).
"""
import argparse
import collections
import concurrent.futures as cf
import glob
import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FLAGS = ["clang", "--target=x86_64-linux-gnu", "-std=gnu11", "-O1", "-g0", "-w", "-fms-extensions",
         "-fno-strict-aliasing", "-Wno-error=implicit-function-declaration", "-Wno-error=int-conversion", "-Wno-error=incompatible-pointer-types", "-Wno-error=incompatible-function-pointer-types", "-Wno-error=return-type", "-S", "-emit-llvm", "-I", os.path.join(ROOT, "native", "include")]
GAME_FLAGS = ["-I", os.path.join(ROOT, "native", "robust"), "-include", os.path.join(ROOT, "native", "albw_native.h"),
              "-I", os.path.join(ROOT, "..", "albw-decomp-ai", "shared", "include")]
RE_FN = re.compile(r"^define .*?@([\w.$]+)\(", re.M)
RE_LOADP = re.compile(r"= load ptr, ptr")
RE_STOREP = re.compile(r"store ptr (?!addrspace)[^,]+, ptr")
RE_PSTRUCT = re.compile(r"^(%(?:struct|union)\.\S+) = type \{[^}]*\bptr\b", re.M)


def sdl_cflags():
    r = subprocess.run(["pkg-config", "--cflags", "sdl3"], capture_output=True, text=True)
    return r.stdout.split()


P32 = False


def scan(path, sdl):
    game = "/native/game/" in path or "/native/robust/" in path or "/native/x64/" in path
    cmd = FLAGS + (GAME_FLAGS if game else []) + sdl + ["-I", os.path.dirname(path)]
    if P32 and game:  # as tools/link64.sh compiles it: after tools/ptr32.py --native
        sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
        import ptr32
        text = ptr32.rewrite_native(open(path, encoding="utf-8", errors="replace").read())
        r = subprocess.run(cmd + ["-x", "c", "-o", "-", "-"], input=text, capture_output=True, text=True)
    else:
        r = subprocess.run(cmd + ["-o", "-", path], capture_output=True, text=True)
    if r.returncode:
        return path, {"error": (r.stderr.strip().splitlines() or ["?"])[0][:200]}
    ir = r.stdout
    structs = sorted(set(RE_PSTRUCT.findall(ir)))
    funcs = {}
    for m in RE_FN.finditer(ir):
        end = ir.find("\n}\n", m.end())
        body = ir[m.end():end]
        why = []
        if RE_LOADP.search(body):
            why.append("load-ptr")
        if RE_STOREP.search(body):
            why.append("store-ptr")
        if why:
            funcs[m.group(1)] = why
    return path, {"functions": funcs, "ptr_structs": structs}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("paths", nargs="*")
    ap.add_argument("--json")
    ap.add_argument("--p32", action="store_true", help="scan native/game|robust after tools/ptr32.py --native")
    a = ap.parse_args()
    global P32
    P32 = a.p32
    paths = a.paths or [os.path.join(ROOT, "native", d) for d in ("game", "robust", "sdk")]
    files = []
    for p in paths:
        files += sorted(glob.glob(os.path.join(p, "*.c"))) if os.path.isdir(p) else [p]
    sdl = sdl_cflags()
    with cf.ThreadPoolExecutor(os.cpu_count()) as ex:
        res = dict(ex.map(lambda f: scan(os.path.abspath(f), sdl), files))
    by_dir = collections.defaultdict(lambda: collections.Counter())
    for f, r in res.items():
        d = os.path.basename(os.path.dirname(f))
        by_dir[d]["files"] += 1
        if "error" in r:
            by_dir[d]["compile-error"] += 1
            continue
        by_dir[d]["critical files"] += bool(r["functions"])
        by_dir[d]["critical functions"] += len(r["functions"])
        by_dir[d]["files with pointer structs"] += bool(r["ptr_structs"])
    for d, c in sorted(by_dir.items()):
        print("%-8s %s" % (d, dict(c)))
    lay = glob.glob(os.path.join(ROOT, "build", "decomp64", "obj", "src", "**", "*.layout64"), recursive=True)
    if lay:
        c = collections.Counter()
        for f in lay:
            w = open(f).read().split()
            c["matched sources"] += 1
            c["layout-critical"] += bool(w)
            for x in w:
                c[x] += 1
        print("decomp64 matched sources: %s" % dict(c))
    if a.json:
        json.dump(res, open(a.json, "w"), indent=1, sort_keys=True)


if __name__ == "__main__":
    main()
