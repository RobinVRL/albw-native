#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_0032eff8;
extern float DAT_0032effc;

// USA 0032EF74 <- EU 0032EF50 (Ghidra, non-matching)
// GLOBAL DAT_0032eff8 float
// GLOBAL DAT_0032effc float

float * func_0032EF74(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c ((float *)(albw_frame + 0x14))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  param_1[3] = *param_3;
  param_1[4] = fVar2;
  param_1[5] = fVar3;
  func_00115C70(local_1c,param_3,param_2);
  local_28 = local_1c[0];
  local_20 = local_14;
  local_24 = DAT_0032eff8;
  fVar2 = DAT_0032eff8;
  iVar1 = func_0068C690(&local_28);
  func_004D80A4(&local_28,iVar1 + 0x40000000,DAT_0032effc);
  param_1[6] = local_28;
  param_1[7] = fVar2;
  param_1[8] = local_20;
  param_1[9] = -(local_28 * *param_1 + local_20 * param_1[2]);
  return param_1;
}

