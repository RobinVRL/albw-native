#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_0032eee0;
extern float DAT_0032eee4;

// USA 0032EDFC <- EU 0032EDD8 (Ghidra, non-matching)
// GLOBAL DAT_0032eee0 float
// GLOBAL DAT_0032eee4 float

void func_0032EDFC(float *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 ((float *)(albw_frame + 0x2c))
  #define local_1c (*(float *)(albw_frame + 0x34))
  func_00115C70(&local_30,param_1 + 3,param_1);
  local_4c = local_30;
  local_48 = local_2c;
  local_44 = local_28;
  fVar2 = SQRT(local_30 * local_30 + local_28 * local_28);
  iVar1 = func_0068C690(&local_4c);
  func_004D80A4(&fStack_3c,iVar1 + param_2,fVar2);
  local_38 = DAT_0032eee0;
  fVar2 = DAT_0032eee0;
  func_00115C54(&local_30,param_1,&fStack_3c);
  param_1[3] = local_30;
  param_1[4] = local_2c;
  param_1[5] = local_28;
  func_00115C70(local_24,param_1 + 3,param_1);
  local_30 = local_24[0];
  local_28 = local_1c;
  local_2c = fVar2;
  iVar1 = func_0068C690(&local_30);
  func_004D80A4(&local_30,iVar1 + 0x40000000,DAT_0032eee4);
  param_1[6] = local_30;
  param_1[7] = fVar2;
  param_1[8] = local_28;
  param_1[9] = -(param_1[6] * *param_1 + local_28 * param_1[2]);
  return;
}

