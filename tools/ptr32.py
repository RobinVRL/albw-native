#!/usr/bin/env python3
"""Source rewrites for the x86-64 low-4GB build (native/64BIT.md): pointer words stored in game
memory stay 4 bytes.

  python3 tools/ptr32.py [--native] IN OUT        rewrite one file (link64.sh uses --native)

Every game address is below 2 GiB in this mode, so code that keeps addresses in 32-bit ints is
already right; what breaks is a pointer *type* naming a word of game memory, e.g.
`*(undefined4 **)(p + 0x7c)` or `FLD(obj, 0x14, char *)`, which load 8 bytes on x86-64. The
rewrites give those words clang's 4-byte pointer qualifier `__ptr32 __uptr` (spelled ALBW_GP,
native/include/gptr.h; empty on 32-bit, so a rewritten file means the same on i386):

  T **            -> T * ALBW_GP *          (any depth: inner pointers are game words)
  (**(code * ALBW_GP *)(X))(...)            -> (*(code *)*(code * ALBW_GP *)(X))(...)
                     LLVM's x86 backend cannot call through a __ptr32 function pointer, so the
                     callee is converted to a normal pointer first (also for code** variables)
  --native only (typed C in native/game, native/robust, native/x64):
  (any type **) casts, FLD(p, off, T *) -> FLD(p, off, T * ALBW_GP)

Function-local pointer variables keep 8 bytes: they live in registers / the native frame. What
these rules cannot see (struct members declared with pointer types, typedef'd pointer types,
function-pointer fields) is listed by tools/layout64_scan.py.
"""
import re
import sys

GHIDRA_TYPES = (r"(?:undefined[1-8]?|u?int|char|s?byte|u?short|u?long|u?longlong|float[48]?|double|void|code"
                r"|bool|d?word|qword|wchar_t|_func_\w+|u?int(?:8|16|32|64)_t|uintptr_t|intptr_t|size_t)")
RE_PTRPTR = re.compile(r"\b(" + GHIDRA_TYPES + r")([ \t]*)((?:\*[ \t]*){2,})")
RE_FNPP_CALL = re.compile(r"\(\*\*\(((?:code|_func_\w+) \* ALBW_GP (?:\* ALBW_GP )*)\*\)")
RE_PPVAR_DECL = re.compile(r"\b(?:code|_func_\w+) \* ALBW_GP (?:\* ALBW_GP )*\*\s*(\w+)\s*[;,=\[)]")
# (const struct Foo *const *) and the like, in casts only
RE_CAST_PP = re.compile(r"\(((?:const\s+|volatile\s+)*(?:struct\s+|union\s+)?[A-Za-z_]\w*(?:\s+const)?)\s*"
                        r"((?:\*\s*(?:const\s*)?){2,})\)")
RE_FLD_PTR = re.compile(r"\b(FLD\s*\([^;]*?,\s*)([A-Za-z_][\w ]*?(?:\s*\*\s*ALBW_GP)*)\s*\*\s*\)")
RE_FN_TYPEDEF = re.compile(r"typedef\s+[^;()]*\(\s*\*\s*(\w+)\s*\)\s*\(")


def _stars(base, stars):
    parts = re.findall(r"\*\s*(const\s*)?", stars)
    out = base
    for i, c in enumerate(parts):
        out += " *" + (" " + c.strip() if c else "")
        if i < len(parts) - 1:
            out += " ALBW_GP"
    tail = stars[len(stars.rstrip()):]  # keep the whitespace (newlines!) after the last star
    return out + tail


# a pointer-typed game global (pool word or data word, 4 bytes in gamedata.s):
#   extern int *DAT_00100ea0;  extern void *data_00715160[];  ->  ... *ALBW_GP NAME
GAME_SYM = r"(?:data_|DAT_|PTR_|_DAT_|[su]_\w*_|g_|[a-z]*Ram)[0-9A-Fa-f]{8}"
RE_EXTERN_PTR = re.compile(r"^(\s*extern\b[^;(=]*\*)(\s*)(?:const\s+)?(" + GAME_SYM + r")(\s*(?:\[[^\]]*\])?\s*;)", re.M)
RE_GLOBAL_FN = re.compile(r"\b(?:code|_func_\w+) \*\s*ALBW_GP\s+(" + GAME_SYM + r")\b")


# `p + -uVarN` / `p[-uVarN]`: the negation of a 32-bit unsigned is 2^32 - n, which wraps on
# the 32-bit ARM/i386 but lands 4 GiB above p on x86-64 (Yaz0 decoders 004929F0, 00115E38,
# BOOT_LOG64 stops 5-6) -> negate the 64-bit value (any non-literal negated subscript:
# signed ones sign-extend, unchanged)
RE_NEG_UNSIGNED = re.compile(r"(\+ -(?=u[A-Za-z]*Var\d+\b)|\[-(?=[A-Za-z_(*])(?!\(long long\)))")


# extern arrays of game data: the x86-64 System V ABI lets the compiler assume a global array of
# >= 16 bytes is 16-byte aligned (movaps / movdqa); game symbols keep their 3DS offsets (any
# alignment): data_0069C792 (2 mod 16) faulted in 00498700 (BOOT_LOG64 stop 8). Declare them
# aligned(1) (i386 has no such rule; this pass runs for x86-64 only)
RE_EXTERN_ARRAY = re.compile(r"^(\s*extern\b[^;()=]*?\b\w*_[0-9A-Fa-f]{8}(?:\s*\[[^\]\n]*\])+)(\s*;)", re.M)


