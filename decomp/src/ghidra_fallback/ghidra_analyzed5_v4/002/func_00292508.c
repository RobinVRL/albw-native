#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 00292508 <- EU 00292530 (Ghidra, non-matching)

undefined4 func_00292508(int param_1)

{
  func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0);
  return 1;
}

