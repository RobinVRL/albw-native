#include "ghidra_types.h"

extern int func_0030C78C(int *param_1);

// USA 002CB110 <- EU 002CB0EC (Ghidra, non-matching)

undefined4 func_002CB110(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x14);
  if (piVar1 != (int *)0x0) {
    return func_0030C78C(piVar1);
  }
  return 0;
}

