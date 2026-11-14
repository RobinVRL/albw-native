#!/usr/bin/env python3
"""float_casts.py: find Ghidra int<->float *bit reinterpretations* printed as C casts.

In this Ghidra dump the ARM VFP conversions are explicit:
    vcvt.f32.s32 / vcvt.f32.u32  -> VectorSignedToFloat(...) / VectorUnsignedToFloat(...)
    vcvt.u32.f32                 -> VectorFloatToUnsigned(...)
    vcvt.s32.f32 (truncate)      -> a plain `(int)F` cast   (the only real conversion that
                                    looks like a cast)
so a same-size cast between a float and a 4-byte integer is a reinterpretation of the bits
(vldr/vstr of an int-typed field, vmov rX,sY / vmov sY,rX, softfp helper r0 results) EXCEPT
`(int)F` in a function that contains vcvt.s32.f32.

Kinds reported per site:
  bits2f      (float)E, E a 4-byte non-float value          -> reinterpretation (certain)
  bits2f_64   (float)E, E an 8-byte integer (Ghidra CONCAT) -> reinterpret the low word
  f2bits_u    (uint)/(undefined4)/(dword)F, F float         -> reinterpretation (certain)
  f2bits_i    (int)F, function has no vcvt.s32.f32          -> reinterpretation (certain)
  f2int_amb   (int)F, function has vcvt.s32.f32             -> real trunc or reinterpretation
  other       (float)E with E of 1/2 bytes etc.             -> reported for review

Run with the decomp venv python (capstone):
  ../albw-decomp-ai/.venv/bin/python native/robust/tools/float_casts.py
Writes native/robust/tools/float_casts.json.
"""
import bisect, collections, glob, json, os, re, struct, sys

HERE = os.path.dirname(os.path.abspath(__file__))
PORT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
DEC = os.path.join(PORT, "..", "albw-decomp-ai")

INT4 = {"int", "uint", "undefined4", "dword", "ulong", "long", "undefined3", "int32_t", "uint32_t"}
INT8 = {"longlong", "ulonglong", "undefined8", "qword", "int64_t", "uint64_t", "undefined5",
        "undefined6", "undefined7"}
SMALL = {"short", "ushort", "char", "byte", "undefined1", "undefined2", "bool", "sbyte", "word",
         "undefined", "uint8_t", "int8_t", "uint16_t", "int16_t"}
FLOAT = {"float", "float4"}
DOUBLE = {"double", "float8"}

DECL = re.compile(r"^\s*(?:extern\s+)?((?:const\s+|unsigned\s+)?[A-Za-z_]\w*)\s*(\**)\s*([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;")
MACRO = re.compile(r"^\s*#define\s+(\w+)\s+\(\*\((\w+)\s*(\**)\s*\*\)\(albw_frame")
MACRO_PTR = re.compile(r"^\s*#define\s+(\w+)\s+\(\((\w+)\s*(\**)\s*\*\)\(albw_frame")
EXTERN_FN = re.compile(r"^extern\s+(\w+)\s*(\**)\s*(func_[0-9A-F]{8}|FUN_\w+|\w+)\s*\(")


def norm(base, stars):
    return base + stars


def size_kind(t):
    """'f','d','4','8','s','p' or None for a type string like 'int', 'float*'."""
    if t is None:
        return None
    if t.endswith("*"):
        return "p"
    if t in FLOAT:
        return "f"
    if t in DOUBLE:
        return "d"
    if t in INT4:
        return "4"
    if t in INT8:
        return "8"
    if t in SMALL:
        return "s"
    return None


def parse_types(text):
    """name -> type string for params, locals, frame macros and extern globals; fn -> ret."""
    types, rets = {}, {}
    for line in text.split("\n"):
        m = EXTERN_FN.match(line)
        if m:
            rets[m.group(3)] = norm(m.group(1), m.group(2))
            continue
        m = MACRO.match(line)
        if m:
            types[m.group(1)] = norm(m.group(2), m.group(3))
            continue
        m = MACRO_PTR.match(line)
        if m:  # name is an address of T: as an array of T
            types[m.group(1)] = norm(m.group(2), m.group(3)) + "*"
            continue
        m = DECL.match(line)
        if m and m.group(1) not in ("return", "goto", "else"):
            types[m.group(3)] = norm(m.group(1).replace("const ", ""), m.group(2))
    # the definition's parameters
    m = re.search(r"\n[^\n;]*?\b(func_[0-9A-F]{8})\s*\(([^)]*)\)\s*\n\{", text)
    if m:
        for p in m.group(2).split(","):
            p = p.strip()
            mm = re.match(r"^((?:const\s+)?\w+)\s*(\**)\s*(\w+)$", p)
            if mm:
                types[mm.group(3)] = norm(mm.group(1).replace("const ", ""), mm.group(2))
    return types, rets


