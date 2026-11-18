#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00588F08(int param_1);
extern int func_0068C690(float *param_1);
extern float DAT_00164bfc;
extern int *DAT_00164c00;
extern float *DAT_00164c04;
extern int *DAT_00164c08;
extern float DAT_00164c0c;
extern int DAT_00164c10;
extern float DAT_00164c14;

// USA 00164B08 <- EU 00164B0C (Ghidra, non-matching)
// GLOBAL DAT_00164bfc float
// GLOBAL DAT_00164c00 int *
// GLOBAL DAT_00164c04 float *
// GLOBAL DAT_00164c08 int *
// GLOBAL DAT_00164c0c float
// GLOBAL DAT_00164c10 int
// GLOBAL DAT_00164c14 float

void func_00164B08(int param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c ((float *)(albw_frame + 0x14))
  piVar1 = DAT_00164c00;
  fVar5 = DAT_00164bfc;
  local_20 = DAT_00164bfc;
  local_1c[0] = DAT_00164bfc;
  *(float *)(param_1 + 0x8e0) = DAT_00164bfc;
  *(float *)(param_1 + 0x8e4) = fVar5;
  *(float *)(param_1 + 0x8e8) = fVar5;
  uVar4 = *(int *)(param_1 + 0x8ec) - *piVar1;
  *(uint *)(param_1 + 0x8ec) = uVar4;
  func_00115154(local_1c,&local_20,uVar4);
  local_30 = *DAT_00164c04 * local_1c[0];
  local_28 = DAT_00164c04[2] * local_20;
  local_2c = fVar5;
  pfVar2 = (float *)func_00588F08(*DAT_00164c08);
  func_00115C54((float *)(param_1 + 0x8e0),pfVar2,&local_30);
  *(float *)(param_1 + 0x8e8) = *(float *)(param_1 + 0x8e8) + DAT_00164c0c;
  if (param_2 == 0) {
    func_00115C70(&local_30,(float *)(param_1 + 0x8e0),(float *)(param_1 + 0x3d0));
    iVar3 = func_0068C690(&local_30);
    func_0051D2F4((int *)(param_1 + 1000),iVar3,DAT_00164c10,0x7fffffff,DAT_00164c14);
  }
  return;
}

