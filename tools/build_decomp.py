#!/usr/bin/env python3
"""Native build of the decompiled game code (steps 1-2 of README).

  python3 tools/build_decomp.py [--decomp ../albw-decomp-ai] [--jobs N] [--only ADDR,...]

1. Copies the decomp's src/ and shared/include/ into build/decomp/ with native-portability
   rewrites (armcc inline-asm scheduling hacks dropped, register pinning dropped, TLS reads
   turned into albw_tls()). The decomp repository itself is never modified.
2. Compiles every source that holds a function (matched first, else Ghidra-derived) with clang
   for 32-bit x86, one object per source.
3. Normalises symbols in each object (llvm-objcopy):
   - every global the object defines becomes local, except its own function(s), which are
     exported under the canonical name func_<USA ADDR>;
   - references to other functions under any address-bearing name (FUN_0010abcd,
     func_0x0010abcd, f_0010ABCD, ...) are renamed to func_<ADDR>;
   - references to data under any address-bearing name become data_<ADDR>.
   Result: one definition per function, one name per function and per datum.
4. Writes build/decomp/report.json and prints the link picture (duplicates, unresolved).
"""
import argparse
import collections
import concurrent.futures as cf
import json
import os
import re
import shutil
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OUT = os.path.join(ROOT, "build", "decomp")
TARGET = "i686-linux-gnu"
ARCH64 = False  # --arch x86_64 (build/decomp64): low-4GB mode, see native/64BIT.md
COMPAT = os.path.join(ROOT, "native", "albw_native.h")

# ------------------------------------------------------------------ rewrites
RE_TLS = re.compile(r"__asm\s*\{\s*mrc\s+p15\s*,\s*0\s*,\s*(\w+)\s*,\s*c13\s*,\s*c0\s*,\s*3\s*\}")
RE_ASM_BLOCK = re.compile(r"__asm\s*\{[^{}]*\}")
RE_REG_PIN = re.compile(r"__asm\s*\(\s*\"r\d+\"\s*\)")
RE_OP_NEW = re.compile(r"(\boperator\s+new(?:\[\])?\s*\(\s*)unsigned(?:\s+int)?\b")
RE_HEX_E = re.compile(r"(0[xX][0-9a-fA-F]*[eE])([+-])")


RE_GARBLED_RETURN = re.compile(r"#define (\w+) \(\*\(return \*\)\(albw_frame \+ 0x[0-9a-f]+\)\)")


def rewrite(text):
    # the stack-layout pass of the converter turns `return local_c;` into a bogus macro
    # `#define local_c (*(return *)(albw_frame + K))` (21 functions): restore the return
    text = RE_GARBLED_RETURN.sub(r"return \1;", text)
    text = RE_TLS.sub(r"\1 = albw_tls();", text)
    text = RE_ASM_BLOCK.sub("", text)
    text = RE_REG_PIN.sub("", text)
    text = RE_HEX_E.sub(r"\1 \2 ", text)
    # armcc's size_t is unsigned int; operator new must take the host size_t (same type on i386)
    text = RE_OP_NEW.sub(r"\1__SIZE_TYPE__", text)
    return text


# A call statement on its own line: direct (func_<ADDR>(...)) or through a function pointer
# ((**(code **)(...))(...)). [^;] spans Ghidra's wrapped argument lines.
_CALL_STMT = r"((?:func_([0-9A-F]{8})|\(\*+\(code \*+\)[^;]*?\))\((?:[^;])*?\));"
RE_CALL_THEN_RETURN = re.compile(r"(\n[ \t]+)" + _CALL_STMT + r"\s*\n[ \t]+return;")
RE_CALL_AT_END = re.compile(r"(\n[ \t]+)" + _CALL_STMT + r"(\s*\n\}\s*)$")


RE_VCALL_NOARGS = re.compile(r"\(\*\*\(code \*\*\)\(\*([^;{}]*?) \+ (0x[0-9a-f]+|\d+)\)\)\(\)")
RE_VCALL0_NOARGS = re.compile(r"\(\*\*\(code \*\*\)\*([A-Za-z_]\w*)\)\(\)")


def virtual_this(text):
    """Virtual calls Ghidra printed with no arguments: `(**(code **)(*OBJ + K))()`. On ARM the
    object whose vtable is read is passed as `this` in r0 (it was already in r0, e.g. the
    previous call's result, so Ghidra did not list it). Pass OBJ explicitly; any further
    register arguments stay lost (those calls need a hand rewrite)."""
    def fix(m):
        obj = m.group(1)
        if obj.count("(") != obj.count(")"):
            return m.group(0)
        return "(**(code **)(*%s + %s))(%s)" % (obj, m.group(2), obj)
    text = RE_VCALL_NOARGS.sub(fix, text)
    return RE_VCALL0_NOARGS.sub(lambda m: "(**(code **)*%s)(%s)" % (m.group(1), m.group(1)), text)


RE_ARGCOUNT = re.compile(r"too (?:many|few) arguments to function call")
RE_CF_ERR = re.compile(r"operand of type 'float' cannot be cast to a pointer type|pointer cannot be cast to type 'float'|"
                       r"statement requires expression of integer type \('[^']*\*'")
RE_DIAG = re.compile(r"^(.+?):(\d+):(\d+):((?:\{\d+:\d+-\d+:\d+\})*):?\s*(error|warning): (.*)$", re.M)


def _cf_operand(text, i):
    """(start, end) of the unary expression at text[i] (import_ghidra._operand)."""
    import importlib
    ig = importlib.import_module("import_ghidra")
    return ig._operand(text, i)


def cf_error_rewrite(text, stderr):
    lines = text.split("\n")
    starts = [0]
    for ln in lines:
        starts.append(starts[-1] + len(ln) + 1)
    edits = []
    for m in RE_DIAG.finditer(stderr):
        if m.group(5) != "error":
            continue
        i = starts[int(m.group(2)) - 1] + int(m.group(3)) - 1
        msg = m.group(6)
        if msg.startswith("operand of type 'float' cannot be cast"):
            r = _cf_operand(text, i)
            if r:
                edits.append((r[0], r[1], "ALBW_PTR_BITS(", ")"))
        elif msg.startswith("pointer cannot be cast to type 'float'"):
            j = i - len("(float)") if text[:i].endswith("(float)") else i
            if text.startswith("(float)", j):
                r = _cf_operand(text, j + len("(float)"))
                if r:
                    edits.append((j, r[1], "ALBW_AS_F32(", ")", r[0]))
        elif msg.startswith("statement requires expression of integer type"):
            k = text.find("(", i)
            e = _cf_operand(text, k)
            if e:
                edits.append((e[0], e[1], "(int)(uintptr_t)", ""))
    edits.sort(key=lambda e: e[0], reverse=True)
    last = None
    for e in edits:
        if last is not None and e[1] > last:
            continue
        a, b, pre, suf = e[:4]
        body = text[e[4]:b] if len(e) == 5 else text[a:b]
        text = text[:a] + pre + body + suf + text[b:]
        last = a
    return text


