#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0058080C(int param_1,int param_2);
extern undefined4 DAT_003672f0;
extern float DAT_003672f4;
extern undefined4 DAT_003672f8;
extern int *DAT_003672fc;

// USA 0036720C <- EU 003671E8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_003672f0 undefined4
// GLOBAL DAT_003672f4 float
// GLOBAL DAT_003672f8 undefined4
// GLOBAL DAT_003672fc int *

void func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5,
                  undefined1 param_6,int param_7)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  fVar2 = DAT_003672f4;
  uVar1 = DAT_003672f0;
  *(undefined1 *)(param_1 + 0x17) = param_6;
  *(short *)(param_1 + 0x10) = (short)param_2;
  *(undefined2 *)(param_1 + 0x12) = param_3;
  *(short *)(param_1 + 0x14) = (short)param_4;
  uVar3 = DAT_003672f8;
  if (param_5 == 0) {
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  else {
    if (param_5 != 1) {
      if (param_5 == 2) {
        *(undefined4 *)(param_1 + 0x20) = DAT_003672f8;
        *(undefined4 *)(param_1 + 0x24) = uVar3;
        *(undefined4 *)(param_1 + 0x28) = uVar3;
        *(undefined4 *)(param_1 + 0x2c) = uVar1;
      }
      goto LAB_00367264;
    }
    *(float *)(param_1 + 0x20) = fVar2;
    *(float *)(param_1 + 0x24) = fVar2;
    *(float *)(param_1 + 0x28) = fVar2;
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
LAB_00367264:
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  else {
    fVar6 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x18) = fVar2 / fVar6;
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  else {
    fVar6 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x1c) = fVar2 / fVar6;
  }
  if (param_7 != 0) {
    iVar4 = *DAT_003672fc;
    iVar5 = func_0058080C(iVar4 + 0x4c,*(int *)(iVar4 + 0x58) + param_1);
    if (iVar5 < 0) {
      func_0010F1DC((int *)(iVar4 + 0x4c),(int *)(*(int *)(iVar4 + 0x58) + param_1));
      *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + 1;
    }
  }
  return;
}

