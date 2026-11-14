"""Every function that references a string starting with sead:: / nw:: / nn:: (or other library tags)."""
import sys, re, json
sys.path.insert(0,'./native/refs/tools')
from reflib import *
from strs import strings_of
CEND = starts[-1] + 0x1000
res = {}
for eu in starts:
    usa = e2u[eu]
    try: ss = strings_of(usa)
    except Exception: continue
    ss = [s for s in ss if re.match(r'(sead|nw|nn|eft|lyt|ut)::|sead|Sead', s)]
    if ss: res[usa] = ss
json.dump(res, open('./native/refs/tools/seadstr.json','w'), indent=0)
for k,v in sorted(res.items()): print(k, v)
