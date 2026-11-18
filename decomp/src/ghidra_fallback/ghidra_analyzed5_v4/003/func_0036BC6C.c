#include "ghidra_types.h"


// USA 0036BC6C <- EU 0036BC48 (Ghidra, non-matching)

void func_0036BC6C(undefined4 param_1,float *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  float *in_r12;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  bVar1 = *(byte *)(param_3 + 0x650);
  uVar3 = 0;
  if (bVar1 != 0) {
    do {
      if (uVar3 < *(byte *)(param_3 + 0x650)) {
        iVar2 = *(int *)(param_3 + 0x5a8 + uVar3 * 0xc);
        if (iVar2 != 0) {
          in_r12 = (float *)(uint)*(byte *)(iVar2 + 0x30);
        }
        if (iVar2 != 0 && in_r12 != (float *)0x0) {
          fVar9 = *(float *)(iVar2 + 0x9c);
          fVar10 = *(float *)(iVar2 + 0x14c);
          fVar11 = *(float *)(iVar2 + 0x8c) - fVar10 * *(float *)(iVar2 + 0x74);
          fVar7 = *(float *)(iVar2 + 0xac) - fVar10 * *(float *)(iVar2 + 0x7c);
          fVar13 = *param_2;
          fVar4 = *(float *)(iVar2 + 0x8c) + fVar10 * *(float *)(iVar2 + 0x74);
          fVar12 = *(float *)(iVar2 + 0xac) + fVar10 * *(float *)(iVar2 + 0x7c);
          if (fVar13 <= fVar11) {
            fVar10 = fVar13;
          }
          if (fVar11 < fVar13) {
            fVar10 = fVar11;
          }
          *param_2 = fVar10;
          fVar13 = param_2[1];
          if (fVar9 < param_2[1]) {
            fVar13 = fVar9;
          }
          param_2[1] = fVar13;
          fVar8 = fVar7;
          if (param_2[2] <= fVar7) {
            fVar8 = param_2[2];
          }
          param_2[2] = fVar8;
          if (fVar11 < param_2[3]) {
            fVar11 = param_2[3];
          }
          param_2[3] = fVar11;
          fVar6 = fVar9;
          if (fVar9 < param_2[4]) {
            fVar6 = param_2[4];
          }
          param_2[4] = fVar6;
          fVar5 = param_2[5];
          if (param_2[5] <= fVar7) {
            fVar5 = fVar7;
          }
          param_2[5] = fVar5;
          if (fVar4 < fVar10) {
            fVar10 = fVar4;
          }
          *param_2 = fVar10;
          if (fVar9 < fVar13) {
            fVar13 = fVar9;
          }
          param_2[1] = fVar13;
          if (fVar12 < fVar8) {
            fVar8 = fVar12;
          }
          param_2[2] = fVar8;
          if (fVar11 <= fVar4) {
            fVar11 = fVar4;
          }
          param_2[3] = fVar11;
          if (fVar6 <= fVar9) {
            fVar6 = fVar9;
          }
          param_2[4] = fVar6;
          if (fVar5 <= fVar12) {
            fVar5 = fVar12;
          }
          param_2[5] = fVar5;
          in_r12 = param_2;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)(uint)bVar1);
  }
  return;
}

