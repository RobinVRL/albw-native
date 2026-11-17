#!/usr/bin/env python3
"""Inlined two-sided "approach" with its approach-from-above branch lost (BOOT_LOG 150).

The ARM inlines   v -> t by step s (s >= 0), from either side, no overshoot:
    vcmpe v, t ; bhs ABOVE ; vadd n, v, s ; ... (t <= n || v > n) ? t : n
    ABOVE: nop ; ble DONE ; vsub n, v, s ; ... n <= t ? t : (n <= v ? n : t)
Ghidra keeps only the first branch:
    X = V + S;
    if ((T <= X) || (X < V)) { D = T; } else { D = X; }
so a value above its target jumps to the target at once (a thrown pot fell into the floor).
For each linked source with such blocks, this checks that the function's EU code has at least as
many `nop` + `ble`/`bgt` + `vsub` "above" branches as the text has blocks, and writes
native/compilefix/func_X.c with `D = albw_approach(V, T, S)` (exact, see the helper below).

  tools/approach_fix.py [--fix] [--dis eu.dis]     (eu.dis: llvm-objdump of eu_full.o, see BOOT_LOG)
"""
import bisect, glob, json, os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BLOCK = re.compile(
    r'^(?P<ind>[ \t]*)(?P<x>\w+) = (?P<v>[^;\n]+?) \+ (?P<s>\w+);[ \t]*\n'
    r'[ \t]*if \(\((?P<t>[^()\n]+?) <= (?P=x)\) \|\| \((?P=x) < (?P=v)\)\) \{[ \t]*\n'
    r'[ \t]*(?P<d1>[^;\n]+?) = (?P<e1>[^;\n]+);[ \t]*\n'
    r'[ \t]*\}[ \t]*\n[ \t]*else \{[ \t]*\n'
    r'[ \t]*(?P<d2>[^;\n]+?) = (?P<e2>[^;\n]+);[ \t]*\n'
    r'[ \t]*\}', re.M)
HELPER = '''
#ifndef ALBW_APPROACH_DEFINED
#define ALBW_APPROACH_DEFINED
/* inlined two-sided approach (tools/approach_fix.py, BOOT_LOG 150): v -> t by s, no overshoot */
static float albw_approach(float v, float t, float s) {
    float n;
    if (v < t) { n = v + s; return (t <= n || v > n) ? t : n; }
    if (v > t) { n = v - s; if (n <= t) return t; return n <= v ? n : t; }
    return v;
}
#endif
'''


def strip_cast(e):
    m = re.match(r'^\(int\)ALBW_AS_U32\((.*)\)$', e) or re.match(r'^\(uint\)ALBW_AS_U32\((.*)\)$', e) \
        or re.match(r'^ALBW_AS_U32\((.*)\)$', e)
    return (m.group(1), True) if m else (e, False)


def above_branches(dis_lines, idx, start, end):
    i0 = bisect.bisect_left(idx, start)
    n = 0
    L = dis_lines
    for i in range(i0, len(L)):
        a, txt = L[i]
        if a >= end:
            break
        if txt.startswith('nop') and i + 2 < len(L):
            nx = ' '.join(t for _, t in L[i + 1:i + 6])
            if re.match(r'b(le|gt)\s', L[i + 1][1]) and 'vsub.f32' in nx:
                n += 1
    return n


def main():
    fix = '--fix' in sys.argv
    dis = sys.argv[sys.argv.index('--dis') + 1] if '--dis' in sys.argv else None
    os.chdir(ROOT)
    m = json.load(open('../albw-decomp-ai/shared/eu_usa_map.json'))
    starts = sorted(int(v['eu'], 16) for v in m.values())
    L = []
    for l in open(dis, errors='replace'):
        mm = re.match(r'\s+([0-9a-f]+):\s+[0-9a-f]{8}\s+(.*)$', l)
        if mm:
            L.append((int(mm.group(1), 16), mm.group(2).strip()))
    idx = [a for a, _ in L]
    r = json.load(open('build/decomp/report.json'))
    native = {}
    for d in ('compilefix', 'robust', 'gameplay', 'game', 'hot', 'route', 'core', 'framework'):
        for f in glob.glob('native/%s/func_*.c' % d):
            native[os.path.basename(f)] = f
    tot = fixed = 0
    for o in r['objects']:
        p = os.path.join('build/decomp', o.split('/obj/')[1].replace('.final.o', ''))
        if not p.endswith('.c') or 'ghidra_fallback' not in p:
            continue
        base = os.path.basename(p)
        src = native.get(base, p)
        if not os.path.exists(src):
            continue
        s = open(src, errors='replace').read()
        blocks = [b for b in BLOCK.finditer(s) if b.group('d1') == b.group('d2')]
        if not blocks:
            continue
        usa = base[5:13]
        if usa not in m:
            print('%s: not in the map, skipped' % src); continue
        eu = int(m[usa]['eu'], 16)
        nxt = starts[bisect.bisect_right(starts, eu)] if bisect.bisect_right(starts, eu) < len(starts) else eu + 0x4000
        nab = above_branches(L, idx, eu, nxt)
        tot += len(blocks)
        ok = nab >= len(blocks)
        print('%s: %d block(s), %d above-branch(es) in EU %06X..%06X -> %s' % (src, len(blocks), nab, eu, nxt,
              'fix' if ok else 'SKIP (check by hand)'))
        if not ok or not fix:
            continue
        if src != p and not src.startswith('native/compilefix'):
            print('  override outside compilefix, fix by hand'); continue
        def rep(b):
            e1, c1 = strip_cast(b.group('e1').strip())
            e2, c2 = strip_cast(b.group('e2').strip())
            if e1 != b.group('t').strip() or e2 != b.group('x'):
                return b.group(0)
            call = 'albw_approach(%s, %s, %s)' % (b.group('v'), b.group('t'), b.group('s'))
            if c1:
                call = '(int)ALBW_AS_U32(%s)' % call
            return '%s%s = %s;   /* two-sided approach restored (approach_fix) */' % (b.group('ind'), b.group('d1'), call)
        s2 = BLOCK.sub(lambda b: rep(b) if b.group('d1') == b.group('d2') else b.group(0), s)
        if s2 == s:
            print('  no block rewritten (shapes differ), fix by hand'); continue
        k = re.search(r'^\S[^\n;]*\b%s\(' % base[:-2], s2, re.M)
        if not k:
            print('  function header not found, skipped'); continue
        s2 = s2[:k.start()] + HELPER.lstrip('\n') + s2[k.start():]
        if src == p:
            s2 = ('/* compilefix: %s, the converted stage-2 text (%s) with inlined two-sided approaches\n'
                  ' * restored (tools/approach_fix.py, BOOT_LOG 150). */\n' % (base[:-2], p)) + s2
        open(os.path.join('native/compilefix', base), 'w').write(s2)
        fixed += 1
    print('blocks %d, files written %d' % (tot, fixed))


if __name__ == '__main__':
    main()
