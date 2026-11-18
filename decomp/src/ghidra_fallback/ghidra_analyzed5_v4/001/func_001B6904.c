#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int func_005027C4();
extern int DAT_001b6928;

// USA 001B6904 <- EU 001B6904 (Ghidra, non-matching)
// GLOBAL DAT_001b6928 int

int * func_001B6904(int *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_001b6928;
  func_002E1B70(param_1 + 0x2b);
  piVar1 = (int *)func_005027C4(param_1);
  return piVar1;
}

