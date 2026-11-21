/* USA 0034E4B0 (merged-wall camera: picks the camera side and point): converted Ghidra text with one
 * fix. It measures the wall's angle against the side it would take (0 or 90 degrees), through
 * 0058E2B8(&sp[0xC]); the ARM code stores (angle - side) to sp+0xC first (EU 0034E58C..90), Ghidra
 * lost that store, so the test read a stale stack word and the camera could take the far side of
 * the wall (a ~180-degree swing at wall ends: slot 1, 160be). Confidence: high (EU code bytes). */
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0036FA1C(undefined4 *param_1,undefined1 param_2);
extern int func_004323A0(undefined4 *param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004ED868(void);
extern float func_00542350(undefined4 param_1,int param_2);
extern int func_00553EC4(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6,int ****param_7,int param_8);
extern int func_00554A2C(undefined4 param_1,float *param_2,uint param_3);
extern int func_00588CFC(undefined4 param_1,float *param_2,undefined4 *param_3,undefined4 *param_4, float *param_5,int param_6,float fparam_0,float fparam_1,float fparam_2);
extern int func_0058E2B8(int *param_1);
extern float DAT_0034e844;
extern int DAT_0034e848;
extern uint DAT_0034e84c;
extern float *DAT_0034e850;
extern float *DAT_0034e854;
extern float DAT_0034e858;
extern float DAT_0034e85c;
extern float DAT_0034e860;
extern int DAT_0034e864;
extern float DAT_0034e868;
extern float DAT_0034e86c;
extern float DAT_0034ed30;
extern float DAT_0034ed34;
extern float DAT_0034ed38;
extern float DAT_0034ed3c;
extern undefined4 DAT_0034ed40;
extern float DAT_0034ed44;
extern float DAT_0034ed48;
extern int DAT_0034ed4c;
extern float DAT_0034ed50;
extern float DAT_0034ed54;
extern float DAT_0034ed58;
extern int DAT_0034ed5c;
extern int *DAT_0034ed60;
extern undefined4 *DAT_0034ed64;
extern float DAT_0034ed68;

// USA 0034E4B0 <- EU 0034E48C (Ghidra, non-matching)
// GLOBAL DAT_0034e844 float
// GLOBAL DAT_0034e848 int
// GLOBAL DAT_0034e84c uint
// GLOBAL DAT_0034e850 float *
// GLOBAL DAT_0034e854 float *
// GLOBAL DAT_0034e858 float
// GLOBAL DAT_0034e85c float
// GLOBAL DAT_0034e860 float
// GLOBAL DAT_0034e864 int
// GLOBAL DAT_0034e868 float
// GLOBAL DAT_0034e86c float
// GLOBAL DAT_0034ed30 float
// GLOBAL DAT_0034ed34 float
// GLOBAL DAT_0034ed38 float
// GLOBAL DAT_0034ed3c float
// GLOBAL DAT_0034ed40 undefined4
// GLOBAL DAT_0034ed44 float
// GLOBAL DAT_0034ed48 float
// GLOBAL DAT_0034ed4c int
// GLOBAL DAT_0034ed50 float
// GLOBAL DAT_0034ed54 float
// GLOBAL DAT_0034ed58 float
// GLOBAL DAT_0034ed5c int
// GLOBAL DAT_0034ed60 int *
// GLOBAL DAT_0034ed64 undefined4 *
// GLOBAL DAT_0034ed68 float

void func_0034E4B0(int param_1,float *param_2,int param_3)

{
  _Alignas(8) unsigned char albw_frame[0x190]; /* entry_sp - 0x190 .. entry_sp + 0x0 */
#define stack0xfffffe70 (*(undefined4 *)(albw_frame + 0x0))
#define stack0xfffffe7c (*(undefined4 *)(albw_frame + 0xc))
  short sVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  #define apppiStack_180 ((int *** *)(albw_frame + 0x10))
  #define local_118 (*(float *)(albw_frame + 0x78))
  #define local_114 (*(float *)(albw_frame + 0x7c))
  #define local_110 (*(float *)(albw_frame + 0x80))
  #define local_10c (*(float * *)(albw_frame + 0x84))
  #define local_108 (*(float *)(albw_frame + 0x88))
  #define local_104 (*(float *)(albw_frame + 0x8c))
  #define local_100 (*(float *)(albw_frame + 0x90))
  #define local_fc (*(float *)(albw_frame + 0x94))
  #define local_f8 (*(float *)(albw_frame + 0x98))
  #define local_f4 (*(float *)(albw_frame + 0x9c))
  #define local_f0 (*(float *)(albw_frame + 0xa0))
  #define afStack_ec ((float *)(albw_frame + 0xa4))
  #define local_e0 (*(float *)(albw_frame + 0xb0))
  #define local_dc (*(float *)(albw_frame + 0xb4))
  #define local_d4 (*(float *)(albw_frame + 0xbc))
  #define uStack_d0 (*(undefined4 *)(albw_frame + 0xc0))
  #define uStack_cc (*(undefined4 *)(albw_frame + 0xc4))
  #define afStack_c8 ((float *)(albw_frame + 0xc8))
  #define local_bc (*(float *)(albw_frame + 0xd4))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0xd8))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0xdc))
  #define local_b0 (*(float *)(albw_frame + 0xe0))
  #define local_ac (*(float *)(albw_frame + 0xe4))
  #define local_a8 (*(float *)(albw_frame + 0xe8))
  #define local_a4 (*(float *)(albw_frame + 0xec))
  #define fStack_a0 (*(float *)(albw_frame + 0xf0))
  #define local_9c (*(float *)(albw_frame + 0xf4))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0xf8))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0xfc))
  #define afStack_7c ((float *)(albw_frame + 0x114))
  #define afStack_70 ((float *)(albw_frame + 0x120))
  #define afStack_64 ((float *)(albw_frame + 0x12c))
  #define afStack_58 ((float *)(albw_frame + 0x138))
  #define afStack_4c ((float *)(albw_frame + 0x144))
  #define afStack_40 ((float *)(albw_frame + 0x150))
  if (param_3 == 0) {
    return;
  }
  iVar3 = func_004ED868();
  if (iVar3 == 0) {
    return;
  }
  if (-1 < *(short *)(param_1 + 0x228)) {
    return;
  }
  if (*(char *)(param_1 + 0x22a) != '\0') {
    return;
  }
  puVar4 = func_00554A2C(param_1,param_2,0);
  if (puVar4 == (undefined4 *)0x0) goto LAB_0034edac;
  iVar3 = *(int *)(param_3 + 0x20);
  local_118 = *(float *)(iVar3 + 8);
  local_114 = *(float *)(iVar3 + 0xc);
  local_110 = *(float *)(iVar3 + 0x10);
  local_a8 = SQRT((*param_2 - param_2[3]) * (*param_2 - param_2[3]) +
                  (param_2[2] - param_2[5]) * (param_2[2] - param_2[5]));
  local_b0 = DAT_0034e844;
  local_ac = param_2[1] - param_2[4];
  fVar12 = DAT_0034e844;
  iVar3 = func_004904CC(local_118,local_110);
  iVar5 = *(int *)(puVar4[0x103] + 0x18);
  fVar11 = *(float *)(iVar5 + 0x40) - *(float *)(iVar5 + 0x34);
  fVar13 = *(float *)(iVar5 + 0x48) - *(float *)(iVar5 + 0x3c);
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar13) << 0x1f | (uint)(fVar11 == fVar13) << 0x1e;
  uVar10 = uVar8 | (uint)(NAN(fVar11) || NAN(fVar13)) << 0x1c;
  bVar2 = (byte)(uVar8 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar10 >> 0x1c) & 1)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x40000000;
  }
  stack0xfffffe7c = (undefined4)(iVar3 - uVar8);   /* lost by Ghidra: str r1 (= angle - side), [sp, #0xc] */
  uVar6 = func_0058E2B8((int *)&stack0xfffffe7c);
  if (uVar6 - DAT_0034e848 < DAT_0034e84c) {
    return;
  }
  if (0x40000000 < uVar6) {
    uVar8 = uVar8 + 0x80000000;
    local_10c = (float *)(iVar3 - uVar8);
    func_0058E2B8((int *)&local_10c);
  }
  func_0048B5D4(&fStack_a0,DAT_0034e850,uVar8);
  func_00491B3C(&local_e0,&fStack_a0);
  func_00115CA8(&local_b0,&local_e0,&local_b0);
  func_00115C54(afStack_7c,param_2 + 3,&local_b0);
  local_118 = *DAT_0034e854;
  local_114 = DAT_0034e854[1];
  local_110 = DAT_0034e854[2];
  func_00115CA8(&local_118,&local_e0,&local_118);
  uVar14 = CONCAT44(DAT_0034e86c,fVar12);
  uVar8 = (uint)(*(float *)(param_1 + 0x1c8) * DAT_0034e858 * DAT_0034e85c);
  pfVar7 = (float *)(DAT_0034e864 + (uVar8 >> 0x18) * 0x10);
  fVar12 = (float)VectorUnsignedToFloat(uVar8 & 0xffffff,(byte)(uVar10 >> 0x15) & 3);
  fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0xffffff,(byte)(uVar10 >> 0x15) & 3);
  uVar8 = func_004904CC(((*pfVar7 + pfVar7[1] * fVar12 * DAT_0034e860) /
                        (pfVar7[2] + pfVar7[3] * fVar11 * DAT_0034e860)) * DAT_0034e868,DAT_0034e86c
                       );
  func_00115C70(afStack_ec,param_2 + 3,afStack_7c);
  func_00115E10(afStack_4c,afStack_ec,DAT_0034e850);
  func_00115DC8(afStack_4c);
  func_00115E10(afStack_58,afStack_4c,afStack_ec);
  func_00115DC8(afStack_58);
  func_0048B5D4(afStack_40,afStack_58,uVar8);
  func_00491B3C(&local_e0,afStack_40);
  func_0048B5D4(afStack_40,afStack_58,-uVar8);
  func_00491B3C(&local_b0,afStack_40);
  func_00115CA8(afStack_70,&local_e0,afStack_ec);
  func_00115CA8(afStack_64,&local_b0,afStack_ec);
  *(float *)(param_1 + 0x284) = local_118;
  *(float *)(param_1 + 0x288) = local_114;
  *(float *)(param_1 + 0x28c) = local_110;
  local_108 = local_118;
  local_104 = local_114;
  local_100 = local_110;
  local_fc = local_118 * param_2[3] + local_114 * param_2[4] + local_110 * param_2[5];
  func_004323A0(apppiStack_180,&local_108);
  func_004356B4((int *)apppiStack_180);
  local_10c = (float *)(*(int *)(puVar4[0x103] + 0x18) + 0x34);
  if (*(char *)(param_1 + 0x26a) == '\x01') {
    uVar8 = func_00553EC4(param_1,&local_f8,local_10c,afStack_7c,afStack_64,afStack_ec,
                          apppiStack_180,1);
    if (uVar8 == 2) {
      uVar8 = func_00553EC4(param_1,&local_f8,local_10c,afStack_7c,afStack_70,afStack_ec,
                            apppiStack_180,0);
      goto joined_r0x0034e8c0;
    }
  }
  else {
    uVar8 = func_00553EC4(param_1,&local_f8,local_10c,afStack_7c,afStack_70,afStack_ec,
                          apppiStack_180,0);
    if (uVar8 == 2) {
      uVar8 = func_00553EC4(param_1,&local_f8,local_10c,afStack_7c,afStack_64,afStack_ec,
                            apppiStack_180,1);
joined_r0x0034e8c0:
      if (uVar8 == 2) {
        uVar8 = func_00553EC4(param_1,&local_f8,local_10c,afStack_7c,afStack_ec,afStack_ec,
                              apppiStack_180,(uint)*(byte *)(param_1 + 0x26a));
      }
    }
  }
  bVar9 = true;
  if (*(byte *)(param_1 + 0x26a) != uVar8) {
    *(char *)(param_1 + 0x26a) = (char)uVar8;
    *(undefined2 *)(param_1 + 0x268) = 0;
    *(undefined1 *)(param_1 + 0x167) = 0;
    if ((*(char *)(param_1 + 0x164) == '\0') && (bVar9 = *(char *)(param_1 + 0x166) == '\0', !bVar9)
       ) {
      *(undefined1 *)(param_1 + 0x166) = 0;
    }
  }
  if (uVar8 == 2) {
    if ((*(char *)(param_1 + 0x165) == '\0') && (*(char *)(param_1 + 0x164) != '\0')) {
      *(undefined1 *)(param_1 + 0x166) = 1;
    }
    goto LAB_0034edac;
  }
  fVar11 = SQRT(local_f8 * local_f8 + local_f4 * local_f4 + local_f0 * local_f0);
  fVar13 = ALBW_AS_F32(uVar14);
  uVar8 = uVar10 & 0xfffffff | (uint)(fVar11 < fVar13) << 0x1f | (uint)(fVar11 == fVar13) << 0x1e;
  uVar6 = uVar8 | (uint)(NAN(fVar11) || NAN(fVar13)) << 0x1c;
  fVar12 = fVar11 - DAT_0034ed30;
  if (fVar11 - DAT_0034ed30 < fVar13) {
    fVar12 = fVar13;
  }
  bVar2 = (byte)(uVar8 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar6 >> 0x1c) & 1)) {
    fVar12 = fVar12 / fVar11;
    local_f4 = local_f4 * fVar12;
    local_f0 = local_f0 * fVar12;
    local_f8 = local_f8 * fVar12;
  }
  if (*(char *)(param_1 + 0x164) == '\0') {
    sVar1 = *(short *)(param_1 + 0x268);
    if (sVar1 == 0) {
      if (bVar9) {
        *(float *)(param_1 + 0x1b0) = fVar13;
        *(float *)(param_1 + 0x1b4) = fVar13;
        *(float *)(param_1 + 0x1b8) = fVar13;
      }
LAB_0034e9f8:
      *(short *)(param_1 + 0x268) = sVar1 + 1;
    }
    else if (-1 < sVar1) goto LAB_0034e9f8;
    fVar12 = DAT_0034ed34;
    fVar11 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
    fVar13 = fVar11;
    if (*(char *)(param_1 + 0x167) == '\0') {
      fVar13 = DAT_0034ed34;
    }
    iVar3 = (int)*(short *)(param_1 + 0x268);
    if ((((-1 < iVar3) &&
         (uVar8 = uVar10 & 0xfffffff | (uint)(fVar13 < fVar11) << 0x1f |
                  (uint)(fVar13 == fVar11) << 0x1e,
         uVar6 = uVar8 | (uint)(NAN(fVar13) || NAN(fVar11)) << 0x1c, bVar2 = (byte)(uVar8 >> 0x18),
         (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar6 >> 0x1c) & 1))) &&
        (fVar11 = fVar13, fVar13 != 1.0)) || (0x3f7fffff < (int)ALBW_AS_U32(fVar13))) {
      bVar9 = SBORROW4((int)ALBW_AS_U32(fVar13),0x3f800000);
      iVar5 = (int)ALBW_AS_U32(fVar13) + -0x3f800000;
      if (0x3f7fffff < (int)ALBW_AS_U32(fVar13)) {
        bVar9 = SBORROW4(iVar3,2);
        iVar5 = iVar3 + -2;
      }
      if (iVar5 < 0 == bVar9) goto LAB_0034ea78;
    }
    else {
LAB_0034ea78:
      *(short *)(param_1 + 0x268) = *(short *)(param_1 + 0x268) + -1;
    }
    if (*(short *)(param_1 + 0x268) < 0) {
      func_004D838C((float *)(param_1 + 0x1b0),&local_f8,fVar11,fVar12,DAT_0034ed3c);
      fVar12 = ALBW_AS_F32(uVar14);
      *(short *)(param_1 + 0x268) = (short)DAT_0034ed40;
    }
    else {
      func_004D838C((float *)(param_1 + 0x1b0),&local_f8,fVar11,fVar12,DAT_0034ed38);
      fVar12 = ALBW_AS_F32(uVar14);
    }
    fVar11 = SQRT(local_f8 * local_f8 + local_f4 * local_f4 + local_f0 * local_f0);
    fVar13 = SQRT(*(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1b0) +
                  *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1b4) +
                  *(float *)(param_1 + 0x1b8) * *(float *)(param_1 + 0x1b8));
    uVar8 = uVar6 & 0xfffffff | (uint)(fVar13 < fVar11) << 0x1f | (uint)(fVar13 == fVar11) << 0x1e;
    uVar6 = uVar8 | (uint)(NAN(fVar13) || NAN(fVar11)) << 0x1c;
    bVar2 = (byte)(uVar8 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar6 >> 0x1c) & 1)) {
      *(float *)(param_1 + 0x1b0) = local_f8;
      *(float *)(param_1 + 0x1b4) = local_f4;
      *(float *)(param_1 + 0x1b8) = local_f0;
    }
    *(float *)(param_1 + 0x108) = fVar12;
  }
  else {
    if (*(char *)(param_1 + 0x165) != '\0') {
      *(float *)(param_1 + 0x1b0) = fVar13;
      *(float *)(param_1 + 0x1b4) = fVar13;
      *(float *)(param_1 + 0x1b8) = fVar13;
      *(undefined1 *)(param_1 + 0x165) = 0;
    }
    if (*(char *)(param_1 + 0x166) == '\0') {
      func_004D838C((float *)(param_1 + 0x1b0),&local_f8,DAT_0034ed48,DAT_0034ed48,DAT_0034ed44);
    }
    else {
      *(float *)(param_1 + 0x1b0) = local_f8;
      *(float *)(param_1 + 0x1b4) = local_f4;
      *(float *)(param_1 + 0x1b8) = local_f0;
    }
    fVar12 = ALBW_AS_F32(uVar14);
    *(undefined2 *)(param_1 + 0x268) = 0xffff;
  }
  if ((*(char *)(param_1 + 0x167) == '\0') &&
     ((int)ALBW_AS_U32(SQRT(local_f8 * local_f8 + local_f4 * local_f4 + local_f0 * local_f0)) < DAT_0034ed4c)) {
    *(undefined1 *)(param_1 + 0x167) = 1;
  }
  func_00115C54(param_2,param_2,(float *)(param_1 + 0x1b0));
  func_00115C54(param_2 + 3,param_2 + 3,(float *)(param_1 + 0x1b0));
  fVar11 = DAT_0034ed50;
  if ((*(char *)(param_1 + 0x164) == '\0') && (*(char *)(param_1 + 0x17b) < '\x0f')) {
    *(char *)(param_1 + 0x17b) = *(char *)(param_1 + 0x17b) + '\x01';
  }
  fVar13 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x17b),(byte)(uVar6 >> 0x15) & 3);
  fVar11 = fVar11 + DAT_0034ed58 * fVar13 * DAT_0034ed54;
  if ((int)ALBW_AS_U32(fVar11) < DAT_0034ed5c) {
    if (*(char *)(param_1 + 0x17c) < '\b') {
      *(char *)(param_1 + 0x17c) = *(char *)(param_1 + 0x17c) + '\x01';
    }
    pfVar7 = *(float **)(*DAT_0034ed60 + 0x1c);
    local_a8 = *pfVar7;
    local_a4 = pfVar7[1];
    fStack_a0 = pfVar7[2];
    fVar13 = func_00542350(param_1 + 0x98,0);
    local_a4 = fVar13 + local_a4;
    iVar3 = func_00588CFC(*DAT_0034ed64,&local_b0,param_2 + 3,param_2,&local_a8,0,fVar11,fVar11,
                          fVar12);
    if (iVar3 == 0) {
      fVar13 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x17c),(byte)(uVar6 >> 0x15) & 3)
      ;
      fVar13 = fVar13 * DAT_0034ed68;
      func_00115C70(&local_e0,param_2 + 3,&local_a8);
      fVar11 = local_b0;
      if (local_ac <= local_b0) {
        fVar11 = local_ac;
      }
      local_dc = fVar12;
      func_00115D70((float *)&stack0xfffffe70,(float *)&stack0xfffffe70,fVar11);
      func_00115C70(&local_9c,(float *)&stack0xfffffe70,&local_e0);
      local_bc = local_9c;
      uStack_b8 = uStack_98;
      uStack_b4 = uStack_94;
      func_00115D70(&local_9c,&local_bc,fVar13);
      local_d4 = local_9c;
      uStack_d0 = uStack_98;
      uStack_cc = uStack_94;
      func_00115C54(&local_9c,&local_d4,&local_e0);
      func_00115C70(afStack_c8,param_2,param_2 + 3);
      func_00115C54(param_2 + 3,&local_a8,(float *)&stack0xfffffe70);
      func_00115C54(param_2,param_2 + 3,afStack_c8);
    }
  }
  func_0036FA1C((undefined4 *)(param_1 + 0x44),0);
LAB_0034edac:
  *(float *)(param_1 + 0x26c) = *param_2;
  *(float *)(param_1 + 0x270) = param_2[1];
  *(float *)(param_1 + 0x274) = param_2[2];
  *(float *)(param_1 + 0x278) = param_2[3];
  *(float *)(param_1 + 0x27c) = param_2[4];
  *(float *)(param_1 + 0x280) = param_2[5];
  return;
}

