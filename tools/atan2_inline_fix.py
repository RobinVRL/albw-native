#!/usr/bin/env python3
"""Replace the inlined sead atan2Idx copies that Ghidra decoded wrongly (BOOT_LOG 160d).

The game inlines atan2Idx(a, b) (EU 23652C..23663C in 00235ED4): a zero test of both operands,
then blt / bhi branches that pick a ratio <= 1 for the atan table 004905E0 and add a quadrant
offset. Ghidra printed the `blt` tests as `NAN(x) || NAN(y)` (only the V flag) and decoded the
next compare backwards, so the port divided the wrong way (ratios like 231, out of the table:
random crashes throwing bushes). Every copy has the same shape in the converted text:

    uVarK = in_fpscr & 0xfffffff;
    in_fpscr = uVarK | (uint)(A == Z) << 0x1e;
    bVarB = false;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      in_fpscr = uVarK | (uint)(B == Z) << 0x1e;
      bVarB = SUB41(in_fpscr >> 0x1e,0);
    }
    if (bVarB) {
      OUT = 0;
    }
    else { ... func_004905E0 ... }

which becomes `OUT = albw_atan2_inline(A, B);` (native/gameplay/func_004905E0.c, the ARM-verified
004904CC with the operands' roles exchanged). A block is replaced only when its else part calls
004905E0 and assigns nothing but OUT and flag / float temporaries.

  tools/atan2_inline_fix.py [--dry-run]
Native compilefix files are edited in place; other linked Ghidra texts get a compilefix copy.
"""
import glob
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
HEAD = re.compile(
    r'(?P<ind>[ \t]*)(?:(?P<u0>\w+) = in_fpscr & 0xfffffff;\n\s*in_fpscr = (?P=u0) \| '
    r'|(?P<u1>\w+) = in_fpscr & 0xfffffff \| )\(uint\)\((?P<a>.+?) == (?P<z>.+?)\) << 0x1e;\n'
    r'\s*(?P<b>\w+) = false;\n'
    r'\s*if \(SUB41\(\w+ >> 0x1e,0\)\) \{\n'
    r'\s*\w+ = [^\n]*?\(uint\)\((?P<bb>.+?) == (?P=z)\) << 0x1e;\n'
    r'\s*(?P=b) = SUB41\(\w+ >> 0x1e,0\);\n'
    r'\s*\}\n'
    r'(?P<mid>(?:[ \t]*[^\n{}]*;\n){0,3}?)'
    r'\s*if \((?P=b)\) \{\n'
    r'\s*(?P<out>\w+) = 0;\n'
    r'\s*\}\n'
    r'\s*else \{')
TEMP = re.compile(r'^(in_fpscr|uVar\d+|bVar\d+|fVar\d+|cVar\d+)$')


def block_end(text, open_brace):
    """index just past the brace matching text[open_brace] == '{'"""
    depth = 0
    for i in range(open_brace, len(text)):
        c = text[i]
        if c == '{':
            depth += 1
        elif c == '}':
            depth -= 1
            if depth == 0:
                return i + 1
    return -1


def fix_text(text):
    n = skipped = 0
    pos = 0
    while True:
        m = HEAD.search(text, pos)
        if not m:
            break
        ob = m.end() - 1
        end = block_end(text, ob)
        body = text[ob:end]
        assigned = set(re.findall(r'(?<![\w.>*\[])(\w+) = (?!=)', body))
        out = m.group('out')
        others = {v for v in assigned if v != out and not TEMP.match(v)}
        # `x = -x;` is Ghidra's picture of the register-only vneg: the ARM never stores it back
        others = {v for v in others
                  if re.findall(r'(?<![\w.>*\[])%s = (?!=)([^;]*);' % re.escape(v), body) != ['-' + v] * len(
                      re.findall(r'(?<![\w.>*\[])%s = (?!=)' % re.escape(v), body))}
        # a temporary that only holds the table result (`t = func_004905E0(...)`), not read after the
        # block before being assigned again
        for v in sorted(others):
            rhs = re.findall(r'(?<![\w.>*\[])%s = (?!=)([^;]*);' % re.escape(v), body)
            after = text[end:]
            first = re.search(r'\b%s\b' % re.escape(v), after)
            if rhs and all(r.startswith('func_004905E0(') for r in rhs) and (
                    not first or re.match(r'%s = (?!=)' % re.escape(v), after[first.start():])):
                others.discard(v)
        # output form: plain angle, or its top 16 bits `(T)((uint)(...) >> 0x10)`
        outs = re.findall(r'(?<![\w.>*\[])%s = (?!=)([^;]*);' % re.escape(out), body)
        cast = None
        if outs and all(re.match(r'\((\w+)\)\(\(uint\).*>> 0x10\)$', o) for o in outs):
            cast = re.match(r'\((\w+)\)', outs[0]).group(1)
            if any(not o.startswith('(%s)' % cast) for o in outs):
                others.add('<mixed casts>')
        elif any(re.search(r'>> 0x10', o) for o in outs):
            others.add('<unknown output form>')
        if end < 0 or 'func_004905E0' not in body or others:
            skipped += 1
            pos = m.end()
            continue
        call = 'albw_atan2_inline(%s,%s)' % (m.group('a'), m.group('bb'))
        if cast:
            call = '(%s)((uint)%s >> 0x10)' % (cast, call)
        flags = m.group('u0') or m.group('u1')
        repl = '%s%s%s = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */\n%s%s = %s;   /* inlined atan2Idx (atan2_inline_fix) */' % (
            m.group('mid'), m.group('ind'), flags, m.group('ind'), out, call)
        text = text[:m.start()] + repl + text[end:]
        pos = m.start() + len(repl)
        n += 1
    if n and 'albw_atan2_inline' not in text.split('albw_atan2_inline(', 1)[0]:
        text = 'int albw_atan2_inline(float a, float b);\n' + text
    return text, n, skipped


def main():
    dry = '--dry-run' in sys.argv
    os.chdir(ROOT)
    native = {os.path.basename(f)[:-2]: f for d in ('compilefix', 'robust', 'gameplay', 'game', 'hot', 'framework',
                                                     'core', 'route') for f in glob.glob('native/%s/func_*.c' % d)}
    total = files = 0
    seen = set()
    for o in json.load(open('build/decomp/report.json'))['objects']:
        rel = o.split('/build/decomp/obj/', 1)[-1][:-len('.final.o')]
        if not rel.startswith('ghidra_fallback/'):
            continue
        fn = os.path.basename(rel)[:-2]
        if fn in native:
            path, src_is_native = native[fn], True
        else:
            path, src_is_native = 'build/decomp/' + rel, False
        seen.add(fn)
        text = open(path, errors='replace').read()
        if 'func_004905E0' not in text:
            continue
        new, n, sk = fix_text(text)
        if n or sk:
            print('%s: %d replaced%s%s' % (fn, n, ', %d skipped' % sk if sk else '', ' (native)' if src_is_native else ''))
        if not n:
            continue
        total += n
        files += 1
        if dry:
            continue
        if src_is_native:
            open(path, 'w').write(new)
        else:
            hdr = ('/* compilefix: %s, the converted stage-2 text (%s): %d inlined atan2Idx copies replaced by\n'
                   ' * albw_atan2_inline (tools/atan2_inline_fix.py, BOOT_LOG 160d). */\n') % (fn, path, n)
            open('native/compilefix/%s.c' % fn, 'w').write(hdr + new)
    print('replaced %d inlined atan2 copies in %d files' % (total, files))


if __name__ == '__main__':
    main()
