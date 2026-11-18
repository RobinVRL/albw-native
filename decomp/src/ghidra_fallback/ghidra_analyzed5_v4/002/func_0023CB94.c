#include "ghidra_types.h"

extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_0023cc48;
extern float DAT_0023cc4c;
extern float DAT_0023cc50;

// USA 0023CB94 <- EU 0023CB94 (Ghidra, non-matching)
// GLOBAL DAT_0023cc48 float
// GLOBAL DAT_0023cc4c float
// GLOBAL DAT_0023cc50 float

undefined4 func_0023CB94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x4f4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  fVar3 = *(float *)(param_1 + 0x518);
  if (*(char *)(param_1 + 0x539) != '\0') {
    fVar3 = fVar3 * DAT_0023cc48;
  }
  func_0014D994((float *)(param_1 + 0x530),fVar3,DAT_0023cc50,DAT_0023cc4c);
  iVar1 = *(int *)(param_1 + 0x4f4);
  uVar2 = *(undefined4 *)(param_1 + 0x530);
  *(undefined4 *)(iVar1 + 0x74) = uVar2;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x78) = uVar2;
  *(undefined4 *)(iVar1 + 0x7c) = uVar2;
  func_004CEAF0(*(int *)(param_1 + 0x4f4));
  fVar4 = *(float *)(param_1 + 0x504);
  fVar3 = *(float *)(param_1 + 0x3d4);
  iVar1 = *(int *)(param_1 + 0x500);
  uVar2 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar3 + fVar4;
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  return func_004356B4(*(int **)(param_1 + 0x500));
}

