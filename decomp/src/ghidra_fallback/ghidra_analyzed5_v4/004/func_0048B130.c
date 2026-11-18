#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00115DC8(float *param_1);
extern float DAT_0048b1c0;
extern float DAT_0048b1c4;
extern undefined4 DAT_0048b1c8;
extern undefined4 DAT_0048b1cc;
extern undefined4 *DAT_0048b1d0;
extern undefined4 DAT_0048b1d4;
extern undefined4 DAT_0048b1d8;

// USA 0048B130 <- EU 0048B108 (Ghidra, non-matching)
// GLOBAL DAT_0048b1c0 float
// GLOBAL DAT_0048b1c4 float
// GLOBAL DAT_0048b1c8 undefined4
// GLOBAL DAT_0048b1cc undefined4
// GLOBAL DAT_0048b1d0 undefined4 *
// GLOBAL DAT_0048b1d4 undefined4
// GLOBAL DAT_0048b1d8 undefined4

undefined4 * func_0048B130(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar5 = DAT_0048b1c8;
  fVar6 = DAT_0048b1c4;
  fVar9 = DAT_0048b1c0;
  fVar3 = *(float *)(param_2 + 0xa8);
  fVar11 = *(float *)(param_2 + 0x94);
  fVar10 = fVar11 - DAT_0048b1c4;
  fVar7 = (*(float *)(param_2 + 0xa4) + fVar3) * DAT_0048b1c0;
  fVar8 = (*(float *)(param_2 + 0x9c) + *(float *)(param_2 + 0xa0)) * DAT_0048b1c0;
  fVar1 = *(float *)(param_2 + 0xa4);
  fVar2 = *(float *)(param_2 + 0x9c);
  fVar4 = *(float *)(param_2 + 0xa0);
  *param_1 = DAT_0048b1cc;
  fVar1 = (fVar1 + fVar3) * fVar9;
  fVar9 = (fVar2 + fVar4) * fVar9;
  func_001119F4(param_1 + 1,DAT_0048b1d0);
  *param_1 = DAT_0048b1d4;
  param_1[0xf] = ALBW_AS_U32(fVar11);
  param_1[0x13] = uVar5;
  param_1[0x14] = ALBW_AS_U32(fVar6);
  param_1[0x15] = uVar5;
  param_1[0xd] = ALBW_AS_U32(fVar7);
  param_1[0xe] = ALBW_AS_U32(fVar8);
  param_1[0x10] = ALBW_AS_U32(fVar1);
  param_1[0x11] = ALBW_AS_U32(fVar9);
  param_1[0x12] = ALBW_AS_U32(fVar10);
  func_00115DC8((float *)(param_1 + 0x13));
  *param_1 = DAT_0048b1d8;
  return param_1;
}

