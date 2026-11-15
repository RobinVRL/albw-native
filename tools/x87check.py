#!/usr/bin/env python3
"""i386 x87 return-class check / fix on the linked binary.

    tools/x87check.py [build/albw]             report (LEAK / UNDER lines, summary on stderr)
    tools/x87check.py --thunks build/albw      asm of the pop adapters the binary needs
    tools/x87check.py --patch build/albw       redirect leaking direct calls to the adapters

Why: with -mfpmath=sse a float result still comes back in x87 st(0) on i386 (SysV i386 ABI).
The decompiled sources disagree about return classes (Ghidra's s0 pass-through `float`, the
matched/native `void`), so a float-returning callee called through a void/int prototype leaves
st(0) pushed; after 8 such calls the x87 stack overflows and every later float return is NaN.
x86-64 returns floats in xmm0, so this is purely an i386 hazard: rather than editing hundreds of
prototypes in other agents' folders, the i386 link redirects each leaking DIRECT call site to
func_X__x87pop (call func_X with the caller's argument words, `fstp %st(0)`, keep eax/edx).
Indirect (virtual) calls are not covered.  The report lists the source-level mismatches too.

Machine-code rules (no debug info in the decomp objects):
  callee returns float <=> an x87 load (fld*/fild*) is still on the stack at one of its rets
  caller takes a float <=> an x87 pop (fstp*/fistp*/ffreep/fxch/f*comip) follows the call before
                           the next call/jmp/ret
UNDER (caller pops, callee pushed nothing) is reported only: with an otherwise empty x87 stack
the masked underflow just yields a NaN value (that is a real bug when the ARM callee does return
a float in s0, e.g. returns-this functions whose __impl lost the float)."""
import re, subprocess, sys, collections, struct

POP = ('fstp', 'fistp', 'fisttp', 'ffreep', 'fxch', 'fucomip', 'fcomip')


def declared_non_float_functions(report='build/decomp/report.json'):
    """func_XXXXXXXX defined in a linked decomp source (or a native C file) with a non-float return."""
    import json, os, glob
    out, srcs = set(), []
    try:
        for o in json.load(open(report))['objects']:
            m = re.search(r'/obj/(.+?\.(?:cpp|c))\.final\.o$', o)
            if m: srcs.append(os.path.join(os.path.dirname(report), m.group(1)))
    except OSError:
        pass
    srcs += glob.glob('native/*/func_*.c')
    rx = re.compile(r'^[ \t]*(?:extern\s+"C"\s+)?(?:static\s+)?([A-Za-z_][\w \t\*]*?)\s*\b(func_[0-9A-F]{8})\s*\([^;{]*\)\s*\{', re.M)
    for f in srcs:
        try: t = open(f, errors='replace').read()
        except OSError: continue
        for m in rx.finditer(t):
            ret = m.group(1).split()[-1] if m.group(1).split() else ''
            if ret not in ('float', 'f32', 'double'):
                out.add(m.group(2))
    return out


