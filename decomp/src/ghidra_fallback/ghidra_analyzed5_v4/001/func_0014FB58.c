#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_0014fc28;

// USA 0014FB58 <- EU 0014FB58 (Ghidra, non-matching)
// GLOBAL DAT_0014fc28 float

bool func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 ((float *)(albw_frame + 0x10))
  func_00115154(&local_24,local_20,*(uint *)(param_1 + 1000));
  fVar2 = DAT_0014fc28;
  *(float *)(param_1 + 0x374) = local_24;
  *(float *)(param_1 + 0x37c) = local_20[0];
  *(float *)(param_1 + 0x378) = fVar2;
  *(float *)(param_1 + 0x380) = local_20[0];
  *(float *)(param_1 + 900) = fVar2;
  *(float *)(param_1 + 0x388) = -local_24;
  func_00115C70(&local_30,param_2,(float *)(param_1 + 0x3d0));
  local_2c = fVar2;
  func_00115DC8(&local_30);
  iVar1 = func_0068C690(&local_30);
  func_0051D2F4((int *)(param_1 + 1000),iVar1,0,param_3,fparam_0);
  return fVar2 < local_30 * *(float *)(param_1 + 0x380) + local_2c * *(float *)(param_1 + 900) +
                 local_28 * *(float *)(param_1 + 0x388);
}

