#!/usr/bin/env python3
"""Snapshot of the decompiled game sources the current build compiles (for a self-contained repo).

  tools/export_snapshot.py [--out decomp]

Writes, from the last tools/build_decomp*.sh run (build/decomp/report.json):
  decomp/src/<path>            every compiled source, as converted (Ghidra-derived and matched C)
  decomp/include/              the shared decomp headers (build/decomp/shared/include)
  decomp/jobs.json             [[path, [USA addresses]], ...]: what tools/build_decomp.py
                               --snapshot compiles (addresses from each object's func_ exports)
  decomp/eu_usa_map.json       the EU <-> USA function address map
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
    for line in nm.splitlines():
        f, _, rest = line.partition(": ")
        p = rest.split()
        if len(p) == 3:
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
    if os.path.isdir(os.path.join(out, "include")):
        shutil.rmtree(os.path.join(out, "include"))
    shutil.copytree("build/decomp/shared/include", os.path.join(out, "include"))
    shutil.copy2("../albw-decomp-ai/shared/eu_usa_map.json", os.path.join(out, "eu_usa_map.json"))
    json.dump(jobs, open(os.path.join(out, "jobs.json"), "w"), indent=0)
    print("snapshot: %d sources, %d headers, %d without addresses -> %s"
          % (len(jobs), nh, sum(1 for j in jobs if not j[1]), out))


if __name__ == "__main__":
    main()
