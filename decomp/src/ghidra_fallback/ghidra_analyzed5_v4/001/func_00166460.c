#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int func_005027C4();
extern int DAT_00166488;

// USA 00166460 <- EU 00166464 (Ghidra, non-matching)
// GLOBAL DAT_00166488 int

int * func_00166460(int *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_00166488;
  func_002E1B70(param_1 + 0x2b);
  piVar1 = (int *)func_005027C4(param_1);
  return piVar1;
}

