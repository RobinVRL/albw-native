#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern undefined4 DAT_003a23d4;
extern undefined4 *DAT_003a23d8;
extern undefined4 DAT_003a23dc;
extern undefined4 DAT_003a23e0;
extern float *DAT_003a23e4;

// USA 003A1FB0 <- EU 003A1F8C (Ghidra, non-matching)
// GLOBAL DAT_003a23d4 undefined4
// GLOBAL DAT_003a23d8 undefined4 *
// GLOBAL DAT_003a23dc undefined4
// GLOBAL DAT_003a23e0 undefined4
// GLOBAL DAT_003a23e4 float *

undefined4 * func_003A1FB0(undefined4 *param_1,int param_2,uint *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_4c (*(float *)(albw_frame + 0x34))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x50))
  #define iStack_2c (*(int *)(albw_frame + 0x54))
  #define local_28 (*(uint * *)(albw_frame + 0x58))
  param_1[2] = (int)*(short *)(param_2 + 0x70);
  param_1[3] = 0;
  puVar10 = DAT_003a23d8;
  iVar11 = 0;
  *param_1 = DAT_003a23d4;
  param_1[1] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar6 = puVar10[1];
  uVar9 = puVar10[2];
  param_1[7] = *puVar10;
  param_1[8] = uVar6;
  param_1[9] = uVar9;
  iVar2 = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  if (0 < *(int *)(param_2 + 0x3f4)) {
    do {
      uVar7 = *(uint *)(param_2 + 0x3d4 + iVar2 * 8);
      if (uVar7 < *param_3) {
        iVar8 = *(int *)(param_3[2] + uVar7 * 4);
      }
      else {
        iVar8 = 0;
      }
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + *(int *)(iVar8 + 0x20);
    } while (iVar2 < *(int *)(param_2 + 0x3f4));
  }
  uVar7 = 0;
  puStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  if ((0 < iVar11) && (iVar2 = func_0010CEE0(iVar11 * 0x24,(int *)0x0,4), iVar2 != 0)) {
    param_1[6] = iVar2;
    param_1[5] = iVar11;
    param_1[4] = 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x3f4)) {
    uVar16 = CONCAT44(DAT_003a23dc,DAT_003a23e0);
    do {
      uVar3 = *(uint *)(param_2 + 0x3d4 + iVar2 * 8);
      if (uVar3 < *local_28) {
        iVar11 = *(int *)(local_28[2] + uVar3 * 4);
      }
      else {
        iVar11 = 0;
      }
      uVar3 = 0;
      if (0 < *(int *)(iVar11 + 0x20)) {
        do {
          iVar8 = param_1[4];
          if (iVar8 < (int)param_1[5]) {
            puVar10 = (undefined4 *)(param_1[6] + iVar8 * 0x24);
            param_1[4] = iVar8 + 1;
          }
          else {
            puVar10 = (undefined4 *)0x0;
          }
          if ((*(int *)(iVar11 + 0x28) == 0) || (*(uint *)(iVar11 + 0x20) <= uVar3)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(*(int *)(iVar11 + 0x28) + uVar3 * 4);
          }
          *puVar10 = uVar6;
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < *(int *)(iVar11 + 0x20));
      }
      uVar3 = uVar7;
      uVar13 = uVar7;
      if ((int)uVar7 < (int)param_1[4]) {
        do {
          if (uVar3 < (uint)param_1[4]) {
            piVar4 = (int *)(param_1[6] + uVar3 * 0x24);
          }
          else {
            piVar4 = (int *)param_1[6];
          }
          iVar11 = *piVar4;
          if (*(int *)(iVar11 + 0x94) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = **(int **)(iVar11 + 0x9c);
          }
          func_00115C70(&local_78,(float *)(iVar8 + 0x18),(float *)(iVar11 + 0x18));
          func_00115D70(&local_64,DAT_003a23e4,
                        local_78 * *DAT_003a23e4 + local_74 * DAT_003a23e4[1] +
                        local_70 * DAT_003a23e4[2]);
          local_4c = local_64;
          uStack_48 = uStack_60;
          uStack_44 = uStack_5c;
          func_00115C70(&local_78,&local_78,&local_4c);
          iVar8 = param_1[6];
          if (uVar3 < (uint)param_1[4]) {
            iVar8 = iVar8 + uVar3 * 0x24;
          }
          if (uVar3 < (uint)param_1[4]) {
            iVar5 = param_1[6] + uVar3 * 0x24;
          }
          else {
            iVar5 = param_1[6];
          }
          fVar15 = SQRT(local_78 * local_78 + local_74 * local_74 + local_70 * local_70);
          if (ALBW_AS_F32(uVar16) < fVar15) {
            fVar14 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20)) / fVar15;
            *(float *)(iVar5 + 0x14) = local_78 * fVar14;
            *(float *)(iVar5 + 0x18) = local_74 * fVar14;
            *(float *)(iVar5 + 0x1c) = local_70 * fVar14;
          }
          *(float *)(iVar8 + 0x20) = fVar15;
          if (uVar3 < (uint)param_1[4]) {
            iVar8 = param_1[6] + uVar3 * 0x24;
          }
          else {
            iVar8 = param_1[6];
          }
          pfVar12 = (float *)(iVar8 + 4);
          if (uVar3 < (uint)param_1[4]) {
            iVar5 = param_1[6] + uVar3 * 0x24;
          }
          else {
            iVar5 = param_1[6];
          }
          func_00115E10(&local_78,DAT_003a23e4,(float *)(iVar5 + 0x14));
          *pfVar12 = local_78;
          *(float *)(iVar8 + 8) = local_74;
          *(float *)(iVar8 + 0xc) = local_70;
          func_00115DC8(pfVar12);
          *(float *)(iVar8 + 0x10) =
               *pfVar12 * *(float *)(iVar11 + 0x18) +
               *(float *)(iVar8 + 8) * *(float *)(iVar11 + 0x1c) +
               *(float *)(iVar8 + 0xc) * *(float *)(iVar11 + 0x20);
          if (uVar3 != uVar7) {
            if (uVar3 - 1 < (uint)param_1[4]) {
              iVar11 = param_1[6] + (uVar3 - 1) * 0x24;
            }
            else {
              iVar11 = param_1[6];
            }
            if (uVar3 < (uint)param_1[4]) {
              iVar8 = param_1[6] + uVar3 * 0x24;
            }
            else {
              iVar8 = param_1[6];
            }
            if (*(float *)(iVar11 + 0x1c) * *(float *)(iVar8 + 0x14) -
                *(float *)(iVar11 + 0x14) * *(float *)(iVar8 + 0x1c) < ALBW_AS_F32(uVar16)) {
              uVar13 = uVar13 + 1;
            }
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)param_1[4]);
      }
      uVar7 = param_1[4];
      iVar11 = param_1[6];
      pfVar12 = (float *)(iVar11 + uVar7 * 0x24 + -0x10);
      if (pfVar12[2] * *(float *)(iVar11 + 0x14) - *pfVar12 * *(float *)(iVar11 + 0x1c) <
          ALBW_AS_F32(uVar16)) {
        uVar13 = uVar13 + 1;
      }
      if (uVar13 == 0) {
        uVar1 = 0;
LAB_003a23a8:
        *(undefined1 *)((int)param_1 + 0x29) = uVar1;
      }
      else {
        if ((uVar7 == uVar13) || ((int)uVar7 / 2 <= (int)uVar13)) {
          uVar1 = 1;
          goto LAB_003a23a8;
        }
        *(undefined1 *)((int)param_1 + 0x29) = 0;
      }
      uVar7 = param_1[4];
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x3f4));
  }
  return param_1;
}

