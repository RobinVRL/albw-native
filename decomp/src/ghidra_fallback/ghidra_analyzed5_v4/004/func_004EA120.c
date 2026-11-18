#include "ghidra_types.h"

extern int func_00297140(int param_1,int *param_2);

// USA 004EA120 <- EU 004EA0F8 (Ghidra, non-matching)

undefined4 func_004EA120(int param_1,int *param_2)

{
  return func_00297140(*(int *)(param_1 + 0x4c),param_2);
}

