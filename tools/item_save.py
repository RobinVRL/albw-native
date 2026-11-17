#!/usr/bin/env python3
"""Make a test game save with equipment, from an existing save (debug aid; the save is the game's own
format, so it works with the port and with Azahar).

  tools/item_save.py IN_SAVE_DIR OUT_SAVE_DIR [--sword N] [--shield N] [--items N] [--rupees N]
                     [--hearts N] [--set OFFSET=VALUE ...]

Layout of Save_0.bin (5636 bytes; offsets from the MIT-licensed community editor
github.com/Brionjv/TLOZ-A-Link-Between-Worlds-Save-Editor, Form1.vb; checked against the port's saves):
  0xC0 current hearts, 0xC1 max hearts (quarter hearts: 12 = 3 hearts), 0xC2 heart pieces
  0xC3-0xC7 bottle contents (checked in the port's Items menu, BOOT_LOG 146: 0 empty, 1 fairy,
            2 red potion, 3 yellow potion, 4 purple potion, 5 blue potion), 0xC8 sword, 0xC9 shield
  0xCA bombs, 0xCB boomerang, 0xCC bow, 0xCD bow of light, 0xCE hammer, 0xCF sand rod, 0xD0 fire rod,
  0xD1 ice rod, 0xD2 tornado rod, 0xD3 hookshot, 0xD4 lamp, 0xD5 net, 0xD6 hint glasses, 0xD7 bell,
  0xD8 / 0xD9 fruits, 0xDA-0xDE bottles, 0xDF Ravio's bracelet
  0x18E rupees (u16)
  0xDFC CRC-32 (zlib) of bytes 0x000-0xDFB, little-endian
The file select opens the last-used file (SaveCommon.bin), not necessarily Save_0.bin: --all-slots
writes the result to Save_0/1/2.bin so a START, A, A boot always picks it up.
Editing these bytes alone does NOT give a usable sword (BOOT_LOG 141: the original game in Azahar
does not swing with such a save either). Use real saves for gameplay tests: the speedrun saves in
~/.local/share/albw-port/fixtures/il_saves (sword 2..5 = levels, items 1..3).
"""
import argparse
import os
import shutil
import struct
import zlib


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('src')
    ap.add_argument('dst')
    ap.add_argument('--sword', type=int)
    ap.add_argument('--shield', type=int)
    ap.add_argument('--items', type=int, help='value for all of 0xCA..0xD5')
    ap.add_argument('--rupees', type=int)
    ap.add_argument('--hearts', type=int, help='max = current hearts, in quarter hearts')
    ap.add_argument('--set', action='append', default=[], help='OFFSET=VALUE (hex offset)')
    ap.add_argument('--bottles', help='contents of bottles 1..5, e.g. 1,2,3,4,5 (see above)')
    ap.add_argument('--all-slots', action='store_true', help='also write Save_1.bin and Save_2.bin')
    a = ap.parse_args()
    if os.path.abspath(a.src) != os.path.abspath(a.dst):
        if os.path.exists(a.dst):
            shutil.rmtree(a.dst)
        shutil.copytree(a.src, a.dst)
    p = os.path.join(a.dst, 'savedata', 'Save_0.bin')
    d = bytearray(open(p, 'rb').read())
    if a.sword is not None: d[0xC8] = a.sword
    if a.shield is not None: d[0xC9] = a.shield
    if a.items is not None:
        for o in range(0xCA, 0xD6): d[o] = a.items
    if a.rupees is not None: struct.pack_into('<H', d, 0x18E, a.rupees)
    if a.hearts is not None: d[0xC0] = d[0xC1] = a.hearts
    if a.bottles:
        for i, v in enumerate(a.bottles.split(',')[:5]):
            d[0xC3 + i] = int(v, 0)
    for s in a.set:
        o, v = s.split('=')
        d[int(o, 16)] = int(v, 0)
    struct.pack_into('<I', d, 0xDFC, zlib.crc32(bytes(d[:0xDFC])))
    open(p, 'wb').write(d)
    print('wrote %s' % p)
    if a.all_slots:
        for i in (1, 2):
            q = os.path.join(a.dst, 'savedata', 'Save_%d.bin' % i)
            open(q, 'wb').write(d)
            print('wrote %s' % q)


if __name__ == '__main__':
    main()
