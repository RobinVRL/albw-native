# Jython helper module (not a script): mark Ghidra's float<->int *bit reinterpretations* in C.
#
# Ghidra prints two very different things the same way:
#   (float)x / (int)f   for a p-code CAST (or SUBPIECE): the bits are reused unchanged
#                       (vldr from an int-typed field, vmov sN,rN, a soft-float helper's r0...)
#   (float)x / (int)f   for FLOAT_INT2FLOAT / FLOAT_TRUNC: a real conversion (vcvt)
# Compiled as C, both become value conversions. annotate() decides each printed cast from the
# decompiler's own p-code op behind it and prefixes the reinterpretations with a marker comment:
#     /*albw:bits*/(float)p[0x22]        /*albw:bits*/(int)fVar13
# The text is otherwise unchanged (a comment, so compilers and the default converter ignore it);
# tools/import_ghidra.py with ALBW_CONVERT_V2=1 rewrites the marked casts into exact bit copies.
#
# How a cast token is tied to its op: cast tokens carry no p-code op, so we take the first token
# of the operand that has one (the operand's leftmost leaf / prefix operator), climb through its
# output's uses until the (nested+1)-th cast-like op, and accept it only if its opcode and
# input/output types agree with the printed cast. Anything ambiguous is left unmarked.
#
#   lines, stats, sites = annotate(res)   # res: DecompileResults (completed)
import re
from ghidra.app.decompiler import ClangTypeToken, ClangSyntaxToken
from ghidra.app.decompiler.component import DecompilerUtils
from ghidra.program.model.pcode import PcodeOp

MARK = "/*albw:bits*/"
INT4 = ("int", "uint", "undefined4", "dword")
INT8 = ("longlong", "ulonglong", "undefined8", "qword")
WATCH = ("float", "double") + INT4 + INT8
CAST_RE = re.compile(r"\((float|double|int|uint|undefined4|dword|longlong|ulonglong|undefined8|qword)\)")
CASTY = set([PcodeOp.CAST, PcodeOp.FLOAT_TRUNC, PcodeOp.FLOAT_INT2FLOAT, PcodeOp.FLOAT_FLOAT2FLOAT,
             PcodeOp.INT_SEXT, PcodeOp.INT_ZEXT, PcodeOp.SUBPIECE, PcodeOp.FLOAT_ROUND,
             PcodeOp.FLOAT_CEIL, PcodeOp.FLOAT_FLOOR, PcodeOp.FLOAT_NAN, PcodeOp.INT_2COMP])
CASTY.discard(PcodeOp.FLOAT_NAN)
CASTY.discard(PcodeOp.INT_2COMP)


def _dt(vn):
    try:
        h = vn.getHigh()
        if h is not None:
            return h.getDataType().getDisplayName()
    except Exception:
        pass
    return None


def _is_cast(flat, i):
    return (flat[i][1].getText() == "(" and i + 2 < len(flat)
            and isinstance(flat[i + 1][1], ClangTypeToken) and flat[i + 2][1].getText() == ")")


def _classify(op, ty):
    """'bits' if op is a same-bits reinterpretation printed as the cast (ty), else None."""
    if op is None:
        return None, "noop"
    oc = op.getOpcode()
    vin, vout = op.getInput(0), op.getOutput()
    if vin is None or vout is None:
        return None, "novn"
    tin, tout = _dt(vin), _dt(vout)
    si, so = vin.getSize(), vout.getSize()
    if tout != ty:
        return None, "type(%s!=%s)" % (tout, ty)
    d = vin.getDef()
    if d is not None and d.getOpcode() == PcodeOp.CALLOTHER:
        # (float)VectorSignedToFloat(..): Ghidra types the intrinsic's result as an integer, but
        # the native intrinsics (ghidra_types.h) already return the C type: the cast is a no-op
        # natively and must stay one
        return None, "CALLOTHER"
    if oc == PcodeOp.CAST:
        if si == so == 4 and ty == "float" and tin not in (None, "float"):
            return "bits", "CAST"
        if si == so == 4 and ty in INT4 and tin == "float":
            return "bits", "CAST"
        if si == so == 8 and ty == "double" and tin not in (None, "double"):
            return "bits", "CAST"
        if si == so == 8 and ty in INT8 and tin == "double":
            return "bits", "CAST"
        return None, "CAST(%s->%s)" % (tin, tout)
    if oc == PcodeOp.SUBPIECE and ty == "float" and so == 4 and si == 8 and tin not in (None, "double", "float"):
        return "bits", "SUBPIECE"
    return None, op.getMnemonic()


