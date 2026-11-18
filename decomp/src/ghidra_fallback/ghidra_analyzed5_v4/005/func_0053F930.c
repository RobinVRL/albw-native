#include "ghidra_types.h"

extern int DAT_0053f92c;

// USA 0053F930 <- EU 0053F908 (Ghidra, non-matching)
// GLOBAL DAT_0053f92c int

bool func_0053F930(int param_1)

{
  return *(char *)(DAT_0053f92c + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\v';
}

