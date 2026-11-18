#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004905E0(float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern float DAT_00159fb0;
extern int *DAT_00159fb4;
extern float DAT_00159fb8;

// USA 00159E10 <- EU 00159E14 (Ghidra, non-matching)
// GLOBAL DAT_00159fb0 float
// GLOBAL DAT_00159fb4 int *
// GLOBAL DAT_00159fb8 float

undefined4 func_00159E10(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  func_00115C70(&local_28,param_2,(float *)(param_1 + 0x3d0));
  local_24 = DAT_00159fb0;
  fVar2 = DAT_00159fb0;
  func_00115DC8(&local_28);
  if (local_20 == fVar2 && local_28 == fVar2) {
    iVar1 = 0;
  }
  else if (local_20 < fVar2) {
    if (local_28 < fVar2) {
      if (local_28 < local_20) {
        iVar1 = func_004905E0(local_20 / local_28);
        iVar1 = -0x40000000 - iVar1;
      }
      else {
        iVar1 = func_004905E0(local_28 / local_20);
        iVar1 = iVar1 + -0x80000000;
      }
    }
    else {
      local_20 = -local_20;
      if (local_20 < local_28) {
        iVar1 = func_004905E0(local_20 / local_28);
        iVar1 = iVar1 + 0x40000000;
      }
      else {
        iVar1 = func_004905E0(local_28 / local_20);
        iVar1 = -0x80000000 - iVar1;
      }
    }
  }
  else if (local_28 < fVar2) {
    local_28 = -local_28;
    if (local_20 < local_28) {
      iVar1 = func_004905E0(local_20 / local_28);
      iVar1 = iVar1 + -0x40000000;
    }
    else {
      iVar1 = func_004905E0(local_28 / local_20);
      iVar1 = -iVar1;
    }
  }
  else if (local_20 < local_28) {
    iVar1 = func_004905E0(local_20 / local_28);
    iVar1 = 0x40000000 - iVar1;
  }
  else {
    iVar1 = func_004905E0(local_28 / local_20);
  }
  func_0051D2F4((int *)(param_1 + 0x97c),iVar1,0,*DAT_00159fb4,DAT_00159fb8);
  func_00115154(&local_2c,&local_30,*(uint *)(param_1 + 0x97c));
  *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x978) * local_2c;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x978) * local_30;
  return 1;
}

