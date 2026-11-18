#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004905E0(float fparam_0);
extern int *DAT_001e7a24;
extern float DAT_001e7a28;

// USA 001E78AC <- EU 001E78AC (Ghidra, non-matching)
// GLOBAL DAT_001e7a24 int *
// GLOBAL DAT_001e7a28 float

void func_001E78AC(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  piVar1 = DAT_001e7a24;
  func_00115C70(&local_28,(float *)(param_1 + 0x3d0),*(float **)(*DAT_001e7a24 + 0x1c));
  local_24 = DAT_001e7a28;
  fVar3 = DAT_001e7a28;
  func_00115DC8(&local_28);
  if (local_20 == fVar3 && local_28 == fVar3) {
    iVar2 = 0;
  }
  else if (local_20 < fVar3) {
    if (local_28 < fVar3) {
      if (local_28 < local_20) {
        iVar2 = func_004905E0(local_20 / local_28);
        iVar2 = -0x40000000 - iVar2;
      }
      else {
        iVar2 = func_004905E0(local_28 / local_20);
        iVar2 = iVar2 + -0x80000000;
      }
    }
    else {
      local_20 = -local_20;
      if (local_20 < local_28) {
        iVar2 = func_004905E0(local_20 / local_28);
        iVar2 = iVar2 + 0x40000000;
      }
      else {
        iVar2 = func_004905E0(local_28 / local_20);
        iVar2 = -0x80000000 - iVar2;
      }
    }
  }
  else if (local_28 < fVar3) {
    local_28 = -local_28;
    if (local_20 < local_28) {
      iVar2 = func_004905E0(local_20 / local_28);
      iVar2 = iVar2 + -0x40000000;
    }
    else {
      iVar2 = func_004905E0(local_28 / local_20);
      iVar2 = -iVar2;
    }
  }
  else if (local_20 < local_28) {
    iVar2 = func_004905E0(local_20 / local_28);
    iVar2 = 0x40000000 - iVar2;
  }
  else {
    iVar2 = func_004905E0(local_28 / local_20);
  }
  *(int *)(param_1 + 0xad8) = iVar2;
  func_00115C54((float *)(param_1 + 0xacc),*(float **)(*piVar1 + 0x1c),&local_28);
  *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(param_1 + 0x3d4);
  return;
}

