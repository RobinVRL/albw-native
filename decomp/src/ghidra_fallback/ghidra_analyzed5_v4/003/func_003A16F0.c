#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0042CF00(int param_1,float *param_2,float *param_3,int param_4,float fparam_0);
extern int func_004905E0(float fparam_0);
extern float DAT_003a1abc;
extern int DAT_003a1ac0;
extern int *DAT_003a1ac4;
extern float *DAT_003a1ac8;
extern float DAT_003a1acc;
extern undefined4 DAT_003a1ad0;
extern undefined4 DAT_003a1ad4;
extern undefined4 DAT_003a1ad8;
extern int DAT_003a1adc;
extern undefined4 DAT_003a1ae0;
extern float DAT_003a1ae4;
extern float DAT_003a1ae8;
extern float DAT_003a1aec;
extern float DAT_003a1af0;
extern uint DAT_003a1f84;
extern int DAT_003a1f88;

// USA 003A16F0 <- EU 003A16CC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_003a1abc float
// GLOBAL DAT_003a1ac0 int
// GLOBAL DAT_003a1ac4 int *
// GLOBAL DAT_003a1ac8 float *
// GLOBAL DAT_003a1acc float
// GLOBAL DAT_003a1ad0 undefined4
// GLOBAL DAT_003a1ad4 undefined4
// GLOBAL DAT_003a1ad8 undefined4
// GLOBAL DAT_003a1adc int
// GLOBAL DAT_003a1ae0 undefined4
// GLOBAL DAT_003a1ae4 float
// GLOBAL DAT_003a1ae8 float
// GLOBAL DAT_003a1aec float
// GLOBAL DAT_003a1af0 float
// GLOBAL DAT_003a1f84 uint
// GLOBAL DAT_003a1f88 int