def match_paren(s, i):
    """s[i] == '(' -> index after the matching ')'."""
    d = 0
    while i < len(s):
        if s[i] == "(":
            d += 1
        elif s[i] == ")":
            d -= 1
            if d == 0:
                return i + 1
        i += 1
    return len(s)


def operand_end(s, i):
    """End of the unary-expression operand starting at s[i] (after a cast)."""
    while i < len(s) and s[i] == " ":
        i += 1
    start = i
    if i < len(s) and s[i] in "*-~!&":
        # unary op: *(T *)(...) or *ident etc.
        _, j = operand_end(s, i + 1)
        return start, j
    if i < len(s) and s[i] == "(":
        j = match_paren(s, i)
        # a cast followed by its operand: (T *)(x) / (T)x
        inner = s[i + 1:j - 1]
        if re.match(r"^\s*[A-Za-z_]\w*\s*\**\s*$", inner) and j < len(s) and (s[j] in "(_" or s[j].isalnum() or s[j] == "*"):
            _, k = operand_end(s, j)
            return start, k
        return start, postfix(s, j)
    m = re.match(r"[A-Za-z_]\w*|0x[0-9a-fA-F]+|\d+(?:\.\d*)?(?:e[-+]?\d+)?", s[i:])
    if not m:
        return start, i
    return start, postfix(s, i + m.end())


def postfix(s, j):
    while j < len(s):
        if s[j] == "[":
            d = 0
            while j < len(s):
                if s[j] == "[":
                    d += 1
                elif s[j] == "]":
                    d -= 1
                    if d == 0:
                        j += 1
                        break
                j += 1
        elif s[j] == "(":
            j = match_paren(s, j)
        elif s.startswith("->", j) or (s[j] == "." and j + 1 < len(s) and (s[j + 1].isalpha() or s[j + 1] == "_")):
            j += 2 if s[j] == "-" else 1
            m = re.match(r"\w+", s[j:])
            j += m.end() if m else 0
        else:
            break
    return j


def expr_type(e, types, rets):
    """Coarse type kind of a C expression: 'f','d','4','8','s','p', None (unknown)."""
    e = e.strip()
    while e.startswith("(") and match_paren(e, 0) == len(e):
        e = e[1:-1].strip()
    if e.startswith("&") and not e.startswith("&&"):
        return "p"  # address-of
    m = re.match(r"^\*\s*\(\s*(\w+)\s*(\**)\s*\*\s*\)", e)  # *(T *)(...)
    if m:
        return size_kind(norm(m.group(1), m.group(2)))
    m = re.match(r"^\(\s*(\w+)\s*(\**)\s*\)", e)  # (T)x
    if m and match_paren(e, 0) < len(e):
        return size_kind(norm(m.group(1), m.group(2)))
    m = re.match(r"^(func_[0-9A-F]{8}|FUN_\w+|\w+)\s*\(", e)
    if m and match_paren(e, m.end() - 1) == len(e):
        if m.group(1).startswith("Vector") and "ToFloat" in m.group(1):
            return "f"
        r = rets.get(m.group(1))
        return size_kind(r) if r else "4"
    m = re.match(r"^\*\s*([A-Za-z_]\w*)$", e)
    if m:
        t = types.get(m.group(1))
        return size_kind(t[:-1]) if t and t.endswith("*") else None
    m = re.match(r"^([A-Za-z_]\w*)((?:\[[^\]]*\])*)$", e)
    if m:
        t = types.get(m.group(1))
        if t is None:
            return None
        n = m.group(2).count("[")
        while n and t.endswith("*"):
            t = t[:-1]
            n -= 1
        return size_kind(t) if n == 0 else None
    if re.match(r"^-?(0x[0-9a-fA-F]+|\d+)$", e):
        return "4"
    if re.match(r"^-?\d+\.\d*(e[-+]?\d+)?$", e):
        return "f"
    # a comparison / logical operator at the top level gives a bool (int), whatever the operands
    depth = 0
    top = []
    for ch in e:
        depth += ch in "([" 
        depth -= ch in ")]"
        top.append(ch if depth == 0 else " ")
    top = "".join(top)
    if re.search(r"==|!=|<=|>=|&&|\|\||(?<![-<>])[<>](?![<>=])", top) or re.match(r"^NAN\s*\(", e):
        return "4"
    # compound: float if any float-typed name/deref appears, else int-ish if only ints
    kinds = set()
    for mm in re.finditer(r"\*\s*\(\s*(\w+)\s*(\**)\s*\*\s*\)|\b([A-Za-z_]\w*)\b(?!\s*\()", e):
        if mm.group(1):
            kinds.add(size_kind(norm(mm.group(1), mm.group(2))))
        elif mm.group(3) in types:
            t = types[mm.group(3)]
            kinds.add(size_kind(t))
    if re.search(r"\b\d+\.\d*", e):
        kinds.add("f")
    if "f" in kinds:
        return "f"
    if kinds and kinds <= {"4", "s", None}:
        return "4"
    return None


