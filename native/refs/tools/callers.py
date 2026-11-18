import sys;sys.path.insert(0,'native/refs/tools')
from reflib import *
import capstone
_cache=None
def callgraph():
    global _cache
    if _cache: return _cache
    md=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM)
    calls={}
    for idx,eu in enumerate(starts):
        end=starts[idx+1] if idx+1<len(starts) else eu+0x400
        if end-eu>0x4000: end=eu+0x4000
        for i in md.disasm(code[eu-B:end-B],eu):
            if i.mnemonic in('bl','b','blx') and i.op_str.startswith('#0x'):
                t=int(i.op_str[1:],16)
                if t in e2u: calls.setdefault(e2u[t],set()).add(e2u[eu])
    _cache=calls; return calls
if __name__=='__main__':
    import pickle
    c=callgraph(); pickle.dump(c,open('native/refs/tools/callers.pkl','wb'))
    for u in sys.argv[1:]: print(u, sorted(c.get(u,[]))[:30])
