#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_004905E0(float fparam_0);
extern float DAT_003b9dc4;
extern int *DAT_003b9dc8;

// USA 003B9B50 <- EU 003B9B2C (Ghidra, non-matching)
// GLOBAL DAT_003b9dc4 float
// GLOBAL DAT_003b9dc8 int *

undefined4 func_003B9B50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((float *)(albw_frame + 0x8))
  #define local_20 (*(float *)(albw_frame + 0x10))
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 0xbcc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1);
  }
  fVar5 = DAT_003b9dc4;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x90) = 0;
  iVar2 = *(int *)(param_1 + 0x48);
  *(float *)(iVar2 + 0xa2c) = fVar5;
  *(float *)(iVar2 + 0xa30) = fVar5;
  *(float *)(iVar2 + 0xa34) = fVar5;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0xb3f) = 1;
  iVar2 = *(int *)(param_1 + 0x48);
  if ((*(uint *)(iVar2 + 0x938) & 0x40) == 0) {
    return func_003842C0(iVar2 + 0x8c0,0,10,1);
  }
  func_00115C70(local_28,(float *)(iVar2 + 0x3d0),*(float **)(*DAT_003b9dc8 + 0x1c));
  iVar2 = *(int *)(param_1 + 0x48);
  if ((local_20 == fVar5) && (local_28[0] == fVar5)) {
    iVar3 = 0;
  }
  else if (local_20 < fVar5) {
    if (local_28[0] < fVar5) {
      if (local_28[0] < local_20) {
        iVar3 = func_004905E0(local_20 / local_28[0]);
        iVar3 = -0x40000000 - iVar3;
      }
      else {
        iVar3 = func_004905E0(local_28[0] / local_20);
        iVar3 = iVar3 + -0x80000000;
      }
    }
    else {
      fVar4 = -local_20;
      if (fVar4 < local_28[0]) {
        iVar3 = func_004905E0(fVar4 / local_28[0]);
        iVar3 = iVar3 + 0x40000000;
      }
      else {
        iVar3 = func_004905E0(local_28[0] / fVar4);
        iVar3 = -0x80000000 - iVar3;
      }
    }
  }
  else if (local_28[0] < fVar5) {
    fVar4 = -local_28[0];
    if (local_20 < fVar4) {
      iVar3 = func_004905E0(local_20 / fVar4);
      iVar3 = iVar3 + -0x40000000;
    }
    else {
      iVar3 = func_004905E0(fVar4 / local_20);
      iVar3 = -iVar3;
    }
  }
  else if (local_20 < local_28[0]) {
    iVar3 = func_004905E0(local_20 / local_28[0]);
    iVar3 = 0x40000000 - iVar3;
  }
  else {
    iVar3 = func_004905E0(local_28[0] / local_20);
  }
  *(int *)(iVar2 + 0xa20) = iVar3;
  iVar2 = *(int *)(param_1 + 0x48);
  if (local_28[0] * *(float *)(iVar2 + 0x958) + fVar5 * *(float *)(iVar2 + 0x95c) +
      local_20 * *(float *)(iVar2 + 0x960) <= fVar5) {
    return func_003842C0(iVar2 + 0x8c0,0x3a,10,1);
  }
  return func_003842C0(iVar2 + 0x8c0,0x3b,10,1);
}

