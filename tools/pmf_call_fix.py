#!/usr/bin/env python3
"""Rewrite C++ pointer-to-member calls in matched sources to ARM-ABI calls.

    tools/pmf_call_fix.py [--dry-run]

Every `(A->*B)(args)` / `(A.*B)(args)` in the compiled matched C++ sources (decomp/jobs.json,
not the Ghidra texts) becomes `ALBW_PMF_CALL(A, B, args)` (decomp/include/albw_pmf.hpp), and the
file includes albw_pmf.hpp. The game's state tables hold ARM-ABI PMFs; the x86 compiler read a
virtual entry {0x10, 1} as the address 0x10 (crash at a warp hole, state machine 00231E58).
Both the snapshot (decomp/src/<rel>) and the dev tree's copy (build/decomp/<rel>) are rewritten
when present. Prints the files changed."""
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
INCLUDE = '#include "albw_pmf.hpp"\n'


def match_left(s, i):
    """index of the '(' that opens the group containing position i (depth -1 to the left)"""
    d = 0
    while i >= 0:
        c = s[i]
        if c in ')]':
            d += 1
        elif c in '([':
            if d == 0:
                return i if c == '(' else -1
            d -= 1
        i -= 1
    return -1


def match_right(s, i):
    """index of the ')' closing the group open at the left of position i"""
    d = 0
    while i < len(s):
        c = s[i]
        if c in '([':
            d += 1
        elif c in ')]':
            if d == 0:
                return i if c == ')' else -1
            d -= 1
        i += 1
    return -1


def rewrite(text):
    n = 0
    while True:
        m = re.search(r'->\*|(?<![\w)\]])\.\*|(?<=[\w)\]])\s*\.\*', text)
        if not m:
            break
        op = m.group(0).strip()
        k = m.start()
        lo = match_left(text, k - 1)
        hi = match_right(text, m.end())
        if lo < 0 or hi < 0:
            break
        j = hi + 1
        while j < len(text) and text[j] in ' \t\n':
            j += 1
        if j >= len(text) or text[j] != '(':
            break
        ae = match_right(text, j + 1)
        if ae < 0:
            break
        obj = text[lo + 1:k].strip()
        pm = text[m.end():hi].strip()
        args = text[j + 1:ae].strip()
        if op == '.*':
            obj = '&(%s)' % obj
        call = 'ALBW_PMF_CALL(%s, %s%s)' % (obj, pm, ', ' + args if args else '')
        text = text[:lo] + call + text[ae + 1:]
        n += 1
    return text, n


def strip_comments(t):
    return re.sub(r'//[^\n]*|/\*.*?\*/', '', t, flags=re.S)


def main():
    dry = '--dry-run' in sys.argv
    os.chdir(ROOT)
    total = 0
    for rel, _ in json.load(open('decomp/jobs.json')):
        if rel.startswith('ghidra_fallback') or not rel.endswith(('.cpp', '.cc', '.cxx')):
            continue
        for path in ('decomp/src/' + rel, 'build/decomp/' + rel):
            if not os.path.exists(path):
                continue
            t = open(path, errors='replace').read()
            if not re.search(r'->\*|\.\*', strip_comments(t)):
                continue
            new, n = rewrite(t)
            if n == 0:
                print('WARNING: %s: pattern found, nothing rewritten' % path)
                continue
            if INCLUDE not in new:
                new = INCLUDE + new
            total += n
            print('%s: %d call(s)' % (path, n))
            if not dry:
                open(path, 'w').write(new)
    print('%d calls rewritten' % total)


if __name__ == '__main__':
    main()
