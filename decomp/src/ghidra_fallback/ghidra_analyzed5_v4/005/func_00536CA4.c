#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_00536de4;

// USA 00536CA4 <- EU 00536C7C (Ghidra, non-matching)
// GLOBAL DAT_00536de4 float

undefined4
func_00536CA4(undefined4 param_1,float *param_2,float *param_3,float fparam_0,float fparam_1,
             float fparam_2,float fparam_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_24 (*(undefined8 *)(albw_frame + 0x1c))
  #define uStack_1c (*(undefined8 *)(albw_frame + 0x24))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define pfStack_10 (*(float * *)(albw_frame + 0x30))
  #define pfStack_c (*(float * *)(albw_frame + 0x34))
  uStack_24 = CONCAT44(fparam_1,fparam_0);
  uStack_1c = CONCAT44(fparam_3,fparam_2);
  uStack_14 = param_1;
  pfStack_10 = param_2;
  pfStack_c = param_3;
  func_00115C70(local_38,(float *)&uStack_24,param_3);
  fVar4 = DAT_00536de4;
  if (local_30 == DAT_00536de4 && local_38[0] == DAT_00536de4) {
    uVar1 = 0;
  }
  else if (local_30 < DAT_00536de4) {
    if (local_38[0] < DAT_00536de4) {
      if (local_38[0] < local_30) {
        iVar2 = func_004905E0(local_30 / local_38[0]);
        uVar1 = 0xc0000000 - iVar2;
      }
      else {
        iVar2 = func_004905E0(local_38[0] / local_30);
        uVar1 = iVar2 + 0x80000000;
      }
    }
    else {
      local_30 = -local_30;
      if (local_30 < local_38[0]) {
        iVar2 = func_004905E0(local_30 / local_38[0]);
        uVar1 = iVar2 + 0x40000000;
      }
      else {
        iVar2 = func_004905E0(local_38[0] / local_30);
        uVar1 = 0x80000000 - iVar2;
      }
    }
  }
  else if (local_38[0] < DAT_00536de4) {
    local_38[0] = -local_38[0];
    if (local_30 < local_38[0]) {
      iVar2 = func_004905E0(local_30 / local_38[0]);
      uVar1 = iVar2 + 0xc0000000;
    }
    else {
      iVar2 = func_004905E0(local_38[0] / local_30);
      uVar1 = -iVar2;
    }
  }
  else if (local_30 < local_38[0]) {
    iVar2 = func_004905E0(local_30 / local_38[0]);
    uVar1 = 0x40000000 - iVar2;
  }
  else {
    uVar1 = func_004905E0(local_38[0] / local_30);
  }
  uVar3 = func_004D80A4(param_2,uVar1,fparam_3);
  param_2[1] = fVar4;
  return uVar3;
}

