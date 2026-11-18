#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_0014feb8;

// USA 0014FDC4 <- EU 0014FDC4 (Ghidra, non-matching)
// GLOBAL DAT_0014feb8 float

void func_0014FDC4(int param_1,float *param_2,int param_3,float fparam_0,float fparam_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 ((float *)(albw_frame + 0x10))
  func_00115154(&local_34,local_30,*(uint *)(param_1 + 1000));
  *(float *)(param_1 + 0x374) = local_34;
  fVar3 = DAT_0014feb8;
  *(float *)(param_1 + 0x37c) = local_30[0];
  *(float *)(param_1 + 0x378) = fVar3;
  *(float *)(param_1 + 0x380) = local_30[0];
  *(float *)(param_1 + 900) = fVar3;
  *(float *)(param_1 + 0x388) = -local_34;
  func_00115C70(&local_40,param_2,(float *)(param_1 + 0x3d0));
  local_3c = fVar3;
  fVar2 = func_00115DC8(&local_40);
  fVar4 = local_40 * *(float *)(param_1 + 0x374) + local_3c * *(float *)(param_1 + 0x378) +
          local_38 * *(float *)(param_1 + 0x37c);
  iVar1 = func_0068C690(&local_40);
  func_0051D2F4((int *)(param_1 + 1000),iVar1,0,param_3,fparam_1);
  if ((fparam_0 < fVar2) && (fVar3 < fVar4)) {
    func_00115D70((float *)(param_1 + 0x3dc),&local_40,fparam_0);
  }
  return;
}

