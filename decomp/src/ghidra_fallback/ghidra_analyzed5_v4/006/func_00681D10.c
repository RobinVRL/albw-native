#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00433ABC(int *param_1,int *param_2,int param_3);
extern int func_0068B200(float *param_1,float *param_2);
extern int DAT_00682048;
extern undefined4 DAT_0068204c;
extern float *DAT_00682050;
extern float DAT_00682054;
extern float *DAT_006824a8;

// USA 00681D10 <- EU 00681CE8 (Ghidra, non-matching)
// GLOBAL DAT_00682048 int
// GLOBAL DAT_0068204c undefined4
// GLOBAL DAT_00682050 float *
// GLOBAL DAT_00682054 float
// GLOBAL DAT_006824a8 float *

void func_00681D10(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float **ppfVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_d8;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_s20;
  float fVar22;
  float in_s22;
  float *pfVar23;
  float *pfVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar28;
  undefined8 uVar27;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_118 (*(float * *)(albw_frame + 0x8))
  #define pfStack_114 (*(float * *)(albw_frame + 0xc))
  #define local_110 (*(float * *)(albw_frame + 0x10))
  #define local_10c (*(float * *)(albw_frame + 0x14))
  #define local_108 (*(float * *)(albw_frame + 0x18))
  #define local_104 (*(float * *)(albw_frame + 0x1c))
  #define pfStack_100 (*(float * *)(albw_frame + 0x20))
  #define local_fc (*(float * *)(albw_frame + 0x24))
  #define local_f8 (*(float * *)(albw_frame + 0x28))
  #define local_f4 (*(float * *)(albw_frame + 0x2c))
  #define local_f0 (*(float * *)(albw_frame + 0x30))
  #define local_e4 (*(float * *)(albw_frame + 0x3c))
  #define local_e0 (*(float * *)(albw_frame + 0x40))
  #define local_dc (*(float * *)(albw_frame + 0x44))
  #define local_d8 (*(float * *)(albw_frame + 0x48))
  #define local_d4 (*(float * *)(albw_frame + 0x4c))
  #define local_d0 (*(float * *)(albw_frame + 0x50))
  #define local_cc (*(float * *)(albw_frame + 0x54))
  #define local_c8 (*(float * *)(albw_frame + 0x58))
  #define local_c4 (*(float *)(albw_frame + 0x5c))
  #define local_c0 (*(float *)(albw_frame + 0x60))
  #define local_bc (*(undefined4 *)(albw_frame + 0x64))
  #define local_b8 (*(float *)(albw_frame + 0x68))
  #define fStack_b4 (*(float *)(albw_frame + 0x6c))
  #define local_b0 (*(float *)(albw_frame + 0x70))
  #define local_ac (*(float *)(albw_frame + 0x74))
  #define local_a8 (*(float *)(albw_frame + 0x78))
  #define local_a4 (*(float *)(albw_frame + 0x7c))
  #define local_98 (*(int *)(albw_frame + 0x88))
  #define local_94 (*(float * *)(albw_frame + 0x8c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x90))
  #define afStack_8c ((float *)(albw_frame + 0x94))
  #define local_80 (*(float *)(albw_frame + 0xa0))
  #define local_74 (*(float *)(albw_frame + 0xac))
  #define fStack_70 (*(float *)(albw_frame + 0xb0))
  #define fStack_6c (*(float *)(albw_frame + 0xb4))
  #define iStack_2c (*(int *)(albw_frame + 0xf4))
  #define local_28 (*(int *)(albw_frame + 0xf8))
  iVar2 = DAT_00682048;
  fVar19 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20));
  ppfVar7 = &local_118;
  iVar15 = *(int *)(DAT_00682048 + 4);
  local_98 = 0;
  local_94 = (float *)0x0;
  local_90 = 0;
  local_80 = ALBW_AS_F32(DAT_0068204c);
  uVar28 = DAT_0068204c;
  iStack_2c = param_1;
  local_28 = param_2;
  func_00433ABC(&local_98,*(int **)(param_1 + 0x5c),*(int *)(param_1 + 0x70));
  local_80 = *(float *)(iVar2 + 0x38);
  pfVar14 = (float *)(iVar2 + 8);
  local_cc = afStack_8c;
  fVar20 = *(float *)(iVar2 + 100);
  local_f0 = (float *)(iVar2 + 0x48);
  func_00115C70((float *)&local_104,pfVar14,local_cc);
  uVar27 = CONCAT44(uVar28,DAT_00682050);
  fVar21 = *(float *)(iVar2 + 0x14);
  local_d8 = DAT_00682050;
  local_d4 = DAT_00682050;
  local_d0 = DAT_00682050;
  iVar4 = *(int *)(local_98 + 4);
  pfVar12 = (float *)(iVar4 + (uint)*(ushort *)((int)local_94 + 6) * 0xc);
  pfVar11 = (float *)(iVar4 + (uint)*(ushort *)(local_94 + 2) * 0xc);
  pfVar8 = (float *)(iVar4 + (uint)*(ushort *)((int)local_94 + 10) * 0xc);
  pfVar10 = (float *)(iVar4 + (uint)*(ushort *)(local_94 + 3) * 0xc);
  pfVar6 = local_104;
  pfVar23 = pfStack_100;
  pfVar24 = local_fc;
  func_00115C70((float *)&local_d8,pfVar14,local_f0);
  func_00115C70((float *)&local_d8,(float *)&local_d8,afStack_8c);
  fVar25 = ALBW_AS_F32(uVar27);
  if (ALBW_AS_F32(local_d8) * *pfVar12 + ALBW_AS_F32(local_d4) * pfVar12[1] + ALBW_AS_F32(local_d0) * pfVar12[2] <
      fVar25) goto LAB_006821e0;
  fVar20 = fVar20 + *(float *)(iVar2 + 0x14) * DAT_00682054;
  if (fVar20 < local_80) {
    fVar20 = local_80;
  }
  fVar22 = ALBW_AS_F32(pfVar6) * *pfVar12 + ALBW_AS_F32(pfVar23) * pfVar12[1] + ALBW_AS_F32(pfVar24) * pfVar12[2];
  fVar18 = fVar21 - fVar22;
  if (fVar18 == fVar25) {
LAB_006821cc:
    if (fVar18 <= ALBW_AS_F32(uVar27)) goto LAB_006821e0;
    bVar1 = true;
    in_s22 = fVar18;
  }
  else {
    if ((fVar18 < fVar25) || (fVar20 <= fVar18)) goto LAB_006821e0;
    fVar20 = ALBW_AS_F32(pfVar6) * *pfVar11 + ALBW_AS_F32(pfVar23) * pfVar11[1] + ALBW_AS_F32(pfVar24) * pfVar11[2];
    fVar25 = DAT_00682054;
    if (fVar21 < fVar20) {
      uVar13 = 1;
LAB_00681ed0:
      func_00115C70(&local_ac,(float *)&local_d8,local_cc);
      func_00115C70(&local_b8,pfVar14,local_cc);
      fVar16 = local_ac * *pfVar12 + local_a8 * pfVar12[1] + local_a4 * pfVar12[2];
      fVar26 = ALBW_AS_F32(uVar27);
      if (fVar16 <= fVar26) {
        fVar16 = -fVar16;
      }
      fVar17 = local_b8 * *pfVar12 + fStack_b4 * pfVar12[1] + local_b0 * pfVar12[2];
      if (fVar17 <= fVar26) {
        fVar17 = -fVar17;
      }
      if (fVar26 < fVar16 + fVar17) {
        local_c8 = (float *)ALBW_PTR_BITS(*local_f0);
        local_c4 = local_f0[1];
        local_c0 = local_f0[2];
        func_00115D70((float *)&local_c8,(float *)&local_c8,-(fVar17 / (fVar16 + fVar17)));
        func_00115C54((float *)&local_c8,(float *)&local_c8,pfVar14);
        func_00115C70(&local_74,(float *)&local_c8,local_cc);
        if (((((uVar13 & 1) != 0) &&
             (fVar20 = local_74 * *pfVar11 + fStack_70 * pfVar11[1] + fStack_6c * pfVar11[2],
             fVar21 < fVar20)) ||
            (((uVar13 & 3) != 0 &&
             (fVar19 = local_74 * *pfVar8 + fStack_70 * pfVar8[1] + fStack_6c * pfVar8[2],
             fVar21 < fVar19)))) ||
           ((uVar13 != 0 &&
            (in_s20 = (local_74 * *pfVar10 + fStack_70 * pfVar10[1] + fStack_6c * pfVar10[2]) -
                      *local_94, fVar21 < in_s20)))) goto LAB_006821e0;
      }
    }
    else {
      fVar19 = ALBW_AS_F32(pfVar6) * *pfVar8 + ALBW_AS_F32(pfVar23) * pfVar8[1] + ALBW_AS_F32(pfVar24) * pfVar8[2];
      if (fVar21 < fVar19) {
        uVar13 = 2;
        goto LAB_00681ed0;
      }
      in_s20 = (ALBW_AS_F32(pfVar6) * *pfVar10 + ALBW_AS_F32(pfVar23) * pfVar10[1] + ALBW_AS_F32(pfVar24) * pfVar10[2]
               ) - *local_94;
      if (fVar21 < in_s20) {
        uVar13 = 4;
        goto LAB_00681ed0;
      }
    }
    if (fVar20 <= fVar19) {
      pfVar6 = pfVar8;
      fVar16 = fVar19;
      if ((fVar20 <= in_s20) &&
         (pfVar6 = pfVar10, pfVar11 = pfVar8, fVar16 = in_s20, fVar20 = fVar19, in_s20 < fVar19)) {
        pfVar6 = pfVar8;
        pfVar11 = pfVar10;
        fVar16 = fVar19;
        fVar20 = in_s20;
      }
    }
    else {
      pfVar6 = pfVar10;
      fVar16 = in_s20;
      if ((in_s20 < fVar20) &&
         (pfVar6 = pfVar11, pfVar11 = pfVar8, fVar16 = fVar20, fVar20 = fVar19, fVar19 <= in_s20)) {
        pfVar11 = pfVar10;
        fVar20 = in_s20;
      }
    }
    if (fVar16 <= ALBW_AS_F32(uVar27)) goto LAB_006821cc;
    fVar19 = *pfVar6 * *pfVar11 + pfVar6[1] * pfVar11[1] + pfVar6[2] * pfVar11[2];
    if (fVar19 * fVar16 <= fVar20) {
      fVar18 = fVar19 * fVar19 - ALBW_AS_F32(((ulonglong)uVar27 >> 0x20));
      if (0xb4000000 < (uint)ALBW_AS_U32(fVar18)) {
        fVar18 = (fVar19 * fVar20 - fVar16) / fVar18;
        fVar20 = fVar20 - fVar18 * fVar19;
        func_00115D70((float *)&local_110,pfVar6,fVar18);
        local_e4 = local_110;
        local_e0 = local_10c;
        local_dc = local_108;
        func_00115D70((float *)&local_f8,pfVar11,fVar20);
        local_104 = local_f8;
        pfStack_100 = local_f4;
        local_fc = local_f0;
        func_00115C54((float *)&local_f8,(float *)&local_e4,(float *)&local_104);
        fVar20 = ALBW_AS_F32(local_f8) * ALBW_AS_F32(local_f8) + ALBW_AS_F32(local_f4) * ALBW_AS_F32(local_f4) +
                 ALBW_AS_F32(local_f0) * ALBW_AS_F32(local_f0);
        fVar19 = fVar21 * fVar21 - fVar20;
        if ((ALBW_AS_F32(uVar27) < fVar19) && (fVar20 <= fVar22 * fVar22 * fVar25)) goto LAB_006821b4;
      }
    }
    else if (fVar16 <= fVar22) {
      fVar19 = fVar21 * fVar21 - fVar16 * fVar16;
LAB_006821b4:
      if (fVar22 * fVar22 <= fVar19) {
        fVar18 = SQRT(fVar19) - fVar22;
        goto LAB_006821cc;
      }
    }
LAB_006821e0:
    bVar1 = false;
  }
  iVar2 = DAT_00682048;
  *(byte *)(DAT_00682048 + 0x6c) = bVar1 | *(byte *)(DAT_00682048 + 0x6c);
  if (!bVar1) {
    return;
  }
  if (*(int *)(iVar2 + 0x30) == 0) {
    bVar1 = false;
    if (*(int *)(iVar15 + 4) == 0) goto LAB_00682490;
LAB_00682218:
    local_e0 = DAT_006824a8;
    local_118 = (float *)0x1f;
    local_bc = 0;
    local_b8 = 0.0;
    local_b0 = 0.0;
    local_ac = 0.0;
    local_a8 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_a8) & 0xffffff00));
    puVar5 = (undefined4 *)(*(int *)(local_98 + 4) + (uint)*(ushort *)((int)local_94 + 6) * 0xc);
    local_dc = (float *)*puVar5;
    local_d8 = (float *)puVar5[1];
    local_d4 = (float *)puVar5[2];
    if ((~*(ushort *)(param_1 + 100) & 0x1f) == 0) {
      uVar3 = *(undefined2 *)((int)local_94 + 0xe);
    }
    else {
      uVar3 = *(undefined2 *)(param_1 + 100);
    }
    local_c0 = ALBW_AS_F32(CONCAT22((short)((uint)ALBW_AS_U32(local_c0) >> 0x10),uVar3));
    local_c4 = in_s22;
    func_00115D70((float *)&local_f8,
                  (float *)(*(int *)(local_98 + 4) + (uint)*(ushort *)((int)local_94 + 6) * 0xc),
                  *(float *)(iVar2 + 0x14) - in_s22);
    pfStack_114 = local_f8;
    local_110 = local_f4;
    local_10c = local_f0;
    func_00115C70((float *)&local_f8,(float *)(iVar2 + 8),(float *)&pfStack_114);
    local_d0 = local_f8;
    local_cc = local_f4;
    local_c8 = local_f0;
    local_b8 = *(float *)(param_1 + 0x68);
    local_b0 = ALBW_AS_F32((uint)*(ushort *)(param_1 + 0x6c));
    piVar9 = *(int **)(iVar2 + 0x34);
    iVar4 = local_28;
    if (piVar9 != (int *)0x0) {
      if ((*(byte *)(piVar9 + 0x2a) & 6) != 0) {
        func_00115CE4((float *)&local_f8,(float *)(piVar9 + 0x21),(float *)&local_dc);
        fVar20 = SQRT(ALBW_AS_F32(local_f8) * ALBW_AS_F32(local_f8) + ALBW_AS_F32(local_f4) * ALBW_AS_F32(local_f4) +
                      ALBW_AS_F32(local_f0) * ALBW_AS_F32(local_f0));
        if (ALBW_AS_F32(uVar27) < fVar20) {
          fVar19 = ALBW_AS_F32(((ulonglong)uVar27 >> 0x20)) / fVar20;
          local_dc = (float *)ALBW_PTR_BITS((ALBW_AS_F32(local_f8) * fVar19));
          local_d8 = (float *)ALBW_PTR_BITS((ALBW_AS_F32(local_f4) * fVar19));
          local_d4 = (float *)ALBW_PTR_BITS((ALBW_AS_F32(local_f0) * fVar19));
        }
        if (fVar20 != ALBW_AS_F32(uVar27)) {
          local_c4 = local_c4 / fVar20;
        }
        func_00115CE4((float *)&local_d0,(float *)(piVar9 + 0xf),(float *)&local_d0);
      }
      iVar4 = *piVar9;
    }
    func_00115C54((float *)&local_d0,(float *)&local_d0,(float *)(iVar4 + 4));
    iVar4 = (**(code **)**(undefined4 **)(iVar15 + 4))(*(undefined4 **)(iVar15 + 4),&local_e0);
    if (iVar4 == 0) {
      return;
    }
    if (!bVar1) goto LAB_00682490;
    func_00115D70((float *)&local_fc,(float *)&local_dc,local_c4);
    local_108 = local_fc;
    local_104 = local_f8;
    pfStack_100 = local_f4;
    ppfVar7 = &local_108;
    pfVar11 = *(float **)(iVar2 + 0x30);
  }
  else {
    bVar1 = true;
    if (*(int *)(iVar15 + 4) != 0) goto LAB_00682218;
    func_00115D70((float *)&local_10c,
                  (float *)(*(int *)(local_98 + 4) + (uint)*(ushort *)((int)local_94 + 6) * 0xc),
                  in_s22);
    local_118 = local_10c;
    pfStack_114 = local_108;
    local_110 = local_104;
    iVar4 = *(int *)(iVar2 + 0x34);
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0xa8) & 6) != 0)) {
      func_00115CE4((float *)&local_118,(float *)(iVar4 + 0x84),(float *)&local_118);
    }
    pfVar11 = *(float **)(iVar2 + 0x30);
  }
  func_0068B200(pfVar11,(float *)ppfVar7);
LAB_00682490:
  *(undefined1 *)(iVar2 + 0x6d) = 1;
  return;
}

