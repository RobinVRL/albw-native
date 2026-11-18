import sys, json
sys.path.insert(0,'native/refs/tools')
from reflib import *
import capstone
md=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM)
kn=json.load(open('native/refs/tools/known.json'))
CEND=starts[-1]
for eu in starts:
    end=fend(eu)
    if end-eu>0x60: continue
    ins=list(md.disasm(code[eu-B:end-B],eu))
    svcs=[i.op_str for i in ins if i.mnemonic=='svc']
    if svcs:
        print(e2u[eu], end-eu, svcs, (kn.get(e2u[eu]) or [''])[0][:90])
