#!/usr/bin/env python3
"""Compare two save states made by DIFFERENT builds, word by word, by meaning (debug aid for
native/runtime/ss_convert.c).

  tools/ss_diff.py OLD.state NEW.state [--part MEM1] [--limit 50]

Typical use: load an old-build state in the current build and save it again right away
(ALBW_ROUTE='at 60;load 0;wait 1;save 7;quit'), then diff the two files. Every word that points
into its own state's binary is named `symbol+offset` (each state's trailer holds its symbol table);
a word whose name differs between the two files was converted wrongly (or is game data that changed
during the frame in between, which is rare for pointers). Parts: MEM0 MEM1 ARNA POOL H3DR, the
static ranges are compared by name (RNGS).
"""
import argparse, bisect, struct, sys, zlib

TAGS = {}


def tag(s):
    return struct.unpack('<I', s.encode())[0]


def load(path):
    d = open(path, 'rb').read()
    magic, build, session, when, frame, raw, packed = struct.unpack_from('<8sQQqqQQ', d, 0)
    body = zlib.decompress(d[56:56 + packed])
    return body


def parse(body, mh_size=0, th_size=0):
    """sections by tag (offset, length); RNGS ranges; trailer pieces"""
    o = 4
    # XLAY is in the trailer: find it first (search from the end is unsafe), so walk with a guess
    secs = {}
    # MainHdr: AlbwCtx (8 words) + sp + base + len = 11 words on i386
    mh = 44
    mlen = struct.unpack_from('<I', body, o + 40)[0]
    o += mh + mlen
    rngs = []
    while o < len(body):
        t = struct.unpack_from('<I', body, o)[0]
        if t == tag('RNGS'):
            n = struct.unpack_from('<I', body, o + 4)[0]
            o += 8
            for _ in range(n):
                ln = struct.unpack_from('<I', body, o)[0]
                rngs.append((o + 4, ln))
                o += 4 + ln
            continue
        if t == tag('OSTH'):
            lay = secs.get('XLAY')
            raise RuntimeError('OSTH before trailer parse')
        ln = struct.unpack_from('<I', body, o + 4)[0]
        name = body[o:o + 4].decode('latin1')
        secs[name] = (o + 8, ln)
        o += 8 + ln
        if name == 'OSK1':
            break
    # thread records: need the layout from XLAY, which is after them: scan for it from the end
    xl = body.rfind(b'XLAY')
    lay = struct.unpack_from('<8I', body, xl + 8)
    th_size, th_len_off = lay[4], lay[5]
    while o < len(body) and struct.unpack_from('<I', body, o)[0] == tag('OSTH'):
        o += 4
        ln = struct.unpack_from('<I', body, o + th_len_off)[0]
        o += th_size + ln
    while o + 8 <= len(body):
        name = body[o:o + 4].decode('latin1')
        ln = struct.unpack_from('<I', body, o + 4)[0]
        secs[name] = (o + 8, ln)
        o += 8 + ln
    return secs, rngs


class Syms:
    def __init__(self, body, secs):
        o, ln = secs['SYMS']
        p = o
        nsec = struct.unpack_from('<I', body, p)[0]; p += 4
        self.secs = []
        for i in range(nsec):
            a, s, f = struct.unpack_from('<3I', body, p)
            nm = body[p + 12:p + 36].split(b'\0')[0].decode()
            self.secs.append((a, s, f, nm))
            p += 36
        nsym = struct.unpack_from('<I', body, p)[0]; p += 4
        st = p; p += nsym * 16
        strn = struct.unpack_from('<I', body, p)[0]; p += 4
        strtab = body[p:p + strn]
        syms = []
        for i in range(nsym):
            name, val, size, info, other, shndx = struct.unpack_from('<IIIBBH', body, st + i * 16)
            typ = info & 15
            if typ not in (0, 1, 2) or not val or shndx == 0 or shndx >= 0xff00:
                continue
            nm = strtab[name:strtab.index(b'\0', name)].decode('latin1')
            if not nm or nm[0] in '.$':
                continue
            syms.append((val, size, nm))
        syms.sort()
        self.addr = [s[0] for s in syms]
        self.syms = syms
        self.lo = min(a for a, s, f, n in self.secs if not n.startswith('.albw_'))
        self.hi = max(a + s for a, s, f, n in self.secs if not n.startswith('.albw_'))

    def name(self, v):
        if not (self.lo <= v < self.hi):
            return None
        i = bisect.bisect_right(self.addr, v) - 1
        while i >= 0:
            a, s, nm = self.syms[i]
            if v - a < max(s, 1) or (s == 0 and v - a < 0x1000):
                return '%s+%#x' % (nm, v - a)
            if s:
                break
            i -= 1
        for a, s, f, n in self.secs:
            if a <= v < a + s:
                return '%s+%#x' % (n, v - a)
        return '?'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('old')
    ap.add_argument('new')
    ap.add_argument('--part', default='MEM1')
    ap.add_argument('--limit', type=int, default=60)
    a = ap.parse_args()
    bo, bn = load(a.old), load(a.new)
    so, ro = parse(bo)
    sn, rn = parse(bn)
    yo, yn = Syms(bo, so), Syms(bn, sn)
    po, pn = so[a.part], sn[a.part]
    n = min(po[1], pn[1]) // 4
    wo = struct.unpack_from('<%dI' % n, bo, po[0])
    wn = struct.unpack_from('<%dI' % n, bn, pn[0])
    bad = 0
    from collections import Counter
    kinds = Counter()
    for i in range(n):
        x, y = wo[i], wn[i]
        nx, ny = yo.name(x), yn.name(y)
        if nx is None and ny is None:
            continue
        if nx == ny:
            kinds['same'] += 1
            continue
        if nx is not None and ny is None and x == y:
            kinds['kept (not a pointer?)'] += 1
            continue
        kinds['DIFF'] += 1
        if bad < a.limit:
            print('%s +%07x  old %08x %-40s new %08x %s' % (a.part, i * 4, x, nx, y, ny))
        bad += 1
    print(dict(kinds))


if __name__ == '__main__':
    main()