def fconv_rewrite(text, stderr, src):
    """Wrap the converted expression of each -Wfloat-conversion / -Wimplicit-int-float-conversion
    warning in a bit copy (warnings inside the ALBW_AS_* macro bodies are skipped)."""
    lines = text.split("\n")
    starts = [0]
    for ln in lines:
        starts.append(starts[-1] + len(ln) + 1)
    out = stderr.splitlines()
    edits = []
    for n, l in enumerate(out):
        m = RE_DIAG.match(l)
        if not m or m.group(5) != "warning" or not os.path.samefile(m.group(1), src):
            continue
        rng = re.findall(r"\{(\d+):(\d+)-(\d+):(\d+)\}", m.group(4))
        if not rng:
            continue
        nxt = out[n + 1] if n + 1 < len(out) else ""
        col = int(m.group(3)) - 1
        if re.search(r"expanded from macro '(ALBW_AS|albw)", nxt) and not lines[int(m.group(2)) - 1][col:].startswith("ALBW_AS_"):
            continue
        msg = m.group(6)
        w = "ALBW_AS_U32(" if "floating-point number into integer: 'float'" in msg else \
            "ALBW_AS_F32(" if "to 'float' may lose precision" in msg else None
        if w:
            l1, c1, l2, c2 = map(int, rng[0])
            edits.append((starts[l1 - 1] + c1 - 1, starts[l2 - 1] + c2 - 1, w))
    edits.sort(reverse=True)
    last = None
    for a, b, w in edits:
        if last is not None and b > last:
            continue
        text = text[:a] + w + text[a:b] + ")" + text[b:]
        last = a
    return text
RE_DECLARED_HERE = re.compile(r"note: '(\w+)' declared here")
SIG_OVERRIDES = {
    "func_0010E74C": "void *func_0010E74C(uint *param_1,uint *param_2,uint param_3)",
    "func_0065E398": "void func_0065E398(undefined4 *param_1,undefined1 param_2)",
    # __aeabi_uidivmod / __aeabi_idivmod: quotient in r0, remainder in r1 (`x >> 0x20`); typed
    # int, the remainder was lost on i386 (message-queue ring indices 0 / -1)
    "func_00110710": "ulonglong func_00110710(uint param_1,uint param_2)",
    "func_001104E4": "longlong func_001104E4(int param_1,int param_2)",
}
# Ghidra writes `fX = func_0010E74C(...)` where s0 merely survived memmove: drop the assignment
RE_MEMMOVE_FLOAT = re.compile(r"\b\w+ = (func_0010E74C\()")

_EU_CODE = None
RE_CODE_STR_ARG = re.compile(r"(?<=[(,])(\s*)(0x[0-9a-f]{5,6})(?=\s*[,)])")


def code_strings(text):
    """Ghidra prints `add rN, pc, #imm` references to strings stored among the code (task and
    heap names such as "TaskRender", the mount name "rom:") as plain integers, the EU address.
    A call argument that is such an address of a printable NUL-terminated string becomes the C
    string literal (only the contents matter to the callers: names, formats, magic tags)."""
    global _EU_CODE
    if _EU_CODE is None:
        p = os.path.join(ROOT, "..", "albw-decomp-ai", "rom", "eu_code.bin")
        _EU_CODE = open(p, "rb").read() if os.path.exists(p) else b""
    code = _EU_CODE

    def fix(m):
        a = int(m.group(2), 16)
        o = a - 0x100000
        if not (0x100000 <= a < 0x693000) or a % 4 or not code:
            return m.group(0)
        e = code.find(b"\0", o, o + 256)
        if e < 0 or e - o < 2 or not all(0x20 <= b < 0x7F for b in code[o:e]):
            return m.group(0)
        lit = code[o:e].decode("ascii").replace("\\", "\\\\").replace('"', '\\"')
        return '%s(int)"%s" /* EU %08X */' % (m.group(1), lit, a)
    return RE_CODE_STR_ARG.sub(fix, text)


def void_tail_returns(text, addr, sigs):
    """Ghidra types many forwarding functions `void` although r0 still holds the callee's result
    when they return (the call is the last instruction before the epilogue, e.g. EU 0010FC68
    `bl 0x110740; pop {r3, r4, r5, pc}`), and callers use that result. On ARM a function whose
    last action is a call returns that call's r0 whatever its C type, so this is exact machine
    semantics: such a `void` function returns the value of every call that directly precedes a
    return. Calls returning float/double (VFP s0, not r0) are left alone."""
    own = "func_" + addr
    m = re.search(r"\n\n(void)\s+%s\s*\(" % own, text)
    if not m:
        return text
    if addr in RETURNS_THIS:
        # proven from the machine code (tools/returns_this.py): r0 at every return is the
        # incoming r0, i.e. the function returns its first argument (constructors return this)
        pm = re.match(r"\s*\(\s*([^,)]*?)\bparam_1\s*[,)]", text[m.end() - 1:])
        body_at = text.index("{", m.end())
        body = text[body_at:]
        if pm and not re.search(r"\b(float|double)\b", pm.group(1)) and \
                not re.search(r"(?<!\*)\bparam_1\s*(?:[-+*/|&^]?=(?!=)|\+\+|--)|(?:\+\+|--)\s*param_1\b", body):
            body = re.sub(r"\breturn;", "return (undefined4)param_1;", body)
            if not re.search(r"return \(undefined4\)param_1;\s*\}\s*$", body):
                body = re.sub(r"\n\}\s*$", "\n  return (undefined4)param_1;\n}\n", body)
            return text[:m.start(1)] + "undefined4" + text[m.end(1):body_at] + body
        return text

    def ok(callee):
        sig = (sigs or {}).get("func_" + callee) if callee else None
        if sig and v4_enabled() and sig.split()[0] == "void" and "*" not in sig.split("(")[0]:
            return False  # V4: a void callee (retfix / overrides) has no r0 result to forward
        return not (sig and sig.split()[0] in ("float", "double"))

    def sub_ret(mm):
        return "%sreturn %s;" % (mm.group(1), mm.group(2)) if ok(mm.group(3)) else mm.group(0)

    def sub_end(mm):
        return "%sreturn %s;%s" % (mm.group(1), mm.group(2), mm.group(4)) if ok(mm.group(3)) else mm.group(0)

    body_at = m.end()
    body = RE_CALL_THEN_RETURN.sub(sub_ret, text[body_at:])
    body = RE_CALL_AT_END.sub(sub_end, body)
    if body == text[body_at:]:
        return text
    # the other exits of the now non-void function (r0 is whatever it held there; 0 natively;
    # a bare `return;` in a non-void function does not compile)
    body = re.sub(r"\breturn;", "return 0;", body)
    return text[:m.start(1)] + "undefined4" + text[m.end(1):body_at] + body


