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
    m = re.match(r'^\s+[0-9a-f]+:\s+(\S+)\s*(.*)$', line)
    if m and cur: funcs[cur].append((m.group(1), m.group(2).strip()))

def byte_return(ins):
    seen_byte = False
    rets = 0
    for i, (op, arg) in enumerate(ins):
        if op not in ('retl', 'retq', 'ret'): continue
        rets += 1
        j = i - 1
        while j >= 0 and (ins[j][0] in ('popl', 'popq', 'pop') or
                          (ins[j][0] in ('addl', 'leal', 'addq', 'leaq') and ins[j][1].endswith(SP))):
            j -= 1
        if j < 0: return False
        op2, a2 = ins[j]
        if op2.startswith('set') and a2 == '%al':
            seen_byte = True
        elif op2 == 'movb' and re.fullmatch(r'\$0x[01], %al', a2):
            seen_byte = True
        elif op2 == 'xorl' and a2 == '%eax, %eax':
            pass
        elif op2 == 'movl' and re.fullmatch(r'\$0x[01], %eax', a2):
            pass
        else:
            return False
    return rets > 0 and seen_byte

cands = {f for f, ins in funcs.items() if re.fullmatch(r'func_[0-9A-F]{8}', f) and byte_return(ins)}
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
        body += ['  call %s__bool' % f, '  movzbl %al, %eax', '  add $128, %rsp', '  pop %rbx', '  ret']
        out += ['.weak %s' % f, '.type %s,@function' % f, '.p2align 4', '%s:' % f] + body
        continue
    out += ['.weak %s' % f, '.type %s,@function' % f, '.p2align 4', '%s:' % f,
            '  push %esi', '  push %edi', '  sub $84, %esp', '  lea 96(%esp), %esi',  # entry esp = 12 mod 16: 2 pushes + 84 -> call at 0 mod 16
            '  mov %esp, %edi', '  mov $16, %ecx', '  cld', '  rep movsl',
            '  call %s__bool' % f, '  movzbl %al, %eax', '  add $84, %esp', '  pop %edi', '  pop %esi', '  ret']
out.append('.section .note.GNU-stack,"",@progbits')
open(out_s, 'w').write('\n'.join(out) + '\n')
print('boolret: %d bool-returning functions get zero-extending adapters (%d objects)' % (len(owner), len(by_obj)))
