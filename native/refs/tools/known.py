"""Collect the names our project already has for functions -> known.json {usa: [sources...]}"""
import json, re, glob, os
PORT = "."; DEC = "../albw-decomp-ai"
K = {}
def add(a, name, src):
    a = a.upper()
    K.setdefault(a, []).append("%s: %s" % (src, name.strip()[:160]))
for l in open(DEC + "/shared/symbols.jsonl"):
    try: d = json.loads(l)
    except Exception: continue
    add(d["addr"], d["name"], "symbols.jsonl")
for a, d in json.load(open(PORT + "/native/sdk_areas.json")).items():
    add(a, d.get("role", ""), "sdk_areas")
for f in glob.glob(PORT + "/native/symbol_aliases*.txt"):
    for l in open(f):
        m = re.match(r"(\S+)\s+func_([0-9A-Fa-f]{8})", l)
        if m and m.group(1).startswith("_ZN"): add(m.group(2), m.group(1), os.path.basename(f))
for f in [PORT + "/native/core/README.md", PORT + "/native/framework/README.md"]:
    for l in open(f):
        m = re.match(r"\|\s*([0-9A-F]{8})((?:\s*/\s*[0-9A-F]{8})*)[^|]*\|\s*([^|]+)\|", l)
        if m:
            addrs = [m.group(1)] + re.findall(r"[0-9A-F]{8}", m.group(2))
            for a in addrs: add(a, m.group(3), os.path.basename(os.path.dirname(f)) + "/README")
# file header comments of hand-written natives: "/* USA XXXXXXXX ...: name"
for f in glob.glob(PORT + "/native/*/func_*.c"):
    try: h = open(f, errors="ignore").read(400)
    except Exception: continue
    m = re.search(r"USA ([0-9A-F]{8})[^:]*:\s*([^\n]+)", h)
    if m: add(m.group(1), m.group(2), "native/" + os.path.basename(os.path.dirname(f)))
json.dump(K, open(os.path.join(os.path.dirname(os.path.abspath(__file__)), "known.json"), "w"), indent=0)
print(len(K))
