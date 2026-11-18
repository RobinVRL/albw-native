#include "ghidra_types.h"

extern int func_00537D70(int param_1);
extern int func_00537DB4(int param_1,int *param_2);
extern int func_00540288(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_00540954;

// USA 00540850 <- EU 00540828 (Ghidra, non-matching)
// GLOBAL DAT_00540954 int *

undefined4 func_00540850(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = func_00587FCC(*DAT_00540954,param_2);
  if ((iVar1 != -1) && (iVar1 = func_00540288(param_1,iVar1), iVar1 != 0)) {
    return 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    for (iVar1 = *(int *)(param_1 + 0x38) - iVar3; iVar1 != (param_1 + 0x34) - iVar3;
        iVar1 = *(int *)(iVar1 + iVar3 + 4) - iVar3) {
      if (((*(char *)(iVar1 + 0x6a) == '\0') && (iVar2 = func_00537DB4(iVar1,param_2), iVar2 != 0))
         && (iVar2 = func_00537D70(iVar1), iVar2 != 0)) {
        return 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    for (iVar1 = *(int *)(param_1 + 0x28) - iVar3; iVar1 != (param_1 + 0x24) - iVar3;
        iVar1 = *(int *)(iVar1 + iVar3 + 4) - iVar3) {
      if (((*(char *)(iVar1 + 0x6a) == '\0') && (iVar2 = func_00537DB4(iVar1,param_2), iVar2 != 0))
         && (iVar2 = func_00537D70(iVar1), iVar2 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