CAST = re.compile(r"\((float|int|uint|undefined4|dword)\)")


def scan_text(text):
    types, rets = parse_types(text)
    body_at = text.find("\n{")
    sites = []
    for ln, line in enumerate(text.split("\n"), 1):
        if line.lstrip().startswith(("#", "//", "extern")):
            continue
        for m in CAST.finditer(line):
            # skip casts that are part of a pointer cast like (int *) (regex excludes) or (float *)
            s, e = operand_end(line, m.end())
            opnd = line[s:e]
            if not opnd:
                continue
            k = expr_type(opnd, types, rets)
            cast = m.group(1)
            kind = None
            if cast == "float":
                if k == "4" or k == "p":
                    kind = "bits2f"
                elif k == "8":
                    kind = "bits2f_64"
                elif k == "s":
                    kind = "other"
            elif k == "f":
                kind = "f2bits_u" if cast != "int" else "f2bits_i"
            if kind:
                sites.append({"line": ln, "col": m.start() + 1, "cast": cast, "operand": opnd,
                              "kind": kind, "lvalue_store": bool(re.match(r"^\s*[^=;]*[^=!<>]=\s*$", line[:m.start()]))})
    return sites


# ---- disassembly evidence: vcvt counts per function ----
def load_code():
    import capstone
    code = open(os.path.join(DEC, "rom", "eu_code.bin"), "rb").read()
    emap = json.load(open(os.path.join(DEC, "shared", "eu_usa_map.json")))
    extra = json.load(open(os.path.join(PORT, "native", "extra_functions.json")))
    usa2eu = {k: int(v["eu"], 16) for k, v in emap.items()}
    usa2eu.update({k: int(v, 16) for k, v in extra.items()})
    starts = sorted(set(usa2eu.values()))
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)

    def insns(usa):
        eu = usa2eu.get(usa)
        if eu is None:
            return []
        i = bisect.bisect_right(starts, eu)
        end = starts[i] if i < len(starts) else eu + 0x1000
        out = []
        a = eu
        while a < end:
            r = list(md.disasm(code[a - 0x100000:a - 0x100000 + 4], a))
            out.append((a, r[0].mnemonic, r[0].op_str) if r else (a, ".word", ""))
            a += 4
        return out
    return insns


def defined_natively():
    out = set()
    for d in ("game", "sdk", "robust", "runtime"):
        for f in glob.glob(os.path.join(PORT, "native", d, "*.c")):
            for m in re.finditer(r"^[^\n;#/]*?\bfunc_([0-9A-F]{8})\s*\([^;{]*\)\s*\{",
                                 open(f, errors="replace").read(), re.M):
                out.add(m.group(1))
    return out


def main():
    insns = load_code()
    native = defined_natively()
    files = sorted(glob.glob(os.path.join(PORT, "build", "decomp", "ghidra_fallback", "*", "func_*.c")))
    result = {}
    tot = collections.Counter()
    nfun = collections.Counter()
    for f in files:
        a = os.path.basename(f)[5:13]
        if a in native:
            continue
        try:
            text = open(f, errors="replace").read()
        except OSError:  # being regenerated by a concurrent build
            continue
        sites = scan_text(text)
        if not sites:
            continue
        ins = insns(a)
        n_s32 = sum(1 for _, mn, op in ins if mn.startswith("vcvt") and ".s32.f" in mn)
        n_cvt_to_f = sum(1 for _, mn, op in ins if mn.startswith("vcvt") and re.search(r"\.f32\.[su]32", mn))
        n_vec_to_f = len(re.findall(r"\bVector(?:Signed|Unsigned)ToFloat\b", text))
        for s in sites:
            if s["kind"] == "f2bits_i" and n_s32:
                s["kind"] = "f2int_amb"
        result[a] = {"path": os.path.relpath(f, PORT), "vcvt_s32_f32": n_s32,
                     "vcvt_f32_int": n_cvt_to_f, "VectorXToFloat": n_vec_to_f, "sites": sites}
        for s in sites:
            tot[s["kind"]] += 1
        for k in {s["kind"] for s in sites}:
            nfun[k] += 1
        nfun["any"] += 1
    json.dump({"totals_sites": tot, "totals_functions": nfun, "functions": result},
              open(os.path.join(HERE, "float_casts.json"), "w"), indent=1)
    print("sites:", dict(tot))
    print("functions:", dict(nfun))
    # consistency: every vcvt.f32.{s,u}32 should be a VectorXToFloat intrinsic, so no (float)
    # cast can be a conversion
    mism = [(a, r["vcvt_f32_int"], r["VectorXToFloat"]) for a, r in result.items()
            if r["vcvt_f32_int"] != r["VectorXToFloat"]]
    print("functions where #vcvt.f32.[su]32 != #Vector*ToFloat: %d of %d" % (len(mism), len(result)))
    print(mism[:15])


if __name__ == "__main__":
    main()
