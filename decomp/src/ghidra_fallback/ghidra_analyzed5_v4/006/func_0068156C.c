#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00433ABC(int *param_1,int *param_2,int param_3);
extern int func_0068B200(float *param_1,float *param_2);
extern int DAT_006818b0;
extern undefined4 DAT_006818b4;
extern float DAT_006818b8;
extern float DAT_006818bc;
extern float *DAT_00681ce4;

// USA 0068156C <- EU 00681544 (Ghidra, non-matching)
// GLOBAL DAT_006818b0 int
// GLOBAL DAT_006818b4 undefined4
// GLOBAL DAT_006818b8 float
// GLOBAL DAT_006818bc float
// GLOBAL DAT_00681ce4 float *

void func_0068156C(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_d8;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_s20;
  float fVar21;
  float in_s22;
  float *pfVar22;
  undefined4 uVar24;
  undefined8 uVar23;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_100 (*(float * *)(albw_frame + 0x0))
  #define local_fc (*(float * *)(albw_frame + 0x4))
  #define local_f8 (*(float *)(albw_frame + 0x8))
  #define local_f4 (*(float * *)(albw_frame + 0xc))
  #define local_f0 (*(float * *)(albw_frame + 0x10))
  #define local_ec (*(float *)(albw_frame + 0x14))
  #define local_e8 (*(float *)(albw_frame + 0x18))
  #define local_e4 (*(float *)(albw_frame + 0x1c))
  #define local_e0 (*(float * *)(albw_frame + 0x20))
  #define fStack_dc (*(float *)(albw_frame + 0x24))
  #define pfStack_d8 (*(float * *)(albw_frame + 0x28))
  #define local_d4 (*(float *)(albw_frame + 0x2c))
  #define local_d0 (*(float *)(albw_frame + 0x30))
  #define local_cc (*(float *)(albw_frame + 0x34))
  #define local_c8 (*(float *)(albw_frame + 0x38))
  #define local_c4 (*(float * *)(albw_frame + 0x3c))
  #define local_c0 (*(float * *)(albw_frame + 0x40))
  #define local_bc (*(float *)(albw_frame + 0x44))
  #define local_b8 (*(float *)(albw_frame + 0x48))
  #define local_b4 (*(float * *)(albw_frame + 0x4c))
  #define local_a8 (*(int *)(albw_frame + 0x58))
  #define local_a4 (*(float * *)(albw_frame + 0x5c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x60))
  #define afStack_9c ((float *)(albw_frame + 0x64))
  #define local_90 (*(float *)(albw_frame + 0x70))
  #define local_8c (*(float *)(albw_frame + 0x74))
  #define fStack_88 (*(float *)(albw_frame + 0x78))
  #define fStack_84 (*(float *)(albw_frame + 0x7c))
  #define local_80 (*(float * *)(albw_frame + 0x80))
  #define pfStack_7c (*(float * *)(albw_frame + 0x84))
  #define local_78 (*(float *)(albw_frame + 0x88))
  #define local_74 (*(float *)(albw_frame + 0x8c))
  #define local_70 (*(float *)(albw_frame + 0x90))
  #define local_6c (*(float *)(albw_frame + 0x94))
  #define local_68 (*(float *)(albw_frame + 0x98))
  #define fStack_64 (*(float *)(albw_frame + 0x9c))
  #define fStack_60 (*(float *)(albw_frame + 0xa0))
  #define iStack_2c (*(int *)(albw_frame + 0xd4))
  #define local_28 (*(int *)(albw_frame + 0xd8))
  iVar2 = DAT_006818b0;
  fVar18 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20));
  iVar13 = *(int *)(DAT_006818b0 + 4);
  local_a8 = 0;
  local_a4 = (float *)0x0;
  local_a0 = 0;
  local_90 = ALBW_AS_F32(DAT_006818b4);
  uVar24 = DAT_006818b4;
  iStack_2c = param_1;
  local_28 = param_2;
  func_00433ABC(&local_a8,*(int **)(param_1 + 0x5c),*(int *)(param_1 + 0x70));
  local_90 = *(float *)(iVar2 + 0x38);
  pfVar12 = (float *)(iVar2 + 8);
  local_c4 = afStack_9c;
  fVar19 = *(float *)(iVar2 + 100);
  local_b4 = (float *)(iVar2 + 0x48);
  func_00115C70(&local_f8,pfVar12,local_c4);
  uVar23 = CONCAT44(uVar24,DAT_006818b8);
  fVar20 = *(float *)(iVar2 + 0x14);
  local_d4 = DAT_006818b8;
  local_d0 = DAT_006818b8;
  local_cc = DAT_006818b8;
  iVar4 = *(int *)(local_a8 + 4);
  pfVar10 = (float *)(iVar4 + (uint)*(ushort *)((int)local_a4 + 6) * 0xc);
  pfVar9 = (float *)(iVar4 + (uint)*(ushort *)(local_a4 + 2) * 0xc);
  pfVar6 = (float *)(iVar4 + (uint)*(ushort *)((int)local_a4 + 10) * 0xc);
  pfVar8 = (float *)(iVar4 + (uint)*(ushort *)(local_a4 + 3) * 0xc);
  fVar15 = local_f8;
  pfVar5 = local_f4;
  pfVar22 = local_f0;
  func_00115C70(&local_d4,pfVar12,local_b4);
  func_00115C70(&local_d4,&local_d4,afStack_9c);
  fVar16 = ALBW_AS_F32(uVar23);
  if (local_d4 * *pfVar10 + local_d0 * pfVar10[1] + local_cc * pfVar10[2] < fVar16)
  goto LAB_00681a20;
  fVar19 = fVar19 + *(float *)(iVar2 + 0x14) * DAT_006818bc;
  if (fVar19 < local_90) {
    fVar19 = local_90;
  }
  fVar21 = fVar15 * *pfVar10 + ALBW_AS_F32(pfVar5) * pfVar10[1] + ALBW_AS_F32(pfVar22) * pfVar10[2];
  fVar17 = fVar20 - fVar21;
  if (fVar17 == fVar16) {
LAB_00681a0c:
    if (fVar17 <= ALBW_AS_F32(uVar23)) goto LAB_00681a20;
    bVar1 = true;
    in_s22 = fVar17;
  }
  else {
    if ((fVar17 < fVar16) || (fVar19 <= fVar17)) goto LAB_00681a20;
    fVar19 = fVar15 * *pfVar9 + ALBW_AS_F32(pfVar5) * pfVar9[1] + ALBW_AS_F32(pfVar22) * pfVar9[2];
    if (fVar20 < fVar19) {
      uVar11 = 1;
LAB_00681734:
      func_00115C70(&local_78,&local_d4,local_c4);
      func_00115C70(&local_8c,pfVar12,local_c4);
      fVar15 = local_78 * *pfVar10 + local_74 * pfVar10[1] + local_70 * pfVar10[2];
      fVar16 = ALBW_AS_F32(uVar23);
      if (fVar15 <= fVar16) {
        fVar15 = -fVar15;
      }
      fVar14 = local_8c * *pfVar10 + fStack_88 * pfVar10[1] + fStack_84 * pfVar10[2];
      if (fVar14 <= fVar16) {
        fVar14 = -fVar14;
      }
      if (fVar16 < fVar15 + fVar14) {
        local_c0 = (float *)ALBW_PTR_BITS(*local_b4);
        local_bc = local_b4[1];
        local_b8 = local_b4[2];
        func_00115D70((float *)&local_c0,(float *)&local_c0,-(fVar14 / (fVar15 + fVar14)));
        func_00115C54((float *)&local_c0,(float *)&local_c0,pfVar12);
        func_00115C70(&local_68,(float *)&local_c0,local_c4);
        if (((((uVar11 & 1) != 0) &&
             (fVar19 = local_68 * *pfVar9 + fStack_64 * pfVar9[1] + fStack_60 * pfVar9[2],
             fVar20 < fVar19)) ||
            (((uVar11 & 3) != 0 &&
             (fVar18 = local_68 * *pfVar6 + fStack_64 * pfVar6[1] + fStack_60 * pfVar6[2],
             fVar20 < fVar18)))) ||
           ((uVar11 != 0 &&
            (in_s20 = (local_68 * *pfVar8 + fStack_64 * pfVar8[1] + fStack_60 * pfVar8[2]) -
                      *local_a4, fVar20 < in_s20)))) goto LAB_00681a20;
      }
    }
    else {
      fVar18 = fVar15 * *pfVar6 + ALBW_AS_F32(pfVar5) * pfVar6[1] + ALBW_AS_F32(pfVar22) * pfVar6[2];
      if (fVar20 < fVar18) {
        uVar11 = 2;
        goto LAB_00681734;
      }
      in_s20 = (fVar15 * *pfVar8 + ALBW_AS_F32(pfVar5) * pfVar8[1] + ALBW_AS_F32(pfVar22) * pfVar8[2]) -
               *local_a4;
      if (fVar20 < in_s20) {
        uVar11 = 4;
        goto LAB_00681734;
      }
    }
    if (fVar19 <= fVar18) {
      pfVar5 = pfVar6;
      fVar15 = fVar18;
      if ((fVar19 <= in_s20) &&
         (pfVar5 = pfVar8, pfVar9 = pfVar6, fVar15 = in_s20, fVar19 = fVar18, in_s20 < fVar18)) {
        pfVar5 = pfVar6;
        pfVar9 = pfVar8;
        fVar15 = fVar18;
        fVar19 = in_s20;
      }
    }
    else {
      pfVar5 = pfVar8;
      fVar15 = in_s20;
      if ((in_s20 < fVar19) &&
         (pfVar5 = pfVar9, pfVar9 = pfVar6, fVar15 = fVar19, fVar19 = fVar18, fVar18 <= in_s20)) {
        pfVar9 = pfVar8;
        fVar19 = in_s20;
      }
    }
    if (fVar15 <= ALBW_AS_F32(uVar23)) goto LAB_00681a0c;
    fVar18 = *pfVar5 * *pfVar9 + pfVar5[1] * pfVar9[1] + pfVar5[2] * pfVar9[2];
    if (fVar19 < fVar18 * fVar15) {
      fVar15 = fVar20 * fVar20 - fVar15 * fVar15;
LAB_006819f4:
      if (fVar21 * fVar21 <= fVar15) {
        fVar17 = SQRT(fVar15) - fVar21;
        goto LAB_00681a0c;
      }
    }
    else {
      fVar16 = fVar18 * fVar18 - ALBW_AS_F32(((ulonglong)uVar23 >> 0x20));
      if (0xb4000000 < (uint)ALBW_AS_U32(fVar16)) {
        fVar16 = (fVar18 * fVar19 - fVar15) / fVar16;
        fVar19 = fVar19 - fVar16 * fVar18;
        func_00115D70(&local_f8,pfVar5,fVar16);
        local_c8 = local_f8;
        local_c4 = local_f4;
        local_c0 = local_f0;
        func_00115D70(&local_bc,pfVar9,fVar19);
        local_e8 = local_bc;
        local_e4 = local_b8;
        local_e0 = local_b4;
        func_00115C54((float *)&local_100,&local_c8,&local_e8);
        fVar15 = fVar20 * fVar20 -
                 (ALBW_AS_F32(local_100) * ALBW_AS_F32(local_100) + ALBW_AS_F32(local_fc) * ALBW_AS_F32(local_fc) +
                 local_f8 * local_f8);
        if (ALBW_AS_F32(uVar23) < fVar15) goto LAB_006819f4;
      }
    }
LAB_00681a20:
    bVar1 = false;
  }
  iVar2 = DAT_006818b0;
  *(byte *)(DAT_006818b0 + 0x6c) = bVar1 | *(byte *)(DAT_006818b0 + 0x6c);
  if (!bVar1) {
    return;
  }
  if (*(int *)(iVar2 + 0x30) == 0) {
    bVar1 = false;
    if (*(int *)(iVar13 + 4) == 0) goto LAB_00681ccc;
LAB_00681a58:
    local_f0 = DAT_00681ce4;
    local_100 = (float *)0x1f;
    local_cc = 0.0;
    local_c8 = 0.0;
    local_c0 = (float *)0x0;
    local_bc = 0.0;
    local_b8 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_b8) & 0xffffff00));
    pfVar9 = (float *)(*(int *)(local_a8 + 4) + (uint)*(ushort *)((int)local_a4 + 6) * 0xc);
    local_ec = *pfVar9;
    local_e8 = pfVar9[1];
    local_e4 = pfVar9[2];
    if ((~*(ushort *)(param_1 + 100) & 0x1f) == 0) {
      uVar3 = *(undefined2 *)((int)local_a4 + 0xe);
    }
    else {
      uVar3 = *(undefined2 *)(param_1 + 100);
    }
    local_d0 = ALBW_AS_F32(CONCAT22((short)((uint)ALBW_AS_U32(local_d0) >> 0x10),uVar3));
    local_d4 = in_s22;
    func_00115D70(&local_74,
                  (float *)(*(int *)(local_a8 + 4) + (uint)*(ushort *)((int)local_a4 + 6) * 0xc),
                  *(float *)(iVar2 + 0x14) - in_s22);
    local_8c = local_74;
    fStack_88 = local_70;
    fStack_84 = local_6c;
    func_00115C70((float *)&local_fc,(float *)(iVar2 + 8),&local_8c);
    local_e0 = local_fc;
    fStack_dc = local_f8;
    pfStack_d8 = local_f4;
    local_c8 = *(float *)(param_1 + 0x68);
    local_c0 = (float *)(uint)*(ushort *)(param_1 + 0x6c);
    piVar7 = *(int **)(iVar2 + 0x34);
    iVar4 = local_28;
    if (piVar7 != (int *)0x0) {
      if ((*(byte *)(piVar7 + 0x2a) & 6) != 0) {
        func_00115CE4(&local_74,(float *)(piVar7 + 0x21),&local_ec);
        fVar15 = SQRT(local_74 * local_74 + local_70 * local_70 + local_6c * local_6c);
        if (ALBW_AS_F32(uVar23) < fVar15) {
          local_e4 = ALBW_AS_F32(((ulonglong)uVar23 >> 0x20)) / fVar15;
          local_ec = local_74 * local_e4;
          local_e8 = local_70 * local_e4;
          local_e4 = local_6c * local_e4;
        }
        if (fVar15 != ALBW_AS_F32(uVar23)) {
          local_d4 = local_d4 / fVar15;
        }
        func_00115CE4((float *)&local_e0,(float *)(piVar7 + 0xf),(float *)&local_e0);
      }
      iVar4 = *piVar7;
    }
    func_00115C54((float *)&local_e0,(float *)&local_e0,(float *)(iVar4 + 4));
    iVar4 = (**(code **)**(undefined4 **)(iVar13 + 4))(*(undefined4 **)(iVar13 + 4),&local_f0);
    if (iVar4 == 0) {
      return;
    }
    if (!bVar1) goto LAB_00681ccc;
    func_00115D70((float *)&local_80,&local_ec,local_d4);
    local_100 = local_80;
    local_fc = pfStack_7c;
    local_f8 = local_78;
  }
  else {
    bVar1 = true;
    if (*(int *)(iVar13 + 4) != 0) goto LAB_00681a58;
    func_00115D70((float *)&local_f4,
                  (float *)(*(int *)(local_a8 + 4) + (uint)*(ushort *)((int)local_a4 + 6) * 0xc),
                  in_s22);
    local_100 = local_f4;
    local_fc = local_f0;
    local_f8 = local_ec;
    iVar4 = *(int *)(iVar2 + 0x34);
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0xa8) & 6) != 0)) {
      func_00115CE4((float *)&local_100,(float *)(iVar4 + 0x84),(float *)&local_100);
    }
  }
  func_0068B200(*(float **)(iVar2 + 0x30),(float *)&local_100);
LAB_00681ccc:
  *(undefined1 *)(iVar2 + 0x6d) = 1;
  return;
}

