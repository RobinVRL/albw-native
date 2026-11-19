#!/usr/bin/env python3
"""i386 link step: zero-extend the results of bool-returning decomp functions.

    tools/boolret.py <albw_game.o (ld -r)> <objs.txt> <out objs list> <out adapters .s> <native_defs>

Why: C/C++ `bool` results come back in %al only on i386 (upper bits of %eax undefined, e.g.
f_569238 = `setne %al` with the object pointer still in %eax). ARM returns the whole r0 = 0/1,
and the Ghidra-converted callers read the whole register (a virtual `count()` returned
0xd3c9e701 and a layout loop ran for ever). x86-64 has the same convention, so this matters on
both targets.  For every decomp function whose returns all set only %al (setcc / movb $imm) or
put 0/1 into %eax, the defining object's weak global func_X is renamed to func_X__bool (in a
copy of the object) and a weak adapter func_X (call, movzbl %al, %eax) takes its name; all
external references (converted callers, vtables) go through the adapter, the object's own C++
callers keep using the local symbol.  Native strong definitions still win over the adapter."""
import re, subprocess, sys, os, collections

game_o, objs_txt, out_list, out_s, native_defs = sys.argv[1:6]
# x86-64 (tools/link64.sh: ALBW_ARCH=x86_64): same %al-only convention; the adapter differs
X64 = os.environ.get('ALBW_ARCH') == 'x86_64'
SP = '%rsp' if X64 else '%esp'
dis = subprocess.run(['llvm-objdump', '-d', '--no-show-raw-insn', game_o],
                     capture_output=True, text=True, check=True).stdout
funcs = collections.OrderedDict(); cur = None
for line in dis.splitlines():
    m = re.match(r'^[0-9a-f]+ <(.+)>:$', line)
    if m: cur = m.group(1); funcs.setdefault(cur, []); continue
    m = re.match(r'^\s+([0-9a-f]+):\s+(\S+)\s*(.*)$', line)
    if m and cur: funcs[cur].append((m.group(2), m.group(3).strip(), int(m.group(1), 16)))

# a 0/1 result in %al / %eax (the forms a C bool return compiles to)
def bool_write(op, arg):
    if op.startswith('set') and arg == '%al': return True
    if op == 'movb' and re.fullmatch(r'\$0x[01], %al', arg): return True
    if op == 'xorl' and arg == '%eax, %eax': return True
    if op == 'movl' and re.fullmatch(r'\$0x[01], %eax', arg): return True
    return False

def writes_eax(op, arg):
    if op.startswith(('cmp', 'test', 'push', 'call', 'j', 'ret')): return False
    return bool(re.search(r'(^|, )%(e?ax|al)$', arg))

JUMP_BYTE = [False]   # set by jumps_ok: some jump-in path's last write was a byte form (setcc / movb %al)

def jumps_ok(ins, lo, hi):
    """Every jump into the epilogue (addresses lo..hi) must come from a path whose last %eax/%al
    write is a 0/1 form (a three-way comparator does `mov $-1, %eax; jne epilogue` after a
    `setne %al` that falls through: 00429F14, whose -1 the adapter turned into 255, reversing the
    scene draw-list sort every frame: BOOT_LOG 93 [3d])."""
    for k, (op, arg, addr) in enumerate(ins):
        if not op.startswith('j'): continue
        m = re.match(r'(?:0x)?([0-9a-f]+)\b', arg)
        if not m: continue
        t = int(m.group(1), 16)
        if not (lo <= t <= hi): continue
        for b in range(k - 1, -1, -1):
            if ins[b][0].startswith('call'):
                break   # a callee's result passed through (zero-extending it stays harmless)
            if writes_eax(ins[b][0], ins[b][1]):
                if not bool_write(ins[b][0], ins[b][1]): return False
                if ins[b][1].endswith('%al'): JUMP_BYTE[0] = True
                break
        else:
            return False
    return True

def setcc_byte_regs(ins, j):
    """The two byte registers combined at ins[j] (and/or %Xl, %al) both got their last value from
    a setcc (or a 0/1 movb) earlier in the function (no call in between)."""
    regs = set(re.findall(r'%([abcd]l)', ins[j][1]))
    found = set()
    for b in range(j - 1, -1, -1):
        op, arg, _ = ins[b]
        if op.startswith('call') or op.startswith('j'): break
        for r in list(regs - found):
            if arg.endswith('%' + r):
                if (op.startswith('set') and arg == '%' + r) or (op == 'movb' and re.fullmatch(r'\$0x[01], %' + r, arg)) \
                        or (op in ('andb', 'orb', 'and', 'or') and re.fullmatch(r'%[abcd]l, %' + r, arg)):
                    found.add(r)
                else:
                    return False
        if found == regs: return True
    return False

