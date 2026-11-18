#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern float DAT_00252ca0;
extern float DAT_00252ca4;
extern undefined4 DAT_00252ca8;

// USA 00252BC8 <- EU 00252BF0 (Ghidra, non-matching)
// GLOBAL DAT_00252ca0 float
// GLOBAL DAT_00252ca4 float
// GLOBAL DAT_00252ca8 undefined4

void func_00252BC8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_00252ca0;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x534));
  uVar1 = DAT_00252ca8;
  fVar3 = DAT_00252ca4;
  local_1c = *(float *)(*(int *)(param_1 + 0x554) + 0x58);
  local_20 = DAT_00252ca4;
  local_18 = DAT_00252ca4;
  *(float *)(param_1 + 0x528) = DAT_00252ca4;
  *(float *)(param_1 + 0x52c) = fVar3;
  *(float *)(param_1 + 0x530) = fVar3;
  *(float *)(param_1 + 0x534) = fVar3;
  *(float *)(param_1 + 0x538) = fVar3;
  *(float *)(param_1 + 0x53c) = fVar3;
  iVar2 = func_0014EEB8(param_1,&local_20,uVar1,local_1c);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x3dc) = fVar3;
    *(float *)(param_1 + 0x3e0) = fVar3;
    *(float *)(param_1 + 0x3e4) = fVar3;
  }
  return;
}

