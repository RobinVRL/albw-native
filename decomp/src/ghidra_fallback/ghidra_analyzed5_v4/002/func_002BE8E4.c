#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00165F3C(int *param_1,int param_2);

// USA 002BE8E4 <- EU 002BE8C0 (Ghidra, non-matching)

undefined4 func_002BE8E4(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)param_1[0x4f];
  (**(code **)(*param_2 + 8))(param_2);
  uVar2 = 0;
  do {
    if (*(char *)(param_2[1] + uVar2) == '\0') {
      if ((int)uVar2 < 0x40001) goto LAB_002be918;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_002be918:
  if (param_1[0x50] <= (int)uVar2) {
    uVar2 = param_1[0x50] - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar3,(uint *)param_2[1],uVar2);
  *(undefined1 *)((int)puVar3 + uVar2) = 0;
  uVar1 = func_00165F3C(param_1,param_3);
  return uVar1;
}

