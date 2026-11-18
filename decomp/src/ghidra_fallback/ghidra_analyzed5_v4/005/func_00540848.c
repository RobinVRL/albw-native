#include "ghidra_types.h"

extern int func_00537D70(int param_1);
extern int func_00537DB4(int param_1,int *param_2);
extern int func_00540288(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_00540954;

// USA 00540848 <- EU 00540820 (Ghidra, non-matching)
// GLOBAL DAT_00540954 int *

undefined4 func_00540848(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = func_00587FCC(*DAT_00540954,param_2);
  if ((iVar2 != -1) && (iVar2 = func_00540288(iVar1,iVar2), iVar2 != 0)) {
    return 1;
  }
  if (*(int *)(iVar1 + 0x3c) != 0) {
    iVar4 = *(int *)(iVar1 + 0x40);
    for (iVar2 = *(int *)(iVar1 + 0x38) - iVar4; iVar2 != (iVar1 + 0x34) - iVar4;
        iVar2 = *(int *)(iVar2 + iVar4 + 4) - iVar4) {
      if (((*(char *)(iVar2 + 0x6a) == '\0') && (iVar3 = func_00537DB4(iVar2,param_2), iVar3 != 0))
         && (iVar3 = func_00537D70(iVar2), iVar3 != 0)) {
        return 1;
      }
    }
  }
  if (*(int *)(iVar1 + 0x2c) != 0) {
    iVar4 = *(int *)(iVar1 + 0x30);
    for (iVar2 = *(int *)(iVar1 + 0x28) - iVar4; iVar2 != (iVar1 + 0x24) - iVar4;
        iVar2 = *(int *)(iVar2 + iVar4 + 4) - iVar4) {
      if (((*(char *)(iVar2 + 0x6a) == '\0') && (iVar3 = func_00537DB4(iVar2,param_2), iVar3 != 0))
         && (iVar3 = func_00537D70(iVar2), iVar3 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

