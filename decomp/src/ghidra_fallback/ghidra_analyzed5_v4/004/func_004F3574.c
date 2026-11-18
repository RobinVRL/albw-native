#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float DAT_004f3638;
extern float DAT_004f363c;

// USA 004F3574 <- EU 004F354C (Ghidra, non-matching)
// GLOBAL DAT_004f3638 float
// GLOBAL DAT_004f363c float

undefined4 func_004F3574(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  piVar2 = (int *)(param_1 + 0x8c0);
  iVar3 = *(int *)(param_1 + 0x8c0);
  uVar8 = *(undefined4 *)(param_1 + 0x3d0);
  fVar4 = func_0054DE3C(param_1,1,1);
  fVar5 = *(float *)(param_1 + 0x3d4);
  uVar6 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar3 + 4) = uVar8;
  *(float *)(iVar3 + 8) = fVar4 + fVar5;
  *(undefined4 *)(iVar3 + 0xc) = uVar6;
  func_004356B4((int *)*piVar2);
  iVar3 = *(int *)(param_1 + 0x8c4);
  uVar8 = *(undefined4 *)(param_1 + 0x3d0);
  fVar4 = func_0054DE3C(param_1,1,1);
  fVar5 = *(float *)(param_1 + 0x3d4);
  uVar6 = *(undefined4 *)(param_1 + 0x3d8);
  fVar4 = fVar4 * DAT_004f3638;
  *(undefined4 *)(iVar3 + 4) = uVar8;
  *(float *)(iVar3 + 8) = fVar5 + fVar4;
  *(undefined4 *)(iVar3 + 0xc) = uVar6;
  func_004356B4(*(int **)(param_1 + 0x8c4));
  fVar4 = DAT_004f363c;
  iVar3 = *piVar2;
  piVar1 = *(int **)(param_1 + 0x8c8);
  piVar1[1] = *(int *)(iVar3 + 4);
  piVar1[2] = *(int *)(iVar3 + 8);
  piVar1[3] = *(int *)(iVar3 + 0xc);
  iVar3 = *piVar2;
  fVar5 = *(float *)(iVar3 + 0x5c);
  fVar7 = *(float *)(iVar3 + 0x60);
  piVar1[0x16] = (int)ALBW_AS_U32((*(float *)(iVar3 + 0x58) + fVar4));
  piVar1[0x17] = (int)ALBW_AS_U32((fVar5 + fVar4));
  piVar1[0x18] = (int)ALBW_AS_U32((fVar7 + fVar4));
  return func_004356B4(piVar1);
}

