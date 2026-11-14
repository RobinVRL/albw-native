#!/usr/bin/env python3
"""task_factories.py: list every sead TTaskFactory<T> instance in the binary and check that the
code the build uses returns the constructed task.

sead (3DS/NSMBU era): TaskBase *TTaskFactory<T>(const TaskConstructArg &ca)
                      { return new (ca.heap_array->getPrimaryHeap(), 4) T(ca); }
armcc shape: ldr r0,[r0] (heap_array); ldr r1,[r0,#0x14] (mPrimaryIndex); ldr r1,[r0,r1,lsl #2]
(mHeaps[idx]); bl 0010CF28 (operator new(size, heap, align)); if NULL return 0; then (tail) call
T::T(this, ca[, name]) whose r0 (= this, armcc ctors return this) is the factory's result.

For each factory: ctor, tail call or not, ctor proven returns-this (native/returns_this.json),
return type of the converted C (ghidra_analyzed5_v4) and whether a native override exists.
A factory whose converted C is `void` returns garbage (stop 52).

Run: ../albw-decomp-ai/.venv/bin/python3 -I native/refs/tools/task_factories.py  (needs capstone)
"""
import bisect, glob, json, os, re, struct
import capstone

PORT = "."
DEC = "../albw-decomp-ai"
V4 = PORT + "/build/decomp/ghidra_fallback/ghidra_analyzed5_v4"
NEW = 0x10CF28  # operator new(u32 size, Heap *heap, s32 align)

code = open(DEC + "/rom/eu_code.bin", "rb").read()
emap = json.load(open(DEC + "/shared/eu_usa_map.json"))
e2u = {int(v["eu"], 16): k for k, v in emap.items()}
starts = sorted(e2u)
rthis = set(json.load(open(PORT + "/native/returns_this.json")))
native = set()
for f in glob.glob(PORT + "/native/**/func_*.c", recursive=True):
    if "/test/" in f or "/refs/" in f:
        continue
    native.add(os.path.basename(f)[5:13].upper())

md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)


def conv_sig(usa):
    src = "%s/%s/func_%s.c" % (V4, usa[:3], usa)
    if not os.path.exists(src):
        return "-"
    for line in open(src):
        if re.match(r"^\w[\w \*]* func_%s\(" % usa, line):
            return line.split("func_")[0].strip()
    return "?"


def main():
    rows = []
    for i, eu in enumerate(starts):
        end = starts[i + 1] if i + 1 < len(starts) else eu + 0x100
        if end - eu > 0x200:
            continue
        ins = [(x.mnemonic, x.op_str) for x in md.disasm(code[eu - 0x100000:end - 0x100000], eu)]
        if not any(m == "bl" and o == "#0x%x" % NEW for m, o in ins[:12]):
            continue
        if not any(m == "ldr" and o.endswith("lsl #2]") for m, o in ins[:8]):
            continue
        ctor, tail, seen = None, False, False
        for m, o in ins:
            if m == "bl" and o == "#0x%x" % NEW:
                seen = True
                continue
            if seen and m in ("b", "bl") and o.startswith("#0x") and int(o[1:], 16) in e2u:
                ctor, tail = e2u[int(o[1:], 16)], m == "b"
                break
        usa = e2u[eu]
        sig = conv_sig(usa)
        bad = sig == "void" and usa not in native
        rows.append((usa, ctor or "-", "tail" if tail else "call", ctor in rthis, sig,
                     "native" if usa in native else "", "BAD" if bad else ""))
    print("%-9s %-9s %-4s %-11s %-11s %-6s" % ("factory", "ctor", "kind", "ctor_rthis", "conv_ret", "native"))
    for r in rows:
        print("%-9s %-9s %-4s %-11s %-11s %-6s %s" % r)
    print("%d factories, %d with a void converted return and no native override"
          % (len(rows), sum(1 for r in rows if r[6])))


if __name__ == "__main__":
    main()
