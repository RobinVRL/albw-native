#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_003241A4(char *param_1,float *param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_003245e0;
extern float DAT_003245e4;
extern uint DAT_003245e8;

// USA 003243A8 <- EU 00324384 (Ghidra, non-matching)
// GLOBAL DAT_003245e0 float
// GLOBAL DAT_003245e4 float
// GLOBAL DAT_003245e8 uint

undefined4 func_003243A8(char *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint extraout_r1;
  char *pcVar5;
  uint extraout_r1_00;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  bVar7 = false;
  if (*param_3 == DAT_003245e0) {
    bVar7 = param_3[2] == DAT_003245e0;
  }
  if (bVar7) {
    return 0;
  }
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 < 1) {
      return 0;
    }
    param_1[0x8c] = '\x01';
    param_1[0x8d] = '\0';
    param_1[0x8e] = '\0';
    param_1[0x8f] = '\0';
    iVar4 = *(int *)(param_1 + 0x88);
    if (iVar3 <= iVar4) {
      iVar4 = iVar4 - iVar3;
    }
    pfVar2 = (float *)(*(int *)(param_1 + 0x80) + iVar4 * 0xc);
    *pfVar2 = *param_2;
    pfVar2[1] = param_2[1];
    pfVar2[2] = param_2[2];
    return 0;
  }
  func_003241A4(param_1,param_2,*(float *)(param_1 + 0x108));
  if (*(int *)(param_1 + 0x8c) < 1) {
    pfVar2 = *(float **)(param_1 + 0x80);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x8c) + -1 + *(int *)(param_1 + 0x88);
    if (*(int *)(param_1 + 0x84) <= iVar3) {
      iVar3 = iVar3 - *(int *)(param_1 + 0x84);
    }
    pfVar2 = (float *)(*(int *)(param_1 + 0x80) + iVar3 * 0xc);
  }
  fVar11 = *param_2;
  fVar8 = *pfVar2;
  fVar9 = pfVar2[2];
  fVar10 = param_2[2];
  local_28 = *param_3;
  fStack_24 = param_3[1];
  fStack_20 = param_3[2];
  iVar3 = *(int *)(param_1 + 0x8c);
  iVar4 = *(int *)(param_1 + 0x84);
  if (iVar3 < iVar4) {
    *(int *)(param_1 + 0x8c) = iVar3 + 1;
    iVar3 = iVar3 + *(int *)(param_1 + 0x88);
  }
  else {
    if (0 < iVar3) {
      iVar6 = *(int *)(param_1 + 0x88);
      iVar3 = iVar3 + -1;
      *(int *)(param_1 + 0x88) = iVar6 + 1;
      if (iVar4 <= iVar6 + 1) {
        param_1[0x88] = '\0';
        param_1[0x89] = '\0';
        param_1[0x8a] = '\0';
        param_1[0x8b] = '\0';
      }
      *(int *)(param_1 + 0x8c) = iVar3;
    }
    if (iVar4 <= iVar3) goto LAB_00324518;
    *(int *)(param_1 + 0x8c) = iVar3 + 1;
    iVar3 = iVar3 + *(int *)(param_1 + 0x88);
  }
  if (iVar4 <= iVar3) {
    iVar3 = iVar3 - iVar4;
  }
  pfVar2 = (float *)(*(int *)(param_1 + 0x80) + iVar3 * 0xc);
  *pfVar2 = *param_2;
  pfVar2[1] = param_2[1];
  pfVar2[2] = param_2[2];
LAB_00324518:
  uVar1 = DAT_003245e8;
  if (*(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x10c) * DAT_003245e4 <
      (fVar8 - fVar11) * (fVar8 - fVar11) + (fVar9 - fVar10) * (fVar9 - fVar10)) {
    iVar3 = func_0068C690(&local_28);
    uVar12 = func_00114608(uVar1,extraout_r1);
    uVar1 = (uint)((int)uVar12 + iVar3) >> 0x1d;
    pcVar5 = param_1;
    if (uVar1 < 8) {
      pcVar5 = param_1 + uVar1 * 0x10;
      param_1 = param_1 + uVar1 * 0x10;
    }
    *pcVar5 = '\0';
    *(float *)(param_1 + 4) = *param_2;
    *(float *)(param_1 + 8) = param_2[1];
    *(float *)(param_1 + 0xc) = param_2[2];
    return 0;
  }
  iVar3 = func_0068C690(&local_28);
  uVar12 = func_00114608(uVar1,extraout_r1_00);
  uVar1 = (uint)((int)uVar12 + iVar3) >> 0x1d;
  pcVar5 = param_1;
  if (uVar1 < 8) {
    pcVar5 = param_1 + uVar1 * 0x10;
    param_1 = param_1 + uVar1 * 0x10;
  }
  *pcVar5 = '\x01';
  *(float *)(param_1 + 4) = *param_2;
  *(float *)(param_1 + 8) = param_2[1];
  *(float *)(param_1 + 0xc) = param_2[2];
  return 1;
}

