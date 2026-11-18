#include "ghidra_types.h"

extern int func_0056ACC8(int param_1);
extern int func_0056ACF4(int param_1);
extern int DAT_00413414;
extern int DAT_00413418;

// USA 00413394 <- EU 00413374 (Ghidra, non-matching)
// GLOBAL DAT_00413414 int
// GLOBAL DAT_00413418 int

void func_00413394(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    if ((*param_2 == DAT_00413414) && (param_2[2] == 0x1000000)) {
      *param_1 = (int)param_2;
      iVar1 = func_0056ACC8((int)param_2);
      param_1[1] = iVar1 + 8;
      *(undefined1 *)(param_1 + 3) = 1;
      param_1[2] = 0;
      if ((param_3 != 0) &&
         (iVar2 = *param_1, iVar1 = func_0056ACF4(iVar2), *(int *)(iVar2 + iVar1) == DAT_00413418))
      {
        iVar1 = func_0056ACF4(*param_1);
        param_1[2] = iVar1 + 4 + (int)param_2;
      }
    }
    return;
  }
  return;
}

