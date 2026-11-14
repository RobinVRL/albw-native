import json, re, glob, os, collections
PORT = "."
os.chdir(os.path.dirname(os.path.abspath(__file__)))
ann = json.load(open("annotated.json"))
LIVE = json.load(open("livein.json")) if os.path.exists("livein.json") else None
FLOAT_T = re.compile(r"^(float|fparam)")
def param_reg(params, idx):
    """ARM register of Ghidra parameter idx (AAPCS-VFP: core args r0-r3, floats s0-s15)."""
    core = 0; fl = 0
    for i, p in enumerate(params):
        isf = p.split()[0] == "float" if p.split() else False
        is64 = p.split()[0] in ("double", "longlong", "ulonglong", "undefined8") if p.split() else False
        if isf:
            reg = "s%d" % fl; fl += 1
        elif p.split() and p.split()[0] == "double":
            fl += fl & 1; reg = "s%d" % fl; fl += 2
        else:
            if is64:
                core += core & 1
            reg = "r%d" % core if core < 4 else "stack"; core += 2 if is64 else 1
        if i == idx:
            return reg
    return None
raw = {}
def rawtext(a):
    if a not in raw:
        p = os.path.join(PORT, "build", "ghidra_analyzed2", "func_%s.c" % a)
        if not os.path.exists(p):
            p = os.path.join(PORT, "build", "ghidra_extra", "func_%s.c" % a)
        raw[a] = open(p, errors="replace").read() if os.path.exists(p) else None
    return raw[a]
_pu = {}
def param_used(callee, idx, depth=0):
    k = (callee, idx)
    if k in _pu:
        return _pu[k]
    if depth > 8:
        return True
    _pu[k] = True  # recursion guard: assume used
    r = _param_used(callee, idx, depth)
    _pu[k] = r
    return r
def _param_used(callee, idx, depth):
    t = rawtext(callee)
    if t is None:
        return True
    m = re.search(r"\n[^\n(]*\bfunc_%s\s*\(([^)]*)\)\s*\n\{" % callee, t)
    if not m:
        return True
    params = [p.strip() for p in m.group(1).split(",")]
    if idx >= len(params) or params == ["void"]:
        return False  # not even declared -> extra argument, ignored
    name = re.findall(r"(\w+)\s*$", params[idx])
    if not name:
        return True
    if LIVE is not None and callee in LIVE:
        reg = param_reg(params, idx)
        if reg and reg != "stack":
            return reg in LIVE[callee]
    body = t[m.end()-1:]
    for mm in re.finditer(r"\b%s\b" % name[0], body):
        ctx = arg_contexts(body, mm.start())
        after = body[mm.end():mm.end()+1]; before = body[mm.start()-1]
        if ctx and after in ",)" and before in "(, " and ctx[0] != callee:
            if not param_used(ctx[0], ctx[1], depth + 1):
                continue
        return True
    return False
def arg_contexts(body, start):
    """If position start is directly an argument of func_X(...), return (X, index)."""
    depth = 0; i = start - 1; idx = 0
    while i >= 0:
        ch = body[i]
        if ch == ")": depth += 1
        elif ch == "(":
            if depth == 0:
                m = re.search(r"\bfunc_([0-9A-F]{8})\s*$", body[:i])
                return (m.group(1), idx) if m else None
            depth -= 1
        elif ch == "," and depth == 0: idx += 1
        elif ch in ";{}" : return None
        i -= 1
    return None
out = {}
stats = collections.Counter()
for row in ann:
    a, cls, d, nc, tg, regs, why, eu = row
    if "A" not in cls:
        continue
    p = (glob.glob(os.path.join(PORT, "build/decomp/ghidra_fallback/*/func_%s.c" % a)) or
         glob.glob(os.path.join(PORT, "build/ghidra_analyzed2/func_%s.c" % a)) or
         glob.glob(os.path.join(PORT, "build/ghidra_extra/func_%s.c" % a)))[0]
    t = open(p).read(); b0 = t.find("\n{"); body = t[b0:]
    real = []
    for r in regs:
        okall = True
        for m in re.finditer(r"\b%s(?:_[0-9a-f]+)?\b" % r, body):
            line_start = body.rfind("\n", 0, m.start()) + 1
            line = body[line_start:body.find("\n", m.end())]
            if re.match(r"\s*[\w\s\*]+\b%s(?:_[0-9a-f]+)?;\s*$" % r, line):
                continue  # declaration
            ctx = arg_contexts(body, m.start())
            # must be the whole argument
            after = body[m.end():m.end()+1]
            before = body[m.start()-1]
            if ctx and after in ",)" and before in "(, ":
                if not param_used(*ctx):
                    continue
            okall = False
            break
        if not okall:
            real.append(r)
    out[a] = real
    stats["real" if real else "benign"] += 1
json.dump(out, open("real_regs.json", "w"))
print(stats)
