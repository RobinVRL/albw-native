#!/usr/bin/env python3
"""Step 4 groundwork: locate the Nintendo SDK inside the game and its API surface.

  python3 tools/find_sdk.py --code code.bin [--map eu_usa_map.json]

An SDK function either issues a system call (svc) or touches the IPC buffer (mrc p15 c13),
or lives inside an address block dominated by such functions (libraries are linked as
contiguous blocks). The API surface is every SDK function called (bl) from game code: those
are the functions the native port reimplements. Writes native/sdk_map.json (addresses only).
"""
import argparse
import bisect
import collections
import json
import os
import struct

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
B, TS = 0x100000, 0x5920F4


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--code", required=True)
    ap.add_argument("--map")
    ap.add_argument("--decomp", default=os.path.join(ROOT, "..", "albw-decomp-ai"))
    ap.add_argument("--block", type=lambda s: int(s, 0), default=0x10000)
    a = ap.parse_args()
    d = open(a.code, "rb").read()
    if a.map:
        m = json.load(open(a.map))
        to_us = {int(v["eu"], 16): int(k, 16) for k, v in m.items()}
    else:
        to_us = {s: s for s in json.load(open(os.path.join(a.decomp, "funcs.json")))["starts"]}
    starts = sorted(to_us)

    def owner(x):
        return starts[bisect.bisect_right(starts, x) - 1]

    sysfn = collections.defaultdict(set)
    calls = collections.defaultdict(set)
    for o in range(0, TS, 4):
        w = struct.unpack_from("<I", d, o)[0]
        f = owner(B + o)
        if w >> 28 == 0xE and (w >> 24) & 0xF == 0xF:
            sysfn[f].add("svc%02X" % (w & 0xFF))
        if (w & 0x0FFF0FFF) == 0x0E1D0F70:
            sysfn[f].add("tls")
        if w >> 28 != 0xF and (w & 0x0F000000) == 0x0B000000:
            off = w & 0xFFFFFF
            off -= 0x1000000 if off & 0x800000 else 0
            t = B + o + 8 + off * 4
            if t in to_us:
                calls[f].add(t)

    # blocks where system-level functions cluster -> SDK library blocks
    per_block = collections.Counter(to_us[f] // a.block for f in sysfn)
    sdk_blocks = sorted(b for b, n in per_block.items() if n >= 5)
    in_sdk = lambda f: to_us[f] // a.block in sdk_blocks or f in sysfn
    sdk = {f for f in starts if in_sdk(f)}
    api = collections.Counter()
    for f, ts in calls.items():
        if f in sdk:
            continue
        for t in ts:
            if t in sdk:
                api[t] += 1
    out = {
        "sdk_blocks_usa": ["%08X-%08X" % (b * a.block, (b + 1) * a.block) for b in sdk_blocks],
        "system_functions": {"%08X" % to_us[f]: sorted(v) for f, v in sorted(sysfn.items())},
        "sdk_function_count": len(sdk),
        "api_surface": {"%08X" % to_us[t]: n for t, n in api.most_common()},
    }
    os.makedirs(os.path.join(ROOT, "native"), exist_ok=True)
    json.dump(out, open(os.path.join(ROOT, "native", "sdk_map.json"), "w"), indent=1)
    print("SDK blocks:", out["sdk_blocks_usa"])
    print("SDK functions: %d | system-level: %d | API surface called from game code: %d"
          % (len(sdk), len(sysfn), len(api)))
    print("most-called SDK entry points:", ["%08X x%d" % (to_us[t], n) for t, n in api.most_common(10)])


if __name__ == "__main__":
    main()
