# Sources and references

| What | Where | Used for | In this repo? |
|---|---|---|---|
| Matching decompilation `albw-decomp-ai` | github.com/7akeem0/albw-decomp-ai | matched game functions, function table, EU/USA address map | yes: the sources the build compiles are copied to `decomp/` (`tools/export_snapshot.py`) |
| Ghidra 12.0.2 | your own install | decompiling the functions without a matched source | its output, converted, in `decomp/` |
| open-ead/sead | `../refs/sead` | names and layouts of Nintendo's sead library | no (no license; reference only) |

Other projects read for reference only (names, layouts, behaviour; no code copied):
Super Mario 3D Land decomp (3DS-era sead, nn SDK headers), sead as in NSMBU, the Breath of the Wild
decomp (names), Tricord 3DS plugin (Tri Force Heroes uses the same engine).

When a reference and the game's ARM code disagree, the ARM code wins.
