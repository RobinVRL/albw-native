#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);

// USA 004108E4 <- EU 004108C4 (Ghidra, non-matching)

uint func_004108E4(int *param_1,uint *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    param_4 = param_1[7];
  }
  if (iVar1 == 0 || param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00410948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(int *)param_1[5] + 0x24))((int *)param_1[5],param_2);
    return uVar3;
  }
  iVar2 = param_1[8];
  uVar3 = param_3;
  if (-1 < iVar2) {
    uVar3 = param_1[9];
  }
  if ((-1 < iVar2 && iVar2 <= (int)uVar3) && (uVar3 + param_3 <= (uint)(iVar2 + param_4))) {
    func_001163A0(param_2,(uint *)((uVar3 - iVar2) + iVar1),param_3);
    param_1[9] = param_1[9] + param_3;
    return param_3;
  }
  (**(code **)(*(int *)param_1[5] + 0x40))((int *)param_1[5],param_1[9],0);
  iVar1 = (**(code **)(*param_1 + 0x54))(param_1);
  param_1[8] = iVar1;
  if ((uint)param_1[7] < param_3) {
    uVar3 = (**(code **)(*(int *)param_1[5] + 0x24))((int *)param_1[5],param_2,param_3);
    if (-1 < (int)uVar3) {
      func_001163A0((uint *)param_1[6],param_2,param_1[7]);
      param_1[9] = param_1[9] + param_3;
      return param_3;
    }
  }
  else {
    uVar3 = (**(code **)(*(int *)param_1[5] + 0x24))((int *)param_1[5],param_1[6]);
    if (-1 < (int)uVar3) {
      func_001163A0(param_2,(uint *)param_1[6],param_3);
      param_1[9] = param_1[9] + param_3;
      return param_3;
    }
  }
  param_1[8] = -1;
  return uVar3;
}

