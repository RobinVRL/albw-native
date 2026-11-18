#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 001CDF44 <- EU 001CDF44 (Ghidra, non-matching)

undefined4 func_001CDF44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  iVar1 = *(int *)(param_1 + 0x4f4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),0,(float *)(param_1 + 0x3d0));
  iVar1 = *(int *)(param_1 + 0x4f4);
  fVar3 = *(float *)(param_1 + 0x59c) * *(float *)(param_1 + 0x578);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(float *)(iVar1 + 0x74) = fVar3;
  *(float *)(iVar1 + 0x78) = fVar3;
  *(float *)(iVar1 + 0x7c) = fVar3;
  func_004CEAF0(*(int *)(param_1 + 0x4f4));
  iVar1 = *(int *)(param_1 + 0x504);
  uVar2 = *(undefined4 *)(param_1 + 0x3d8);
  fVar3 = *(float *)(param_1 + 0x3d4);
  if (*(float *)(param_1 + 0x584) < *(float *)(param_1 + 0x3d4)) {
    fVar3 = *(float *)(param_1 + 0x584);
  }
  fVar4 = *(float *)(param_1 + 0x57c);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar3 + fVar4;
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  func_004356B4(*(int **)(param_1 + 0x504));
  local_20 = *(float *)(param_1 + 0x4d0);
  uStack_1c = *(undefined4 *)(param_1 + 0x4d4);
  uStack_18 = *(undefined4 *)(param_1 + 0x4d8);
  return func_001512B4(*(int *)(param_1 + 0x56c),&local_20);
}

