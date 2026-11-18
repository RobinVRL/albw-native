#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 00291598 <- EU 002915C0 (Ghidra, non-matching)

undefined4 func_00291598(int param_1)

{
  func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0xa1);
  return 1;
}

