#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int func_005027C4();
extern int DAT_002fe07c;

// USA 002FE07C <- EU 002FE058 (Ghidra, non-matching)
// GLOBAL DAT_002fe07c int

int * func_002FE07C(int *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_002fe07c;
  func_002E1B70(param_1 + 0xc);
  piVar1 = (int *)func_005027C4(param_1);
  return piVar1;
}

