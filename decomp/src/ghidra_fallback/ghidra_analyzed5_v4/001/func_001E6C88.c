#include "ghidra_types.h"

extern int func_00611B40(int *param_1);

// USA 001E6C88 <- EU 001E6C88 (Ghidra, non-matching)

int * func_001E6C88(int *param_1)

{
  int *piVar1;
  
  if (*(byte *)((int)param_1 + 0x9f9) < 3) {
    piVar1 = func_00611B40(param_1);
    return piVar1;
  }
  return param_1;
}

