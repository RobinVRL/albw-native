#include "ghidra_types.h"

extern int func_002DDEE8(int param_1,undefined2 param_2,undefined2 param_3);

// USA 00291FCC <- EU 00291FF4 (Ghidra, non-matching)

undefined4 func_00291FCC(int param_1,undefined2 param_2,undefined2 param_3)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    return func_002DDEE8(*(int *)(param_1 + 0x48),param_2,param_3);
  }
  return 0;
}