def align1_arrays(text):
    return RE_EXTERN_ARRAY.sub(lambda m: m.group(1) + " __attribute__((aligned(1)))" + m.group(2), text)


def rewrite_ghidra(text):
    text = align1_arrays(text)
    text = RE_NEG_UNSIGNED.sub(lambda m: m.group(1) + "(long long)", text)
    text = RE_PTRPTR.sub(lambda m: _stars(m.group(1), m.group(3)), text)
    text = RE_EXTERN_PTR.sub(lambda m: "%s ALBW_GP %s%s" % (m.group(1), m.group(3), m.group(4)), text)
    for v in set(RE_GLOBAL_FN.findall(text)):  # calls through a game function-pointer word
        text = re.sub(r"\(\*%s\)\(" % re.escape(v), "(*(code *)%s)(" % v, text)
    return fix_calls(text)


RE_FRAME_FN = re.compile(r"#define (\w+) \(\*\((?:code|_func_\w+) \* ALBW_GP \*\)")


def fix_calls(text):
    # V2 frame locals: #define local_30 (*(code * ALBW_GP *)(albw_frame + 0x0)); (*local_30)(...)
    for v in set(RE_FRAME_FN.findall(text)):
        text = re.sub(r"\(\*%s\)\(" % re.escape(v), "(*(code *)%s)(" % v, text)
    text = RE_FNPP_CALL.sub(lambda m: "(*(%s *)*(%s*)" % (m.group(1).split(" ")[0], m.group(1)), text)
    for v in set(RE_PPVAR_DECL.findall(text)):
        text = re.sub(r"\(\*\*%s\)\(" % re.escape(v), "(*(code *)*%s)(" % v, text)
        text = re.sub(r"\(\*%s\[([^\]]+)\]\)\(" % re.escape(v), r"(*(code *)%s[\1])(" % v, text)
    return text


# a symbol's address assigned in a statement: it may land in a 4-byte pointer, which LLVM cannot
# emit as a constant (and crashes on in some loops); an opaque copy costs nothing
RE_SYM_ASSIGN = re.compile(r"^([ \t]+[^\n;]*?[^=!<>]=\s*)(&(?:data|func|DAT|PTR)_\w+)(\s*;)", re.M)


def fn_typedefs(text):
    """function-pointer typedef names of the file and of the robust headers it includes"""
    names = set(RE_FN_TYPEDEF.findall(text))
    import os
    here = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "native", "robust")
    for h in re.findall(r'#include "(robust\w*\.h)"', text):
        if os.path.exists(os.path.join(here, h)):
            names |= set(RE_FN_TYPEDEF.findall(open(os.path.join(here, h)).read()))
    return names


def rewrite_native(text):
    text = rewrite_ghidra(text)
    # FLD(p, off, fn_typedef): a 4-byte game function pointer word, read as the callable type
    for fn in fn_typedefs(text):
        text = re.sub(r"\bFLD\s*\(([^;]*?),\s*%s\s*\)" % re.escape(fn),
                      lambda m: "((%s)(uintptr_t)FLD(%s, uint32_t))" % (fn, m.group(1)), text)
    text = RE_SYM_ASSIGN.sub(lambda m: "%sALBW_LAUNDER(%s)%s" % m.groups(), text)
    text = RE_CAST_PP.sub(lambda m: "(" + _stars(m.group(1), m.group(2)).rstrip() + ")"
                          if "ALBW_GP" not in m.group(0) else m.group(0), text)
    while True:  # nested FLD(FLD(...), ...): one level per pass
        new = RE_FLD_PTR.sub(lambda m: "%s%s * ALBW_GP)" % (m.group(1), m.group(2).strip()), text)
        if new == text:
            break
        text = new
    return fix_calls(text)


RE_BAD_CONST = re.compile(r"addrspacecast \(ptr @([\w.$]+) to ptr addrspace")


def launder_symbol(text, sym):
    """LLVM cannot emit a constant `addrspacecast (ptr @sym to ptr addrspace(271))` (storing a
    symbol's address into a 4-byte pointer). Route those uses of `sym` through ALBW_LAUNDER
    (gptr.h: an opaque copy), outside declarations and comments."""
    out = []
    for line in text.split("\n"):
        st = line.lstrip()
        if st.startswith(("extern", "//", "#", "/*", "*")) or re.match(r"^\w[\w\s\*]*\b%s\s*[\[;]" % re.escape(sym), st):
            out.append(line)
            continue
        out.append(re.sub(r"(&?)\b%s\b" % re.escape(sym), lambda m: "ALBW_LAUNDER(%s%s)" % (m.group(1), sym), line))
    return "\n".join(out)


def main():
    args = sys.argv[1:]
    if args and args[0] == "--launder":  # --launder FILE SYM...: in place (tools/link64.sh retry)
        text = open(args[1]).read()
        for sym in args[2:]:
            text = launder_symbol(text, sym)
        open(args[1], "w").write(text)
        return
    native = "--native" in args
    args = [x for x in args if x != "--native"]
    src, dst = args
    text = open(src, encoding="utf-8", errors="replace").read()
    text = rewrite_native(text) if native else rewrite_ghidra(text)
    if native:  # the original file's directory for its quoted includes
        import os
        text = '#line 1 "%s"\n' % os.path.abspath(src) + text
    with open(dst, "w", encoding="utf-8") as fh:
        fh.write(text)


if __name__ == "__main__":
    main()
