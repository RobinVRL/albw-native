#!/usr/bin/env python3
"""Sweep scripted sequences: start every flowchart entry a given area type loads, from a save state
in such an area, press through it, and classify the result (debug aid, BOOT_LOG 158).

  tools/event_sweep.py --state-dir DIR --save-dir DIR --slot N --area FieldLight --out results.jsonl
                       [--frames 960] [--only NAME,...]

One game at a time (RAM). For each entry: ALBW_ROUTE "at 60;load N;wait 30;event NAME;wait 60;
(press A;wait 26) x K;log;quit" with ALBW_STATE_TRACE=player. Result per entry (one JSON line,
appended, so a stopped sweep resumes where it left off):
  crash     the port's crash report (signal, top game frames)
  hang      the process did not finish (killed after the timeout)
  refused   the event request was not accepted (no event component / request refused)
  running   Link still in an event action at the end (long scene, a choice, or a stall: see shot)
  done      the event ran (Link entered an event action) and control came back
  noop      accepted, but Link never entered an event action (scene without Link, or nothing ran)
Needs ALBW_ROM. Entries / areas come from native/SCRIPTED_EVENTS.md (tools/event_catalog.py).
"""
import argparse
import json
import os
import re
import shutil
import subprocess
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FREE = {0, 1}                      # State_Wait / walk: player control
NEUTRAL = {107, 108, 2, 3, 4}      # A-press actions with control (grab / attack...): not an event


def entries_for(area):
    out = []
    for l in open(os.path.join(ROOT, "native", "SCRIPTED_EVENTS.md")):
        if not l.startswith("| `"):
            continue
        f = [x.strip() for x in l.split("|")]
        flow, areas, names = f[1].strip("`"), [a.strip() for a in f[3].split(",")], f[5]
        if area in areas:
            out += [(flow, n.strip()) for n in names.split(",") if n.strip()]
    return out


def classify(log, rc):
    r = {}
    if "ALBW crash" in log:
        m = re.search(r"==== ALBW crash: (.*)", log)
        frames = re.findall(r"\((func_[0-9A-F]{8}|f_\w+)[^)]*\)", log.split("ALBW crash", 1)[1])[:6]
        r.update(result="crash", why=(m.group(1) if m else ""), frames=frames)
        return r
    if rc in (-9, 137):
        r["result"] = "hang"
        return r
    ev = re.search(r"^event: (.*)$", log, re.M)
    if not ev or "requested" not in ev.group(1):
        r.update(result="refused", why=ev.group(1) if ev else "no event line")
        return r
    states = [int(m.group(1)) for m in re.finditer(r"^state: f=\d+ sm \S+ -?\d+ -> (\d+)", log, re.M)]
    seq = []
    for s in states:
        if not seq or seq[-1] != s:
            seq.append(s)
    r["states"] = seq[:40]
    entered = any(s not in FREE | NEUTRAL for s in seq)
    last = seq[-1] if seq else 0
    if not entered:
        r["result"] = "noop"
    elif last in FREE | NEUTRAL:
        r["result"] = "done"
    else:
        r["result"] = "running"
    return r


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--state-dir", required=True)
    ap.add_argument("--save-dir", required=True)
    ap.add_argument("--slot", type=int, default=0)
    ap.add_argument("--area", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--frames", type=int, default=960)
    ap.add_argument("--only", default="")
    ap.add_argument("--shots", default="", help="directory for the last screenshot of each entry")
    a = ap.parse_args()
    done = set()
    if os.path.exists(a.out):
        for l in open(a.out):
            try:
                done.add(json.loads(l)["entry"])
            except ValueError:
                pass
    todo = entries_for(a.area)
    if a.only:
        keep = set(a.only.split(","))
        todo = [t for t in todo if t[1] in keep]
    presses = max(1, (a.frames - 60) // 30)
    # run a private copy of the game (with its .ssmap / .map): relinking build/albw during a long
    # sweep must not break or change the runs
    bindir = tempfile.mkdtemp(prefix="albw_sweep_bin_")
    for ext in ("", ".ssmap", ".map"):
        src = os.path.join(ROOT, "build", "albw" + ext)
        if os.path.exists(src):
            shutil.copy2(src, os.path.join(bindir, "albw" + ext))
    binary = os.path.join(bindir, "albw")
    for flow, name in todo:
        if name in done:
            continue
        work = tempfile.mkdtemp(prefix="albw_sweep_")
        shutil.copytree(a.state_dir, os.path.join(work, "st"))
        shutil.copytree(a.save_dir, os.path.join(work, "save"))
        route = "at 60;load %d;wait 30;event %s;wait 60" % (a.slot, name) + ";press A 4;wait 26" * presses + ";log;quit"
        last = 60 + 30 + 60 + presses * 30
        env = dict(os.environ, SDL_VIDEO_DRIVER="offscreen", ALBW_SPEED="0", ALBW_RENDER_SCALE="1",
                   ALBW_SAVE_DIR=os.path.join(work, "save"), ALBW_STATE_DIR=os.path.join(work, "st"),
                   ALBW_STATE_TRACE="player", ALBW_ROUTE=route)
        if a.shots:
            env.update(ALBW_SHOT_DIR=work, ALBW_SHOT="%d,%d" % (150 + 120, last - 20))
        try:
            p = subprocess.run([binary], cwd=ROOT, env=env, capture_output=True,
                               text=True, errors="replace", timeout=240)
            log, rc = p.stdout + p.stderr, p.returncode
        except subprocess.TimeoutExpired as e:
            log, rc = ((e.stdout or b"").decode(errors="replace") + (e.stderr or b"").decode(errors="replace")), -9
        r = dict(entry=name, flow=flow, area=a.area, **classify(log, rc))
        if a.shots:
            os.makedirs(a.shots, exist_ok=True)
            for k, f in (("mid", 270), ("end", last - 20)):
                src = os.path.join(work, "shot_%d_top.ppm" % f)
                if os.path.exists(src):
                    shutil.copy(src, os.path.join(a.shots, "%s_%s.ppm" % (name, k)))
        with open(a.out, "a") as o:
            o.write(json.dumps(r) + "\n")
        print("%-8s %-40s %s" % (r["result"], name, r.get("why", "") or " ".join(r.get("frames", []))), flush=True)
        shutil.rmtree(work, ignore_errors=True)


if __name__ == "__main__":
    main()
