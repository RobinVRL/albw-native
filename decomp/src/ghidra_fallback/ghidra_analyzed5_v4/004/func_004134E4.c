#include "ghidra_types.h"

extern int func_0056ACC8(int param_1);
extern int func_0056ACF4(int param_1);
extern int DAT_00413574;
extern int DAT_00413578;

// USA 004134E4 <- EU 004134C4 (Ghidra, non-matching)
// GLOBAL DAT_00413574 int
// GLOBAL DAT_00413578 int

int * func_004134E4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (((param_2 != (int *)0x0) && (*param_2 == DAT_00413574)) && (param_2[2] == 0x1000000)) {
    *param_1 = (int)param_2;
    iVar1 = func_0056ACC8((int)param_2);
    param_1[1] = iVar1 + 8;
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = 0;
    if ((param_3 != 0) &&
       (iVar2 = *param_1, iVar1 = func_0056ACF4(iVar2), *(int *)(iVar2 + iVar1) == DAT_00413578)) {
      iVar1 = func_0056ACF4(*param_1);
      param_1[2] = iVar1 + 4 + (int)param_2;
    }
  }
  return param_1;
}

