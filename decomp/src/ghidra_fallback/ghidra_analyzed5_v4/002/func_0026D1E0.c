#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_00520FC0(void);
extern float DAT_0026d3cc;
extern undefined4 DAT_0026d3d0;

// USA 0026D1E0 <- EU 0026D208 (Ghidra, non-matching)
// GLOBAL DAT_0026d3cc float
// GLOBAL DAT_0026d3d0 undefined4

void func_0026D1E0(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  fparam_0 = DAT_0026d3cc;
  *(float *)(param_1 + 0x3dc) = DAT_0026d3cc;
  *(float *)(param_1 + 0x3e0) = fparam_0;
  *(float *)(param_1 + 0x3e4) = fparam_0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 1;
  func_004FCD5C(param_1 + 0x5a8,1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 4;
  func_004FD038(param_1 + 0x5a8,1);
  uVar1 = DAT_0026d3d0;
  iVar3 = *(int *)(param_1 + 0x91c);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar3 + 0x74) = uVar1;
  *(undefined4 *)(iVar3 + 0x78) = uVar1;
  *(undefined4 *)(iVar3 + 0x7c) = uVar1;
  func_004FC1CC(param_1,*(int *)(param_1 + 0x91c),0xb,fparam_0);
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(local_20,(float *)(param_1 + 0x3d0),pfVar2);
  if (local_18 == fparam_0 && local_20[0] == fparam_0) {
    iVar3 = 0;
  }
  else if (local_18 < fparam_0) {
    if (local_20[0] < fparam_0) {
      if (local_20[0] < local_18) {
        iVar3 = func_004905E0(local_18 / local_20[0]);
        iVar3 = -0x40000000 - iVar3;
      }
      else {
        iVar3 = func_004905E0(local_20[0] / local_18);
        iVar3 = iVar3 + -0x80000000;
      }
    }
    else {
      local_18 = -local_18;
      if (local_18 < local_20[0]) {
        iVar3 = func_004905E0(local_18 / local_20[0]);
        iVar3 = iVar3 + 0x40000000;
      }
      else {
        iVar3 = func_004905E0(local_20[0] / local_18);
        iVar3 = -0x80000000 - iVar3;
      }
    }
  }
  else if (local_20[0] < fparam_0) {
    local_20[0] = -local_20[0];
    if (local_18 < local_20[0]) {
      iVar3 = func_004905E0(local_18 / local_20[0]);
      iVar3 = iVar3 + -0x40000000;
    }
    else {
      iVar3 = func_004905E0(local_20[0] / local_18);
      iVar3 = -iVar3;
    }
  }
  else if (local_18 < local_20[0]) {
    iVar3 = func_004905E0(local_18 / local_20[0]);
    iVar3 = 0x40000000 - iVar3;
  }
  else {
    iVar3 = func_004905E0(local_20[0] / local_18);
  }
  *(int *)(param_1 + 0x8d8) = iVar3;
  *(int *)(param_1 + 1000) = iVar3;
  return;
}

