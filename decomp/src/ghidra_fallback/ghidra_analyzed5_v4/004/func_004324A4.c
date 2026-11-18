#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0043280c;
extern uint *DAT_00432810;
extern uint *DAT_00432814;
extern float DAT_00432818;

// USA 004324A4 <- EU 00432484 (Ghidra, non-matching)
// GLOBAL DAT_0043280c uint *
// GLOBAL DAT_00432810 uint *
// GLOBAL DAT_00432814 uint *
// GLOBAL DAT_00432818 float

void func_004324A4(uint *param_1,float *param_2,uint param_3,float fparam_0)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  float fVar12;
  
  puVar5 = DAT_0043280c;
  if (((int)param_3 < (int)*param_1) && (param_1[3] != 0)) {
    if (((DAT_0043280c[1] & 1) == 0) &&
       (iVar1 = func_00100174((int *)(DAT_0043280c + 1)), puVar10 = DAT_00432810, iVar1 != 0)) {
      puVar6 = DAT_00432810 + 3;
      DAT_00432810[1] = 0x80;
      puVar10[2] = (uint)puVar6;
      *puVar10 = 0;
    }
    if (((*puVar5 & 1) == 0) &&
       (iVar1 = func_00100174((int *)DAT_0043280c), puVar5 = DAT_00432814, iVar1 != 0)) {
      puVar10 = DAT_00432814 + 3;
      DAT_00432814[1] = 0x80;
      puVar5[2] = (uint)puVar10;
      *puVar5 = 0;
    }
    puVar10 = DAT_00432814;
    puVar5 = DAT_00432810;
    fVar12 = DAT_00432818 - fparam_0;
    *DAT_00432810 = 0;
    *puVar10 = 0;
    uVar11 = param_1[3];
    for (uVar4 = param_3; (int)uVar4 < (int)uVar11; uVar4 = uVar4 + 1) {
      uVar7 = param_1[3];
      puVar10 = param_1 + 3;
      uVar8 = uVar7;
      if (uVar4 < uVar7) {
        uVar8 = param_1[5];
        puVar10 = (uint *)(uVar4 * 9);
      }
      if (uVar4 < uVar7) {
        pfVar2 = (float *)(uVar8 + (int)puVar10 * 4);
      }
      else {
        pfVar2 = (float *)puVar10[2];
      }
      if (fVar12 < *pfVar2 * *param_2 + pfVar2[1] * param_2[1] + pfVar2[2] * param_2[2]) {
        if (uVar4 < *param_1) {
          puVar3 = (undefined4 *)(param_1[2] + uVar4 * 0x24);
        }
        else {
          puVar3 = (undefined4 *)param_1[2];
        }
        uVar8 = *DAT_00432810;
        if ((int)uVar8 < (int)DAT_00432810[1]) {
          puVar10 = DAT_00432810 + 2;
          *DAT_00432810 = uVar8 + 1;
          puVar9 = (undefined4 *)(*puVar10 + uVar8 * 0x24);
          *puVar9 = *puVar3;
          puVar9[1] = puVar3[1];
          puVar9[2] = puVar3[2];
          puVar9[3] = puVar3[3];
          puVar9[4] = puVar3[4];
          puVar9[5] = puVar3[5];
          puVar9[6] = puVar3[6];
          puVar9[7] = puVar3[7];
          puVar9[8] = puVar3[8];
        }
        if (uVar4 < param_1[3]) {
          puVar3 = (undefined4 *)(param_1[5] + uVar4 * 0x24);
        }
        else {
          puVar3 = (undefined4 *)param_1[5];
        }
        uVar8 = *DAT_00432814;
        if ((int)uVar8 < (int)DAT_00432814[1]) {
          puVar10 = DAT_00432814 + 2;
          *DAT_00432814 = uVar8 + 1;
          puVar9 = (undefined4 *)(*puVar10 + uVar8 * 0x24);
          *puVar9 = *puVar3;
          puVar9[1] = puVar3[1];
          puVar9[2] = puVar3[2];
          puVar9[3] = puVar3[3];
          puVar9[4] = puVar3[4];
          puVar9[5] = puVar3[5];
          puVar9[6] = puVar3[6];
          puVar9[7] = puVar3[7];
          puVar9[8] = puVar3[8];
        }
      }
    }
    if (param_3 <= param_1[1]) {
      *param_1 = param_3;
    }
    if (param_3 <= param_1[4]) {
      param_1[3] = param_3;
    }
    uVar11 = *puVar5;
    uVar4 = 0;
    if (0 < (int)uVar11) {
      do {
        if (uVar4 < *DAT_00432810) {
          puVar3 = (undefined4 *)(DAT_00432810[2] + uVar4 * 0x24);
        }
        else {
          puVar3 = (undefined4 *)DAT_00432810[2];
        }
        uVar8 = *param_1;
        if ((int)uVar8 < (int)param_1[1]) {
          *param_1 = uVar8 + 1;
          puVar9 = (undefined4 *)(param_1[2] + uVar8 * 0x24);
          *puVar9 = *puVar3;
          puVar9[1] = puVar3[1];
          puVar9[2] = puVar3[2];
          puVar9[3] = puVar3[3];
          puVar9[4] = puVar3[4];
          puVar9[5] = puVar3[5];
          puVar9[6] = puVar3[6];
          puVar9[7] = puVar3[7];
          puVar9[8] = puVar3[8];
        }
        puVar5 = DAT_00432814;
        if (uVar4 < *DAT_00432814) {
          puVar5 = (uint *)(DAT_00432814[2] + uVar4 * 0x24);
        }
        uVar8 = param_1[3];
        if (*DAT_00432814 <= uVar4) {
          puVar5 = (uint *)puVar5[2];
        }
        if ((int)uVar8 < (int)param_1[4]) {
          param_1[3] = uVar8 + 1;
          puVar10 = (uint *)(param_1[5] + uVar8 * 0x24);
          *puVar10 = *puVar5;
          puVar10[1] = puVar5[1];
          puVar10[2] = puVar5[2];
          puVar10[3] = puVar5[3];
          puVar10[4] = puVar5[4];
          puVar10[5] = puVar5[5];
          puVar10[6] = puVar5[6];
          puVar10[7] = puVar5[7];
          puVar10[8] = puVar5[8];
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar11);
    }
  }
  return;
}

