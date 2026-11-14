import sys;sys.path.insert(0,'./native/refs/tools')
from reflib import *
a=int(sys.argv[1],16)
while rd(a-4) in e2u: a-=4
print("vtable EU %08X  prev words %08X %08X"%(a,rd(a-8),rd(a-4)))
for i,w in enumerate(vtable_at(a)):
    print("  [%2d] +0x%02X  %s  (EU %08X) len %d"%(i,i*4,e2u[w],w,fend(w)-w))