def analyse(binary):
    dis = subprocess.run(['objdump', '-d', '--no-show-raw-insn', binary],
                         capture_output=True, text=True, check=True).stdout
    funcs = collections.OrderedDict(); cur = None
    for line in dis.splitlines():
        m = re.match(r'^[0-9a-f]+ <(.+)>:$', line)
        if m:
            cur = m.group(1)
            # a name defined twice (a weak decomp copy and a native override, two static
            # `target`s): keep the first body, which is the one the binary's calls bind to in
            # objdump order; the later copy is analysed under a suffixed name (a later
            # same-name body made func_00115B3C look float-returning, so every caller of a
            # function ending in a call to it was reported as leaking)
            if cur in funcs: cur = cur + '@dup%x' % len(funcs)
            funcs[cur] = []; continue
        m = re.match(r'^\s+([0-9a-f]+):\s+(\S+)\s*(.*)$', line)
        if m and cur: funcs[cur].append((int(m.group(1), 16), m.group(2), m.group(3)))
    # bound each body by its symbol size: code after it without a symbol of its own (local
    # functions of stripped objects) would otherwise be read as part of it (func_00115B3C, a
    # 46-byte void function, looked float-returning because of the code that follows it)
    sizes = {}
    for l in subprocess.run(['nm', '-S', '--defined-only', binary], capture_output=True, text=True).stdout.splitlines():
        p = l.split()
        if len(p) == 4 and p[2] in 'tTwW':
            sizes.setdefault(p[3], (int(p[0], 16), int(p[1], 16)))
    for name, ins in funcs.items():
        b = sizes.get(name.split('@dup')[0])
        if b and ins and ins[0][0] == b[0] and b[1]:
            funcs[name] = [x for x in ins if x[0] < b[0] + b[1]]

    # (a call to a float-returning function whose st(0) is left for the ret counts as a load:
    # the returns-this thunks pass their __impl's float through; iterate to a fixpoint)
    def returns_float(ins, known):
        for i, (_, op, _) in enumerate(ins):
            if not op.startswith('ret'): continue
            for _, op2, arg2 in reversed(ins[max(0, i - 24):i]):
                if op2.startswith(('fstp', 'fistp', 'fisttp', 'ffreep')): break
                if op2.startswith('call'):
                    m = re.match(r'^[0-9a-f]+ <([^>+]+)>$', arg2)
                    if m and m.group(1) in known: return True
                    break
                if op2.startswith(('fld', 'fild')): return True
        return False
    # declared return types from the linked sources: a function defined with a non-float return
    # never returns a float, even when its last call before `ret` is to a float-returning
    # function (matched sources that declare that callee void: 0048B5D4 / 004D7F70 -> 00115154,
    # the result was left on the x87 stack, boot stop 95b)
    declared_nonfloat = declared_non_float_functions()
    rets_float = set()
    while True:
        new = {f for f, ins in funcs.items() if f not in declared_nonfloat and returns_float(ins, rets_float)}
        if new == rets_float: break
        rets_float = new
    leak, under = [], []
    for f, ins in funcs.items():
        for i, (addr, op, arg) in enumerate(ins):
            if not op.startswith('call'): continue
            m = re.match(r'^[0-9a-f]+ <([^>+]+)>$', arg)
            if not m or m.group(1) not in funcs: continue
            callee = m.group(1)
            pops = False; passes = False
            for _, op2, _ in ins[i + 1:i + 40]:
                if op2.startswith('ret'): passes = f in rets_float; break
                if op2.startswith(('call', 'jmp')): break
                if op2.startswith(POP): pops = True; break
            # (a float function returning its callee's st(0) passes it on: not a leak)
            if callee in rets_float and not pops and not passes: leak.append((f, callee, addr))
            if callee not in rets_float and pops and '@' not in callee: under.append((f, callee, addr))
    return funcs, rets_float, leak, under


def thunk_asm(names):
    out = ['.text']
    for f in sorted(names):
        t = f + '__x87pop'
        out += ['.globl %s' % t, '.type %s,@function' % t, '.p2align 4', '%s:' % t,
                '  push %esi', '  push %edi', '  sub $84, %esp', '  lea 96(%esp), %esi',  # entry esp = 12 mod 16: 2 pushes + 84 -> call at 0 mod 16
                '  mov %esp, %edi', '  mov $16, %ecx', '  cld', '  rep movsl',
                '  call %s' % f, '  fstp %st(0)', '  add $84, %esp', '  pop %edi', '  pop %esi', '  ret']
    out.append('.section .note.GNU-stack,"",@progbits')
    return '\n'.join(out)


def patch(binary, funcs, leak):
    phdrs = subprocess.run(['llvm-readelf', '-lW', binary], capture_output=True, text=True).stdout
    loads = []
    for l in phdrs.splitlines():
        p = l.split()
        if p and p[0] == 'LOAD':
            loads.append((int(p[2], 16), int(p[1], 16), int(p[4], 16)))  # vaddr, offset, filesz
    def off(va):
        for v, o, n in loads:
            if v <= va < v + n: return o + va - v
        raise ValueError(hex(va))
    addr_of = {}
    for f, ins in funcs.items():
        if ins: addr_of[f] = ins[0][0]
    data = bytearray(open(binary, 'rb').read()); n = 0; missing = set()
    for caller, callee, site in leak:
        t = addr_of.get(callee + '__x87pop')
        if t is None: missing.add(callee); continue
        o = off(site)
        assert data[o] == 0xE8, hex(site)
        data[o + 1:o + 5] = struct.pack('<i', t - (site + 5)); n += 1
    open(binary, 'wb').write(data)
    print('x87: %d leaking call sites redirected to __x87pop adapters%s' %
          (n, (', no adapter for ' + ' '.join(sorted(missing))) if missing else ''))


if __name__ == '__main__':
    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    binary = args[0] if args else 'build/albw'
    funcs, rets_float, leak, under = analyse(binary)
    if '--thunks' in sys.argv:
        print(thunk_asm({c for _, c, _ in leak}))
    elif '--patch' in sys.argv:
        patch(binary, funcs, leak)
    else:
        for a, b, s in leak: print('LEAK  %s -> %s @%x' % (a, b, s))
        for a, b, s in under: print('UNDER %s -> %s @%x' % (a, b, s))
        print('# %d float-returning functions, %d leaking call sites, %d underflowing' %
              (len(rets_float), len(leak), len(under)), file=sys.stderr)
