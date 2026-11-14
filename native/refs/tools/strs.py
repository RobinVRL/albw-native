import sys;sys.path.insert(0,'./native/refs/tools')
from reflib import *
def strings_of(usa):
    eu=u2e[usa]; out=[]
    for i in dis(eu):
        if i.mnemonic=='ldr' and '[pc, #' in i.op_str:
            a=(i.address+8+int(i.op_str.split('#')[1].rstrip(']'),16)) & ~3
            if B<=a<END:
                w=rd(a); s=cstr(w) if B<=w<END else None
                if s and len(s)>=3 and all(32<=ord(c)<127 for c in s): out.append(s)
        if i.mnemonic=='add' and 'pc, #' in i.op_str:
            a=i.address+8+int(i.op_str.split('#')[1],16); s=cstr(a)
            if s and len(s)>=3 and all(32<=ord(c)<127 for c in s): out.append(s)
    return out
if __name__=='__main__':
    for u in sys.argv[1:]: print(u, strings_of(u))
