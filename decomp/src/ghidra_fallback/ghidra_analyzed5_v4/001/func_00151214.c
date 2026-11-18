#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 00151214 <- EU 00151214 (Ghidra, non-matching)

void func_00151214(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = *(int *)(param_1 + 0x4f4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  iVar1 = *(int *)(param_1 + 0x4f4);
  fVar3 = *(float *)(param_1 + 0x5b8) * *(float *)(param_1 + 0x590);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(float *)(iVar1 + 0x74) = fVar3;
  *(float *)(iVar1 + 0x78) = fVar3;
  *(float *)(iVar1 + 0x7c) = fVar3;
  func_004CEAF0(*(int *)(param_1 + 0x4f4));
  fVar4 = *(float *)(param_1 + 0x594);
  fVar3 = *(float *)(param_1 + 0x3d4);
  iVar1 = *(int *)(param_1 + 0x51c);
  uVar2 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar3 + fVar4;
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  func_004356B4(*(int **)(param_1 + 0x51c));
  iVar1 = *(int *)(*(int *)(param_1 + 0x584) + 0x1c);
  func_00115C54(&fStack_18,(float *)(param_1 + 0x4d0),(float *)(*(int *)(param_1 + 0x584) + 4));
  *(float *)(iVar1 + 0x88) = fStack_18;
  *(undefined4 *)(iVar1 + 0x8c) = uStack_14;
  *(undefined4 *)(iVar1 + 0x90) = unaff_r4;
  *(undefined1 *)(iVar1 + 0xa0) = 1;
  return;
}

