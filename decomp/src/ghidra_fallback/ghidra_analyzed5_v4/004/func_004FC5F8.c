#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0058FB74(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_004fc6c8;
extern undefined4 DAT_004fc6cc;
extern undefined4 DAT_004fc6d0;

// USA 004FC5F8 <- EU 004FC5D0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4 *
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_004fc6c8 undefined4
// GLOBAL DAT_004fc6cc undefined4
// GLOBAL DAT_004fc6d0 undefined4

undefined4 *
func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
             undefined4 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  
  *param_1 = param_3;
  param_1[1] = param_4 | 1;
  param_1[2] = param_5;
  param_1[3] = 0xffffffff;
  func_0058FB74(param_1 + 4,param_6);
  param_1[7] = param_1 + 9;
  param_1[8] = 0x20;
  *(undefined1 *)(param_1[7] + 0x1f) = 0;
  param_1[6] = DAT_004fc6cc;
  puVar3 = (uint *)param_1[7];
  (**(code **)(*param_2 + 8))(param_2);
  uVar2 = 0;
  do {
    if (*(char *)(param_2[1] + uVar2) == '\0') {
      if ((int)uVar2 < 0x40001) goto LAB_004fc680;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_004fc680:
  if ((int)param_1[8] <= (int)uVar2) {
    uVar2 = param_1[8] - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar3,(uint *)param_2[1],uVar2);
  uVar1 = DAT_004fc6d0;
  *(undefined1 *)((int)puVar3 + uVar2) = 0;
  param_1[6] = uVar1;
  param_1[0x11] = param_7;
  return param_1;
}

