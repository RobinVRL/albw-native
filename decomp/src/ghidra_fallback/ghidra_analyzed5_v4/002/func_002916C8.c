#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 002916C8 <- EU 002916F0 (Ghidra, non-matching)

undefined4 func_002916C8(int param_1)

{
  func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0xae);
  return 1;
}

