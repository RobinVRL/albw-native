#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001164A8(undefined4 *param_1,uint param_2,uint param_3);
extern undefined4 DAT_00689210;
extern undefined4 DAT_00689214;

// USA 006890C8 <- EU 006890A0 (Ghidra, non-matching)
// GLOBAL DAT_00689210 undefined4
// GLOBAL DAT_00689214 undefined4

undefined4 * func_006890C8(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  
  (**(code **)(*param_3 + 8))(param_3);
  iVar2 = 0;
  do {
    if (*(char *)(param_3[1] + iVar2) == '\0') {
      if (iVar2 < 0x40001) goto LAB_006890f4;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40001);
  iVar2 = 0;
LAB_006890f4:
  puVar3 = (undefined4 *)func_0010CEE0(iVar2 + 1U,param_2,4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = func_001164A8(puVar3,0,iVar2 + 1U);
  }
  (**(code **)(*param_3 + 8))(param_3);
  uVar1 = DAT_00689210;
  iVar2 = 0;
  do {
    if (*(char *)(param_3[1] + iVar2) == '\0') {
      if (iVar2 < 0x40001) goto LAB_00689164;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40001);
  iVar2 = 0;
LAB_00689164:
  param_1[2] = iVar2 + 1;
  *param_1 = uVar1;
  param_1[1] = puVar3;
  if (iVar2 + 1 < 1) {
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *(undefined1 *)((int)puVar3 + iVar2) = 0;
  }
  *param_1 = DAT_00689214;
  puVar5 = (uint *)param_1[1];
  (**(code **)(*param_3 + 8))(param_3);
  uVar4 = 0;
  do {
    if (*(char *)(param_3[1] + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_006891d8;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_006891d8:
  if ((int)param_1[2] <= (int)uVar4) {
    uVar4 = param_1[2] - 1;
  }
  (**(code **)(*param_3 + 8))(param_3);
  func_0010E3C4(puVar5,(uint *)param_3[1],uVar4);
  *(undefined1 *)((int)puVar5 + uVar4) = 0;
  return param_1;
}

