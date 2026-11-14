import json, re, collections, armdis
import os as _os; _os.chdir(_os.path.dirname(_os.path.abspath(__file__)))
ann = json.load(open("annotated.json"))
out = {}
c = collections.Counter()
for a, cls, d, nc, tg, regs, why, eu in ann:
    if "B" not in cls:
        continue
    lines = armdis.dis(a, 3000)
    sw = any(re.search(r"(add\w*|ldr\w*)\s+pc, \[?pc, r\w+, lsl #2", l) for l in lines)
    bxr = any(re.search(r":\s+bx\w*\s+(r(?!14)\d+|ip|sb|sl|fp)\b", l) for l in lines)
    ldrpc = any(re.search(r":\s+(ldr|mov)\w*\s+pc,", l) and "lsl #2" not in l for l in lines)
    k = "switch" if sw else ("tail-call" if (bxr or ldrpc) else "other")
    out[a] = k
    c[k] += 1
json.dump(out, open("bkind.json", "w"))
print(c)
