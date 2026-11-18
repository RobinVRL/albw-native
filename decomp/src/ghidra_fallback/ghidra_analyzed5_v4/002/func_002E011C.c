#include "ghidra_types.h"

extern int func_004AD590(int param_1,int param_2);
extern int *DAT_002e0128;

// USA 002E011C <- EU 002E00F8 (Ghidra, non-matching)
// GLOBAL DAT_002e0128 int *

undefined4 * func_002E011C(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  piVar1 = DAT_002e0128;
  param_1[2] = 0;
  func_004AD590(*piVar1,(int)param_1);
  return param_1;
}

