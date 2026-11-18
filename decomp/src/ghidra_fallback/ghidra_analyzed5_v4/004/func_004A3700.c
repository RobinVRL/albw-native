#include "ghidra_types.h"

extern int func_003F7FA0(int *param_1);

// USA 004A3700 <- EU 004A36D8 (Ghidra, non-matching)

undefined4 func_004A3700(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x24) == piVar1[3])) && (0 < piVar1[1])) {
    return func_003F7FA0(piVar1);
  }
  return 0;
}

