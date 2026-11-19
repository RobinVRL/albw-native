#!/usr/bin/env python3
"""Snapshot of the decompiled game sources the current build compiles (for a self-contained repo).

  tools/export_snapshot.py [--out decomp]

Writes, from the last tools/build_decomp*.sh run (build/decomp/report.json):
  decomp/src/<path>            every compiled source, as converted (Ghidra-derived and matched C)
  decomp/include/              the shared decomp headers (build/decomp/shared/include)
  decomp/jobs.json             [[path, [USA addresses]], ...]: what tools/build_decomp.py
                               --snapshot compiles (addresses from each object's func_ exports)
  decomp/eu_usa_map.json       the EU <-> USA function address map
  decomp/returns_this.json     matched functions exported as func_X__impl (returns-this thunks)
  decomp/addr_taken.txt        address-taken game data of the last link (tools/link.sh)
  decomp/boolret.txt           bool / small-integer return adapters of the last link (tools/boolret.py)
No ROM data: the game's data is generated at build time from your ROM (tools/extract_code.py).
"""
import argparse
import json
import os
import re
import shutil
import subprocess

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=os.path.join(ROOT, "decomp"))
    a = ap.parse_args()
    os.chdir(ROOT)
    out = os.path.abspath(a.out)
    rep = json.load(open("build/decomp/report.json"))
    objs = rep["objects"]
    lst = os.path.join("build", "snapshot_objs.txt")
    open(lst, "w").write("\n".join(objs))
    nm = subprocess.run(["llvm-nm", "-A", "--defined-only", "@" + lst], capture_output=True, text=True).stdout
    addrs = {}
    impl = set()   # matched functions the build exported as func_X__impl (returns-this thunks)
    for line in nm.splitlines():
        f, _, rest = line.partition(": ")
        p = rest.split()
        if len(p) == 3:
            if p[2].endswith("__impl") and p[1] in "TtWw":
                impl.add(p[2][5:13])
            m = re.match(r"^func_([0-9A-F]{8})(?:__impl)?$", p[2])
            if m:
                addrs.setdefault(f, set()).add(m.group(1))
    if os.path.isdir(os.path.join(out, "src")):
        shutil.rmtree(os.path.join(out, "src"))
    jobs, dirs = [], set()
    for o in objs:
        rel = o.split("/obj/", 1)[1][:-len(".final.o")]
        src = os.path.join("build/decomp", rel)
        dst = os.path.join(out, "src", rel)
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        shutil.copy2(src, dst)
        dirs.add(os.path.dirname(rel))
        jobs.append([rel, sorted(addrs.get(o, ()))])
    # headers next to the sources (-I <source dir>)
    nh = 0
    for d in dirs:
        sd = os.path.join("build/decomp", d)
        for n in os.listdir(sd):
            if n.endswith((".h", ".hpp", ".inc")):
                shutil.copy2(os.path.join(sd, n), os.path.join(out, "src", d, n))
                nh += 1
    # headers a source reaches with #include "relative/path" (shared_include/, include/ of a sibling
    # work folder, ...): followed recursively, copied to the same place under src/. Without them 40
    # sources failed to compile in a fresh clone and their functions became tripwires (crash at boot).
    inc_re = re.compile(r'^\s*#\s*include\s+"([^"]+)"', re.M)
    todo = [rel for rel, _ in jobs]
    seen = set(todo)
    while todo:
        rel = todo.pop()
        try:
            text = open(os.path.join("build/decomp", rel), errors="replace").read()
        except OSError:
            continue
        for name in inc_re.findall(text):
            hrel = os.path.normpath(os.path.join(os.path.dirname(rel), name))
            if hrel.startswith("..") or hrel in seen or not os.path.isfile(os.path.join("build/decomp", hrel)):
                continue   # outside the decomp tree, or a -I / shared include resolved elsewhere
            seen.add(hrel)
            todo.append(hrel)
            dst = os.path.join(out, "src", hrel)
            if not os.path.exists(dst):
                os.makedirs(os.path.dirname(dst), exist_ok=True)
                shutil.copy2(os.path.join("build/decomp", hrel), dst)
                nh += 1
    if os.path.isdir(os.path.join(out, "include")):
        shutil.rmtree(os.path.join(out, "include"))
    shutil.copytree("build/decomp/shared/include", os.path.join(out, "include"))
    shutil.copy2("../albw-decomp-ai/shared/eu_usa_map.json", os.path.join(out, "eu_usa_map.json"))
    json.dump(jobs, open(os.path.join(out, "jobs.json"), "w"), indent=0)
    # the returns-this set the objects were really built with (native/returns_this.json and
    # returns_this3.json differ, and objects from different rounds used either): a fresh build from
    # the snapshot must export the same __impl thunks, or callers lose their returned pointer
    json.dump(sorted(impl), open(os.path.join(out, "returns_this.json"), "w"), indent=0)
    # address-taken game data of the last link (tools/link.sh): it also scans the full Ghidra dump,
    # which a snapshot build does not have
    # bool / small-integer adapters of the last link (tools/boolret.py): found from the compiled
    # code, which differs between compilers; a snapshot build applies at least these
    if os.path.exists("build/boolret.s"):
        rec, cur = [], None
        for line in open("build/boolret.s"):
            m = re.match(r"^(func_[0-9A-F]{8}):$", line.strip())
            if m:
                cur = m.group(1)
            elif cur and line.strip().startswith("mov") and "%eax" in line:
                rec.append("%s %s" % (cur, line.strip()))
                cur = None
        open(os.path.join(out, "boolret.txt"), "w").write("\n".join(sorted(rec)) + "\n")
    if os.path.exists("build/addr_taken_pool.txt"):
        shutil.copy2("build/addr_taken_pool.txt", os.path.join(out, "addr_taken.txt"))
    print("snapshot: %d sources, %d headers, %d without addresses -> %s"
          % (len(jobs), nh, sum(1 for j in jobs if not j[1]), out))


if __name__ == "__main__":
    main()
