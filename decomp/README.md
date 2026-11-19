# Decompiled game sources (snapshot)

These sources come from **[albw-decomp-ai](https://github.com/7akeem0/albw-decomp-ai)** by
[7akeem0](https://github.com/7akeem0) and contributors (matched C/C++ functions, the EU <-> USA
function address map, shared headers), plus Ghidra decompiler output for functions not matched
yet. They are stored here as this port converts and compiles them, so the repository builds on its
own (`tools/export_snapshot.py` writes this folder, `tools/build_decomp.py --snapshot decomp`
compiles it).

The original project has no license file yet; the port's MIT license does not cover these files.
No game binaries or data are included: the game's data is read from your own ROM at build time.
