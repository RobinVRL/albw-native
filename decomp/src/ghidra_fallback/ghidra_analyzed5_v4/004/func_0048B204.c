#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00115DC8(float *param_1);
extern float DAT_0048b268;
extern undefined4 DAT_0048b26c;
extern undefined4 DAT_0048b270;
extern undefined4 *DAT_0048b274;
extern undefined4 DAT_0048b278;
extern undefined4 DAT_0048b27c;

// USA 0048B204 <- EU 0048B1DC (Ghidra, non-matching)
// GLOBAL DAT_0048b268 float
// GLOBAL DAT_0048b26c undefined4
// GLOBAL DAT_0048b270 undefined4
// GLOBAL DAT_0048b274 undefined4 *
// GLOBAL DAT_0048b278 undefined4
// GLOBAL DAT_0048b27c undefined4

undefined4 * func_0048B204(undefined4 *param_1,undefined4 *param_2,float fparam_0)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  fVar2 = DAT_0048b268;
  uVar4 = *param_2;
  uVar6 = param_2[1];
  fVar3 = fparam_0 - DAT_0048b268;
  *param_1 = DAT_0048b270;
  uVar1 = DAT_0048b26c;
  uVar5 = uVar4;
  uVar7 = uVar6;
  func_001119F4(param_1 + 1,DAT_0048b274);
  *param_1 = DAT_0048b278;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar6;
  param_1[0xf] = ALBW_AS_U32(fparam_0);
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x12] = ALBW_AS_U32(fVar3);
  param_1[0x13] = uVar1;
  param_1[0x14] = ALBW_AS_U32(fVar2);
  param_1[0x15] = uVar1;
  func_00115DC8((float *)(param_1 + 0x13));
  *param_1 = DAT_0048b27c;
  return param_1;
}

