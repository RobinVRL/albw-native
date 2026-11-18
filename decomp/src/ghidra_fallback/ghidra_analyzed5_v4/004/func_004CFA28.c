#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern int func_005688C0(int param_1,int *param_2,int *param_3,float *param_4);

// USA 004CFA28 <- EU 004CFA00 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *

void func_004CFA28(int param_1,int *param_2,int *param_3,float *param_4,float *param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
  int *piVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_54 (*(int *)(albw_frame + 0x4c))
  #define local_50 (*(int * *)(albw_frame + 0x50))
  #define local_34 (*(int *)(albw_frame + 0x6c))
  #define local_30 (*(int * *)(albw_frame + 0x70))
  #define local_2c (*(int * *)(albw_frame + 0x74))
  #define pfStack_28 (*(float * *)(albw_frame + 0x78))
  if (-1 < *(int *)(param_1 + 0x13c)) {
    local_54 = *(int *)(*(int *)(param_1 + 0x50) + 8);
    local_50 = (int *)(local_54 + 0x68);
    local_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    pfStack_28 = param_4;
    if (*(char *)(param_1 + 0x16b) == '\0') {
      uVar11 = 0;
      if (*(int *)(local_54 + 0x6c) != 0) {
        do {
          piVar8 = (int *)(*local_50 + uVar11 * 0x1c);
          uVar3 = piVar8[1];
          piVar10 = (int *)(*local_30 + uVar11 * 8);
          while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
            pbVar1 = (byte *)(*piVar8 + uVar3 * 8);
            uVar4 = (uint)*pbVar1;
            if (uVar4 == uVar3) {
              pfVar7 = (float *)(*piVar10 + uVar3 * 0x18);
              pfVar6 = (float *)(piVar8[2] + uVar3 * 0x18);
              func_00115074(&local_98,param_4,pfVar6);
              fVar12 = pfVar6[3];
              fVar15 = pfVar6[4];
              fVar14 = pfVar6[5];
              fVar13 = ABS(param_4[2]) * fVar14 + ABS(param_4[1]) * fVar15 + ABS(*param_4) * fVar12;
              fVar16 = ABS(param_4[6]) * fVar14 +
                       ABS(param_4[5]) * fVar15 + ABS(param_4[4]) * fVar12;
              fVar12 = ABS(param_4[10]) * fVar14 +
                       ABS(param_4[9]) * fVar15 + ABS(param_4[8]) * fVar12;
              *pfVar7 = local_98 - fVar13;
              pfVar7[1] = local_94 - fVar16;
              pfVar7[2] = local_90 - fVar12;
              pfVar7[3] = local_98 + fVar13;
              pfVar7[4] = local_94 + fVar16;
              pfVar7[5] = local_90 + fVar12;
            }
            else {
              iVar2 = *piVar10;
              pfVar7 = (float *)(iVar2 + uVar4 * 0x18);
              pfVar9 = (float *)(iVar2 + (uint)pbVar1[1] * 0x18);
              pfVar6 = (float *)(iVar2 + uVar3 * 0x18);
              fVar12 = *pfVar7;
              if (*pfVar9 < *pfVar7) {
                fVar12 = *pfVar9;
              }
              *pfVar6 = fVar12;
              fVar12 = pfVar7[3];
              if (pfVar7[3] < pfVar9[3]) {
                fVar12 = pfVar9[3];
              }
              pfVar6[3] = fVar12;
              fVar12 = pfVar7[1];
              if (pfVar9[1] < pfVar7[1]) {
                fVar12 = pfVar9[1];
              }
              pfVar6[1] = fVar12;
              fVar12 = pfVar7[4];
              if (pfVar7[4] < pfVar9[4]) {
                fVar12 = pfVar9[4];
              }
              pfVar6[4] = fVar12;
              fVar12 = pfVar7[2];
              if (pfVar9[2] < pfVar7[2]) {
                fVar12 = pfVar9[2];
              }
              pfVar6[2] = fVar12;
              fVar12 = pfVar7[5];
              if (pfVar7[5] < pfVar9[5]) {
                fVar12 = pfVar9[5];
              }
              pfVar6[5] = fVar12;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)local_50[1]);
      }
    }
    else {
      uVar11 = 0;
      if (*(int *)(local_54 + 0x6c) != 0) {
        do {
          piVar10 = (int *)(*local_30 + uVar11 * 8);
          piVar8 = (int *)(*local_50 + uVar11 * 0x1c);
          uVar3 = piVar8[1];
          pfVar6 = (float *)(*(int *)(*(int *)(local_34 + 0x24) + 0x14) +
                            (uint)*(ushort *)(*local_50 + uVar11 * 0x1c + 0x1a) * 0x30);
          while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
            pbVar1 = (byte *)(*piVar8 + uVar3 * 8);
            uVar4 = (uint)*pbVar1;
            if (uVar4 == uVar3) {
              pfVar9 = (float *)(*piVar10 + uVar3 * 0x18);
              pfVar7 = (float *)(piVar8[2] + uVar3 * 0x18);
              func_00115074(&local_8c,pfVar6,pfVar7);
              fVar13 = pfVar7[3];
              fVar12 = pfVar7[4];
              fVar15 = pfVar7[5];
              fVar14 = ABS(pfVar6[2]) * fVar15 + ABS(pfVar6[1]) * fVar12 + ABS(*pfVar6) * fVar13;
              fVar16 = ABS(pfVar6[6]) * fVar15 + ABS(pfVar6[5]) * fVar12 + ABS(pfVar6[4]) * fVar13;
              fVar12 = ABS(pfVar6[10]) * fVar15 + ABS(pfVar6[9]) * fVar12 + ABS(pfVar6[8]) * fVar13;
              *pfVar9 = local_8c - fVar14;
              pfVar9[1] = local_88 - fVar16;
              pfVar9[2] = local_84 - fVar12;
              pfVar9[3] = local_8c + fVar14;
              pfVar9[4] = local_88 + fVar16;
              pfVar9[5] = local_84 + fVar12;
            }
            else {
              iVar2 = *piVar10;
              pfVar9 = (float *)(iVar2 + uVar4 * 0x18);
              pfVar5 = (float *)(iVar2 + (uint)pbVar1[1] * 0x18);
              pfVar7 = (float *)(iVar2 + uVar3 * 0x18);
              fVar12 = *pfVar5;
              if (*pfVar9 <= *pfVar5) {
                fVar12 = *pfVar9;
              }
              *pfVar7 = fVar12;
              fVar12 = pfVar9[3];
              if (pfVar9[3] < pfVar5[3]) {
                fVar12 = pfVar5[3];
              }
              pfVar7[3] = fVar12;
              fVar12 = pfVar9[1];
              if (pfVar5[1] < pfVar9[1]) {
                fVar12 = pfVar5[1];
              }
              pfVar7[1] = fVar12;
              fVar12 = pfVar5[4];
              if (pfVar5[4] <= pfVar9[4]) {
                fVar12 = pfVar9[4];
              }
              pfVar7[4] = fVar12;
              fVar12 = pfVar9[2];
              if (pfVar5[2] < pfVar9[2]) {
                fVar12 = pfVar5[2];
              }
              pfVar7[2] = fVar12;
              fVar12 = pfVar9[5];
              if (pfVar9[5] < pfVar5[5]) {
                fVar12 = pfVar5[5];
              }
              pfVar7[5] = fVar12;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)local_50[1]);
      }
    }
    uVar11 = 0;
    if (*(int *)(local_54 + 0x44) != 0) {
      do {
        func_005688C0(*(int *)(local_54 + 0x40) + uVar11 * 0x38,(int *)(*local_2c + uVar11 * 0xc),
                      (int *)(*local_30 + uVar11 * 8),param_5);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(local_54 + 0x44));
    }
  }
  return;
}

