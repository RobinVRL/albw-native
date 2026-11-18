#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_003a159c;
extern int DAT_003a15a0;
extern int *DAT_003a15a4;
extern float *DAT_003a15a8;
extern float DAT_003a15ac;
extern float DAT_003a15b0;
extern float DAT_003a15b4;
extern float DAT_003a15b8;
extern int DAT_003a16a4;
extern float DAT_003a16a8;

// USA 003A11D0 <- EU 003A11AC (Ghidra, non-matching)
// GLOBAL DAT_003a159c float
// GLOBAL DAT_003a15a0 int
// GLOBAL DAT_003a15a4 int *
// GLOBAL DAT_003a15a8 float *
// GLOBAL DAT_003a15ac float
// GLOBAL DAT_003a15b0 float
// GLOBAL DAT_003a15b4 float
// GLOBAL DAT_003a15b8 float
// GLOBAL DAT_003a16a4 int
// GLOBAL DAT_003a16a8 float

undefined4 func_003A11D0(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(float *)(albw_frame + 0x0))
  #define local_bc (*(float *)(albw_frame + 0x4))
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define local_b4 (*(float *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(float *)(albw_frame + 0x24))
  #define fStack_98 (*(float *)(albw_frame + 0x28))
  #define fStack_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define local_84 (*(float *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(float *)(albw_frame + 0x44))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define fStack_74 (*(float *)(albw_frame + 0x4c))
  #define fStack_70 (*(float *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define fStack_68 (*(float *)(albw_frame + 0x58))
  #define fStack_64 (*(float *)(albw_frame + 0x5c))
  #define local_5c (*(float *)(albw_frame + 0x64))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define local_54 (*(float *)(albw_frame + 0x6c))
  #define iStack_34 (*(int *)(albw_frame + 0x8c))
  #define local_30 (*(float * *)(albw_frame + 0x90))
  #define pfStack_2c (*(float * *)(albw_frame + 0x94))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x98))
  fVar16 = DAT_003a159c;
  iStack_34 = param_1;
  local_30 = param_2;
  pfStack_2c = param_3;
  uStack_28 = param_4;
  if (((*(uint *)(DAT_003a15a0 + 0xc) & 1) == 0) &&
     (iVar5 = func_00100174(DAT_003a15a4), pfVar7 = DAT_003a15a8, iVar5 != 0)) {
    *DAT_003a15a8 = fVar16;
    pfVar7[3] = fVar16;
    pfVar7[1] = fVar16;
    pfVar7[4] = fVar16;
    pfVar7[2] = fVar16;
    pfVar7[5] = fVar16;
  }
  fVar4 = DAT_003a15ac;
  bVar1 = false;
  bVar2 = false;
  uVar8 = 0;
  local_c0 = *DAT_003a15a8;
  local_bc = DAT_003a15a8[1];
  local_b8 = DAT_003a15a8[2];
  local_b4 = DAT_003a15a8[3];
  local_b0 = DAT_003a15a8[4];
  local_ac = DAT_003a15a8[5];
  uVar6 = *(uint *)(param_1 + 0x10);
  fVar17 = DAT_003a15b8;
  fVar18 = DAT_003a15b0;
  fparam_0 = DAT_003a15b4;
  local_90 = local_c0;
  local_8c = local_bc;
  local_88 = local_b8;
  local_84 = local_b4;
  local_80 = local_b0;
  local_7c = local_ac;
  if (0 < (int)uVar6) {
    do {
      if (uVar8 < uVar6) {
        piVar9 = (int *)(*(int *)(param_1 + 0x18) + uVar8 * 0x24);
      }
      else {
        piVar9 = *(int **)(param_1 + 0x18);
      }
      pfVar7 = (float *)(piVar9 + 1);
      fVar14 = (ALBW_AS_F32(piVar9[1]) * *param_3 + ALBW_AS_F32(piVar9[2]) * param_3[1] +
               ALBW_AS_F32(piVar9[3]) * param_3[2]) - ALBW_AS_F32(piVar9[4]);
      fVar11 = local_ac;
      fVar13 = local_7c;
      if (*(char *)(param_1 + 0x29) == '\0') {
        if (fVar14 < fVar16) {
          fVar15 = -fVar14;
LAB_003a139c:
          func_00115D70(&local_a8,pfVar7,fVar15);
          bVar1 = true;
          if (local_a8 < local_c0) {
            local_c0 = local_a8;
          }
          if (local_a4 < local_bc) {
            local_bc = local_a4;
          }
          if (local_a0 < local_b8) {
            local_b8 = local_a0;
          }
          fVar11 = local_a8;
          if (local_a8 < local_b4) {
            fVar11 = local_b4;
          }
          fVar13 = local_a4;
          if (local_a4 < local_b0) {
            fVar13 = local_b0;
          }
          local_b4 = fVar11;
          local_b0 = fVar13;
          fVar11 = local_a0;
          fVar13 = local_7c;
          if (local_a0 < local_ac) {
            fVar11 = local_ac;
          }
        }
      }
      else {
        fVar15 = fVar17 - fVar14;
        if ((fVar16 < fVar15) && (fVar15 < *(float *)(*piVar9 + 0x54))) {
          func_00115C70(&local_5c,param_3,(float *)(*piVar9 + 0x18));
          fVar10 = ALBW_AS_F32(piVar9[5]) * local_5c + ALBW_AS_F32(piVar9[6]) * local_58 +
                   ALBW_AS_F32(piVar9[7]) * local_54;
          fVar11 = local_ac;
          fVar13 = local_7c;
          if (((uint)ALBW_AS_U32(fVar10) < (uint)ALBW_AS_U32(fVar4)) && (fVar12 = ALBW_AS_F32(piVar9[8]), fVar10 < fVar12 + fVar17))
          {
            if ((fVar10 < fVar16) || (fVar12 < fVar10)) {
              bVar3 = false;
              if (fVar10 <= fVar16) {
                fVar10 = -fVar10;
              }
              else {
                fVar10 = fVar10 - fVar12;
              }
              fVar15 = fVar14;
              if (fVar14 <= fVar16) {
                fVar15 = -fVar14;
              }
              if ((fVar15 < fVar10) || (fVar10 = fVar18 - fVar10 * fVar10, fVar10 < fVar15 * fVar15)
                 ) goto LAB_003a1430;
              fVar15 = SQRT(fVar10) - fVar14;
            }
            else {
              bVar3 = true;
            }
            if ((*(char *)(param_1 + 0x28) == '\0') && ((!bVar3 || (fVar14 < fVar16)))) {
              if ((*pfVar7 * *(float *)(param_1 + 0x1c) +
                   ALBW_AS_F32(piVar9[2]) * *(float *)(param_1 + 0x20) +
                  ALBW_AS_F32(piVar9[3]) * *(float *)(param_1 + 0x24)) - ALBW_AS_F32(piVar9[4]) < fVar16) {
                fVar14 = (*pfVar7 * *param_3 + ALBW_AS_F32(piVar9[2]) * param_3[1] +
                         ALBW_AS_F32(piVar9[3]) * param_3[2]) - ALBW_AS_F32(piVar9[4]);
                if (fVar14 < fVar16) {
                  bVar2 = true;
                  func_00115D70(&local_5c,pfVar7,fVar14);
                  local_a8 = local_5c;
                  local_a4 = local_58;
                  local_a0 = local_54;
                  func_00115D70(&local_5c,&local_a8,fparam_0);
                  if (local_5c < local_90) {
                    local_90 = local_5c;
                  }
                  if (local_58 < local_8c) {
                    local_8c = local_58;
                  }
                  if (local_54 < local_88) {
                    local_88 = local_54;
                  }
                  fVar13 = local_5c;
                  if (local_5c < local_84) {
                    fVar13 = local_84;
                  }
                  fVar14 = local_58;
                  if (local_58 < local_80) {
                    fVar14 = local_80;
                  }
                  fVar11 = local_ac;
                  local_84 = fVar13;
                  local_80 = fVar14;
                  fVar13 = local_54;
                  if (local_54 < local_7c) {
                    fVar13 = local_7c;
                  }
                }
                goto LAB_003a1430;
              }
            }
            if (DAT_003a16a4 < (int)ALBW_AS_U32(fVar15)) {
              fVar15 = fVar15 - fVar17;
              goto LAB_003a139c;
            }
          }
        }
      }
LAB_003a1430:
      local_7c = fVar13;
      local_ac = fVar11;
      uVar6 = *(uint *)(param_1 + 0x10);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar6);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(float *)(param_1 + 0x1c) = *param_3;
    *(float *)(param_1 + 0x20) = param_3[1];
    *(float *)(param_1 + 0x24) = param_3[2];
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x1c) = *param_3;
    *(float *)(param_1 + 0x20) = param_3[1];
    *(float *)(param_1 + 0x24) = param_3[2];
    if (!bVar2) {
      return 0;
    }
  }
  func_00115C54(&local_a8,&local_b4,&local_c0);
  local_6c = local_a8;
  fStack_68 = local_a4;
  fStack_64 = local_a0;
  if (bVar2) {
    func_00115C54(&local_78,&local_84,&local_90);
    local_a8 = local_78;
    local_a4 = fStack_74;
    local_a0 = fStack_70;
    func_00115C54(&local_6c,&local_6c,&local_a8);
  }
  func_00115C54(local_30,local_30,&local_6c);
  func_00115D70(&local_a8,&local_6c,DAT_003a16a8);
  local_9c = local_a8;
  fStack_98 = local_a4;
  fStack_94 = local_a0;
  return func_00115C54((float *)(param_1 + 0x1c),param_3,&local_9c);
}

