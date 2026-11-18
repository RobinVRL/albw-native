#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_0019AA44(int param_1,int *param_2,int param_3);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_00297574(int param_1,int param_2);
extern int func_00297674(int param_1,int param_2);
extern int *DAT_00150de8;

// USA 00150CD0 <- EU 00150CD0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00150de8 int *

undefined4 func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar2 = DAT_00150de8;
  iVar6 = 0;
  iVar4 = *(int *)(param_1 + 0x404);
  iVar3 = *(int *)(param_1 + 0x3fc) - iVar4;
  iVar5 = (param_1 + 0x3f8) - iVar4;
  bVar1 = false;
  uVar7 = 0;
  if (iVar3 != iVar5) {
    do {
      if (*(int *)(iVar3 + 0x3c) == param_4) {
        iVar6 = iVar3;
      }
      iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4;
    } while (iVar3 != iVar5);
    if (iVar6 != 0) goto LAB_00150d38;
  }
  iVar6 = func_00297674(*DAT_00150de8,param_1);
  if (iVar6 == 0) {
    return 0;
  }
  *(int *)(iVar6 + 0x3c) = param_4;
  bVar1 = true;
LAB_00150d38:
  iVar3 = func_0019AA44(iVar6,param_2,param_5);
  func_0019A4C4(iVar6,param_3);
  if (iVar3 == 0) {
    if (bVar1) {
      func_00297574(*piVar2,iVar6);
    }
  }
  else {
    if (bVar1) {
      func_0010F1DC((int *)(param_1 + 0x3f8),(int *)(*(int *)(param_1 + 0x404) + iVar6));
      *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + 1;
    }
    if (param_5 != 0) {
      func_0025B6A8(param_5,iVar3);
    }
    uVar7 = 1;
  }
  return uVar7;
}

