#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float DAT_001ac788;
extern float DAT_001ac78c;
extern undefined4 DAT_001ac790;

// USA 001AC6B0 <- EU 001AC6B0 (Ghidra, non-matching)
// GLOBAL DAT_001ac788 float
// GLOBAL DAT_001ac78c float
// GLOBAL DAT_001ac790 undefined4

void func_001AC6B0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c ((float *)(albw_frame + 0x24))
  local_20 = DAT_001ac788;
  local_1c[0] = DAT_001ac788;
  fVar2 = DAT_001ac788;
  func_00115154(local_1c,&local_20,
                *(int *)(param_1 + 0x954) +
                *(int *)(param_1 + 0x95c + *(short *)(param_1 + 0x32) * 4) * 0x20000000);
  local_2c = local_1c[0] * DAT_001ac78c;
  local_24 = local_20 * DAT_001ac78c;
  local_28 = fVar2;
  func_00115C54(&local_38,(float *)(param_1 + 8),&local_2c);
  *(float *)(param_1 + 0x910) = local_38;
  *(undefined4 *)(param_1 + 0x914) = uStack_34;
  *(undefined4 *)(param_1 + 0x918) = uStack_30;
  *(float *)(param_1 + 0x3d0) = local_38;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_34;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_30;
  *(float *)(param_1 + 0x91c) = fVar2;
  func_004FC07C(param_1,0,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x950) = 0;
  uVar1 = DAT_001ac790;
  *(undefined4 *)(param_1 + 0x924) = 0x46;
  *(undefined4 *)(param_1 + 0x928) = uVar1;
  *(undefined4 *)(param_1 + 0x920) = 0;
  return;
}

