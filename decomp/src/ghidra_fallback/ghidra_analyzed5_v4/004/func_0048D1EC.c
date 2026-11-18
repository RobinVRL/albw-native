#include "ghidra_types.h"

extern int *DAT_0048d1e4;

// USA 0048D1EC <- EU 0048D1C4 (Ghidra, non-matching)
// GLOBAL DAT_0048d1e4 int *

void * func_0048D1EC(int param_1)

{
  if (*DAT_0048d1e4 == 0) {
    *DAT_0048d1e4 = param_1;
    *(undefined1 *)(param_1 + 0xbc) = 1;
  }
  return (void *)param_1;
}

