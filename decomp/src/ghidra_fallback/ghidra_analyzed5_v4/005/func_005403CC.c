#include "ghidra_types.h"

extern int func_002583A0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00537DB4(int param_1,int *param_2);

// USA 005403CC <- EU 005403A4 (Ghidra, non-matching)

undefined4 func_005403CC(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  int *piVar4;
  int in_r3;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    piVar4 = (int *)(iVar1 + 0x18);
    iVar6 = *(int *)(iVar1 + 0x20);
    for (iVar5 = *piVar4 - iVar6; iVar5 != (iVar1 + 0x14) - iVar6;
        iVar5 = *(int *)(iVar5 + iVar6 + 4) - iVar6) {
      iVar2 = func_00537DB4(iVar5,param_2);
      if (iVar2 != 0) {
        uVar3 = func_002583A0(iVar5,extraout_r1,piVar4,in_r3);
        return uVar3;
      }
    }
  }
  return 0xffffffff;
}

