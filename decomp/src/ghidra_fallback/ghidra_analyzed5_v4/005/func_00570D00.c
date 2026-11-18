#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int DAT_00571144;
extern undefined4 *DAT_00571148;
extern undefined *DAT_0057114c;
extern int *DAT_00571150;
extern undefined4 *DAT_00571154;
extern undefined *DAT_00571158;
extern uint DAT_0057115c;
extern uint *DAT_00571160;
extern uint *DAT_00571164;
extern uint *DAT_00571f84;
extern uint *DAT_00571f88;

// USA 00570D00 <- EU 00570CD8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00571144 int
// GLOBAL DAT_00571148 undefined4 *
// GLOBAL DAT_0057114c undefined *
// GLOBAL DAT_00571150 int *
// GLOBAL DAT_00571154 undefined4 *
// GLOBAL DAT_00571158 undefined *
// GLOBAL DAT_0057115c uint
// GLOBAL DAT_00571160 uint *
// GLOBAL DAT_00571164 uint *
// GLOBAL DAT_00571f84 uint *
// GLOBAL DAT_00571f88 uint *

void func_00570D00(int param_1,int *param_2,int param_3,int param_4,int param_5,float fparam_0)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  float *pfVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint *puVar21;
  undefined4 *puVar22;
  float *pfVar23;
  undefined4 uVar24;
  float *pfVar25;
  undefined4 uVar26;
  float *unaff_r11;
  float *pfVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 in_s1;
  float fVar30;
  float fVar31;
  float fVar32;
  longlong in_d9;
  ulonglong uVar33;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c4 (*(float * *)(albw_frame + 0xc))
  #define pfStack_c0 (*(float * *)(albw_frame + 0x10))
  #define pfStack_bc (*(float * *)(albw_frame + 0x14))
  #define local_b8 (*(float * *)(albw_frame + 0x18))
  #define pfStack_b4 (*(float * *)(albw_frame + 0x1c))
  #define local_b0 (*(float * *)(albw_frame + 0x20))
  #define local_a8 (*(float * *)(albw_frame + 0x28))
  #define local_a4 (*(float * *)(albw_frame + 0x2c))
  #define local_a0 (*(float * *)(albw_frame + 0x30))
  #define local_9c (*(float * *)(albw_frame + 0x34))
  #define pfStack_98 (*(float * *)(albw_frame + 0x38))
  #define local_94 (*(float * *)(albw_frame + 0x3c))
  #define local_90 (*(float * *)(albw_frame + 0x40))
  #define local_8c (*(float * *)(albw_frame + 0x44))
  #define pfStack_88 (*(float * *)(albw_frame + 0x48))
  #define local_7c (*(uint *)(albw_frame + 0x54))
  #define local_78 (*(int *)(albw_frame + 0x58))
  #define local_74 (*(float * *)(albw_frame + 0x5c))
  #define local_70 (*(float * *)(albw_frame + 0x60))
  #define local_6c (*(float * *)(albw_frame + 0x64))
  #define local_68 (*(float * *)(albw_frame + 0x68))
  #define pfStack_64 (*(float * *)(albw_frame + 0x6c))
  #define local_5c (*(float * *)(albw_frame + 0x74))
  #define local_58 (*(float * *)(albw_frame + 0x78))
  #define uStack_3c (*(undefined8 *)(albw_frame + 0x94))
  #define local_34 (*(int *)(albw_frame + 0x9c))
  #define local_30 (*(int * *)(albw_frame + 0xa0))
  #define local_2c (*(int *)(albw_frame + 0xa4))
  #define local_28 (*(int *)(albw_frame + 0xa8))
  iVar4 = DAT_00571144;
  uStack_3c = CONCAT44(in_s1,fparam_0);
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (((*(uint *)(DAT_00571144 + 0x2c) & 1) == 0) &&
     (iVar3 = func_00100174((int *)(DAT_00571144 + 0x2c)), iVar3 != 0)) {
    func_00100118((int)DAT_00571148,DAT_0057114c,0x78,2);
  }
  if (((*(uint *)(iVar4 + 0x28) & 1) == 0) && (iVar4 = func_00100174(DAT_00571150), iVar4 != 0)) {
    func_00100118((int)DAT_00571154,DAT_00571158,0x54,2);
  }
  puVar18 = DAT_00571148;
  *DAT_00571148 = 0;
  puVar18[0x1e] = 0;
  func_0010E3C4((uint *)puVar18[2],(uint *)(local_34 + 0x68),0x24);
  if (2 < (uint)puVar18[1]) {
    *puVar18 = 3;
  }
  puVar18 = DAT_00571154;
  if (param_5 != 0) {
    *DAT_00571154 = 0;
    puVar18[0x15] = 0;
    func_0010E3C4((uint *)puVar18[2],(uint *)(local_34 + 0x8c),0x18);
    if (2 < (uint)puVar18[1]) {
      *puVar18 = 3;
    }
  }
  local_7c = 0;
  if (0 < local_28) {
    in_d9 = (ulonglong)DAT_0057115c << 0x20;
  }
  local_78 = 0;
  if (0 < local_28) {
    do {
      uVar24 = (undefined4)((ulonglong)in_d9 >> 0x20);
      if (param_5 == 0) {
        puVar21 = DAT_00571148 + local_7c * 0x1e;
        puVar19 = DAT_00571148 + (1 - local_7c) * 0x1e;
        pfVar27 = (float *)(local_2c + local_78 * 0x18);
        uVar5 = *puVar21;
        *puVar19 = 0;
        if (2 < (int)uVar5) {
          if (((*DAT_00571f84 & 1) == 0) &&
             (iVar4 = func_00100174((int *)DAT_00571f84), puVar8 = DAT_00571f88, iVar4 != 0)) {
            DAT_00571f88[2] = (uint)(DAT_00571f88 + 3);
            puVar8[1] = 9;
            *puVar8 = 0;
          }
          *DAT_00571f88 = 0;
          func_00115C70((float *)&local_90,(float *)puVar21[2],pfVar27);
          uVar5 = 0;
          iVar4 = *puVar21 - 1;
          if (*puVar21 != 1 && -1 < iVar4) {
            unaff_r11 = (float *)0xfffffff4;
          }
          fVar32 = ALBW_AS_F32(local_90) * pfVar27[3] + ALBW_AS_F32(local_8c) * pfVar27[4] +
                   ALBW_AS_F32(pfStack_88) * pfVar27[5];
          in_d9 = CONCAT44(uVar24,fVar32);
          uVar33 = (ulonglong)(uint)ALBW_AS_U32(fVar32);
          if (0 < iVar4) {
            do {
              if (uVar5 < *puVar21) {
                pfVar25 = (float *)(puVar21[2] + uVar5 * 0xc);
              }
              else {
                pfVar25 = (float *)puVar21[2];
              }
              if (uVar5 + 1 < *puVar21) {
                pfVar23 = (float *)(puVar21[2] + (uVar5 + 1) * 0xc);
              }
              else {
                pfVar23 = (float *)puVar21[2];
              }
              func_00115C70((float *)&local_74,pfVar23,pfVar27);
              fVar32 = ALBW_AS_F32(in_d9);
              fVar30 = ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
              fVar31 = ALBW_AS_F32(local_74) * pfVar27[3] + ALBW_AS_F32(local_70) * pfVar27[4] +
                       ALBW_AS_F32(local_6c) * pfVar27[5];
              if (fVar32 < fVar30) {
                if (fVar30 <= fVar31) {
                  uVar15 = *puVar19;
                  if ((int)uVar15 < (int)puVar19[1]) {
                    pfVar6 = (float *)(puVar19[2] + uVar15 * 0xc);
                    *puVar19 = uVar15 + 1;
                  }
                  else {
                    pfVar6 = (float *)0x0;
                  }
                  in_d9 = CONCAT44(fVar30,-fVar32 / (fVar31 - fVar32));
                  func_00115C70((float *)&local_74,pfVar23,pfVar25);
                  local_b8 = local_74;
                  pfStack_b4 = local_70;
                  local_b0 = local_6c;
                  func_00115DAC(pfVar6,(float *)&local_b8,pfVar25,ALBW_AS_F32(in_d9));
                  uVar15 = *puVar19;
                  iVar4 = puVar19[2] + uVar15 * 0xc;
                  uVar16 = *DAT_00571f88;
                  if ((int)uVar16 < (int)DAT_00571f88[1]) goto LAB_00571954;
                }
              }
              else {
                uVar15 = *puVar19;
                if ((int)uVar15 < (int)puVar19[1]) {
                  *puVar19 = uVar15 + 1;
                  pfVar6 = (float *)(puVar19[2] + uVar15 * 0xc);
                  *pfVar6 = *pfVar25;
                  pfVar6[1] = pfVar25[1];
                  pfVar6[2] = pfVar25[2];
                }
                if (fVar31 < fVar30) {
                  uVar15 = *puVar19;
                  if ((int)uVar15 < (int)puVar19[1]) {
                    pfVar6 = (float *)(puVar19[2] + uVar15 * 0xc);
                    *puVar19 = uVar15 + 1;
                  }
                  else {
                    pfVar6 = (float *)0x0;
                  }
                  in_d9 = CONCAT44(fVar30,fVar32 / (fVar32 - fVar31));
                  func_00115C70((float *)&local_74,pfVar23,pfVar25);
                  local_9c = local_74;
                  pfStack_98 = local_70;
                  local_94 = local_6c;
                  func_00115DAC(pfVar6,(float *)&local_9c,pfVar25,ALBW_AS_F32(in_d9));
                  uVar15 = *puVar19;
                  iVar4 = puVar19[2] + uVar15 * 0xc;
                  uVar16 = *DAT_00571f88;
                  if ((int)uVar16 < (int)DAT_00571f88[1]) {
LAB_00571954:
                    puVar8 = DAT_00571f88 + 2;
                    *DAT_00571f88 = uVar16 + 1;
                    piVar9 = (int *)(*puVar8 + uVar16 * 8);
                    *piVar9 = uVar15 - 1;
                    piVar9[1] = (int)unaff_r11 + iVar4;
                  }
                }
              }
              fVar32 = ALBW_AS_F32(uVar33);
              in_d9 = CONCAT44((int)((ulonglong)in_d9 >> 0x20),fVar31);
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < (int)(*puVar21 - 1));
          }
          fVar31 = ALBW_AS_F32(in_d9);
          fVar30 = ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
          pfVar25 = (float *)puVar21[2];
          pfVar27 = pfVar25 + *puVar21 * 3 + -3;
          if (fVar31 < fVar30) {
            if (fVar30 <= fVar32) {
              uVar5 = *puVar19;
              if ((int)uVar5 < (int)puVar19[1]) {
                pfVar23 = (float *)(puVar19[2] + uVar5 * 0xc);
                *puVar19 = uVar5 + 1;
              }
              else {
                pfVar23 = (float *)0x0;
              }
              fVar32 = -fVar31 / (fVar32 - fVar31);
              func_00115C70((float *)&local_74,pfVar25,pfVar27);
              local_90 = local_74;
              local_8c = local_70;
              pfStack_88 = local_6c;
              func_00115DAC(pfVar23,(float *)&local_90,pfVar27,fVar32);
              uVar5 = *puVar19;
              iVar4 = uVar5 * 0xc + -0xc + puVar19[2];
              uVar15 = *DAT_00571f88;
              if ((int)uVar15 < (int)DAT_00571f88[1]) goto LAB_00571b0c;
            }
          }
          else {
            uVar5 = *puVar19;
            if ((int)uVar5 < (int)puVar19[1]) {
              fVar17 = *pfVar27;
              *puVar19 = uVar5 + 1;
              pfVar23 = (float *)(puVar19[2] + uVar5 * 0xc);
              *pfVar23 = fVar17;
              pfVar23[1] = pfVar27[1];
              pfVar23[2] = pfVar27[2];
            }
            if (fVar32 < fVar30) {
              uVar5 = *puVar19;
              if ((int)uVar5 < (int)puVar19[1]) {
                pfVar23 = (float *)(puVar19[2] + uVar5 * 0xc);
                *puVar19 = uVar5 + 1;
              }
              else {
                pfVar23 = (float *)0x0;
              }
              fVar31 = fVar31 / (fVar31 - fVar32);
              func_00115C70((float *)&local_90,pfVar25,pfVar27);
              local_c4 = local_90;
              pfStack_c0 = local_8c;
              pfStack_bc = pfStack_88;
              func_00115DAC(pfVar23,(float *)&local_c4,pfVar27,fVar31);
              uVar5 = *puVar19;
              iVar4 = uVar5 * 0xc + -0xc + puVar19[2];
              uVar15 = *DAT_00571f88;
              if ((int)uVar15 < (int)DAT_00571f88[1]) {
LAB_00571b0c:
                puVar21 = DAT_00571f88 + 2;
                *DAT_00571f88 = uVar15 + 1;
                piVar9 = (int *)(*puVar21 + uVar15 * 8);
                piVar9[1] = iVar4;
                *piVar9 = uVar5 - 1;
              }
            }
          }
          puVar21 = DAT_00571f88;
          if ((3 < (int)*puVar19) && (uVar5 = *DAT_00571f88, 1 < (int)uVar5)) {
            uVar15 = 0;
            do {
              uVar16 = uVar15 + 1;
              if ((int)uVar16 < (int)uVar5) {
                do {
                  if (uVar15 < uVar5) {
                    uVar11 = puVar21[2] + uVar15 * 8;
                  }
                  else {
                    uVar11 = puVar21[2];
                  }
                  pfVar27 = *(float **)(uVar11 + 4);
                  uVar11 = puVar21[2];
                  if (uVar16 < uVar5) {
                    uVar11 = uVar11 + uVar16 * 8;
                  }
                  pfVar25 = *(float **)(uVar11 + 4);
                  if ((*pfVar27 - *pfVar25) * (*pfVar27 - *pfVar25) +
                      (pfVar27[1] - pfVar25[1]) * (pfVar27[1] - pfVar25[1]) +
                      (pfVar27[2] - pfVar25[2]) * (pfVar27[2] - pfVar25[2]) < fparam_0) {
                    puVar8 = (uint *)DAT_00571f88[2];
                    if (uVar16 < uVar5) {
                      puVar8 = puVar8 + uVar16 * 2;
                    }
                    uVar11 = *puVar19 - 1;
                    for (uVar5 = *puVar8; (int)uVar5 < (int)uVar11; uVar5 = uVar5 + 1) {
                      if (uVar5 < *puVar19) {
                        puVar18 = (undefined4 *)(puVar19[2] + uVar5 * 0xc);
                      }
                      else {
                        puVar18 = (undefined4 *)0x0;
                      }
                      puVar12 = (undefined4 *)puVar19[2];
                      if (uVar5 + 1 < *puVar19) {
                        puVar12 = puVar12 + (uVar5 + 1) * 3;
                      }
                      uVar24 = puVar12[1];
                      uVar26 = *puVar12;
                      puVar18[2] = puVar12[2];
                      puVar18[1] = uVar24;
                      *puVar18 = uVar26;
                    }
                    if (uVar11 <= puVar19[1]) {
                      *puVar19 = uVar11;
                    }
                  }
                  uVar5 = *puVar21;
                  uVar16 = uVar16 + 1;
                } while ((int)uVar16 < (int)uVar5);
              }
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 < (int)uVar5);
          }
        }
      }
      else {
        puVar7 = DAT_00571148 + local_7c * 0x15 + 0x3c;
        puVar19 = DAT_00571148 + (1 - local_7c) * 0x1e;
        puVar8 = DAT_00571148 + local_7c * 0x1e;
        puVar21 = DAT_00571148 + (1 - local_7c) * 0x15 + 0x3c;
        local_b0 = (float *)(local_2c + local_78 * 0x18);
        uVar5 = *puVar8;
        *puVar19 = 0;
        *puVar21 = 0;
        if (2 < (int)uVar5) {
          if (((*DAT_00571160 & 1) == 0) &&
             (iVar4 = func_00100174((int *)DAT_00571160), puVar1 = DAT_00571164, iVar4 != 0)) {
            DAT_00571164[2] = (uint)(DAT_00571164 + 3);
            puVar1[1] = 9;
            *puVar1 = 0;
          }
          *DAT_00571164 = 0;
          func_00115C70((float *)&local_74,(float *)puVar8[2],local_b0);
          uVar5 = 0;
          fVar32 = ALBW_AS_F32(local_74) * local_b0[3] + ALBW_AS_F32(local_70) * local_b0[4] +
                   ALBW_AS_F32(local_6c) * local_b0[5];
          in_d9 = CONCAT44(uVar24,fVar32);
          uVar33 = (ulonglong)(uint)ALBW_AS_U32(fVar32);
          if (0 < (int)(*puVar8 - 1)) {
            do {
              if (uVar5 < *puVar8) {
                pfVar27 = (float *)(puVar8[2] + uVar5 * 0xc);
              }
              else {
                pfVar27 = (float *)puVar8[2];
              }
              if (uVar5 + 1 < *puVar8) {
                pfVar25 = (float *)(puVar8[2] + (uVar5 + 1) * 0xc);
              }
              else {
                pfVar25 = (float *)puVar8[2];
              }
              if (uVar5 < *puVar7) {
                pfVar23 = (float *)(puVar7[2] + uVar5 * 8);
              }
              else {
                pfVar23 = (float *)puVar7[2];
              }
              local_70 = (float *)puVar7[2];
              if (uVar5 + 1 < *puVar7) {
                local_70 = local_70 + (uVar5 + 1) * 2;
              }
              func_00115C70((float *)&local_6c,pfVar25,local_b0);
              fVar32 = ALBW_AS_F32(in_d9);
              fVar30 = ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
              fVar31 = ALBW_AS_F32(local_6c) * local_b0[3] + ALBW_AS_F32(local_68) * local_b0[4] +
                       ALBW_AS_F32(pfStack_64) * local_b0[5];
              if (fVar32 < fVar30) {
                if (fVar30 <= fVar31) {
                  uVar15 = *puVar19;
                  if ((int)uVar15 < (int)puVar19[1]) {
                    local_58 = (float *)(puVar19[2] + uVar15 * 0xc);
                    *puVar19 = uVar15 + 1;
                  }
                  else {
                    local_58 = (float *)0x0;
                  }
                  uVar15 = *puVar21;
                  if ((int)uVar15 < (int)puVar21[1]) {
                    *puVar21 = uVar15 + 1;
                    local_a8 = (float *)(puVar21[2] + uVar15 * 8);
                  }
                  else {
                    local_a8 = (float *)0x0;
                  }
                  in_d9 = CONCAT44(fVar30,-fVar32 / (fVar31 - fVar32));
                  func_00115C70((float *)&local_6c,pfVar25,pfVar27);
                  local_c4 = local_6c;
                  pfStack_c0 = local_68;
                  pfStack_bc = pfStack_64;
                  func_00115DAC(local_58,(float *)&local_c4,pfVar27,ALBW_AS_F32(in_d9));
                  fVar30 = pfVar23[1];
                  uVar15 = *puVar19;
                  fVar32 = local_70[1];
                  *local_a8 = *pfVar23 + ALBW_AS_F32(in_d9) * (*local_70 - *pfVar23);
                  local_a8[1] = pfVar23[1] + ALBW_AS_F32(in_d9) * (fVar32 - fVar30);
                  iVar4 = puVar19[2] + uVar15 * 0xc + -0xc;
                  uVar16 = *DAT_00571164;
                  if ((int)uVar16 < (int)DAT_00571164[1]) goto LAB_00571280;
                }
              }
              else {
                uVar15 = *puVar19;
                if ((int)uVar15 < (int)puVar19[1]) {
                  *puVar19 = uVar15 + 1;
                  pfVar6 = (float *)(puVar19[2] + uVar15 * 0xc);
                  *pfVar6 = *pfVar27;
                  pfVar6[1] = pfVar27[1];
                  pfVar6[2] = pfVar27[2];
                }
                uVar15 = *puVar21;
                if ((int)uVar15 < (int)puVar21[1]) {
                  *puVar21 = uVar15 + 1;
                  pfVar6 = (float *)(puVar21[2] + uVar15 * 8);
                  *pfVar6 = *pfVar23;
                  pfVar6[1] = pfVar23[1];
                }
                if (fVar31 < fVar30) {
                  uVar15 = *puVar19;
                  if ((int)uVar15 < (int)puVar19[1]) {
                    local_a8 = (float *)(puVar19[2] + uVar15 * 0xc);
                    *puVar19 = uVar15 + 1;
                  }
                  else {
                    local_a8 = (float *)0x0;
                  }
                  uVar15 = *puVar21;
                  if ((int)uVar15 < (int)puVar21[1]) {
                    *puVar21 = uVar15 + 1;
                    local_5c = (float *)(puVar21[2] + uVar15 * 8);
                  }
                  else {
                    local_5c = (float *)0x0;
                  }
                  in_d9 = CONCAT44(fVar30,fVar32 / (fVar32 - fVar31));
                  func_00115C70((float *)&local_6c,pfVar25,pfVar27);
                  local_a0 = local_68;
                  local_9c = pfStack_64;
                  local_a4 = local_6c;
                  func_00115DAC(local_a8,(float *)&local_a4,pfVar27,ALBW_AS_F32(in_d9));
                  fVar30 = pfVar23[1];
                  uVar15 = *puVar19;
                  fVar32 = local_70[1];
                  *local_5c = *pfVar23 + ALBW_AS_F32(in_d9) * (*local_70 - *pfVar23);
                  local_5c[1] = pfVar23[1] + ALBW_AS_F32(in_d9) * (fVar32 - fVar30);
                  iVar4 = puVar19[2] + uVar15 * 0xc + -0xc;
                  uVar16 = *DAT_00571164;
                  if ((int)uVar16 < (int)DAT_00571164[1]) {
LAB_00571280:
                    puVar1 = DAT_00571164 + 2;
                    *DAT_00571164 = uVar16 + 1;
                    piVar9 = (int *)(*puVar1 + uVar16 * 8);
                    *piVar9 = uVar15 - 1;
                    piVar9[1] = iVar4;
                  }
                }
              }
              fVar32 = ALBW_AS_F32(uVar33);
              in_d9 = CONCAT44((int)((ulonglong)in_d9 >> 0x20),fVar31);
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < (int)(*puVar8 - 1));
          }
          pfVar27 = (float *)puVar8[2];
          pfVar6 = pfVar27 + *puVar8 * 3 + -3;
          fVar31 = ALBW_AS_F32(in_d9);
          fVar30 = ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
          pfVar25 = (float *)puVar7[2];
          pfVar23 = pfVar25 + *puVar7 * 2 + -2;
          unaff_r11 = pfVar27;
          if (fVar31 < fVar30) {
            if (fVar30 <= fVar32) {
              uVar5 = *puVar19;
              if ((int)uVar5 < (int)puVar19[1]) {
                unaff_r11 = (float *)(puVar19[2] + uVar5 * 0xc);
                *puVar19 = uVar5 + 1;
              }
              else {
                unaff_r11 = (float *)0x0;
              }
              uVar5 = *puVar21;
              if ((int)uVar5 < (int)puVar21[1]) {
                *puVar21 = uVar5 + 1;
                pfVar10 = (float *)(puVar21[2] + uVar5 * 8);
              }
              else {
                pfVar10 = (float *)0x0;
              }
              fVar30 = -fVar31 / (fVar32 - fVar31);
              func_00115C70((float *)&local_70,pfVar27,pfVar6);
              local_94 = local_70;
              local_90 = local_6c;
              local_8c = local_68;
              func_00115DAC(unaff_r11,(float *)&local_94,pfVar6,fVar30);
              fVar32 = pfVar25[1];
              fVar31 = pfVar23[1];
              *pfVar10 = *pfVar23 + fVar30 * (*pfVar25 - *pfVar23);
              pfVar10[1] = fVar31 + fVar30 * (fVar32 - fVar31);
              uVar5 = *puVar19;
              iVar4 = puVar19[2] + uVar5 * 0xc + -0xc;
              uVar15 = *DAT_00571164;
              if ((int)uVar15 < (int)DAT_00571164[1]) goto LAB_00571524;
            }
          }
          else {
            uVar5 = *puVar19;
            if ((int)uVar5 < (int)puVar19[1]) {
              fVar17 = *pfVar6;
              *puVar19 = uVar5 + 1;
              pfVar10 = (float *)(puVar19[2] + uVar5 * 0xc);
              *pfVar10 = fVar17;
              pfVar10[1] = pfVar6[1];
              pfVar10[2] = pfVar6[2];
            }
            uVar5 = *puVar21;
            if ((int)uVar5 < (int)puVar21[1]) {
              fVar17 = *pfVar23;
              pfVar10 = (float *)(puVar21[2] + uVar5 * 8);
              *puVar21 = uVar5 + 1;
              *pfVar10 = fVar17;
              pfVar10[1] = pfVar23[1];
            }
            if (fVar32 < fVar30) {
              uVar5 = *puVar19;
              if ((int)uVar5 < (int)puVar19[1]) {
                unaff_r11 = (float *)(puVar19[2] + uVar5 * 0xc);
                *puVar19 = uVar5 + 1;
              }
              else {
                unaff_r11 = (float *)0x0;
              }
              uVar5 = *puVar21;
              if ((int)uVar5 < (int)puVar21[1]) {
                *puVar21 = uVar5 + 1;
                pfVar10 = (float *)(puVar21[2] + uVar5 * 8);
              }
              else {
                pfVar10 = (float *)0x0;
              }
              fVar31 = fVar31 / (fVar31 - fVar32);
              func_00115C70((float *)&local_70,pfVar27,pfVar6);
              local_94 = local_70;
              local_90 = local_6c;
              local_8c = local_68;
              func_00115DAC(unaff_r11,(float *)&local_94,pfVar6,fVar31);
              fVar32 = pfVar25[1];
              fVar30 = pfVar23[1];
              *pfVar10 = *pfVar23 + fVar31 * (*pfVar25 - *pfVar23);
              pfVar10[1] = fVar30 + fVar31 * (fVar32 - fVar30);
              uVar5 = *puVar19;
              iVar4 = puVar19[2] + uVar5 * 0xc + -0xc;
              uVar15 = *DAT_00571164;
              if ((int)uVar15 < (int)DAT_00571164[1]) {
LAB_00571524:
                puVar8 = DAT_00571164 + 2;
                *DAT_00571164 = uVar15 + 1;
                piVar9 = (int *)(*puVar8 + uVar15 * 8);
                *piVar9 = uVar5 - 1;
                piVar9[1] = iVar4;
              }
            }
          }
          puVar8 = DAT_00571164;
          if ((3 < (int)*puVar19) && (uVar5 = *DAT_00571164, 1 < (int)uVar5)) {
            uVar15 = 0;
            do {
              uVar16 = uVar15 + 1;
              if ((int)uVar16 < (int)uVar5) {
                do {
                  if (uVar15 < uVar5) {
                    uVar11 = puVar8[2] + uVar15 * 8;
                  }
                  else {
                    uVar11 = puVar8[2];
                  }
                  pfVar27 = *(float **)(uVar11 + 4);
                  uVar11 = puVar8[2];
                  if (uVar16 < uVar5) {
                    uVar11 = uVar11 + uVar16 * 8;
                  }
                  pfVar25 = *(float **)(uVar11 + 4);
                  if ((*pfVar27 - *pfVar25) * (*pfVar27 - *pfVar25) +
                      (pfVar27[1] - pfVar25[1]) * (pfVar27[1] - pfVar25[1]) +
                      (pfVar27[2] - pfVar25[2]) * (pfVar27[2] - pfVar25[2]) < fparam_0) {
                    puVar7 = (uint *)DAT_00571164[2];
                    if (uVar16 < uVar5) {
                      puVar7 = puVar7 + uVar16 * 2;
                    }
                    uVar11 = *puVar19 - 1;
                    uVar5 = *puVar7;
                    while ((int)uVar5 < (int)uVar11) {
                      if (uVar5 < *puVar19) {
                        puVar18 = (undefined4 *)(puVar19[2] + uVar5 * 0xc);
                      }
                      else {
                        puVar18 = (undefined4 *)0x0;
                      }
                      puVar12 = (undefined4 *)puVar19[2];
                      if (uVar5 + 1 < *puVar19) {
                        puVar12 = puVar12 + (uVar5 + 1) * 3;
                      }
                      uVar24 = puVar12[1];
                      uVar26 = puVar12[2];
                      uVar13 = *puVar21;
                      *puVar18 = *puVar12;
                      puVar18[1] = uVar24;
                      puVar18[2] = uVar26;
                      if (uVar5 < uVar13) {
                        puVar18 = (undefined4 *)(puVar21[2] + uVar5 * 8);
                      }
                      else {
                        puVar18 = (undefined4 *)0x0;
                      }
                      uVar2 = uVar5 + 1;
                      puVar12 = (undefined4 *)puVar21[2];
                      uVar5 = uVar5 + 1;
                      if (uVar2 < uVar13) {
                        puVar12 = puVar12 + uVar2 * 2;
                      }
                      uVar24 = *puVar12;
                      puVar18[1] = puVar12[1];
                      *puVar18 = uVar24;
                    }
                    if (uVar11 <= puVar19[1]) {
                      *puVar19 = uVar11;
                    }
                    if (uVar11 <= puVar21[1]) {
                      *puVar21 = uVar11;
                    }
                  }
                  uVar5 = *puVar8;
                  uVar16 = uVar16 + 1;
                } while ((int)uVar16 < (int)uVar5);
              }
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 < (int)uVar5);
          }
        }
      }
      local_7c = 1 - local_7c & 0xff;
      if ((int)DAT_00571148[local_7c * 0x1e] < 3) {
        return;
      }
      local_78 = local_78 + 1;
    } while (local_78 < local_28);
  }
  puVar19 = DAT_00571148 + local_7c * 0x1e;
  puVar21 = DAT_00571154 + local_7c * 0x15;
  uVar5 = 1;
  if (1 < (int)(*puVar19 - 1)) {
    do {
      puVar18 = (undefined4 *)puVar19[2];
      uVar16 = uVar5 + 1;
      uVar15 = *puVar19;
      if (param_5 == 0) {
        if (uVar16 < uVar15) {
          puVar12 = (undefined4 *)(puVar19[2] + uVar16 * 0xc);
        }
        else {
          puVar12 = (undefined4 *)puVar19[2];
        }
        if (uVar5 < uVar15) {
          puVar20 = (undefined4 *)(puVar19[2] + uVar5 * 0xc);
        }
        else {
          puVar20 = (undefined4 *)puVar19[2];
        }
        iVar4 = local_30[3];
        if (iVar4 < local_30[4]) {
          puVar22 = (undefined4 *)(local_30[5] + iVar4 * 0x24);
          local_30[3] = iVar4 + 1;
        }
        else {
          puVar22 = (undefined4 *)0x0;
        }
        puVar22[6] = *(undefined4 *)(local_34 + 0x28);
        puVar22[7] = *(undefined4 *)(local_34 + 0x2c);
        puVar22[8] = *(undefined4 *)(local_34 + 0x30);
        puVar22[3] = puVar22[6];
        puVar22[4] = puVar22[7];
        puVar22[5] = puVar22[8];
        *puVar22 = puVar22[3];
        puVar22[1] = puVar22[7];
        puVar22[2] = puVar22[5];
        iVar4 = *local_30;
        if (local_30[1] <= iVar4) goto LAB_00571e34;
        puVar22 = (undefined4 *)(local_30[2] + iVar4 * 0x24);
        *local_30 = iVar4 + 1;
      }
      else {
        if (uVar16 < uVar15) {
          puVar12 = (undefined4 *)(puVar19[2] + uVar16 * 0xc);
        }
        else {
          puVar12 = (undefined4 *)puVar19[2];
        }
        if (uVar5 < uVar15) {
          puVar20 = (undefined4 *)(puVar19[2] + uVar5 * 0xc);
        }
        else {
          puVar20 = (undefined4 *)puVar19[2];
        }
        puVar22 = (undefined4 *)puVar21[2];
        if (uVar5 + 1 < *puVar21) {
          puVar28 = (undefined4 *)(puVar21[2] + (uVar5 + 1) * 8);
        }
        else {
          puVar28 = (undefined4 *)puVar21[2];
        }
        if (uVar5 < *puVar21) {
          puVar29 = (undefined4 *)(puVar21[2] + uVar5 * 8);
        }
        else {
          puVar29 = (undefined4 *)puVar21[2];
        }
        iVar4 = local_30[6];
        if (iVar4 < local_30[7]) {
          puVar14 = (undefined4 *)(local_30[8] + iVar4 * 0x18);
          local_30[6] = iVar4 + 1;
        }
        else {
          puVar14 = (undefined4 *)0x0;
        }
        *puVar14 = *puVar22;
        puVar14[1] = puVar22[1];
        puVar14[2] = *puVar28;
        puVar14[3] = puVar28[1];
        puVar14[4] = *puVar29;
        puVar14[5] = puVar29[1];
        iVar4 = local_30[3];
        if (iVar4 < local_30[4]) {
          puVar22 = (undefined4 *)(local_30[5] + iVar4 * 0x24);
          local_30[3] = iVar4 + 1;
        }
        else {
          puVar22 = (undefined4 *)0x0;
        }
        uVar24 = *(undefined4 *)(local_34 + 0x28);
        puVar22[6] = uVar24;
        puVar22[7] = *(undefined4 *)(local_34 + 0x2c);
        puVar22[8] = *(undefined4 *)(local_34 + 0x30);
        puVar22[3] = uVar24;
        puVar22[4] = puVar22[7];
        puVar22[5] = puVar22[8];
        *puVar22 = uVar24;
        puVar22[1] = puVar22[4];
        puVar22[2] = puVar22[5];
        iVar4 = *local_30;
        if (iVar4 < local_30[1]) {
          puVar22 = (undefined4 *)(local_30[2] + iVar4 * 0x24);
          *local_30 = iVar4 + 1;
        }
        else {
LAB_00571e34:
          puVar22 = (undefined4 *)0x0;
        }
      }
      *puVar22 = *puVar18;
      uVar5 = uVar5 + 1;
      puVar22[1] = puVar18[1];
      puVar22[2] = puVar18[2];
      puVar22[3] = *puVar12;
      puVar22[4] = puVar12[1];
      puVar22[5] = puVar12[2];
      puVar22[6] = *puVar20;
      puVar22[7] = puVar20[1];
      puVar22[8] = puVar20[2];
    } while ((int)uVar5 < (int)(*puVar19 - 1));
  }
  return;
}

