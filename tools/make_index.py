#!/usr/bin/env python3
"""Generate the project's lookup tables so nobody has to grep the whole tree (or .claude-tmp).

  python3 tools/make_index.py          # writes INDEX.md and build/index/funcs.tsv
  python3 tools/where.py 0041E368      # every definition of func_0041E368 (see where.py)

INDEX.md (committed): the docs, the source directories and what they hold, every tool with its
one-line summary, and every ALBW_* environment switch with where it is read and its comment.
build/index/funcs.tsv (not committed, build output): address -> each file that defines
func_<addr> (native overrides and the decomp sources), from file names and definitions only.

Cheap: reads only native/, tools/, the top-level scripts and file names under build/decomp."""
import os
import re
import sys
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

DIRS = {
    "native/platform": "window, GL context, input, frame pacing (SDL3)",
    "native/frontend": "Qt GUI frontend",
    "native/runtime": "runtime support: fatal/backtrace, TLS, low-4GB memory (64-bit)",
    "native/sdk": "the 3DS SDK replaced at the API level (gfx, fs, snd, h3d, lyt, os, services, ...)",
    "native/render": "OpenGL renderer: command decode at load, h3d models, fragment lighting, hand-written GLSL",
    "native/audio": "mixer / output / effects",
    "native/assets": "asset format readers",
    "native/core": "sead core (heap, etc.)",
    "native/framework": "game framework replacements",
    "native/game": "native rewrites of game functions (func_<USA addr>), incl. static constructors",
    "native/gameplay": "native gameplay functions (audited, see native/gameplay/AUDIT.md)",
    "native/robust": "robustness rewrites of game functions",
    "native/compilefix": "hand-fixed copies of decompiled functions (converter defects), one per file",
    "native/route": "boot-route functions rewritten from the ARM",
    "native/hot": "hot-path functions (performance), with tests in native/hot/test",
    "native/refs": "reference material",
    "native/include": "shared headers (sead.h, gptr.h)",
    "tools": "build, conversion and analysis scripts (below)",
    "build/decomp": "converted decomp sources and objects (generated; ghidra_fallback/ = Ghidra-derived)",
}

GETENV = re.compile(r'getenv\(\s*"(ALBW_[A-Z0-9_]+)"')
SHVAR = re.compile(r'\$\{?(ALBW_[A-Z0-9_]+)')
PYENV = re.compile(r'environ(?:\.get\(|\[)\s*["\'](ALBW_[A-Z0-9_]+)')
FUNCDEF = re.compile(r'^[A-Za-z_][\w \*\(\),]*?\bfunc_([0-9A-Fa-f]{8})\s*\([^;]*$', re.M)


def rel(p):
    return os.path.relpath(p, ROOT)


def walk(top, exts):
    for d, dirs, files in os.walk(os.path.join(ROOT, top)):
        dirs[:] = [x for x in dirs if not x.startswith(".") and x != "__pycache__"]
        for f in files:
            if f.endswith(exts):
                yield os.path.join(d, f)


def comment_near(lines, i):
    """the comment on line i, else the nearest comment within 3 lines above"""
    for j in range(i, max(-1, i - 4), -1):
        m = re.search(r'(?://|/\*|#)\s*(.+?)\s*(?:\*/)?$', lines[j])
        if m and not lines[j].lstrip().startswith("#include"):
            t = m.group(1)
            if len(t) > 8:
                return t[:160]
    return ""


def env_switches():
    found = defaultdict(list)
    srcs = list(walk("native", (".c", ".h", ".cpp"))) + list(walk("tools", (".py", ".sh"))) + \
        [os.path.join(ROOT, f) for f in os.listdir(ROOT) if f.endswith(".sh")]
    for p in srcs:
        try:
            lines = open(p, errors="replace").read().split("\n")
        except OSError:
            continue
        for i, l in enumerate(lines):
            for rx in (GETENV, SHVAR, PYENV):
                for m in rx.finditer(l):
                    found[m.group(1)].append((rel(p), i + 1, comment_near(lines, i)))
    return found


