#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_0037bca4;

// USA 0037BB90 <- EU 0037BB6C (Ghidra, non-matching)
// GLOBAL DAT_0037bca4 float

void func_0037BB90(float *param_1,float *param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  fVar2 = DAT_0037bca4;
  if ((int)ALBW_AS_U32(((param_1[3] - *param_1) * (param_1[3] - *param_1) +
           (param_1[5] - param_1[2]) * (param_1[5] - param_1[2]))) < 0x3f800000) {
    param_1[0xb] = DAT_0037bca4;
  }
  else {
    fVar2 = param_1[0xb];
  }
  param_1[0xb] = fVar2 + -fVar2 * param_1[10];
  local_2c = *param_1;
  fStack_28 = param_1[1];
  fStack_24 = param_1[2];
  func_00115D70(&local_20,param_1 + 6,param_1[0xb]);
  local_50 = local_20;
  uStack_4c = uStack_1c;
  uStack_48 = uStack_18;
  func_00115C54(param_1,param_1,&local_50);
  func_00115C70(&local_20,param_1 + 3,param_1);
  local_44 = local_20;
  uStack_40 = uStack_1c;
  uStack_3c = uStack_18;
  func_00115DC8(&local_44);
  func_00115D70(&local_20,&local_44,param_1[9] - param_1[0xb]);
  local_50 = local_20;
  uStack_4c = uStack_1c;
  uStack_48 = uStack_18;
  func_00115C54(param_1,param_1,&local_50);
  func_00115C70(&local_20,param_1,&local_2c);
  local_38 = local_20;
  uStack_34 = uStack_1c;
  uStack_30 = uStack_18;
  iVar1 = func_0068C690(&local_38);
  *param_3 = iVar1;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}

