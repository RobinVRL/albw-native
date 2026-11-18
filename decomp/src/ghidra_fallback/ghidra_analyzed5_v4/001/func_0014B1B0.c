#include "ghidra_types.h"

extern int *DAT_0014b1d0;

// USA 0014B1B0 <- EU 0014B1B0 (Ghidra, non-matching)
// GLOBAL DAT_0014b1d0 int *

void * func_0014B1B0(int param_1)

{
  if (*DAT_0014b1d0 == 0) {
    *DAT_0014b1d0 = param_1;
    *(undefined1 *)(param_1 + 0x1ac) = 1;
  }
  return (void *)param_1;
}