def byte_return(ins):
    seen_byte = False
    rets = 0
    for i, (op, arg, _) in enumerate(ins):
        if op not in ('retl', 'retq', 'ret'): continue
        rets += 1
        j = i - 1
        # flag-only instructions between the result write and the ret (`movb $1, %al; testb ..;
        # je other; ret`: 00552FC0 isOnGround, whose 0x...01 %eax made 00553720 refuse Link's
        # interaction with the weather vane: BOOT_LOG 131) are stepped over too; conditional
        # jumps leave this path (their targets' rets are checked on their own)
        # stack-protector epilogue: `movl %gs:0x14, %ecx; cmpl ..(%esp), %ecx; jne __stack_chk_fail`
        # between the result write and the ret (only %ecx / %edx / %rcx written): 003A762C, whose
        # %al-only `arrived` result ended the door walk half way (BOOT_LOG 160aa)
        while j >= 0 and (ins[j][0] in ('popl', 'popq', 'pop') or
                          (ins[j][0].startswith('mov') and re.fullmatch(r'%[gf]s:0x(14|28), %[re][cd]x', ins[j][1])) or
                          (ins[j][0] in ('addl', 'leal', 'addq', 'leaq') and ins[j][1].endswith(SP)) or
                          ins[j][0].startswith(('test', 'cmp')) or
                          (ins[j][0].startswith('j') and not ins[j][0].startswith('jmp'))):
            j -= 1
        if j < 0: return False
        op2, a2, _ = ins[j]
        # jumps landing between the result write and the ret take other paths' %eax
        lo = ins[j + 1][2] if j + 1 < len(ins) else ins[i][2]
        JUMP_BYTE[0] = False
        if not jumps_ok(ins, lo, ins[i][2]): return False
        # byte results that reach the epilogue by a jump (FUN_004371d8: `mov $1, %al; ...; setne
        # %al; jmp epilogue` after a fall-through `xor %eax, %eax`: BOOT_LOG 112 [3d])
        if JUMP_BYTE[0]: seen_byte = True
        if op2.startswith('set') and a2 == '%al':
            seen_byte = True
        elif op2 == 'movb' and re.fullmatch(r'\$0x[01], %al', a2):
            seen_byte = True
        elif op2 in ('andb', 'orb', 'and', 'or') and re.fullmatch(r'%[abcd]l, %al', a2) and setcc_byte_regs(ins, j):
            # two bools combined in byte registers (`setne %al; and %dl, %al`, matched C++
            # `a && b && c`): %eax above %al still holds whatever was loaded into it (the object
            # pointer in Object5246::test = 005246D8: the typing state of the message window read
            # "done" and every dialogue box after the first stayed empty, BOOT_LOG 108 [3d])
            seen_byte = True
        elif op2 == 'xorl' and a2 == '%eax, %eax':
            pass
        elif op2 == 'movl' and re.fullmatch(r'\$0x[01], %eax', a2):
            pass
        else:
            return False
    return rets > 0 and seen_byte

def func_name(label):
    """func_X for a func_X label, or for a converted body labelled FUN_x (lowercase, the converter's
    local symbol) whose weak alias func_X sits at the same address (004371D8, BOOT_LOG 112)."""
    if re.fullmatch(r'func_[0-9A-F]{8}', label): return label
    m = re.fullmatch(r'FUN_([0-9a-f]{8})', label)
    return 'func_' + m.group(1).upper() if m else None

cands = {func_name(f) for f, ins in funcs.items() if func_name(f) and byte_return(ins)}
EXT = {f: 'movzbl %al, %eax' for f in cands}
# Small integer returns declared in the linked source (BOOT_LOG 128): u8 / s8 / u16 / s16 results
# come back in %al / %ax with the upper bits of %eax undefined (0054B260 `u8` = word >> 16 left in
# %eax: the flow's rail-move test read 0x164 for 100 and Link never dashed). The ARM returns the
# whole r0 extended; the converted callers read the whole register.
SMALL = [
    # explicit unsigned byte types only: `bool` comes from the machine-code check above; plain `char`
    # or a wrongly declared `bool` in a matched source would truncate a real int / pointer
    (r'(?:u8|uint8_t|unsigned\s+char|byte|undefined1|uchar)', 'movzbl %al, %eax'),
    (r'(?:s8|int8_t|signed\s+char)', 'movsbl %al, %eax'),
    (r'(?:u16|uint16_t|unsigned\s+short|ushort|undefined2|word)', 'movzwl %ax, %eax'),
    (r'(?:s16|int16_t|short|signed\s+short)', 'movswl %ax, %eax'),
]
def src_of(o):
    rel = o.split('/build/decomp/obj/', 1)[-1]
    if rel.endswith('.final.o'): rel = rel[:-len('.final.o')]
    return ('build/decomp/' + rel) if rel.startswith('ghidra_fallback/') or os.path.exists('build/decomp/' + rel) else ('../albw-decomp-ai/' + rel)