# ------------------------------------------------------------------ 64-bit (low-4GB mode)
# Ghidra C keeps addresses in 32-bit ints, which is layout-correct on x86-64 as long as every
# game address is below 2 GiB (native/64BIT.md). What breaks is a pointer *type* used for a
# word in game memory: `*(undefined4 **)(p + 0x7c)` loads 8 bytes on x86-64. In the 64-bit build
# every pointer-to-pointer type gets 32-bit inner pointers (clang's __ptr32 __uptr, spelled
# ALBW_GP; empty on 32-bit): `undefined4 **` -> `undefined4 * ALBW_GP *`. A 32-bit pointer
# converts implicitly (zero-extended) to a normal one. Calls through a __ptr32 function pointer
# crash LLVM's x86 backend, so the callee is converted to a normal pointer first.
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ptr32 import rewrite_ghidra as ptr32_rewrite, RE_BAD_CONST, launder_symbol  # noqa: E402  (tools/ptr32.py)


RE_IR_PTR_MEM = re.compile(r"(?:= load ptr, ptr|store ptr [^,]+, ptr)")
RE_IR_VCALL = re.compile(r"%vtable\d* = load ptr|%vfn")
RE_IR_PTRSTRUCT = re.compile(r"^%(?:struct|class|union)\.\S+ = type \{[^}]*\bptr\b", re.M)


RE_IR_GEP_OFF = re.compile(r"getelementptr (?:inbounds )?(?:nuw )?(?:nusw )?i8, ptr(?: addrspace\(\d+\))? %[\w.]+, i(?:32|64) (-?\d+)")
RE_IR_MEMLEN = re.compile(r"@llvm\.mem(?:cpy|set|move)\.[^(]*\([^)]*?, i(?:32|64) (\d+), i1")


def ir_offsets(ir):
    return sorted(RE_IR_GEP_OFF.findall(ir)) + ["len" + x for x in sorted(RE_IR_MEMLEN.findall(ir))]


def layout_check(cmd, src, out_ll):
    """Matched sources in the 64-bit build: compile to LLVM IR and look for pointer-sized
    memory words (pointer loads/stores, C++ virtual calls through the compiler's 8-byte vtable
    slots, structs with pointer members). Such a function reads or writes game memory with
    8-byte pointers and is layout-critical. Returns the list of reasons (empty = layout-safe)."""
    r = subprocess.run([c for c in cmd if c not in ("-c",)] + ["-S", "-emit-llvm", "-o", out_ll, src],
                       capture_output=True, text=True)
    if r.returncode:
        return ["ir-failed"]
    ir = open(out_ll).read()
    os.remove(out_ll)
    # the same source for i686: struct layouts that differ (a pointer member before the field
    # that is accessed) show as different constant byte offsets / copy sizes
    cmd32 = [c if not c.startswith("--target=") else "--target=i686-linux-gnu" for c in cmd]
    r32 = subprocess.run([c for c in cmd32 if c not in ("-c",)] + ["-S", "-emit-llvm", "-o", out_ll, src],
                         capture_output=True, text=True)
    why = []
    if r32.returncode == 0:
        ir32 = open(out_ll).read()
        os.remove(out_ll)
        if ir_offsets(ir) != ir_offsets(ir32):
            why.append("offsets")
    if RE_IR_VCALL.search(ir):
        why.append("vcall")
    if RE_IR_PTR_MEM.search(ir):
        why.append("ptr-mem")
    if RE_IR_PTRSTRUCT.search(ir):
        why.append("ptr-struct")
    return why


CONCAT44_OLD = "#define CONCAT44(a, b) ((uint64_t)(((uint64_t)(uint32_t)(a) << 32) | (uint32_t)(b)))"
CONCAT44_NEW = """/* (port) CONCAT44 pieces are 32-bit register words: a float piece (Ghidra's CONCAT44(fVarA, fVarB),
 * a VFP register pair) contributes its bits, never its value converted to an integer */
#ifndef __cplusplus
#define ALBW_PIECE32(x) _Generic((x), float: albw_piece32_f((float)_Generic((x), float: (x), default: 0.0f)), \\
    default: (uint32_t)(x))
static inline uint32_t albw_piece32_f(float f) { uint32_t u; __builtin_memcpy(&u, &f, 4); return u; }
#define CONCAT44(a, b) ((uint64_t)(((uint64_t)ALBW_PIECE32(a) << 32) | ALBW_PIECE32(b)))
#else
#define CONCAT44(a, b) ((uint64_t)(((uint64_t)(uint32_t)(a) << 32) | (uint32_t)(b)))
#endif"""


def header_rewrite(name, text):
    """Port-side fixes of the mirrored ghidra_types.h (the decomp repository is never modified)."""
    if name == "ghidra_types.h" and CONCAT44_OLD in text:
        text = text.replace(CONCAT44_OLD, CONCAT44_NEW)
    return text


def mirror(decomp):
    """Copy sources + headers with rewrites (only files that changed)."""
    n = 0
    for sub in ("src", os.path.join("shared", "include")):
        for dp, _, files in os.walk(os.path.join(decomp, sub)):
            for f in files:
                if not f.endswith((".c", ".cpp", ".cc", ".h", ".hpp", ".inc")):
                    continue
                s = os.path.join(dp, f)
                d = os.path.join(OUT, os.path.relpath(s, decomp))
                if os.path.exists(d) and os.path.getmtime(d) >= os.path.getmtime(s):
                    continue
                os.makedirs(os.path.dirname(d), exist_ok=True)
                with open(s, encoding="utf-8", errors="replace") as fh:
                    text = fh.read()
                text = header_rewrite(f, rewrite(text))
                if ARCH64 and "nonmatching" in dp and f.endswith(".c"):
                    text = ptr32_rewrite(text)
                with open(d, "w", encoding="utf-8") as fh:
                    fh.write(text)
                n += 1
    return n


# ------------------------------------------------------------------ names
ADDR_IN_NAME = re.compile(r"(?:^|[^0-9A-Fa-f])(?:0x)?([0-9A-Fa-f]{8})(?![0-9A-Fa-f])")
FUNC_NAME = re.compile(r"^(?:func_|FUN_|f_|sub_|fn_|func_0x|FUN_0x)(?:0x)?([0-9A-Fa-f]{8})$")
DATA_NAME = re.compile(r"^(?:data_|ro_|bss_|DAT_|G_|g_|PTR_|ptr_|gData_|rodata_|str_|s_|tbl_|vt_|vtbl_)(?:0x)?([0-9A-Fa-f]{8})$")
TEXT_LO, TEXT_HI = 0x00100000, 0x00693000
DATA_LO, DATA_HI = 0x00693000, 0x006FF000 + 0x289F0 + 0x87A44
ANY_ADDR_NAME = re.compile(r"^[A-Za-z][A-Za-z0-9]*_(?:0x)?([0-9A-Fa-f]{8})$")
_rt = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "native", "returns_this.json")
RETURNS_THIS = set(json.load(open(_rt))) if os.path.exists(_rt) else set()  # tools/returns_this.py
CTORS = set()  # USA addresses of the game's static constructors (filled in main)


