#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int func_005027C4();
extern int DAT_00231318;

// USA 002312F4 <- EU 002312F4 (Ghidra, non-matching)
// GLOBAL DAT_00231318 int

int * func_002312F4(int *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_00231318;
  func_002E1B70(param_1 + 0x2b);
  piVar1 = (int *)func_005027C4(param_1);
  return piVar1;
}

