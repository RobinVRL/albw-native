#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 0010BEC4 <- EU 0010BEC4 (Ghidra, non-matching)

undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (param_2 < *(uint *)(param_1 + 8)) {
    iVar2 = iVar2 + param_2 * 0x24;
  }
  puVar3 = *(uint **)(iVar2 + 4);
  (**(code **)(*param_3 + 8))(param_3);
  uVar1 = 0;
  do {
    if (*(char *)(param_3[1] + uVar1) == '\0') {
      if ((int)uVar1 < 0x40001) goto LAB_0010bf28;
      break;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x40001);
  uVar1 = 0;
LAB_0010bf28:
  if (*(int *)(iVar2 + 8) <= (int)uVar1) {
    uVar1 = *(int *)(iVar2 + 8) - 1;
  }
  (**(code **)(*param_3 + 8))(param_3);
  uVar4 = func_0010E3C4(puVar3,(uint *)param_3[1],uVar1);
  *(undefined1 *)((int)puVar3 + uVar1) = 0;
  return uVar4;
}

