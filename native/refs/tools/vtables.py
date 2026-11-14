"""Find vtables: rodata addresses V loaded by code (literal pool) where V's words are function
starts or VFE zeros. Writes vtables.json {V: {"slots": [usa|None], "refs": [usa funcs]}}"""
import sys, json, struct, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from reflib import *
CEND = starts[-1] + 0x1000
known = json.load(open(os.path.join(os.path.dirname(os.path.abspath(__file__)), "known.json")))
refs = {}
for off in range(0, CEND - B, 4):
    w = struct.unpack_from("<I", code, off)[0]
    if CEND <= w < END and w % 4 == 0:
        refs.setdefault(w, []).append(B + off)
out = {}
for V, rs in refs.items():
    slots = []; a = V; nfun = 0
    while a < END and len(slots) < 300:
        w = rd(a)
        if w in e2u: slots.append(e2u[w]); nfun += 1
        elif w == 0: slots.append(None)
        else: break
        a += 4
    while slots and slots[-1] is None: slots.pop()
    if nfun >= 2 and slots and slots[0] is not None or nfun >= 3:
        fr = sorted({e2u[containing(r)] for r in rs if containing(r) in e2u and r < CEND})
        if fr: out["%08X" % V] = {"slots": slots, "refs": fr}
json.dump(out, open(os.path.join(os.path.dirname(os.path.abspath(__file__)), "vtables.json"), "w"))
print(len(out), hex(CEND))