# ------------------------------------------------------------------ round 3 (ALBW_CONVERT_V4=1)
# Off by default: without the variable the build is what it was (native/ROUND3.md). With it:
#   - import_ghidra.py V4 (64-bit returns kept, ARM return classes from ALBW_RETFIX, in_stack_
#     frame aliasing, vldm pair loads, compile fixes) on a separate fallback directory;
#   - FUN_<EU> callees renamed before the conversion, so they get declarations;
#   - error-driven compile-fix retries; ALBW_FCONV bit copies (on unless ALBW_FCONV=0);
#   - returns-this list native/returns_this3.json (float returners removed);
#   - the switch-case fragments Ghidra listed as functions are not built (V4_NOT_FUNCTIONS).
def v4_enabled():
    return os.environ.get("ALBW_CONVERT_V4") == "1"


def v4_stage():
    """ALBW_V4_STAGE: 1 = return classes, stack objects, returns-this, FUN_ declarations;
    2 (default) = everything (+ FCONV, compile-fix retries, switch-case fragments dropped)."""
    return int(os.environ.get("ALBW_V4_STAGE", "2")) if v4_enabled() else 0


def pmf_this_enabled():
    v = os.environ.get("ALBW_PMF_THIS")
    return v == "1" or (v is None and v4_stage() >= 2)


# Inlined pointer-to-member calls (sead StateMgr::exec and the like). armcc computes
# r0 = obj + (adj >> 1) before testing the virtual bit and passes it as `this`; Ghidra prints the
# call with no arguments: `if ((uV & 1) != 0) { pcV = *(code **)(pcV + *(int *)(OBJ + ((int)uV >> 1))); }
# (*pcV)();` (BOOT_LOG stops 74-80: title task, title object, layout parts; 242 sites in 230 files)
RE_PMF_NOTHIS = re.compile(r"(if \(\((\w+) & 1\) != 0\) \{\s*(\w+) = \*\(code \*\*\)\(\3 \+ \*\(int \*\)\((.+?) \+ "
                           r"\(\(int\)\2 >> 1\)\)\);\s*\}\s*\(\*\3\)\()\)")


def pmf_this_rewrite(text):
    return RE_PMF_NOTHIS.sub(lambda m: "%s(int)(%s) + ((int)%s >> 1))" % (m.group(1), m.group(4), m.group(2)), text)


# Callees with stack parameters whose Ghidra prototype is short: Ghidra's caller prints the
# word stored at [sp] as a register argument and drops r2/r3. name -> (real parameter count,
# {Ghidra argument index: real argument index}); the other real arguments become 0 (the callee
# ignores them). Checked against the ARM of each callee:
#   004BE114 (EU 004BE0EC, matched f_004BE114): r0 = actor, r1 = state count, r2 / r3 unused,
#     [sp] = the actor's state table -> 004BDCEC stores it at +0x790. Ghidra calls it
#     (actor, n, table), so the table landed in r2 and +0x790 stayed 0 (boot stop 82, ~50 actor
#     ctors; the hand-written native/robust/func_0017AC58.c already passed it as the 5th).
STACK_ARG_CALLS = {
    "func_004BE114": (5, {2: 4}),
}


def _split_args(text, i):
    """Arguments of the call whose '(' is at text[i]: (list of argument strings, index after ')')."""
    depth, start, args = 0, i + 1, []
    for j in range(i, len(text)):
        c = text[j]
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
            if depth == 0:
                args.append(text[start:j])
                return args, j + 1
        elif c == "," and depth == 1:
            args.append(text[start:j])
            start = j + 1
    return None, i


def stack_arg_rewrite(text):
    for name, (n, moves) in STACK_ARG_CALLS.items():
        if name not in text:
            continue
        nghidra = max(moves) + 1
        # the extern prototype: Ghidra's parameter types, padded to the real count
        def proto(m):
            ps = [x.strip() for x in m.group(2).split(",")]
            if len(ps) != nghidra:
                return m.group(0)
            real = ["int param_%d" % (k + 1) for k in range(n)]
            for k, t in enumerate(ps):
                ty = re.match(r"^(.*?)\s*\w+$", t).group(1)  # type with its '*'s
                real[moves.get(k, k)] = "%s param_%d" % (ty, moves.get(k, k) + 1)
            return "%s(%s);" % (m.group(1), ",".join(real))
        text = re.sub(r"(extern \w[\w *]*?\b%s)\(([^()]*)\);" % name, proto, text)
        out, pos = [], 0
        for m in re.finditer(r"\b%s\(" % name, text):
            if m.start() < pos or text[:m.start()].rstrip().endswith(("extern int", "extern void")):
                continue
            line_start = text.rfind("\n", 0, m.start()) + 1
            if text[line_start:m.start()].lstrip().startswith("extern"):
                continue
            args, end = _split_args(text, m.end() - 1)
            if args is None or len(args) != nghidra:
                continue
            real = ["0"] * n
            for k, a in enumerate(args):
                real[moves.get(k, k)] = a.strip()
            out.append(text[pos:m.start()] + "%s(%s)" % (name, ",".join(real)))
            pos = end
        text = "".join(out) + text[pos:]
    return text


def fconv_enabled():
    v = os.environ.get("ALBW_FCONV")
    return v == "1" or (v is None and v4_stage() >= 2)


# mid-function blocks of a switch (`switchD_xxx::caseD_..`) that the function table lists as
# functions: live registers / the parent's frame, not callable C functions (native/compilefix)
V4_NOT_FUNCTIONS = {"003E5518", "003E5520", "0056B010", "0056B050", "0056B088", "0056B0C0", "0056B0F8"}


MANGLED = re.compile(r"^_Z(\d+)")


def base_name(name):
    """Plain function name inside an Itanium-mangled free-function name (_Z<len><name>...)."""
    m = MANGLED.match(name)
    if not m:
        return name
    n = int(m.group(1))
    return name[m.end():m.end() + n]


def canon_ref(name):
    """Canonical name for a referenced symbol, or None to keep it."""
    name = base_name(name)
    m = FUNC_NAME.match(name) or re.match(r"^(?:g_|post_|pre_|call_|fn|f)_?(?:0x)?([0-9A-Fa-f]{8})$", name)
    if m and DATA_LO <= int(m.group(1), 16) < DATA_HI:  # the address decides, not the prefix
        return "data_%08X" % int(m.group(1), 16)
    if m:
        a = int(m.group(1), 16)
        return "func_%08X" % a
    m = DATA_NAME.match(name) or ANY_ADDR_NAME.match(name)
    if m:
        a = int(m.group(1), 16)
        # only data names are canonicalised here: a DAT_/PTR_ name inside the code section is a
        # literal-pool word (defined by gen_data under its own name), never a function
        if DATA_LO <= a < DATA_HI:
            return "data_%08X" % a
    return None


