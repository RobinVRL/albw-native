#include "ghidra_types.h"

extern int func_0056BA1C(int param_1);
extern int func_0056BA88(int param_1);
extern int DAT_004136a8;

// USA 0041365C <- EU 0041363C (Ghidra, non-matching)
// GLOBAL DAT_004136a8 int

int * func_0041365C(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 == DAT_004136a8) && (param_2[2] - 0x1000000U < 0x10001)) {
    *param_1 = (int)param_2;
    iVar1 = func_0056BA1C((int)param_2);
    param_1[1] = iVar1 + 8;
    iVar1 = func_0056BA88(*param_1);
    param_1[2] = iVar1 + 8;
    return param_1;
  }
  return param_1;
}

