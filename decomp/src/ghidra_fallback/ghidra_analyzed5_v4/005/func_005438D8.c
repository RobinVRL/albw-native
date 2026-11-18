#include "ghidra_types.h"

extern int func_004077E4(int param_1,float *param_2);

// USA 005438D8 <- EU 005438B0 (Ghidra, non-matching)

undefined4 func_005438D8(int param_1,float *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = func_004077E4(*(int *)(param_1 + 4),param_2);
    return uVar1;
  }
  return 0;
}

