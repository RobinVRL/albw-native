"""Shared helpers for reference-based identification (read-only on the ROM)."""
import bisect, json, os, struct
PORT = "."
DEC = "../albw-decomp-ai"
B = 0x100000
code = open(os.path.join(DEC, "rom", "eu_code.bin"), "rb").read()
END = B + len(code)
emap = json.load(open(os.path.join(DEC, "shared", "eu_usa_map.json")))
u2e = {k: int(v["eu"], 16) for k, v in emap.items()}
try:
    u2e.update({k: int(v, 16) for k, v in json.load(open(os.path.join(PORT, "native", "extra_functions.json"))).items()})
except Exception:
    pass
e2u = {v: k for k, v in u2e.items()}
starts = sorted(e2u)

def rd(a):
    return struct.unpack_from("<I", code, a - B)[0]

def fend(eu):
    i = bisect.bisect_right(starts, eu)
    return starts[i] if i < len(starts) else eu + 0x400

def containing(eu):
    i = bisect.bisect_right(starts, eu) - 1
    return starts[i] if i >= 0 else None

def word_refs(val):
    pat = struct.pack("<I", val); out = []; i = code.find(pat)
    while i >= 0:
        if i % 4 == 0: out.append(B + i)
        i = code.find(pat, i + 1)
    return out

def cstr(a, n=200):
    o = a - B
    if o < 0 or o >= len(code): return None
    e = code.find(b"\0", o, o + n)
    if e < 0: return None
    s = code[o:e]
    try: return s.decode("ascii")
    except Exception: return None

def vtable_at(a, maxn=200):
    """Words from a that are function starts (EU)."""
    out = []
    while len(out) < maxn and a < END:
        w = rd(a)
        if w in e2u: out.append(w)
        else: break
        a += 4
    return out

_md = None
def dis(eu, n=None):
    global _md
    import capstone
    if _md is None:
        _md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM); _md.skipdata = True
    end = fend(eu)
    ins = list(_md.disasm(code[eu - B:end - B], eu))
    return ins[:n] if n else ins