def nm(obj):
    out = subprocess.run(["llvm-nm", "--defined-only", "-g", "--format=just-symbols", obj],
                         capture_output=True, text=True).stdout.split()
    und = subprocess.run(["llvm-nm", "-u", "--format=just-symbols", obj], capture_output=True, text=True).stdout.split()
    full = subprocess.run(["llvm-nm", "--defined-only", "-g", obj], capture_output=True, text=True).stdout.splitlines()
    kinds = {}
    for l in full:
        p = l.split()
        if len(p) >= 3:
            kinds[p[2]] = p[1]
    return out, und, kinds


def call_roots(obj, funcs):
    """Functions in obj that no other function in obj references (-ffunction-sections)."""
    out = subprocess.run(["llvm-readelf", "-r", "--wide", obj], capture_output=True, text=True).stdout
    called, cur = set(), None
    for l in out.splitlines():
        m = re.match(r"Relocation section '\.rela?\.text\.(\S+)'", l)
        if m:
            cur = m.group(1)
            continue
        if l.startswith("Relocation section"):
            cur = None
            continue
        p = l.split()
        if cur and len(p) >= 5 and p[4] != cur:
            called.add(p[4])
    return [f for f in funcs if f not in called]


def pick_primary(addr, defs, kinds, obj=None):
    funcs = [d for d in defs if kinds.get(d, "").upper() in ("T", "W")]
    hexa = addr.upper()
    exact = [d for d in funcs if d == "func_" + hexa]
    if exact:
        return exact[0]
    named = [d for d in funcs if hexa in d.upper()]
    if len(named) == 1:
        return named[0]
    if len(named) > 1:
        return min(named, key=len)
    if len(funcs) == 1:
        return funcs[0]
    if obj and funcs:
        roots = call_roots(obj, funcs)
        if len(roots) == 1:
            return roots[0]
    return None


def static_init(obj):
    """(section, value) of the compiler's static initialiser (_GLOBAL__sub_I_*) in obj, if any."""
    out = subprocess.run(["llvm-readelf", "-s", "-S", "--wide", obj], capture_output=True, text=True).stdout
    secs = {}
    for l in out.splitlines():
        m = re.match(r"\s*\[\s*(\d+)\]\s+(\S+)", l)
        if m:
            secs[m.group(1)] = m.group(2)
    for l in out.splitlines():
        p = l.split()
        if len(p) >= 8 and p[-1].startswith("_GLOBAL__sub_I_") and p[3] == "FUNC":
            return secs.get(p[6]), int(p[1], 16)
    return None


