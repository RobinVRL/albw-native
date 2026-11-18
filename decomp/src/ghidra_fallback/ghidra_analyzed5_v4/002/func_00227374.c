#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_004ED9C8(int param_1);
extern float DAT_002274e4;
extern float DAT_002274e8;
extern float DAT_002274ec;
extern float DAT_002274f0;
extern float DAT_002274f4;
extern float DAT_002274f8;
extern float DAT_002274fc;

// USA 00227374 <- EU 00227374 (Ghidra, non-matching)
// GLOBAL DAT_002274e4 float
// GLOBAL DAT_002274e8 float
// GLOBAL DAT_002274ec float
// GLOBAL DAT_002274f0 float
// GLOBAL DAT_002274f4 float
// GLOBAL DAT_002274f8 float
// GLOBAL DAT_002274fc float

undefined4 func_00227374(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = DAT_002274e8;
  fVar7 = DAT_002274e4;
  fVar2 = *(float *)(param_1 + 0x3d4);
  fVar4 = *(float *)(param_1 + 0x3d8);
  iVar1 = *(int *)(param_1 + 0x598);
  fVar3 = *(float *)(param_1 + 0x600) * DAT_002274e4;
  fVar5 = *(float *)(param_1 + 0x600) * DAT_002274e8;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar2 + fVar3;
  *(float *)(iVar1 + 0xc) = fVar4 - fVar5;
  func_004356B4(*(int **)(param_1 + 0x598));
  func_0043625C(*(int **)(*(int *)(param_1 + 0x604) + 0x14),(undefined4 *)(param_1 + 0x3d0));
  func_004ED9C8(*(int *)(param_1 + 0x604));
  fVar4 = *(float *)(param_1 + 0x61c);
  fVar2 = *(float *)(param_1 + 0x3d4);
  fVar3 = *(float *)(param_1 + 0x3d8);
  fVar5 = DAT_002274ec + fVar4 * fVar7;
  iVar1 = *(int *)(param_1 + 0x608);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar2 + fVar5;
  *(float *)(iVar1 + 0xc) = fVar3 - fVar4 * fVar6;
  func_004356B4(*(int **)(param_1 + 0x608));
  fVar4 = *(float *)(param_1 + 0x61c);
  fVar5 = *(float *)(param_1 + 0x3d4);
  fVar3 = *(float *)(param_1 + 0x3d8);
  fVar2 = DAT_002274f0 + fVar4 * fVar7;
  iVar1 = *(int *)(param_1 + 0x60c);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar5 + fVar2;
  *(float *)(iVar1 + 0xc) = fVar3 - fVar4 * fVar6;
  func_004356B4(*(int **)(param_1 + 0x60c));
  func_004ED9C8(*(int *)(param_1 + 0x610));
  fVar2 = *(float *)(param_1 + 0x61c);
  fVar5 = *(float *)(param_1 + 0x3d4);
  fVar3 = *(float *)(param_1 + 0x3d8);
  fVar7 = DAT_002274f4 + fVar2 * fVar7;
  iVar1 = *(int *)(param_1 + 0x620);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar5 + fVar7;
  *(float *)(iVar1 + 0xc) = fVar3 - fVar2 * fVar6;
  func_004356B4(*(int **)(param_1 + 0x620));
  fVar5 = DAT_002274fc;
  iVar1 = *(int *)(param_1 + 0x614);
  fVar7 = *(float *)(param_1 + 0x3d4);
  fVar6 = *(float *)(param_1 + 0x3d8);
  fVar3 = *(float *)(iVar1 + 0x5c) * DAT_002274f8;
  fVar2 = *(float *)(*(int *)(param_1 + 0x598) + 0x5c);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar7 + fVar3;
  *(float *)(iVar1 + 0xc) = fVar6 - fVar2 * fVar5;
  func_004356B4(*(int **)(param_1 + 0x614));
  return func_004ED9C8(*(int *)(param_1 + 0x618));
}

