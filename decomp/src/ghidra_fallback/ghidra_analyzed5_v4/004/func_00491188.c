#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined4 DAT_00491220;
extern undefined4 DAT_00491224;
extern undefined4 DAT_00491228;

// USA 00491188 <- EU 00491160 (Ghidra, non-matching)
// GLOBAL DAT_00491220 undefined4
// GLOBAL DAT_00491224 undefined4
// GLOBAL DAT_00491228 undefined4

undefined4 * func_00491188(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  
  param_1[1] = param_1 + 3;
  uVar1 = DAT_00491220;
  param_1[2] = 0x20;
  *param_1 = uVar1;
  *(undefined1 *)(param_1[1] + 0x1f) = 0;
  *param_1 = DAT_00491224;
  puVar3 = (uint *)param_1[1];
  (**(code **)(*param_2 + 8))(param_2);
  uVar2 = 0;
  do {
    if (*(char *)(param_2[1] + uVar2) == '\0') {
      if ((int)uVar2 < 0x40001) goto LAB_004911e0;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_004911e0:
  if ((int)param_1[2] <= (int)uVar2) {
    uVar2 = param_1[2] - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar3,(uint *)param_2[1],uVar2);
  uVar1 = DAT_00491228;
  *(undefined1 *)((int)puVar3 + uVar2) = 0;
  *param_1 = uVar1;
  return param_1;
}

