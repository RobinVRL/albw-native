#include "ghidra_types.h"

extern int DAT_0053ff2c;

// USA 0053FF30 <- EU 0053FF08 (Ghidra, non-matching)
// GLOBAL DAT_0053ff2c int

bool func_0053FF30(int param_1)

{
  return (*(uint *)(DAT_0053ff2c + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10 + 4) & 0x4000)
         != 0;
}