def build_one(job):
    path, addrs, decomp_flags = job
    src = os.path.join(OUT, path)
    obj = os.path.join(OUT, "obj", path + ".o")
    fin = os.path.join(OUT, "obj", path + ".final.o")
    os.makedirs(os.path.dirname(obj), exist_ok=True)
    cpp = path.endswith((".cpp", ".cc"))
    cmd = ["clang", "--target=" + TARGET, "-c", "-O1", "-g0", "-w", "-ffunction-sections",
           "-fdata-sections", "-fno-common", "-fno-strict-aliasing", "-fwrapv", "-fno-exceptions",
           "-ferror-limit=3", "-include", COMPAT,
           # float model = the 3DS VFP (native/gameplay/AUDIT.md): single precision in SSE
           # registers on i686 too (no x87 excess precision), no FMA contraction (vmla is unfused)
           "-msse2", "-mfpmath=sse", "-ffp-contract=off",
           "-I", os.path.join(OUT, "shared", "include"), "-I", os.path.dirname(src)]
    if ARCH64:
        cmd += ["-fms-extensions", "-Wno-error=int-to-pointer-cast"]  # __ptr32 (ALBW_GP)
    if v4_enabled():
        cmd += ["-DALBW_V4"]  # ghidra_types.h round-3 helpers
        if v4_stage() >= 2:
            # uninitialised locals start at 0 (as the ARM stack/registers usually happen to be
            # read in Ghidra's perm_local branches): without it clang folds functions that branch
            # on an uninitialised local into nothing (BOOT_LOG stop 59)
            cmd += ["-ftrivial-auto-var-init=zero"]
    if cpp:
        cmd += ["-x", "c++", "-std=gnu++11", "-fno-threadsafe-statics"]
    else:
        cmd += ["-std=gnu11", "-Wno-error=implicit-function-declaration", "-Wno-error=int-conversion",
                "-Wno-error=incompatible-pointer-types", "-Wno-error=incompatible-function-pointer-types",
                "-Wno-error=return-type"]
    matched_src = not path.startswith("ghidra_fallback/") and "/nonmatching/" not in path
    lay_file = fin + ".layout64"
    layout = []
    if not (os.path.exists(fin) and os.path.getmtime(fin) >= os.path.getmtime(src)):
        if not cpp and pmf_this_enabled() and "/ghidra_fallback/" in src:
            text = open(src).read()
            new_text = stack_arg_rewrite(pmf_this_rewrite(text))
            if new_text != text:
                with open(src, "w") as fh:
                    fh.write(new_text)
        r = subprocess.run(cmd + ["-o", obj, src], capture_output=True, text=True)
        for _ in range(8):  # 64-bit: symbol addresses stored into 4-byte pointers (tools/ptr32.py)
            bad = set(RE_BAD_CONST.findall(r.stderr)) if ARCH64 and r.returncode else set()
            if not bad:
                break
            text = open(src).read()
            for sym in bad:
                text = launder_symbol(text, sym)
            with open(src, "w") as fh:
                fh.write(text)
            r = subprocess.run(cmd + ["-o", obj, src], capture_output=True, text=True)
        for _ in range(8):
            # a call whose argument count disagrees with the callee's (ARM-evidence) prototype:
            # the Ghidra text and the signature table differ. Keep the source compiling with an
            # unprototyped declaration of that callee (same return type; arguments as written)
            if not r.returncode or not RE_ARGCOUNT.search(r.stderr):
                break
            names = set(RE_DECLARED_HERE.findall(r.stderr))
            text = open(src).read()
            new_text = text
            for n in names:
                new_text = re.sub(r"(extern\s+[^;(]*?\b%s)\s*\([^;]*\);" % re.escape(n), r"\1();", new_text)
            if new_text == text:
                break
            with open(src, "w") as fh:
                fh.write(new_text)
            r = subprocess.run(cmd + ["-o", obj, src], capture_output=True, text=True)
        for _ in range(8 if v4_stage() >= 2 or os.environ.get("ALBW_CONVERT_CF") == "1" else 0):
            # error-driven exact rewrites (native/compilefix/README.md): (T *)<float> -> bit copy
            # (97 failures + 12 more hidden behind other errors); (float)<pointer> -> bit copy;
            # switch on a pointer-typed variable (8)
            if not r.returncode or not RE_CF_ERR.search(r.stderr):
                break
            text = open(src).read()
            new_text = cf_error_rewrite(text, r.stderr)
            if new_text == text:
                break
            with open(src, "w") as fh:
                fh.write(new_text)
            r = subprocess.run(cmd + ["-o", obj, src], capture_output=True, text=True)
        if not r.returncode and not cpp and fconv_enabled() and "/ghidra_fallback/" in src:
            # implicit float<->int conversions are Ghidra COPYs between a float and an int-typed
            # variable / pool word: make them bit copies (whole build: 1647 sites in 471 files)
            text = open(src).read()
            # (without the build's -w, which silences every warning flag after it as well)
            w = subprocess.run([c for c in cmd if c != "-w"] + ["-fsyntax-only", "-Wno-everything", "-Wfloat-conversion",
                                      "-Wimplicit-int-float-conversion", "-fdiagnostics-print-source-range-info",
                                      "-fno-caret-diagnostics", src], capture_output=True, text=True).stderr
            new_text = fconv_rewrite(text, w, src)
            if new_text != text:
                with open(src, "w") as fh:
                    fh.write(new_text)
                r = subprocess.run(cmd + ["-o", obj, src], capture_output=True, text=True)
        if r.returncode:
            err = next((l for l in r.stderr.splitlines() if "error:" in l or "error in backend" in l), r.stderr[:200])
            return {"path": path, "addrs": addrs, "ok": False, "error": err.split("error:", 1)[-1].strip()}
        if ARCH64 and matched_src:
            layout = layout_check(cmd, src, obj + ".ll")
            with open(lay_file, "w") as fh:
                fh.write(" ".join(layout))
    else:
        obj = fin  # already normalised: re-derive the report from it
        if ARCH64 and matched_src and os.path.exists(lay_file):
            layout = open(lay_file).read().split()
    defs, und, kinds = nm(obj)
    prim, sinit = {}, {}
    for a in addrs:
        si = static_init(obj) if a in CTORS and obj != fin else None
        if si and si[0]:
            sinit[a] = si
            prim[a] = "func_" + a
            continue
        p = pick_primary(a, defs, kinds, obj)
        if p:
            prim[a] = p
    if obj != fin:
        args = ["llvm-objcopy"]
        exported = set(prim.values())
        for d in defs:
            if d in exported:
                continue
            c = canon_ref(d)
            if kinds.get(d, "").upper() in ("D", "B", "R", "V", "C") and c and c.startswith("data_"):
                if c != d:
                    args += ["--redefine-sym", "%s=%s" % (d, c)]
                # generated game data (step 3) is the strong definition; weaken under both names
                # (objcopy may apply this before or after the rename)
                args += ["--weaken-symbol=" + c, "--weaken-symbol=" + d]
            else:
                args += ["--localize-symbol=" + d]
        # exports are weak: a native SDK replacement defining the same func_<ADDR> wins at link time
        for a, (sec, val) in sinit.items():
            args += ["--add-symbol", "func_%s=%s:%d,weak,function" % (a.upper(), sec, val)]
        # matched sources of functions that return their first argument on ARM (returns_this.json)
        # but are void in C: export them as func_<ADDR>__impl; link.sh adds a thunk func_<ADDR>
        # that calls the impl and returns the first argument (exact ARM r0 semantics)
        secs = None
        def sec_of(sym):
            # the section a symbol lives in: not always ".text.<sym>" (a C1 constructor is an
            # alias inside the C2 constructor's section; that guess put func_00377354__impl at 0)
            nonlocal secs
            if secs is None:
                secs = {}
                out = subprocess.run(["llvm-objdump", "-t", obj], capture_output=True, text=True).stdout
                for line in out.splitlines():
                    f = line.split()
                    if len(f) >= 4 and f[-1] and f[-3].startswith(".text"):
                        secs[f[-1]] = f[-3]
            return secs.get(sym, ".text." + sym)
        for a, p in prim.items():
            want = "func_" + a.upper()
            if a in sinit:
                continue
            if matched_src and a.upper() in RETURNS_THIS:
                impl = want + "__impl"
                if p != want:
                    args += ["--add-symbol", "%s=%s:0,weak,function" % (impl, sec_of(p)), "--localize-symbol=" + p]
                else:
                    args += ["--redefine-sym", "%s=%s" % (want, impl), "--weaken-symbol=" + want,
                             "--weaken-symbol=" + impl]
                continue
            if p != want:
                sec = sec_of(p)
                args += ["--add-symbol", "%s=%s:0,weak,function" % (want, sec), "--localize-symbol=" + p]
            else:
                args += ["--weaken-symbol=" + want]
        for u in und:
            c = canon_ref(u)
            if c and c != u:
                args += ["--redefine-sym", "%s=%s" % (u, c)]
        r = subprocess.run(args + [obj, fin], capture_output=True, text=True)
        if r.returncode:
            return {"path": path, "addrs": addrs, "ok": False, "error": "objcopy: " + r.stderr.strip()[:200]}
        os.remove(obj)
        defs, und, kinds = nm(fin)
    return {"path": path, "addrs": addrs, "ok": True, "primary": prim, "layout64": layout,
            "missing_primary": [a for a in addrs if a not in prim], "defs": defs, "und": und}


