# External references

| Reference | Where | Use | Copied into this repo? |
|---|---|---|---|
| Matching decomp (`albw-decomp-ai`) | `../albw-decomp-ai` | game code, function table, maps | no (read at build time) |
| open-ead/sead | `../refs/sead` (git clone) | class names and layouts of Nintendo's sead library | **no**: no license file, reference only; our own headers are in `native/include/` |
| Ghidra 12.0.2 | `/opt/ghidra` | decompilation (`tools/ghidra/`, decomp `tools/ghidra_dump.py`) | no |

## Other decompilations used as references (cloned to ../refs/, not part of this repo)
| folder | project | used for |
|---|---|---|
| 3dsdecomp_redpepper | Super Mario 3D Land (3DS) decomp, with 3DS-era sead, nnsdk headers, LibMessageStudio, symbol lists | sead/nn/LMS layouts and behaviour, function identification |
| open-ead_sead | sead (Switch era) | sead behaviour (layouts may differ) |
| aboood40091_sead | sead as in NSMBU (Wii U, 2012) | same-era sead |
| zeldaret_botw | Breath of the Wild decomp | naming only |
| IcefirePhoenix_Tricord_3DS_Plugin | Tri Force Heroes plugin (ALBW engine) | RAM layouts, actor/RomFS notes |
References only: behaviour, layouts and names; our code is written here, not copied. The game's ARM code wins over any reference.
