#include "ghidra_types.h"

extern int func_002583A0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00537DB4(int param_1,int *param_2);

// USA 005403D4 <- EU 005403AC (Ghidra, non-matching)

undefined4 func_005403D4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int *piVar3;
  int in_r3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    piVar3 = (int *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x20);
    for (iVar4 = *piVar3 - iVar5; iVar4 != (param_1 + 0x14) - iVar5;
        iVar4 = *(int *)(iVar4 + iVar5 + 4) - iVar5) {
      iVar1 = func_00537DB4(iVar4,param_2);
      if (iVar1 != 0) {
        uVar2 = func_002583A0(iVar4,extraout_r1,piVar3,in_r3);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