n_small = 0
for o in open(objs_txt).read().split():
    mo = re.search(r'func_([0-9A-F]{8})', os.path.basename(o))
    if not mo: continue
    addr = mo.group(1); f = 'func_' + addr
    sp = src_of(o)
    mode = os.environ.get('ALBW_SMALLRET', 'all')   # all / matched / ghidra / none (bisecting aid)
    if mode == 'none' or (mode == 'matched' and 'ghidra_fallback' in sp) or (mode == 'ghidra' and 'ghidra_fallback' not in sp):
        continue
    try: text = open(sp, errors='replace').read()
    except OSError: continue
    short = addr.lstrip('0') or '0'
    # the definition whose name carries this address (func_X, f_X, Class::func_X, f_XXXXXX ...)
    md = re.search(r'^[ \t]*(?:static\s+|inline\s+|extern\s+"C"\s+)*((?:const\s+)?[A-Za-z_][\w\s]*?)\s*\b[\w:]*?(?:%s|%s)\w*\s*\([^;{]*\)\s*(?:const\s*)?\{' % (addr, short), text, re.M | re.I)
    if not md: continue
    rt = re.sub(r'\b(static|inline|extern|const|volatile|virtual)\b', ' ', md.group(1)).strip()
    if '*' in md.group(1) or '&' in md.group(1): continue
    kinds = os.environ.get('ALBW_SMALLRET_KINDS')   # e.g. "movzbl,movswl" (bisecting aid)
    for pat, ins in SMALL:
        if kinds and ins.split()[0] not in kinds.split(','): continue
        if re.fullmatch(pat, rt):
            if f not in EXT: n_small += 1
            EXT.setdefault(f, ins)
            cands.add(f)
            break
native = set(open(native_defs).read().split())
cands -= native
# defining object of each weak func_X
nm = subprocess.run(['llvm-nm', '-A', '--defined-only', '@' + objs_txt], capture_output=True, text=True).stdout
owner = {}
for line in nm.splitlines():
    m = re.match(r'^(.*\.o): [0-9a-f]+ ([WT]) (func_[0-9A-F]{8})$', line)
    if m and m.group(3) in cands: owner.setdefault(m.group(3), m.group(1))
outdir = os.path.join(os.path.dirname(out_s), 'boolfix64' if X64 else 'boolfix')
os.makedirs(outdir, exist_ok=True)
by_obj = collections.defaultdict(list)
for f, o in owner.items(): by_obj[o].append(f)
repl = {}
for o, fs in by_obj.items():
    dst = os.path.join(outdir, o.replace('/', '_').lstrip('_'))
    args = ['llvm-objcopy'] + sum([['--redefine-sym', '%s=%s__bool' % (f, f)] for f in fs], []) + [o, dst]
    subprocess.run(args, check=True)
    repl[o] = dst
with open(out_list, 'w') as fh:
    for l in open(objs_txt).read().split():
        fh.write(repl.get(l, l) + '\n')
out = ['.text']
for f in sorted(owner):
    if X64:
        # System V: register arguments (rdi rsi rdx rcx r8 r9, xmm0-7, al) pass through untouched;
        # 16 stack words copied through r11 (as link64.sh's returns-this thunks); entry rsp = 8
        # mod 16: push + 128 -> call at 0 mod 16
        body = ['  push %rbx', '  sub $128, %rsp']
        for i in range(16):
            body += ['  mov %d(%%rsp), %%r11' % (144 + 8 * i), '  mov %%r11, %d(%%rsp)' % (8 * i)]
        body += ['  call %s__bool' % f, '  ' + EXT.get(f, 'movzbl %al, %eax'), '  add $128, %rsp', '  pop %rbx', '  ret']
        out += ['.weak %s' % f, '.type %s,@function' % f, '.p2align 4', '%s:' % f] + body
        continue
    out += ['.weak %s' % f, '.type %s,@function' % f, '.p2align 4', '%s:' % f,
            '  push %esi', '  push %edi', '  sub $84, %esp', '  lea 96(%esp), %esi',  # entry esp = 12 mod 16: 2 pushes + 84 -> call at 0 mod 16
            '  mov %esp, %edi', '  mov $16, %ecx', '  cld', '  rep movsl',
            '  call %s__bool' % f, '  ' + EXT.get(f, 'movzbl %al, %eax'), '  add $84, %esp', '  pop %edi', '  pop %esi', '  ret']
out.append('.section .note.GNU-stack,"",@progbits')
open(out_s, 'w').write('\n'.join(out) + '\n')
print('boolret: %d bool / small-integer returning functions get extending adapters (%d objects; %d from declared small return types)' % (len(owner), len(by_obj), n_small))
