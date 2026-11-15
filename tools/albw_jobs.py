"""Worker count for the build tools' thread pools (each worker runs a clang or a parser).

RAM is the limit on the dev machine (31 GB, small swap): one clang on a large Ghidra source
can take 6 GB, and several agents build at once. Default 6, override with ALBW_JOBS=N."""
import os


def albw_jobs() -> int:
    v = os.environ.get("ALBW_JOBS")
    if v and v.isdigit() and int(v) > 0:
        return int(v)
    return min(6, os.cpu_count() or 1)
