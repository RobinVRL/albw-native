#!/usr/bin/env python3
"""Functions of the linked binary whose machine code ends in a `call` to a function that returns:
they run on into whatever follows them (BOOT_LOG 136/137: clang drops the rest of a path that reads
an uninitialised Ghidra register stand-in - extraout_r1, in_r3 - so the function has no return).

  tools/fallthrough_bin.py build/albw        (tools/link.sh runs it and prints the hits)

Known no-return callees and dead code (overridden weak copies keep their bytes after the label of
the function before them; uncalled Ghidra fragments) are listed below so only new cases show.
"""
import re
import subprocess
import sys

NORETURN = re.compile(r'__stack_chk_fail|abort|exit|runtime_fatal|longjmp|__assert|_Unwind|albw_ctx_jump|'
                      r'pthread_exit|__cxa_|fatal|tripwire|panic|terminate|stub_|unreachable|quit_now|'
                      r'albw_ctx_run_on|func_0010A98C')
KNOWN_DEAD = {
    'func_0016C058',   # followed by the overridden Ghidra copy of 0016C0FC (native/compilefix wins)
    'func_0023E464',   # Ghidra fragment ("missing from the decomp table"), no callers
}


def main():
    binary = sys.argv[1] if len(sys.argv) > 1 else 'build/albw'
    dis = subprocess.run(['objdump', '-d', '--no-show-raw-insn', binary], capture_output=True, text=True).stdout
    fn = last = None
    hits = []
    for line in dis.splitlines():
        m = re.match(r'^([0-9a-f]+) <(.+)>:$', line)
        if m:
            if fn and last and last[0] == 'call' and not NORETURN.search(last[1]) and fn not in KNOWN_DEAD:
                hits.append((fn, last[1]))
            fn, last = m.group(2), None
            continue
        m = re.match(r'^\s+[0-9a-f]+:\t(\S+)\s*(.*)$', line)
        if m and not m.group(1).startswith('nop') and m.group(1) not in ('xchg', 'int3'):
            last = (m.group(1), m.group(2))
    for f, c in hits:
        print('fall-through: %s ends in `call %s` (no return: check uninitialised extraout_* / in_r* reads)' % (f, c))
    return 1 if hits else 0


if __name__ == '__main__':
    sys.exit(main())
