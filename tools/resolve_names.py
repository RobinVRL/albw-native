#!/usr/bin/env python3
"""Resolve unresolved C++/other names to functions by call-site matching.

  python3 tools/resolve_names.py        # writes native/symbol_aliases.txt

Matched decomp sources call many functions by a C++ (or ad-hoc) name instead of func_<ADDR>.
For each matched source used for exactly one address, the calls its native object makes
(relocation order inside the function) are paired with the calls the original function makes
(bl/blx/b-out targets in address order) when both lists have the same length. A name becomes
an alias of func_<USA ADDR> only if every file that uses it agrees.
Output lines: "<name> func_<ADDR>" (llvm-objcopy --redefine-syms format).
"""
import collections
import concurrent.futures as cf
import json
import os
import re
import struct
import subprocess

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = os.path.join(ROOT, "..", "albw-decomp-ai")
OBJ = os.path.join(ROOT, "build", "decomp", "obj")
B = 0x100000


def native_calls(obj, func):
    """Call targets (symbol names) inside func's section, in offset order."""
    out = subprocess.run(["llvm-readelf", "-r", "-s", "--wide", obj], capture_output=True, text=True).stdout
    # section index of func
    sec_of = {}
    for l in out.splitlines():
        p = l.split()
        if len(p) >= 8 and p[-1] == func and p[3] == "FUNC":
            sec_of = p[6]
    secs = subprocess.run(["llvm-readelf", "-S", "--wide", obj], capture_output=True, text=True).stdout
    name = None
    for l in secs.splitlines():
        m = re.match(r"\s*\[\s*(\d+)\]\s+(\S+)", l)
        if m and m.group(1) == sec_of:
            name = m.group(2)
    if not name:
        return None
    calls, cur = [], None
    for l in out.splitlines():
        m = re.match(r"Relocation section '\.rel(\S+)'", l)
        if m:
            cur = m.group(1)
            continue
        if l.startswith("Relocation section") or l.startswith("Symbol table"):
            cur = None
            continue
        p = l.split()
        if cur == name and len(p) >= 5 and p[2] in ("R_386_PC32", "R_386_PLT32"):
            calls.append((int(p[0], 16), p[4]))
    return [n for _, n in sorted(calls)]


def main():
    code = open(os.path.join(DECOMP, "rom", "eu_code.bin"), "rb").read()
    emap = json.load(open(os.path.join(DECOMP, "shared", "eu_usa_map.json")))
    to_usa = {int(v["eu"], 16): k for k, v in emap.items()}
    eu_starts = sorted(to_usa)
    F = json.load(open(os.path.join(DECOMP, "functions.json")))
    users = collections.Counter(v.get("path") for v in F.values() if v.get("status") in ("honest", "hack"))
    rep = json.load(open(os.path.join(ROOT, "build", "decomp", "report.json")))
    unresolved = set(rep["unresolved"])
    import bisect

    def eu_calls(usa):
        eu = int(emap[usa]["eu"], 16)
        end = eu_starts[bisect.bisect_right(eu_starts, eu)] if bisect.bisect_right(eu_starts, eu) < len(eu_starts) else eu + 0x1000
        out = []
        for a in range(eu, end, 4):
            w = struct.unpack_from("<I", code, a - B)[0]
            if (w >> 28) == 0xF and (w >> 25) & 7 == 5:  # blx imm
                continue
            if (w & 0x0E000000) == 0x0A000000 and (w >> 28) != 0xF:
                off = w & 0xFFFFFF
                off -= 0x1000000 if off & 0x800000 else 0
                t = a + 8 + off * 4
                if (w >> 24) & 1 or not (eu <= t < end):  # bl, or b leaving the function (tail call)
                    out.append(t)
        return out

    jobs = []
    for addr, e in F.items():
        if e.get("status") in ("honest", "hack") and users[e["path"]] == 1:
            obj = os.path.join(OBJ, e["path"] + ".final.o")
            if os.path.exists(obj):
                jobs.append((addr, obj))

    def one(job):
        addr, obj = job
        nat = native_calls(obj, "func_" + addr)
        if nat is None:
            return []
        org = eu_calls(addr)
        if len(nat) != len(org):
            return []
        return [(n, t) for n, t in zip(nat, org) if n in unresolved and not n.startswith("func_")]

    votes = collections.defaultdict(collections.Counter)
    with cf.ThreadPoolExecutor(os.cpu_count()) as ex:
        for pairs in ex.map(one, jobs):
            for n, t in pairs:
                if t in to_usa:
                    votes[n]["func_" + to_usa[t]] += 1
    # a name is aliased only if every object that references it was compared and agreed:
    # generic names (A, B, f, ...) mean different functions in different files
    refs = rep["unresolved"]
    aliases = {n: c.most_common(1)[0][0] for n, c in votes.items()
               if len(c) == 1 and sum(c.values()) >= refs.get(n, 0)}
    conflicts = sum(1 for c in votes.values() if len(c) > 1)
    path = os.path.join(ROOT, "native", "symbol_aliases.txt")
    with open(path, "w") as fh:
        for n in sorted(aliases):
            fh.write("%s %s\n" % (n, aliases[n]))
    print("functions compared: %d | names resolved: %d | conflicting (skipped): %d | wrote %s"
          % (len(jobs), len(aliases), conflicts, os.path.relpath(path, ROOT)))


if __name__ == "__main__":
    main()
