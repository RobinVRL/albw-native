#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_00513A3C(int param_1);
extern int func_00513BE0(int param_1);
extern int func_00520FC0(void);
extern float DAT_00514a58;
extern float DAT_00514a5c;
extern float DAT_00514a60;
extern float DAT_00514a64;
extern float DAT_00514a68;
extern int DAT_00514a6c;
extern float DAT_00514a70;
extern int *DAT_00514a74;

// USA 005148C8 <- EU 005148A0 (Ghidra, non-matching)
// GLOBAL DAT_00514a58 float
// GLOBAL DAT_00514a5c float
// GLOBAL DAT_00514a60 float
// GLOBAL DAT_00514a64 float
// GLOBAL DAT_00514a68 float
// GLOBAL DAT_00514a6c int
// GLOBAL DAT_00514a70 float
// GLOBAL DAT_00514a74 int *

undefined4 func_005148C8(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  code *pcVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  
  piVar7 = *(int **)(param_1 + 0x4a0);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4a8) + *(char *)(param_1 + 0x490) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x4a8) + *(char *)(param_1 + 0x490) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)((int)piVar7 + ((int)uVar1 >> 1)));
  }
  (*pcVar4)((int)((int)piVar7) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x49c);
  iVar2 = *(int *)(param_1 + 0x48c) + 1;
  *(int *)(param_1 + 0x48c) = iVar2;
  uVar6 = extraout_r1;
  if (iVar5 != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fVar9);
    uVar6 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x4b0),uVar6,iVar5,piVar7);
  uVar6 = 0;
  func_00168E9C(*(int **)(param_1 + 0x4b0),*(int *)(param_1 + 0x51c),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x4b4),extraout_r1_01,uVar6,piVar7);
  func_00168E9C(*(int **)(param_1 + 0x4b4),*(int *)(param_1 + 0x51c),(int *)0x0);
  func_00513A3C(param_1);
  iVar2 = *(int *)(param_1 + 0x4cc);
  uVar6 = *(undefined4 *)(param_1 + 0x3d4);
  uVar8 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar2 + 8) = uVar6;
  *(undefined4 *)(iVar2 + 0xc) = uVar8;
  func_004356B4(*(int **)(param_1 + 0x4cc));
  func_00513BE0(param_1);
  func_004356B4(*(int **)(param_1 + 0x4d0));
  fVar11 = DAT_00514a5c;
  fVar9 = DAT_00514a58;
  fVar10 = (DAT_00514a68 *
           ((*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x570)) - DAT_00514a60)) /
           DAT_00514a64 + DAT_00514a5c;
  *(float *)(param_1 + 0x56c) = fVar10;
  if ((fVar11 <= fVar10) && (fVar11 = fVar10, fVar9 < fVar10)) {
    fVar11 = fVar9;
  }
  *(float *)(param_1 + 0x56c) = fVar11;
  if ((*(short *)(param_1 + 0x32) == 0) &&
     (pfVar3 = (float *)func_00520FC0(), fVar9 = *(float *)(param_1 + 0x3d0) - *pfVar3,
     fVar11 = *(float *)(param_1 + 0x3d8) - pfVar3[2],
     (int)ALBW_AS_U32((fVar9 * fVar9 + fVar11 * fVar11)) < DAT_00514a6c)) {
    return func_001DDDE8(*DAT_00514a74,(float *)(param_1 + 0x3d0),1,DAT_00514a70);
  }
  return 0;
}

