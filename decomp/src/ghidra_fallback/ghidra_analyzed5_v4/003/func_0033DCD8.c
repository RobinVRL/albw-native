#include "ghidra_types.h"

extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_0054D884(int param_1,uint param_2);
extern float DAT_0033ddb8;
extern float DAT_0033ddbc;
extern float DAT_0033ddc0;
extern undefined4 DAT_0033ddc4;
extern undefined4 *DAT_0033ddc8;

// USA 0033DCD8 <- EU 0033DCB4 (Ghidra, non-matching)
// GLOBAL DAT_0033ddb8 float
// GLOBAL DAT_0033ddbc float
// GLOBAL DAT_0033ddc0 float
// GLOBAL DAT_0033ddc4 undefined4
// GLOBAL DAT_0033ddc8 undefined4 *

void func_0033DCD8(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define afStack_58 ((float *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0x2c))
  fVar1 = DAT_0033ddbc;
  fVar5 = *(float *)(param_1 + 0x3e0) - DAT_0033ddb8;
  *(float *)(param_1 + 0x3e0) = fVar5;
  if ((uint)ALBW_AS_U32(fVar1) <= (uint)ALBW_AS_U32(fVar5)) {
    fVar5 = DAT_0033ddc0;
  }
  *(float *)(param_1 + 0x3e0) = fVar5;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  uVar3 = *(int *)(param_1 + 0x470) + *(int *)(param_1 + 0x468);
  *(uint *)(param_1 + 0x468) = uVar3;
  *(int *)(param_1 + 1000) = *(int *)(param_1 + 0x474) + *(int *)(param_1 + 1000);
  uVar4 = *(int *)(param_1 + 0x46c) + *(int *)(param_1 + 0x478);
  *(uint *)(param_1 + 0x46c) = uVar4;
  func_00491624(afStack_34,uVar3,*(uint *)(param_1 + 1000),uVar4);
  func_001151D8(afStack_58,(undefined4 *)(param_1 + 0x438));
  func_0011549C(afStack_58,afStack_58,afStack_34);
  iVar2 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_001151F8((undefined4 *)(iVar2 + 0x80),afStack_58,(undefined4 *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x430));
  iVar2 = func_0054D884(*(int *)(param_1 + 0x2d0) + 0x18,0);
  iVar2 = func_0014EEC8(param_1,param_1 + 0x3d0,DAT_0033ddc8,DAT_0033ddc4,*(float *)(iVar2 + 4));
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

