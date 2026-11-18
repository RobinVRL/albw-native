#!/usr/bin/env python3
"""Extract the game's decompressed ExeFS .code from YOUR OWN decrypted ROM dump (European release).

  tools/extract_code.py <rom.3ds|rom.cci|rom.cxi> [-o build/rom/eu_code.bin]

The build reads the game's data (strings, tables, vtables) from this file; nothing from it is ever
committed. The ROM must be decrypted (a plaintext ExeFS). The result is checked against the SHA-1
of the European release the port targets.
"""
import argparse
import hashlib
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EU_SHA1 = "2aeee593a695f2ce1196b844026567f227472f0b"
UNIT = 0x200


def blz_decompress(data):
    """Backward LZ77 (the ExeFS .code compression): decompresses from the end of the buffer."""
    word, extra = struct.unpack_from("<II", data, len(data) - 8)
    top, header = word & 0xFFFFFF, word >> 24
    out = bytearray(data) + bytearray(extra)
    src, dst, stop = len(data) - header, len(out), len(data) - top
    while src > stop:
        src -= 1
        flags = out[src]
        for _ in range(8):
            if src <= stop:
                break
            if flags & 0x80:
                src -= 2
                v = out[src] | out[src + 1] << 8
                n, back = (v >> 12) + 3, (v & 0xFFF) + 3
                for _ in range(n):
                    dst -= 1
                    out[dst] = out[dst + back]
            else:
                src -= 1
                dst -= 1
                out[dst] = out[src]
            flags = flags << 1 & 0xFF
    return bytes(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("rom")
    ap.add_argument("-o", "--out", default=os.path.join(ROOT, "build", "rom", "eu_code.bin"))
    a = ap.parse_args()
    with open(a.rom, "rb") as f:
        head = f.read(0x200)
        if head[0x100:0x104] == b"NCCH":
            base = 0
        elif head[0x100:0x104] == b"NCSD":
            base = struct.unpack_from("<I", head, 0x120)[0] * UNIT   # partition 0: the game
        else:
            sys.exit("not a .3ds/.cci (NCSD) or .cxi (NCCH) file")
        f.seek(base)
        ncch = f.read(0x200)
        exheader = f.read(0x400)
        exefs = struct.unpack_from("<I", ncch, 0x1A0)[0] * UNIT
        f.seek(base + exefs)
        table = f.read(0x200)
        code = None
        for i in range(10):
            name, off, size = struct.unpack_from("<8sII", table, i * 16)
            if name.rstrip(b"\0") == b".code":
                f.seek(base + exefs + 0x200 + off)
                code = f.read(size)
        if code is None:
            sys.exit("no plaintext .code in the ExeFS: the ROM is encrypted (decrypt your dump first)")
    if exheader[0xD] & 1:
        code = blz_decompress(code)
    sha = hashlib.sha1(code).hexdigest()
    if sha != EU_SHA1:
        sys.exit("this .code (sha1 %s) is not the European release the port needs (%s)" % (sha, EU_SHA1))
    os.makedirs(os.path.dirname(os.path.abspath(a.out)), exist_ok=True)
    open(a.out, "wb").write(code)
    print("wrote %s (%d bytes, European release)" % (a.out, len(code)))


if __name__ == "__main__":
    main()
