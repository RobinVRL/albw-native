#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int func_005027C4();
extern int DAT_002fcc04;

// USA 002FCC04 <- EU 002FCBE0 (Ghidra, non-matching)
// GLOBAL DAT_002fcc04 int

int * func_002FCC04(int *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_002fcc04;
  func_002E1B70(param_1 + 0x2b);
  piVar1 = (int *)func_005027C4(param_1);
  return piVar1;
}

