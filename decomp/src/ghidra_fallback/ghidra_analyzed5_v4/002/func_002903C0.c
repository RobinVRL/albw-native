#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 002903C0 <- EU 002903E8 (Ghidra, non-matching)

undefined4 func_002903C0(int param_1)

{
  func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x9b);
  return 1;
}