def tool_summary(p):
    s = open(p, errors="replace").read(4000)
    if p.endswith(".py"):
        m = re.search(r'^(?:#![^\n]*\n)?(?:#[^\n]*\n)*\s*(?:"""|\'\'\')\s*(.+?)$', s, re.M)
        if m:
            return m.group(1).strip()[:160]
    for l in s.split("\n")[1:12]:
        l = l.strip()
        if l.startswith("#") and len(l) > 3 and not l.startswith("#!"):
            return l.lstrip("# ").strip()[:160]
    return ""


def doc_title(p):
    for l in open(p, errors="replace"):
        if l.strip():
            return l.strip().lstrip("# ")[:120]
    return ""


def funcs_tsv():
    defs = defaultdict(list)
    for top in ("native", "build/decomp/ghidra_fallback", "build/decomp/src"):
        if not os.path.isdir(os.path.join(ROOT, top)):
            continue
        for p in walk(top, (".c", ".cpp")):
            name = os.path.basename(p)
            m = re.match(r'func_([0-9A-Fa-f]{8})\.c', name)
            addrs = {m.group(1).upper()} if m else set()
            if top == "native" and not m:  # multi-function native files: scan definitions
                try:
                    addrs |= {a.upper() for a in FUNCDEF.findall(open(p, errors="replace").read())}
                except OSError:
                    pass
            for a in addrs:
                defs[a].append(rel(p))
    out = os.path.join(ROOT, "build", "index")
    os.makedirs(out, exist_ok=True)
    with open(os.path.join(out, "funcs.tsv"), "w") as f:
        for a in sorted(defs):
            f.write(a + "\t" + "\t".join(sorted(defs[a])) + "\n")
    return len(defs)


def main():
    o = []
    o.append("# Project index (generated by tools/make_index.py: do not edit by hand)\n")
    o.append("Look things up here before searching. Never grep recursively over /tmp "
             "(agent transcripts and scratchpads, many GB). Function lookup: `python3 tools/where.py ADDR` "
             "(build/index/funcs.tsv; regenerate with `python3 tools/make_index.py`). Build tools use "
             "ALBW_JOBS workers (default 6; the machine is RAM-limited).\n")
    o.append("## Docs\n")
    docs = [os.path.join(ROOT, f) for f in sorted(os.listdir(ROOT)) if f.endswith(".md") and f != "INDEX.md"]
    docs += sorted(walk("native", (".md",)))
    for p in docs:
        o.append(f"- `{rel(p)}`: {doc_title(p)}")
    o.append("\n## Directories\n")
    for d, what in DIRS.items():
        p = os.path.join(ROOT, d)
        n = sum(1 for _ in walk(d, (".c", ".h", ".cpp", ".py", ".sh"))) if os.path.isdir(p) else 0
        o.append(f"- `{d}/` ({n} files): {what}")
    o.append("\n## Tools\n")
    for p in sorted(list(walk("tools", (".py", ".sh"))) + [os.path.join(ROOT, f) for f in sorted(os.listdir(ROOT)) if f.endswith(".sh")]):
        o.append(f"- `{rel(p)}`: {tool_summary(p)}")
    o.append("\n## Environment switches (ALBW_*)\n")
    o.append("| Name | Read in | Comment |\n|---|---|---|")
    for name, uses in sorted(env_switches().items()):
        where = ", ".join(sorted({f"{p}:{ln}" for p, ln, _ in uses})[:4])
        com = next((c for _, _, c in uses if c), "").replace("|", "\\|")
        o.append(f"| `{name}` | {where} | {com} |")
    n = funcs_tsv()
    o.append(f"\n(funcs.tsv: {n} addresses with at least one definition)\n")
    open(os.path.join(ROOT, "INDEX.md"), "w").write("\n".join(o) + "\n")
    print(f"INDEX.md written; build/index/funcs.tsv: {n} addresses")


if __name__ == "__main__":
    sys.exit(main())