undefined4 func_003A16F0(int param_1,float *param_2,float *param_3,undefined4 param_4,float *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fparam_0;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x1e0];
  #define local_1d8 (*(float *)(albw_frame + 0x8))
  #define local_1d4 (*(float *)(albw_frame + 0xc))
  #define local_1d0 (*(float *)(albw_frame + 0x10))
  #define local_1cc (*(undefined4 * *)(albw_frame + 0x14))
  #define local_1c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_1c4 (*(float *)(albw_frame + 0x1c))
  #define local_1c0 (*(float *)(albw_frame + 0x20))
  #define local_1bc (*(float *)(albw_frame + 0x24))
  #define local_1b8 (*(float *)(albw_frame + 0x28))
  #define local_1b4 (*(float *)(albw_frame + 0x2c))
  #define local_1b0 (*(float *)(albw_frame + 0x30))
  #define local_1ac (*(float *)(albw_frame + 0x34))
  #define local_1a8 (*(float *)(albw_frame + 0x38))
  #define local_1a4 (*(float *)(albw_frame + 0x3c))
  #define local_1a0 (*(undefined2 *)(albw_frame + 0x40))
  #define local_19c (*(undefined4 *)(albw_frame + 0x44))
  #define local_198 (*(undefined1 *)(albw_frame + 0x48))
  #define local_194 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_190 (*(undefined4 *)(albw_frame + 0x50))
  #define local_18c (*(undefined4 *)(albw_frame + 0x54))
  #define local_188 (*(undefined4 *)(albw_frame + 0x58))
  #define local_184 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_180 (*(undefined4 *)(albw_frame + 0x60))
  #define local_17c (*(undefined4 *)(albw_frame + 0x64))
  #define local_178 (*(undefined4 *)(albw_frame + 0x68))
  #define local_174 (*(undefined2 *)(albw_frame + 0x6c))
  #define local_170 (*(float *)(albw_frame + 0x70))
  #define local_16c (*(float *)(albw_frame + 0x74))
  #define local_168 (*(float *)(albw_frame + 0x78))
  #define local_164 (*(float *)(albw_frame + 0x7c))
  #define local_160 (*(float * *)(albw_frame + 0x80))
  #define local_158 (*(float *)(albw_frame + 0x88))
  #define local_154 (*(float *)(albw_frame + 0x8c))
  #define local_150 (*(float *)(albw_frame + 0x90))
  #define local_14c (*(float *)(albw_frame + 0x94))
  #define local_148 ((undefined4 * *)(albw_frame + 0x98))
  #define local_140 (*(float *)(albw_frame + 0xa0))
  #define local_13c (*(float *)(albw_frame + 0xa4))
  #define local_138 (*(float *)(albw_frame + 0xa8))
  #define local_134 (*(float *)(albw_frame + 0xac))
  #define local_130 (*(float *)(albw_frame + 0xb0))
  #define fStack_12c (*(float *)(albw_frame + 0xb4))
  #define local_128 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_124 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_120 (*(undefined1 *)(albw_frame + 0xc0))
  #define local_108 (*(float *)(albw_frame + 0xd8))
  #define fStack_104 (*(float *)(albw_frame + 0xdc))
  #define fStack_100 (*(float *)(albw_frame + 0xe0))
  #define local_fc (*(float *)(albw_frame + 0xe4))
  #define local_f8 (*(float *)(albw_frame + 0xe8))
  #define local_f4 (*(float *)(albw_frame + 0xec))
  #define local_f0 (*(float *)(albw_frame + 0xf0))
  #define local_ec (*(float *)(albw_frame + 0xf4))
  #define local_e8 (*(float *)(albw_frame + 0xf8))
  #define local_e4 (*(float * *)(albw_frame + 0xfc))
  #define afStack_e0 ((float *)(albw_frame + 0x100))
  #define local_d8 (*(float *)(albw_frame + 0x108))
  #define local_d4 (*(float *)(albw_frame + 0x10c))
  #define local_d0 (*(float *)(albw_frame + 0x110))
  #define local_cc (*(undefined4 *)(albw_frame + 0x114))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x118))
  #define local_c0 (*(float *)(albw_frame + 0x120))
  #define local_bc (*(float *)(albw_frame + 0x124))
  #define local_b8 (*(float *)(albw_frame + 0x128))
  #define local_b4 (*(float *)(albw_frame + 0x12c))
  #define fStack_b0 (*(float *)(albw_frame + 0x130))
  #define fStack_ac (*(float *)(albw_frame + 0x134))
  #define local_a4 (*(int *)(albw_frame + 0x13c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x140))
  #define local_9c (*(float *)(albw_frame + 0x144))
  #define fStack_98 (*(float *)(albw_frame + 0x148))
  #define fStack_94 (*(float *)(albw_frame + 0x14c))
  #define fStack_90 (*(float *)(albw_frame + 0x150))
  #define fStack_8c (*(float *)(albw_frame + 0x154))
  #define fStack_88 (*(float *)(albw_frame + 0x158))
  #define local_80 (*(int *)(albw_frame + 0x160))
  #define local_74 (*(float *)(albw_frame + 0x16c))
  #define iStack_34 (*(int *)(albw_frame + 0x1ac))
  #define local_30 (*(float * *)(albw_frame + 0x1b0))
  #define pfStack_2c (*(float * *)(albw_frame + 0x1b4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x1b8))
  fVar15 = DAT_003a1abc;
  *param_2 = DAT_003a1abc;
  param_2[1] = fVar15;
  param_2[2] = fVar15;
  iStack_34 = param_1;
  local_30 = param_2;
  pfStack_2c = param_3;
  uStack_28 = param_4;
  if (((*(uint *)(DAT_003a1ac0 + 0x10) & 1) == 0) &&
     (iVar3 = func_00100174(DAT_003a1ac4), pfVar7 = DAT_003a1ac8, iVar3 != 0)) {
    *DAT_003a1ac8 = fVar15;
    pfVar7[3] = fVar15;
    pfVar7[1] = fVar15;
    pfVar7[4] = fVar15;
    pfVar7[2] = fVar15;
    pfVar7[5] = fVar15;
  }
  fVar13 = DAT_003a1acc;
  fVar10 = DAT_003a1acc;
  fVar19 = DAT_003a1acc;
  func_00115C70(&local_1d8,param_3,param_5);
  local_108 = *param_3;
  fStack_104 = param_3[1];
  fStack_100 = param_3[2];
  local_fc = local_1d8;
  local_f8 = local_1d4;
  local_f4 = local_1d0;
  fVar16 = local_1d8 * local_1d8 + local_1d4 * local_1d4 + local_1d0 * local_1d0;
  func_00115DC8(&local_fc);
  uVar2 = DAT_003a1ae0;
  local_a0 = DAT_003a1ad0;
  local_9c = local_108;
  fStack_98 = fStack_104;
  fStack_94 = fStack_100;
  fStack_90 = local_fc;
  fStack_8c = local_f8;
  fStack_88 = local_f4;
  local_a4 = 0;
  local_80 = 1;
  if ((*(char *)(param_1 + 0x29) != '\0') && (uVar4 = 0, 0 < *(int *)(param_1 + 0x10))) {
    do {
      if (uVar4 < *(uint *)(param_1 + 0x10)) {
        iVar3 = *(int *)(param_1 + 0x18) + uVar4 * 0x24;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x18);
      }
      local_1c0 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_1c0) & 0xffff0000));
      if (DAT_003a1adc <
          (int)ALBW_AS_U32(((*(float *)(iVar3 + 4) * *param_5 + *(float *)(iVar3 + 8) * param_5[1] +
                *(float *)(iVar3 + 0xc) * param_5[2]) - *(float *)(iVar3 + 0x10)))) {
        local_80 = 0;
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x10));
  }
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_74 = DAT_003a1aec;
    uVar18 = DAT_003a1ad4;
    uVar17 = DAT_003a1ad8;
    fparam_0 = DAT_003a1ae4;
    fparam_0_00 = DAT_003a1ae8;
    do {
      bVar1 = false;
      piVar5 = *(int **)(param_1 + 0x18);
      if (uVar4 < *(uint *)(param_1 + 0x10)) {
        piVar5 = piVar5 + uVar4 * 9;
      }
      pfVar7 = (float *)(piVar5 + 1);
      local_170 = *pfVar7;
      local_16c = ALBW_AS_F32(piVar5[2]);
      local_168 = ALBW_AS_F32(piVar5[3]);
      local_164 = ALBW_AS_F32(piVar5[4]);
      fVar14 = *(float *)(*piVar5 + 0x54);
      local_1cc = (undefined4 *)0x0;
      local_19c = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_178 = 0;
      local_17c = 0;
      local_174 = 5;
      local_1c8 = uVar2;
      local_1c4 = fVar15;
      local_1c0 = fVar15;
      local_1bc = fVar15;
      local_1b8 = fVar15;
      local_1b4 = fVar15;
      local_1b0 = fVar15;
      local_1ac = fVar15;
      local_1a8 = fVar15;
      local_1a4 = fVar15;
      local_194 = uVar18;
      local_190 = uVar18;
      local_18c = uVar18;
      local_188 = uVar17;
      local_184 = uVar17;
      local_180 = uVar17;
      if (*(char *)(param_1 + 0x29) == '\0') {
        fVar8 = fVar19;
        if ((*pfVar7 * *param_3 + ALBW_AS_F32(piVar5[2]) * param_3[1] + ALBW_AS_F32(piVar5[3]) * param_3[2]) -
            ALBW_AS_F32(piVar5[4]) < fVar15) {
          local_a4 = 1;
          local_148[0] = &local_1c8;
          local_f0 = local_74;
          local_1cc = (undefined4 *)0x1f;
          local_160 = &local_f0;
          local_d0 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&local_d0 + 2)),0x1f));
          local_bc = 0.0;
          local_cc = 0;
          local_c0 = 0.0;
          local_c8 = 0;
          local_b8 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_b8) & 0xffffff00));
          local_d4 = fVar15;
          func_00115D70(&local_134,&fStack_90,fparam_0);
          local_158 = local_134;
          local_154 = local_130;
          local_150 = fStack_12c;
          func_00115C70(&local_134,&local_9c,&local_158);
          local_140 = local_134;
          local_13c = local_130;
          local_138 = fStack_12c;
          iVar3 = func_0042CF00((int)local_148[0],&local_140,&fStack_90,(int)local_160,fparam_0_00);
          if (iVar3 != 0) {
            func_00115C70(&local_154,afStack_e0,param_5);
            if (local_154 * local_1d8 + local_150 * local_1d4 + local_14c * local_1d0 < fVar15) {
              return 0;
            }
            fVar8 = local_154 * local_154 + local_150 * local_150 + local_14c * local_14c;
          }
        }
        goto LAB_003a1e78;
      }
      local_160 = &local_158;
      local_158 = local_74;
      local_134 = 0.0;
      local_120 = 0;
      local_138 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&local_138 + 2)),0x1f));
      local_124 = 0;
      local_130 = 0.0;
      local_128 = 0;
      local_1cc = &local_1c8;
      local_e4 = &local_9c;
      fVar12 = local_1d8 * *pfVar7 + local_1d4 * ALBW_AS_F32(piVar5[2]) + local_1d0 * ALBW_AS_F32(piVar5[3]);
      fVar11 = fVar19;
      local_13c = fVar15;
      func_00115D70(&local_b4,&fStack_90,fparam_0);
      local_f0 = local_b4;
      local_ec = fStack_b0;
      local_e8 = fStack_ac;
      func_00115C70(&local_b4,local_e4,&local_f0);
      local_c0 = local_b4;
      local_bc = fStack_b0;
      local_b8 = fStack_ac;
      func_0042CF00((int)local_1cc,&local_c0,&fStack_90,(int)local_160,fparam_0_00);
      func_00115C70(&local_d8,(float *)local_148,param_5);
      fVar8 = local_d8 * local_d8 + local_d4 * local_d4 + local_d0 * local_d0;
      fVar9 = local_d8 * *pfVar7 + local_d4 * ALBW_AS_F32(piVar5[2]) + local_d0 * ALBW_AS_F32(piVar5[3]);
      if (((((uint)ALBW_AS_U32(DAT_003a1af0) < (uint)ALBW_AS_U32(fVar12)) ||
           ((int)((int)ALBW_AS_U32(DAT_003a1af0) + 0x80000000U) < (int)ALBW_AS_U32(fVar12))) ||
          ((uint)ALBW_AS_U32(DAT_003a1af0) < (uint)ALBW_AS_U32(fVar9))) ||
         ((int)((int)ALBW_AS_U32(DAT_003a1af0) + 0x80000000U) < (int)ALBW_AS_U32(fVar9))) {
        if (fVar15 < fVar12) {
          if (fVar9 < fVar15 || fVar8 < fVar16) goto LAB_003a1e60;
          fVar9 = (local_170 * *param_5 + local_16c * param_5[1] + local_168 * param_5[2]) -
                  local_164;
          if (fVar9 <= fVar15) {
            fVar9 = -fVar9;
          }
          goto joined_r0x003a1c80;
        }
        if (fVar15 <= fVar9) {
          fVar8 = fVar11;
          if (local_80 == 0) goto LAB_003a1e78;
          fVar8 = local_1d8 * *pfVar7 + local_1d4 * ALBW_AS_F32(piVar5[2]) + local_1d0 * ALBW_AS_F32(piVar5[3]);
          func_00115E10(&local_ec,&local_1d8,pfVar7);
          fVar14 = SQRT(local_ec * local_ec + local_e8 * local_e8 +
                        ALBW_AS_F32(local_e4) * ALBW_AS_F32(local_e4));
          if (fVar8 == fVar15 && fVar14 == fVar15) {
            uVar6 = 0;
          }
          else if (fVar8 < fVar15) {
            if (fVar14 < fVar15) {
              if (fVar14 < fVar8) {
                iVar3 = func_004905E0(fVar8 / fVar14);
                uVar6 = 0xc0000000 - iVar3;
              }
              else {
                iVar3 = func_004905E0(fVar14 / fVar8);
                uVar6 = iVar3 + 0x80000000;
              }
            }
            else {
              fVar8 = -fVar8;
              if (fVar8 < fVar14) {
                iVar3 = func_004905E0(fVar8 / fVar14);
                uVar6 = iVar3 + 0x40000000;
              }
              else {
                iVar3 = func_004905E0(fVar14 / fVar8);
                uVar6 = 0x80000000 - iVar3;
              }
            }
          }
          else if (fVar14 < fVar15) {
            fVar14 = -fVar14;
            if (fVar8 < fVar14) {
              iVar3 = func_004905E0(fVar8 / fVar14);
              uVar6 = iVar3 + 0xc0000000;
            }
            else {
              iVar3 = func_004905E0(fVar14 / fVar8);
              uVar6 = -iVar3;
            }
          }
          else if (fVar8 < fVar14) {
            iVar3 = func_004905E0(fVar8 / fVar14);
            uVar6 = 0x40000000 - iVar3;
          }
          else {
            uVar6 = func_004905E0(fVar14 / fVar8);
          }
          fVar14 = (local_170 * *param_5 + local_16c * param_5[1] + local_168 * param_5[2]) -
                   local_164;
          if (fVar14 <= fVar15) {
            fVar14 = -fVar14;
          }
          if (DAT_003a1f84 < uVar6) {
            if ((int)ALBW_AS_U32(fVar14) < DAT_003a1f88) {
              return 0;
            }
          }
          else {
            fVar8 = fVar11;
            if (DAT_003a1f88 <= (int)ALBW_AS_U32(fVar14)) goto LAB_003a1e78;
          }
          goto LAB_003a1e60;
        }
        if (fVar16 < fVar8) goto LAB_003a1e60;
        bVar1 = true;
        local_a4 = 1;
      }
      else {
        fVar9 = (local_170 * *param_5 + local_16c * param_5[1] + local_168 * param_5[2]) - local_164
        ;
        if (fVar9 <= fVar15) {
          fVar9 = -fVar9;
        }
joined_r0x003a1c80:
        fVar8 = fVar11;
        if (fVar9 < fVar14) {
LAB_003a1e60:
          local_a4 = 1;
          fVar8 = fVar16;
        }
      }
LAB_003a1e78:
      if ((fVar15 <= fVar8) && ((fVar13 < fVar15 || (fVar8 < fVar13)))) {
        fVar13 = fVar8;
      }
      if (((bVar1) && (fVar15 <= fVar8)) && ((fVar10 < fVar15 || (fVar10 < fVar8)))) {
        fVar10 = fVar8;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x10));
    if (local_a4 != 0) {
      if (((*(char *)(param_1 + 0x29) != '\0') && (fVar15 <= fVar10)) && (fVar13 < fVar16)) {
        fVar13 = fVar10;
      }
      if (fVar13 < fVar15) {
        return 0;
      }
      fVar10 = SQRT(local_1d8 * local_1d8 + local_1d4 * local_1d4 + local_1d0 * local_1d0);
      if (fVar15 < fVar10) {
        fVar10 = SQRT(fVar13) / fVar10;
        local_1d8 = local_1d8 * fVar10;
        local_1d4 = local_1d4 * fVar10;
        local_1d0 = local_1d0 * fVar10;
      }
    }
  }
  return func_00115C54(local_30,local_30,&local_1d8);
}