def _find_op(flat, j, nested):
    """The cast-like op `nested` levels above the operand starting at flat[j]; all candidates
    reached through multiple uses must agree, else None."""
    while j < len(flat):
        t = flat[j][1]
        if _is_cast(flat, j):
            nested += 1
            j += 3
            continue
        if t.getPcodeOp() is not None and not isinstance(t, ClangSyntaxToken):
            break
        j += 1
    if j >= len(flat):
        return [], j
    start = flat[j][1].getPcodeOp()
    found = []
    stack = [(start, 0, 0)]
    visited = 0
    while stack and visited < 64:
        cur, seen, depth = stack.pop()
        visited += 1
        if cur is None or depth > 40:
            continue
        if cur.getOpcode() in CASTY:
            if seen == nested:
                found.append(cur)
                continue
            seen += 1
        o = cur.getOutput()
        if o is None:
            continue
        for d in o.getDescendants():
            stack.append((d, seen, depth + 1))
    return found, j


def annotate(res):
    """(text, stats, sites): getC() with reinterpretation casts marked."""
    c = res.getDecompiledFunction().getC()
    clines = c.split("\n")
    lines = DecompilerUtils.toLines(res.getCCodeMarkup())
    flat = []
    for ln in lines:
        for t in ln.getAllTokens():
            if t.getText() != "":
                flat.append((ln.getLineNumber(), t))
    # offsets of cast triples inside their reconstructed line
    recon = {}
    for ln in lines:
        recon[ln.getLineNumber()] = ln.getIndentString() + "".join(t.getText() for t in ln.getAllTokens())
    pos_of = {}
    for ln in lines:
        off = len(ln.getIndentString())
        for t in ln.getAllTokens():
            pos_of[id(t)] = off
            off += len(t.getText())
    stats = {"bits": 0, "kept": 0, "unmapped": 0}
    sites = []
    marks = {}  # line -> set of ordinals among CAST_RE matches
    i = 0
    while i < len(flat):
        if not _is_cast(flat, i):
            i += 1
            continue
        L, t0 = flat[i]
        ty = flat[i + 1][1].getText()
        if ty not in WATCH:
            i += 3
            continue
        ops, _ = _find_op(flat, i + 3, 0)
        kinds = [_classify(op, ty) for op in ops]
        kind = kinds[0][0] if kinds and all(k[0] == kinds[0][0] for k in kinds) else None
        why = ",".join(sorted(set(k[1] for k in kinds))) or "notfound"
        rline = recon.get(L, "")
        ms = [m.start() for m in CAST_RE.finditer(rline)]
        p = pos_of.get(id(t0))
        ordinal = ms.index(p) if p in ms else None
        site = {"line": L, "type": ty, "kind": kind or "keep", "why": why,
                "addr": ["%08X" % op.getSeqnum().getTarget().getOffset() for op in ops][:4]}
        if kind == "bits":
            if ordinal is None:
                stats["unmapped"] += 1
                site["kind"] = "unmapped"
            else:
                marks.setdefault(L, set()).add(ordinal)
        else:
            stats["kept"] += 1
        sites.append(site)
        i += 3
    # apply marks to getC() lines (names may be sanitised there: require the same cast sequence)
    for L, ords in marks.items():
        if L - 1 >= len(clines):
            stats["unmapped"] += len(ords)
            continue
        cl = clines[L - 1]
        rm = [m.group(0) for m in CAST_RE.finditer(recon[L])]
        cm = list(CAST_RE.finditer(cl))
        if [m.group(0) for m in cm] != rm:
            stats["unmapped"] += len(ords)
            for s in sites:
                if s["line"] == L and s["kind"] == "bits":
                    s["kind"] = "unmapped"
            continue
        for k in sorted(ords, reverse=True):
            cl = cl[:cm[k].start()] + MARK + cl[cm[k].start():]
        clines[L - 1] = cl
        stats["bits"] += len(ords)
    return "\n".join(clines), stats, sites
