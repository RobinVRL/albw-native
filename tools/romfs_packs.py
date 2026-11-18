import struct,sys,re
rom=sys.argv[1]; L3=int(sys.argv[2],16)
f=open(rom,'rb')
def rd(o,n): f.seek(L3+o); return f.read(n)
h=struct.unpack('<10I',rd(0,40))
dmo,dms,fmo,fms,fdo=h[3],h[4],h[7],h[8],h[9]
dm=rd(dmo,dms); fm=rd(fmo,fms)
def dpath(o):
    parts=[]
    while True:
        p,sib,ch,cf,hn,nl=struct.unpack_from('<6I',dm,o)
        n=dm[o+24:o+24+nl].decode('utf-16le')
        if o==0: break
        parts.append(n); o=p
    return '/'.join(reversed(parts))
files=[]; o=0
while o<len(fm):
    p,sib,doff,dsz,hn,nl=struct.unpack_from('<IIQQII',fm,o)
    files.append((dpath(p)+'/'+fm[o+32:o+32+nl].decode('utf-16le'),doff,dsz)); o=(o+32+nl+3)&~3
def yaz0(b):
    n=struct.unpack('>I',b[4:8])[0]; out=bytearray(); i=16
    while len(out)<n:
        c=b[i]; i+=1
        for k in range(8):
            if len(out)>=n: break
            if c&(0x80>>k): out.append(b[i]); i+=1
            else:
                b1,b2=b[i],b[i+1]; i+=2; d=((b1&0xf)<<8|b2)+1; ln=b1>>4
                if ln==0: ln=b[i]+0x12; i+=1
                else: ln+=2
                for _ in range(ln): out.append(out[-d])
    return bytes(out)
def sarc_names(b):
    if b[:4]!=b'SARC': return []
    bom='<' if b[6:8]==b'\xff\xfe' else '>'
    hl=struct.unpack(bom+'H',b[4:6])[0]
    cnt=struct.unpack(bom+'H',b[hl+6:hl+8])[0]
    nt=hl+12+cnt*16
    assert b[nt:nt+4]==b'SFNT'
    names=[]; base=nt+8
    for i in range(cnt):
        a=struct.unpack(bom+'I',b[hl+12+i*16+4:hl+12+i*16+8])[0]
        if a>>24:
            off=base+(a&0xffffff)*4; e=b.index(b'\0',off); names.append(b[off:e].decode())
    return names
pat=sys.argv[3] if len(sys.argv)>3 else None
for path,doff,dsz in files:
    if not path.endswith('.szs') or '/Archive/' not in '/'+path: continue
    d=rd(fdo+doff,dsz)
    try: names=sarc_names(yaz0(d) if d[:4]==b'Yaz0' else d)
    except Exception as e: continue
    for n in names:
        if n.startswith('World/Actor/') or n.startswith('Actor/') or '/Actor/' in n: print(path,n)
