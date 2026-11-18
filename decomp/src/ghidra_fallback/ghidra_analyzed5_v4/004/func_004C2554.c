#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_004c2624;

// USA 004C2554 <- EU 004C252C (Ghidra, non-matching)
// GLOBAL DAT_004c2624 int *

undefined4 func_004C2554(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  iVar1 = func_00588BE4(param_1);
  if (iVar1 == *DAT_004c2624) {
    iVar1 = *(int *)(param_1 + 0x4f4);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    uVar2 = *(uint *)(param_1 + 1000);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4f4);
    uVar2 = 0;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  }
  func_004D8AEC((float *)(iVar1 + 0x80),uVar2,(float *)(param_1 + 0x3d0));
  iVar1 = *(int *)(param_1 + 0x4f4);
  fVar4 = *(float *)(param_1 + 0x598) * *(float *)(param_1 + 0x574);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(float *)(iVar1 + 0x74) = fVar4;
  *(float *)(iVar1 + 0x78) = fVar4;
  *(float *)(iVar1 + 0x7c) = fVar4;
  func_004CEAF0(*(int *)(param_1 + 0x4f4));
  iVar1 = *(int *)(param_1 + 0x4fc);
  uVar3 = *(undefined4 *)(param_1 + 0x3d8);
  fVar4 = *(float *)(param_1 + 0x3d4);
  if (*(float *)(param_1 + 0x580) < *(float *)(param_1 + 0x3d4)) {
    fVar4 = *(float *)(param_1 + 0x580);
  }
  fVar5 = *(float *)(param_1 + 0x578);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar4 + fVar5;
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  func_004356B4(*(int **)(param_1 + 0x4fc));
  local_20 = *(float *)(param_1 + 0x4d0);
  uStack_1c = *(undefined4 *)(param_1 + 0x4d4);
  uStack_18 = *(undefined4 *)(param_1 + 0x4d8);
  return func_001512B4(*(int *)(param_1 + 0x564),&local_20);
}