def load_decomp_tool(decomp, name):
    import importlib.util
    spec = importlib.util.spec_from_file_location(name, os.path.join(decomp, "tools", name + ".py"))
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--decomp", default=os.path.join(ROOT, "..", "albw-decomp-ai"))
    ap.add_argument("--jobs", type=int, default=os.cpu_count())
    ap.add_argument("--only", default="")
    ap.add_argument("--arch", choices=("x86", "x86_64"), default="x86",
                    help="x86 = 32-bit intermediate build; x86_64 = the release target (tracks 64-bit health)")
    a = ap.parse_args()
    global OUT, TARGET, CTORS, ARCH64
    if a.arch == "x86_64":
        OUT, TARGET, ARCH64 = os.path.join(ROOT, "build", "decomp64"), "x86_64-linux-gnu", True
        os.environ["ALBW_ARCH"] = "x86_64"  # gen_stubs.system_symbols(): 64-bit libraries
    decomp = os.path.abspath(a.decomp)
    os.makedirs(OUT, exist_ok=True)
    # the game's static constructors (their source's _GLOBAL__sub_I_* is the function)
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    import gen_data, struct as _st
    code = open(os.path.join(decomp, "rom", "eu_code.bin"), "rb").read()
    emap = json.load(open(os.path.join(decomp, "shared", "eu_usa_map.json")))
    fn_of = {int(v["eu"], 16): "func_" + k for k, v in emap.items()}
    ctors, _ = gen_data.init_tables(code, lambda x: _st.unpack_from("<I", code, x - 0x100000)[0], fn_of)
    CTORS = {c[5:] for c in ctors}
    print("static constructors: %d" % len(CTORS))
    print("mirrored %d files" % mirror(decomp))

    matched = json.load(open(os.path.join(decomp, "functions.json")))
    ghidra = json.load(open(os.path.join(decomp, "nonmatching.json")))
    import_ghidra = load_decomp_tool(decomp, "import_ghidra")
    sys.modules["import_ghidra"] = import_ghidra  # cf_error_rewrite imports it by name
    global RETURNS_THIS
    if v4_enabled():
        os.environ.setdefault("ALBW_RETFIX", os.path.join(ROOT, "native", "robust", "systemic3", "retfix.json"))
        rt3 = os.path.join(ROOT, "native", "returns_this3.json")
        if os.path.exists(rt3):
            RETURNS_THIS = set(json.load(open(rt3)))
        print("V4 stage %d: retfix %s (%d), returns-this %d, FCONV %s" % (
            v4_stage(), os.environ["ALBW_RETFIX"], len(import_ghidra.v4_retfix()), len(RETURNS_THIS), fconv_enabled()))
    # Ghidra with full auto-analysis (real parameter counts) is preferred over the earlier
    # no-analysis dumps (decomp's src/nonmatching and build/ghidra_all)
    analyzed_dir = next((d for d in (os.path.join(ROOT, "build", "ghidra_analyzed2"), os.path.join(ROOT, "build", "ghidra_analyzed")) if os.path.isdir(d)), "")
    # tools/systemic_rebuild.sh: another dump (default off). Its converted sources go to
    # ghidra_fallback/<dump name>/..., so the default build's files are never overwritten.
    alt_dir = os.environ.get("ALBW_GHIDRA_DIR")
    fb_sub = os.environ.get("ALBW_FALLBACK_SUBDIR") or (os.path.basename(os.path.normpath(alt_dir)) if alt_dir else "")
    if v4_enabled() and not os.environ.get("ALBW_FALLBACK_SUBDIR"):
        fb_sub += "_v4"  # never reuse V2/V3 conversions of the same dump (mtime cache)
    if alt_dir:
        analyzed_dir = os.path.abspath(alt_dir)
        print("Ghidra dump: %s -> ghidra_fallback/%s (ALBW_CONVERT_V2=%s)"
              % (analyzed_dir, fb_sub, os.environ.get("ALBW_CONVERT_V2", "")))
    fallback_dir = analyzed_dir if os.path.isdir(analyzed_dir) else os.path.join(ROOT, "build", "ghidra_all")

    eu2usa = {v["eu"].lower(): k for k, v in json.load(open(os.path.join(decomp, "shared", "eu_usa_map.json"))).items()}
    extra_path = os.environ.get("ALBW_EXTRA_FUNCTIONS") or os.path.join(ROOT, "native", "extra_functions.json")
    extra = json.load(open(extra_path)) if os.path.exists(extra_path) else {}  # USA -> EU
    eu2usa.update({eu.lower(): usa for usa, eu in extra.items()})
    extra_dir = os.environ.get("ALBW_GHIDRA_EXTRA_DIR") or os.path.join(ROOT, "build", "ghidra_extra")

    def eu_fun_to_usa(text):
        """Ghidra's own FUN_<EU address> names -> func_<USA address> (unknown starts stay FUN_)."""
        def fix(m):
            a = m.group(1)
            if a in eu2usa:
                return "func_" + eu2usa[a]
            if int(a, 16) < 0x110000:  # Thumb C runtime at the start of the code: same address in USA
                return "func_%08X" % int(a, 16)
            return m.group(0)
        return re.sub(r"\b(?:thunk_)?FUN_([0-9a-f]{8})\b", fix, text)

    sigs = import_ghidra.signatures(fallback_dir) if fallback_dir else {}
    if os.environ.get("ALBW_CONVERT_V3") == "1" and os.path.isdir(extra_dir):
        # V3: one signature table: functions outside the decomp table (ghidra_extra*) are
        # prototyped too (before: `extern int f();`, float arguments passed as doubles)
        for k, v in import_ghidra.signatures(extra_dir).items():
            sigs.setdefault(k, v)
    # return classes the native definitions have (on i386 a float/int return mismatch corrupts
    # the x87 stack, native/gameplay/AUDIT.md): memmove returns the destination pointer (Ghidra
    # typed it float because s0 survives the call); the state machine changeState returns nothing
    sigs.update(SIG_OVERRIDES)
    if v4_enabled():
        for k in SIG_OVERRIDES:  # the native definitions' classes win
            import_ghidra.v4_retfix().pop(k, None)
    print("callee prototypes from Ghidra: %d" % len(sigs))

    def ghidra_source(addr):
        """Per-address Ghidra C (mirrored path relative to OUT), or None."""
        raw = os.path.join(fallback_dir, "func_%s.c" % addr)
        if not os.path.exists(raw):
            raw = os.path.join(extra_dir, "func_%s.c" % addr)  # functions missing from the table
        if not os.path.exists(raw) and addr in ghidra:
            return ghidra[addr]["path"]
        if not os.path.exists(raw):
            return None
        rel = os.path.join("ghidra_fallback", fb_sub, addr[:3], "func_%s.c" % addr)
        dst = os.path.join(OUT, rel)
        if not os.path.exists(dst) or os.path.getmtime(dst) < os.path.getmtime(raw):
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            text = open(raw, encoding="utf-8", errors="replace").read()
            # FUN_<EU> -> func_<USA> *before* convert(): convert() declares the callees it sees,
            # so a callee still spelled FUN_ was called through an implicit `int f()` (float
            # arguments promoted to double). 1054 Ghidra sources call a FUN_ name; 6 failures.
            if v4_enabled():
                text = rewrite(import_ghidra.convert(RE_MEMMOVE_FLOAT.sub(r'\1', code_strings(virtual_this(void_tail_returns(eu_fun_to_usa(text), addr, sigs)))), addr, sigs))
            else:
                text = rewrite(eu_fun_to_usa(import_ghidra.convert(RE_MEMMOVE_FLOAT.sub(r'\1', code_strings(virtual_this(void_tail_returns(text, addr, sigs)))), addr, sigs)))
            if ARCH64:
                text = ptr32_rewrite(text)
            with open(dst, "w") as fh:
                fh.write(text)
        return rel

    # A matched source is used only when it belongs to exactly one address: files shared by many
    # addresses ("twins") match shape only, with different callees/data per address, so each of
    # those addresses gets its own Ghidra decompilation instead.
    users = collections.Counter(e["path"] for e in matched.values() if e["status"] in ("honest", "hack"))
    # round-2 systemic checks (default off, tools/matched_abi.py): matched sources that pass fewer
    # register arguments than the callee reads (ALBW_MATCHED_ARGCHECK=1), or whose prototypes map
    # ARM argument registers to other i386 slots than the Ghidra side / return structs by value
    # (ALBW_MATCHED_ABICHECK=1: long long in r2:r3, float/int order, sret) are built from their
    # Ghidra decompilation instead
    abi_flagged = {}
    chk_args = os.environ.get("ALBW_MATCHED_ARGCHECK") == "1"
    chk_abi = os.environ.get("ALBW_MATCHED_ABICHECK") == "1"
    if chk_args or chk_abi:
        import matched_abi
        cand = {ad: e["path"] for ad, e in matched.items() if e["status"] in ("honest", "hack") and users[e["path"]] == 1}
        abi_flagged, st = matched_abi.check(cand, OUT, os.path.join(OUT, "abi_ir"), sigs, args=chk_args, abi=chk_abi,
                                            jobs=a.jobs)
        abi_flagged = {ad: why for ad, why in abi_flagged.items() if ghidra_source(ad)}
        json.dump({"stats": st, "flagged": abi_flagged}, open(os.path.join(OUT, "matched_abi.json"), "w"), indent=1,
                  sort_keys=True)
        print("matched ABI check (args=%s abi=%s): %d matched functions built from Ghidra instead %s"
              % (chk_args, chk_abi, len(abi_flagged), dict(st)))
    by_path = collections.defaultdict(list)
    source_of = {}
    for addr, e in matched.items():
        if e["status"] in ("honest", "hack") and users[e["path"]] == 1 and addr not in abi_flagged:
            by_path[e["path"]].append(addr)
            source_of[addr] = "matched"
    for addr in set(matched) | set(ghidra) | set(extra):
        if addr in source_of:
            continue
        if v4_stage() >= 2 and addr in V4_NOT_FUNCTIONS:
            continue
        g = ghidra_source(addr)
        if g:
            by_path[g].append(addr)
            source_of[addr] = "ghidra"
    only = set(x.upper() for x in a.only.split(",") if x)
    jobs = [(p, sorted(ad), None) for p, ad in sorted(by_path.items()) if not only or only & set(ad)]
    with cf.ThreadPoolExecutor(a.jobs) as ex:
        res = list(ex.map(build_one, jobs))

    # names nobody can resolve: not address-named, not aliased, not system library, not defined
    import gen_stubs
    system = gen_stubs.system_symbols()
    aliases = set()
    for f in ("symbol_aliases.txt", "symbol_aliases_manual.txt"):
        path = os.path.join(ROOT, "native", f)
        if os.path.exists(path):
            aliases |= {l.split()[0] for l in open(path) if l.strip() and not l.startswith("#")}
    defined_all = {d for r in res if r["ok"] for d in r["defs"]}

    def unresolvable(name):
        return not (name.startswith(("func_", "data_", "DAT_", "PTR_", "_DAT_", "__")) or "Ram" in name
                    or name == "_GLOBAL_OFFSET_TABLE_"  # provided by the linker (PIC code)
                    or name in aliases or name in system or name in defined_all
                    or re.match(r"^[su]_.*_[0-9a-f]{8}$", name))

    # second round: matched sources whose function could not be identified, that failed to
    # compile, or that reference names nothing can resolve (generic names like g/reg/dtor from
    # permuter-style matches) fall back to the address's Ghidra decompilation
    retry = []
    why = collections.Counter()
    layout_why, layout_n = collections.Counter(), 0
    matched_paths = {r["path"] for r in res if source_of.get(r["addrs"][0]) == "matched"}
    for r in res:
        if source_of.get(r["addrs"][0]) != "matched":
            continue
        miss = r["addrs"] if not r["ok"] else r["missing_primary"]
        if r["ok"] and any(unresolvable(u) for u in r["und"]):
            miss = r["addrs"]
            why.update(u for u in r["und"] if unresolvable(u))
        if r["ok"] and r.get("layout64"):
            # 64-bit: pointer-sized words in game memory -> the Ghidra version (4-byte words)
            miss = r["addrs"]
            layout_why.update(r["layout64"])
            layout_n += 1
        for addr in miss:
            g = ghidra_source(addr)
            if g:
                retry.append((g, [addr], None))
                source_of[addr] = "ghidra"
    if retry:
        with cf.ThreadPoolExecutor(a.jobs) as ex:
            fb = list(ex.map(build_one, retry))
        # a matched object whose address now has a working Ghidra fallback must leave the link:
        # both export the same weak func_<ADDR>, and ld would keep whichever comes first (the
        # matched one, with its unresolvable names turned into tripwire stubs)
        replaced = {ad for r in fb if r["ok"] for ad in r["primary"]}
        res = [r for r in res if not (r["path"] in matched_paths and set(r["addrs"]) <= replaced)]
        res += fb
        print("fallback to Ghidra for %d matched functions (unidentified or not compiling)" % len(retry))
        print("  most common unresolvable names: %s" % why.most_common(25))
    if ARCH64:
        print("64-bit layout-critical matched sources (pointer-sized game-memory words): %d %s"
              % (layout_n, dict(layout_why)))
    print("sources: %d matched, %d Ghidra" % (sum(v == "matched" for v in source_of.values()),
                                              sum(v == "ghidra" for v in source_of.values())))

    # final outcome per address: a later (fallback) success supersedes an earlier failure
    done = {a for r in res if r["ok"] for a in r["primary"]}
    ok = [r for r in res if r["ok"]]
    failed = [r for r in res if not r["ok"] and not set(r["addrs"]) <= done]
    defined = set()
    for r in ok:
        defined.update(r["defs"])
    und = collections.Counter()
    for r in ok:
        for u in r["und"]:
            if u not in defined:
                und[u] += 1
    have_fn = {a for r in ok for a in r["primary"]}
    no_primary = [(r["path"], a) for r in ok for a in r["missing_primary"] if a not in done]
    kinds = collections.Counter()
    for u in und:
        kinds["function" if u.startswith("func_") else "data" if u.startswith("data_") else
              "ghidra-pool(EU)" if "Ram" in u or u.startswith("DAT_") else "other"] += 1
    fails = collections.Counter(re.sub(r"'[^']*'", "'X'", r["error"])[:90] for r in failed)
    objects = [os.path.join(OUT, "obj", r["path"] + ".final.o") for r in ok]
    rep = {"objects": objects, "sources": len(res), "compiled": len(ok), "failed": [(r["path"], r["error"]) for r in failed],
           "functions_exported": len(have_fn), "functions_total": len(source_of),
           "no_primary": no_primary, "unresolved": dict(und.most_common())}
    json.dump(rep, open(os.path.join(OUT, "report.json"), "w"), indent=1)
    print("sources %d | compiled %d | failed %d" % (len(res), len(ok), len(failed)))
    print("functions exported under func_<ADDR>: %d of %d with source (no clear primary symbol: %d)"
          % (len(have_fn), len(source_of), len(no_primary)))
    print("unresolved symbols: %d  %s" % (len(und), dict(kinds)))
    print("top compile failures:")
    for e, n in fails.most_common(12):
        print("  %5d  %s" % (n, e))


if __name__ == "__main__":
    main()
