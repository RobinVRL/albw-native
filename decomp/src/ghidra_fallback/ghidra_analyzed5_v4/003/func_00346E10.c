#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001D9CA8(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_0028D7A4(int param_1,float fparam_0);
extern int func_002D3B54(int param_1);
extern int func_002D439C(int param_1,undefined4 *param_2);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D56A8(int param_1,float fparam_0);
extern int func_002D5A38(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004A9948(int param_1,int param_2,uint param_3);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004ED46C(int param_1,int param_2);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052E5E4(int param_1,int param_2);
extern float func_0053EDC8(int param_1);
extern int func_0053EDD8(int param_1);
extern float func_0053EE30(int param_1);
extern int func_0053EE40(int param_1,float fparam_0);
extern int func_005462CC(int param_1);
extern int func_00546494(int param_1,float fparam_0);
extern int func_0054CD88(int param_1);
extern int func_0054CFF4(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0058E2B8(int *param_1);
extern float DAT_003471a8;
extern float DAT_003471ac;
extern float DAT_003471b0;
extern float DAT_003471b4;
extern undefined4 DAT_003471b8;
extern int *DAT_003471bc;
extern float DAT_003471c0;
extern float DAT_003471c4;
extern uint DAT_003471c8;
extern int *DAT_003471cc;
extern undefined4 *DAT_003471d0;
extern int DAT_003471d4;
extern uint DAT_003471d8;
extern undefined4 *DAT_003471dc;
extern float DAT_003471e0;
extern float DAT_003471e4;
extern float DAT_00347524;
extern int DAT_00347528;
extern undefined DAT_0034752c;
extern int *DAT_0034754c;
extern int *DAT_00347568;
extern int DAT_0034756c;
extern float DAT_00347570;
extern float DAT_00347574;
extern float DAT_00347578;
extern float DAT_0034757c;
extern int DAT_00347580;
extern int DAT_0034790c;
extern float DAT_00347910;
extern undefined4 DAT_00347914;
extern float DAT_00347918;
extern float DAT_0034791c;
extern undefined DAT_00347920;
extern char s_ASE_PL_Hammer_HIT_GROUND_Lv2_0034752f[];
extern char s_SE_PL_Hammer_HIT_GROUND_00347550[];
extern char s__ASE_S_NG_00347922[];
extern char s_cf_00347922[];
extern undefined4 _DAT_0034752c;
extern undefined4 _DAT_00347920;

// USA 00346E10 <- EU 00346DEC (Ghidra, non-matching)
// GLOBAL DAT_003471a8 float
// GLOBAL DAT_003471ac float
// GLOBAL DAT_003471b0 float
// GLOBAL DAT_003471b4 float
// GLOBAL DAT_003471b8 undefined4
// GLOBAL DAT_003471bc int *
// GLOBAL DAT_003471c0 float
// GLOBAL DAT_003471c4 float
// GLOBAL DAT_003471c8 uint
// GLOBAL DAT_003471cc int *
// GLOBAL DAT_003471d0 undefined4 *
// GLOBAL DAT_003471d4 int
// GLOBAL DAT_003471d8 uint
// GLOBAL DAT_003471dc undefined4 *
// GLOBAL DAT_003471e0 float
// GLOBAL DAT_003471e4 float
// GLOBAL DAT_00347524 float
// GLOBAL DAT_00347528 int
// GLOBAL DAT_0034752c undefined
// GLOBAL DAT_0034754c int *
// GLOBAL DAT_00347568 int *
// GLOBAL DAT_0034756c int
// GLOBAL DAT_00347570 float
// GLOBAL DAT_00347574 float
// GLOBAL DAT_00347578 float
// GLOBAL DAT_0034757c float
// GLOBAL DAT_00347580 int
// GLOBAL DAT_0034790c int
// GLOBAL DAT_00347910 float
// GLOBAL DAT_00347914 undefined4
// GLOBAL DAT_00347918 float
// GLOBAL DAT_0034791c float
// GLOBAL DAT_00347920 undefined
// GLOBAL s_cf_00347922 string
// GLOBAL s_ASE_PL_Hammer_HIT_GROUND_Lv2_0034752f string
// GLOBAL s_SE_PL_Hammer_HIT_GROUND_00347550 string

/* WARNING: Variable defined which should be unmapped: objStack_d0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00346E10(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  uint extraout_r1;
  undefined4 *puVar10;
  float *pfVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_d0 ((uint *)(albw_frame + 0x0))
  #define local_cc (*(undefined4 * *)(albw_frame + 0x4))
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define local_c4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_c0 (*(undefined4 * *)(albw_frame + 0x10))
  #define fStack_bc (*(float *)(albw_frame + 0x14))
  #define local_b8 (*(int *)(albw_frame + 0x18))
  #define local_b4 (*(char * *)(albw_frame + 0x1c))
  #define local_b0 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_ac (*(float *)(albw_frame + 0x24))
  #define iStack_a8 (*(int *)(albw_frame + 0x28))
  #define local_a4 (*(undefined4 ** *)(albw_frame + 0x2c))
  #define local_a0 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_9c (*(undefined4 *)(albw_frame + 0x34))
  #define local_94 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x48))
  #define local_84 ((byte *)(albw_frame + 0x4c))
  #define local_74 (*(uint *)(albw_frame + 0x5c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x64))
  #define local_68 (*(undefined4 *)(albw_frame + 0x68))
  #define local_64 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_60 (*(float *)(albw_frame + 0x70))
  #define local_5c (*(undefined1 *)(albw_frame + 0x74))
  #define local_5b (*(undefined1 *)(albw_frame + 0x75))
  #define local_48 (*(undefined4 *)(albw_frame + 0x88))
  #define local_44 (*(float *)(albw_frame + 0x8c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x90))
  if (0 < *(int *)(param_1 + 0x148)) {
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
  }
  if ((*(char *)(*(int *)(param_1 + 0x50) + 0x4b9) == '\0') &&
     (iVar4 = func_00546494(param_1,DAT_003471a8), iVar4 == 0)) {
    local_c8 = *(float *)(param_1 + 0x160);
    objStack_d0[0] = *(int *)(param_1 + 0x158);
    local_cc = *(undefined4 **)(param_1 + 0x15c);
  }
  else {
    func_00115D70((float *)objStack_d0,(float *)(param_1 + 0x158),DAT_003471ac);
  }
  pfVar11 = (float *)(param_1 + 0x164);
  fVar17 = DAT_003471b0;
  local_a4 = (undefined4 **)objStack_d0[0];
  local_a0 = local_cc;
  local_9c = ALBW_AS_U32(local_c8);
  func_00115C70((float *)&local_b0,(float *)&local_a4,pfVar11);
  local_c0 = local_b0;
  fStack_bc = local_ac;
  local_b8 = iStack_a8;
  func_00115D70((float *)&local_b4,(float *)&local_c0,fVar17);
  objStack_d0[0] = (uint)local_b4;
  local_cc = local_b0;
  local_c8 = local_ac;
  func_00115C54(pfVar11,pfVar11,(float *)objStack_d0);
  func_002D439C(*(int *)(param_1 + 0x70),(undefined4 *)(param_1 + 0x164));
  iVar4 = func_0052E5E4(*(int *)(param_1 + 0x28),6);
  piVar2 = DAT_003471bc;
  if (iVar4 == 0) {
    return func_002D55D0(param_1,(uint)(DAT_003471b4 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
  }
  if (param_2 == 0x37) {
    fVar17 = DAT_003471b4;
    fVar19 = DAT_003471c4;
    fVar20 = DAT_003471c0;
    uVar21 = DAT_003471b8;
    iVar4 = func_002D55E8(param_1);
    if ((iVar4 != 0) || (iVar4 = func_002D5A38(param_1), iVar4 != 0)) goto LAB_003478f8;
    puVar12 = *(uint **)(param_1 + 0x3c);
    uVar9 = *puVar12;
    uVar22 = func_00114608(DAT_003471c8,extraout_r1);
    func_0051D2CC((int *)puVar12,(int)uVar22 + uVar9 & 0xe0000000,fVar19);
    func_002D56A8(param_1,fVar20);
    if (*(char *)(param_1 + 0x13d) == '\0') {
      uVar5 = func_0054CD88(*(int *)(param_1 + 0x48));
      bVar15 = uVar5 == 0;
      if (bVar15) {
        uVar5 = (uint)*(byte *)(param_1 + 0x13d);
      }
      else {
        *(undefined1 *)(param_1 + 0x13d) = 1;
      }
      if (bVar15 && uVar5 == 0) goto LAB_003478f8;
    }
    piVar3 = DAT_003471cc;
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 10) goto LAB_003478f8;
    iVar4 = func_005841A8(*DAT_003471cc,*DAT_003471d0,*(int **)(DAT_003471d4 + *DAT_003471cc));
    if (iVar4 == *(int *)(*piVar3 + 0x3dbc8)) {
      puVar10 = *(undefined4 **)(param_1 + 0x30);
      local_48 = *puVar10;
      uStack_40 = puVar10[2];
      local_44 = ALBW_AS_F32(puVar10[1]) + fVar19;
      puVar10 = *(undefined4 **)(param_1 + 0x30);
      local_cc = (undefined4 *)*puVar10;
      local_c8 = ALBW_AS_F32(puVar10[1]);
      local_c4 = puVar10[2];
      func_004D8054((float *)&local_cc,**(uint **)(param_1 + 0x3c),fVar20);
      local_74 = uVar9 & 0xffff0000 | DAT_003471d8;
      local_84[0] = 0;
      local_84[1] = 0;
      local_84[2] = 0;
      local_84[3] = 0;
      local_84[4] = 0;
      local_84[5] = 0;
      local_84[6] = 0;
      local_84[7] = 0;
      local_84[8] = 0;
      local_84[9] = 0;
      local_84[10] = 0;
      local_84[0xb] = 0;
      local_84[0xc] = 0;
      local_84[0xd] = 0;
      local_84[0xe] = 0;
      local_84[0xf] = 0;
      local_70 = 0xff;
      uStack_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_5c = 0;
      local_5b = 1;
      local_60 = fVar17;
      func_00110D44(&local_c0,local_84,0x2a);
      local_90 = *DAT_003471dc;
      uStack_8c = DAT_003471dc[1];
      uStack_88 = DAT_003471dc[2];
      local_a0 = &local_48;
      local_a4 = &local_cc;
      local_ac = 8.82818e-44;
      fVar17 = DAT_003471e0;
      fVar19 = DAT_003471e4;
      local_94 = uVar21;
      iVar4 = func_004A7620(*piVar2,(uint *)&local_c0,0xf,DAT_003471e4,DAT_003471e0);
      if (iVar4 == 0) {
LAB_00347190:
        func_002D55D0(param_1,0x39);
        goto LAB_003478f8;
      }
      local_c8 = *(float *)(*(int *)(param_1 + 0x30) + 4) + fVar20;
      local_44 = *(float *)(*(int *)(param_1 + 0x30) + 4) + fVar20;
      local_ac = 1.68156e-43;
      iVar4 = func_004A7620(*piVar2,(uint *)&local_c0,3,fVar19,fVar17);
      if (iVar4 != 0) {
        puVar10 = *(undefined4 **)(param_1 + 0x30);
        local_cc = (undefined4 *)*puVar10;
        local_c8 = ALBW_AS_F32(puVar10[1]);
        local_c4 = puVar10[2];
        func_004D8054((float *)&local_cc,**(int **)(param_1 + 0x3c) + 0x80000000,fVar20);
        local_c8 = *(float *)(*(int *)(param_1 + 0x30) + 4) + fVar20;
        iVar4 = func_004A7620(*piVar2,(uint *)&local_c0,3,fVar19,fVar17);
        if (iVar4 != 0) goto LAB_00347190;
      }
    }
    func_002D55D0(param_1,0x38);
    goto LAB_003478f8;
  }
  if (param_2 == 0x38) {
    fVar19 = DAT_003471b4;
    fVar20 = DAT_003471c4;
    fVar18 = DAT_003471c0;
    uVar21 = DAT_003471b8;
    iVar6 = func_002D55E8(param_1);
    iVar4 = DAT_00347528;
    fVar17 = DAT_00347524;
    if (iVar6 != 0) goto LAB_003478f8;
    if (((*(int *)(param_1 + 0x144) == 0) ||
        (iVar6 = *(int *)(param_1 + 0x144) + -1, *(int *)(param_1 + 0x144) = iVar6, iVar6 == 0)) &&
       (*(short *)(*(int *)(param_1 + 0x4c) + 0x72) == 0x25)) {
      iVar6 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,ALBW_AS_F32(_DAT_0034752c));
      if (iVar6 != 0) {
        local_b8 = iVar4;
        if (*(uint *)(*(int *)(param_1 + 0x28) + 0x44c) < 3) {
          local_b4 = s_SE_PL_Hammer_HIT_GROUND_00347550;
          func_004EA104(*DAT_0034754c,&local_b8,0);
        }
        else {
          local_b4 = s_ASE_PL_Hammer_HIT_GROUND_Lv2_0034752f + 1;
          func_004EA104(*DAT_0034754c,&local_b8,0);
        }
      }
      iVar6 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,fVar17);
      if (iVar6 != 0) {
        iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x24) + 0x14) +
                *(int *)(param_1 + 0x170) * 0x30;
        local_b8 = *(int *)(iVar6 + 0xc);
        local_b0 = *(undefined4 **)(iVar6 + 0x2c);
        local_b4 = *(char **)(*(int *)(param_1 + 0x30) + 4);
        func_001D9CA8(&local_b8,**(undefined4 **)(param_1 + 0x3c),
                      (uint)(2 < *(uint *)(*(int *)(param_1 + 0x28) + 0x44c)));
        func_004ED46C(*DAT_00347568,7);
      }
      fVar7 = *(float *)(param_1 + 0x134);
      if ((int)ALBW_AS_U32(fVar7) < DAT_0034756c) {
        uVar9 = in_fpscr & 0xfffffff;
        in_fpscr = uVar9 | (uint)(fVar7 == fVar19) << 0x1e | (uint)(fVar19 <= fVar7) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        fVar16 = fVar19;
        if (((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) &&
           (uVar9 = uVar9 | (uint)(fVar7 < DAT_00347570) << 0x1f,
           in_fpscr = uVar9 | (uint)(NAN(fVar7) || NAN(DAT_00347570)) << 0x1c, fVar16 = fVar18,
           (byte)(uVar9 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1))) {
          fVar16 = (fVar18 * (fVar7 - fVar19)) / DAT_00347570 + fVar19;
        }
      }
      else {
        uVar9 = in_fpscr & 0xfffffff;
        in_fpscr = uVar9 | (uint)(fVar7 == DAT_00347570) << 0x1e |
                   (uint)(DAT_00347570 <= fVar7) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        fVar16 = fVar18;
        if (((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) &&
           (uVar9 = uVar9 | (uint)(fVar7 < fVar18) << 0x1f,
           in_fpscr = uVar9 | (uint)(NAN(fVar7) || NAN(fVar18)) << 0x1c, fVar16 = fVar19,
           (byte)(uVar9 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1))) {
          fVar16 = (DAT_00347578 * (fVar7 - DAT_00347570)) / DAT_00347574 + fVar18;
        }
      }
      *(float *)(*(int *)(param_1 + 0x50) + 0x160) = fVar16 * fVar20;
    }
    iVar6 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,fVar17);
    if ((iVar6 != 0) && (*(short *)(*(int *)(param_1 + 0x4c) + 0x72) == 0x25)) {
      func_002D3B54(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
    }
    if (*(int *)(param_1 + 0x144) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x4d0) = uVar21;
    }
    fVar17 = DAT_0034757c;
    if (*(char *)(param_1 + 0x13f) != '\0') {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
      if ((((bVar1 & 1) == 0) && ((bVar1 & 8) == 0)) &&
         (*(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0')) {
        *(float *)(*(int *)(param_1 + 0x34) + 4) = fVar19;
        func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fVar17);
        objStack_d0[0] = 6;
        func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x5c),10,1,1,6);
        if (*(int *)(param_1 + 0x144) == 0) {
          func_002D55D0(param_1,8);
        }
      }
    }
    if (param_3 == 0) {
      fVar17 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x3c);
      fVar18 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x3c);
      iVar6 = DAT_00347580;
      fVar17 = fVar17 / fVar18;
      *(float *)(param_1 + 0x134) = fVar17;
      if ((uint)((int)ALBW_AS_U32(fVar17) - iVar6) < 0x800000) {
        *(undefined4 *)(param_1 + 0x148) = 0x10;
      }
      else {
        if (DAT_0034790c < (int)ALBW_AS_U32(fVar17)) {
          fVar17 = DAT_00347910;
        }
        *(float *)(param_1 + 0x134) = fVar17;
      }
      uVar21 = DAT_00347914;
      if (0 < *(int *)(param_1 + 0x148)) {
        iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x24) + 0x14) +
                *(int *)(param_1 + 0x170) * 0x30;
        fVar17 = *(float *)(iVar6 + 0x1c);
        uVar8 = *(undefined4 *)(iVar6 + 0x2c);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar6 + 0xc);
        *(float *)(param_1 + 0x7c) = fVar17;
        *(undefined4 *)(param_1 + 0x80) = uVar8;
        *(undefined4 *)(param_1 + 0xcc) = uVar21;
        if ((int)ALBW_AS_U32((fVar17 - *(float *)(*(int *)(param_1 + 0x30) + 4))) < 0x3f800001) {
          objStack_d0[0] = **(uint **)(param_1 + 0x3c);
          iVar6 = func_0058E2B8((int *)objStack_d0);
          fVar17 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x7c) =
               *(float *)(param_1 + 0x7c) + (fVar17 * DAT_00347918 - fVar20) * DAT_0034791c;
          func_004356B4((int *)(param_1 + 0x74));
          if (*(char *)(param_1 + 0x13c) == '\0') {
            *(undefined1 *)(param_1 + 0x13c) = 1;
            func_004A9948(*piVar2,param_1 + 0xd0,10);
          }
          goto LAB_00347688;
        }
      }
      if (*(char *)(param_1 + 0x13c) != '\0') {
        *(undefined1 *)(param_1 + 0x13c) = 0;
        func_004A9120(*piVar2,param_1 + 0xd0);
      }
    }
LAB_00347688:
    if (fVar19 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) {
      fVar17 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x5c);
      fVar20 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x5c);
      if ((int)ALBW_AS_U32((fVar17 - fVar20)) <= _DAT_00347920) {
        if (*(int *)(param_1 + 0x144) == 0) {
          func_002D55D0(param_1,1);
          goto LAB_003478f8;
        }
        uVar9 = *(uint *)(param_1 + 0x50);
        if ((*(byte *)(uVar9 + 0x324) & 1) == 0) {
          bVar15 = (*(byte *)(uVar9 + 0x324) & 8) == 0;
          if (bVar15) {
            uVar9 = (uint)*(byte *)(uVar9 + 0x168);
          }
          if (bVar15 && uVar9 == 0) {
            func_002D55D0(param_1,7);
          }
        }
      }
    }
    iVar6 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if ((iVar6 != 0) || ((*(int *)(param_1 + 0x144) == 0 && (*(char *)(param_1 + 0x13f) != '\0'))))
    {
      iVar6 = func_0054CFF4(*(int *)(param_1 + 0x48));
      if (iVar6 == 0) {
        bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
        if (((bVar1 & 1) != 0 || (bVar1 & 8) != 0) ||
           (*(char *)(*(int *)(param_1 + 0x50) + 0x168) != '\0')) {
          if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar19) goto LAB_0034781c;
LAB_00347814:
          uVar9 = 1;
          goto LAB_003477cc;
        }
      }
      else {
        bVar15 = func_005462CC(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
        if (bVar15) {
          func_002D55D0(param_1,0x37);
        }
        else {
          local_b4 = s__ASE_S_NG_00347922 + 2;
          local_b8 = iVar4;
          func_00587F74(*DAT_0034754c,&local_b8,0);
          if (fVar19 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) goto LAB_00347814;
LAB_0034781c:
          uVar9 = 0;
LAB_003477cc:
          func_002D55D0(param_1,uVar9);
        }
      }
    }
    if ((*(char *)(*(int *)(param_1 + 0x50) + 0x4bc) != '\0') &&
       (0x10 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44))) {
      *(undefined1 *)(param_1 + 0x140) = 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x166) = *(undefined1 *)(param_1 + 0x140);
    goto LAB_003478f8;
  }
  if ((param_2 != 0x39) || (fVar17 = DAT_003471b4, iVar4 = func_002D55E8(param_1), iVar4 != 0))
  goto LAB_003478f8;
  iVar4 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
  if (*(int *)(param_1 + 0x144) == 0) {
    fVar19 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x3c);
    fVar20 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x3c);
    if (_DAT_00347920 < (int)ALBW_AS_U32((fVar19 - fVar20))) goto LAB_003478b4;
  }
  else {
LAB_003478b4:
    if (iVar4 == 0) goto LAB_003478f8;
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
  bVar13 = (bVar1 & 1) == 0;
  bVar14 = (bVar1 & 8) == 0;
  bVar15 = bVar13 && bVar14;
  if (bVar13 && bVar14) {
    bVar15 = *(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0';
  }
  if (!bVar15) {
    func_002D55D0(param_1,(uint)(fVar17 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
  }
LAB_003478f8:
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x134);
  return 0;
}

