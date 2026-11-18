#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 00689928 <- EU 00689900 (Ghidra, non-matching)

undefined8 func_00689928(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = param_1[1];
  (**(code **)(*param_1 + 8))(param_1);
  iVar3 = 0;
  do {
    uVar1 = (uint)*(byte *)(param_1[1] + iVar3);
    if (uVar1 == 0) {
      if (iVar3 < 0x40001) goto LAB_00689958;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40001);
  iVar3 = 0;
LAB_00689958:
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = 0;
  }
  if ((int)param_3 < 0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_3 = 0;
    do {
      uVar1 = (uint)*(byte *)(param_2[1] + param_3);
      if (uVar1 == 0) {
        if ((int)param_3 < 0x40001) goto LAB_006899b0;
        break;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < 0x40001);
    param_3 = 0;
  }
LAB_006899b0:
  if (param_1[2] - iVar2 <= (int)param_3) {
    param_3 = (param_1[2] - iVar2) - 1;
  }
  if ((int)param_3 < 1) {
    param_3 = 0;
  }
  else {
    (**(code **)(*param_2 + 8))(param_2);
    uVar5 = func_0010E3C4((uint *)(iVar4 + iVar2),(uint *)param_2[1],param_3);
    uVar1 = (uint)((ulonglong)uVar5 >> 0x20);
    if (iVar3 < (int)(iVar2 + param_3)) {
      *(undefined1 *)(iVar4 + iVar2 + param_3) = 0;
    }
  }
  return CONCAT44(uVar1,param_3);
}

