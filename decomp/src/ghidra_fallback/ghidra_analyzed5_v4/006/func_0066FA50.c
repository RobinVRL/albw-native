#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0034DC88(int param_1,float *param_2,int param_3);
extern int func_0034E4B0(int param_1,float *param_2,int param_3);
extern float func_0034EE0C(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004AACA0(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4);
extern float func_004D7FBC(float *param_1,float *param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004ED868(void);
extern int func_0052E94C(int param_1,int param_2);
extern float func_00554804(int param_1,int param_2,int param_3,float fparam_0);
extern int func_005549BC(int param_1,int param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern int *DAT_0066fd3c;
extern float DAT_0066fd40;
extern int DAT_0066fd44;
extern float DAT_0066fd48;
extern float DAT_0066fd4c;
extern float *DAT_0066fd50;
extern float DAT_0066fd54;
extern undefined4 DAT_0066fd58;
extern float DAT_0066fd5c;
extern float DAT_0066fd60;
extern int DAT_0066fd64;
extern float DAT_0066fd68;
extern int DAT_0066fd6c;
extern float DAT_0066fd70;
extern float DAT_00670124;
extern undefined4 DAT_00670128;
extern undefined4 DAT_0067012c;
extern float DAT_00670130;
extern undefined4 DAT_00670134;
extern uint DAT_00670c34;
extern int *DAT_00670c38;
extern int *DAT_00670c3c;
extern float DAT_00670c40;
extern float DAT_00670c44;
extern float DAT_00670c48;
extern int DAT_00670c4c;
extern float DAT_00670c50;
extern float DAT_00670c54;
extern float DAT_00670c58;
extern float DAT_00670c5c;
extern float *DAT_00670c60;
extern float DAT_00670c64;

// USA 0066FA50 <- EU 0066FA28 (Ghidra, non-matching)
// GLOBAL DAT_0066fd3c int *
// GLOBAL DAT_0066fd40 float
// GLOBAL DAT_0066fd44 int
// GLOBAL DAT_0066fd48 float
// GLOBAL DAT_0066fd4c float
// GLOBAL DAT_0066fd50 float *
// GLOBAL DAT_0066fd54 float
// GLOBAL DAT_0066fd58 undefined4
// GLOBAL DAT_0066fd5c float
// GLOBAL DAT_0066fd60 float
// GLOBAL DAT_0066fd64 int
// GLOBAL DAT_0066fd68 float
// GLOBAL DAT_0066fd6c int
// GLOBAL DAT_0066fd70 float
// GLOBAL DAT_00670124 float
// GLOBAL DAT_00670128 undefined4
// GLOBAL DAT_0067012c undefined4
// GLOBAL DAT_00670130 float
// GLOBAL DAT_00670134 undefined4
// GLOBAL DAT_00670c34 uint
// GLOBAL DAT_00670c38 int *
// GLOBAL DAT_00670c3c int *
// GLOBAL DAT_00670c40 float
// GLOBAL DAT_00670c44 float
// GLOBAL DAT_00670c48 float
// GLOBAL DAT_00670c4c int
// GLOBAL DAT_00670c50 float
// GLOBAL DAT_00670c54 float
// GLOBAL DAT_00670c58 float
// GLOBAL DAT_00670c5c float
// GLOBAL DAT_00670c60 float *
// GLOBAL DAT_00670c64 float

/* WARNING: Type propagation algorithm not settling */

uint func_0066FA50(int param_1,float *param_2,int param_3,uint param_4,float fparam_0)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  uint uVar11;
  uint unaff_r10;
  uint unaff_r11;
  bool bVar12;
  float fVar13;
  undefined4 in_s1;
  float fVar14;
  float fVar15;
  float fVar16;
  float fparam_0_00;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  _Alignas(8) unsigned char albw_frame[0x250];
  #define local_250 (*(float *)(albw_frame + 0x0))
  #define local_24c (*(float *)(albw_frame + 0x4))
  #define local_248 (*(float *)(albw_frame + 0x8))
  #define local_244 (*(float *)(albw_frame + 0xc))
  #define local_240 (*(float *)(albw_frame + 0x10))
  #define local_23c (*(float *)(albw_frame + 0x14))
  #define local_238 (*(float *)(albw_frame + 0x18))
  #define local_234 (*(float *)(albw_frame + 0x1c))
  #define local_230 (*(float *)(albw_frame + 0x20))
  #define local_22c (*(float *)(albw_frame + 0x24))
  #define local_228 (*(float *)(albw_frame + 0x28))
  #define local_224 (*(float *)(albw_frame + 0x2c))
  #define local_220 (*(uint *)(albw_frame + 0x30))
  #define local_21c (*(float *)(albw_frame + 0x34))
  #define local_218 (*(float * *)(albw_frame + 0x38))
  #define local_214 (*(int *)(albw_frame + 0x3c))
  #define local_204 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_1fc (*(float * *)(albw_frame + 0x54))
  #define local_1f8 (*(float * *)(albw_frame + 0x58))
  #define local_1ec (*(float *)(albw_frame + 0x64))
  #define local_1e8 (*(float *)(albw_frame + 0x68))
  #define fStack_1e4 (*(float *)(albw_frame + 0x6c))
  #define fStack_1e0 (*(float *)(albw_frame + 0x70))
  #define local_1d8 (*(float * *)(albw_frame + 0x78))
  #define local_1d4 (*(int *)(albw_frame + 0x7c))
  #define local_1d0 (*(undefined4 *)(albw_frame + 0x80))
  #define local_1cc (*(undefined4 *)(albw_frame + 0x84))
  #define local_1c8 (*(uint *)(albw_frame + 0x88))
  #define local_1c4 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_1c0 (*(undefined4 *)(albw_frame + 0x90))
  #define local_1bc (*(float * *)(albw_frame + 0x94))
  #define local_1b8 (*(float * *)(albw_frame + 0x98))
  #define local_1b4 (*(float *)(albw_frame + 0x9c))
  #define local_1b0 (*(undefined1 *)(albw_frame + 0xa0))
  #define local_1af (*(undefined1 *)(albw_frame + 0xa1))
  #define local_1ac (*(float *)(albw_frame + 0xa4))
  #define local_1a8 ((float *)(albw_frame + 0xa8))
  #define local_198 (*(uint *)(albw_frame + 0xb8))
  #define local_194 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_190 ((float *)(albw_frame + 0xc0))
  #define local_188 ((float *)(albw_frame + 0xc8))
  #define local_180 (*(undefined1 *)(albw_frame + 0xd0))
  #define local_17f (*(undefined1 *)(albw_frame + 0xd1))
  #define local_17c (*(undefined1 *)(albw_frame + 0xd4))
  #define local_178 (*(uint *)(albw_frame + 0xd8))
  #define local_174 (*(float *)(albw_frame + 0xdc))
  #define local_170 (*(undefined4 *)(albw_frame + 0xe0))
  #define local_16c (*(undefined4 *)(albw_frame + 0xe4))
  #define local_164 (*(int *)(albw_frame + 0xec))
  #define local_160 (*(uint *)(albw_frame + 0xf0))
  #define local_15c (*(float *)(albw_frame + 0xf4))
  #define fStack_158 (*(float *)(albw_frame + 0xf8))
  #define fStack_154 (*(float *)(albw_frame + 0xfc))
  #define local_150 (*(float *)(albw_frame + 0x100))
  #define fStack_14c (*(float *)(albw_frame + 0x104))
  #define fStack_148 (*(float *)(albw_frame + 0x108))
  #define local_140 (*(float *)(albw_frame + 0x110))
  #define fStack_13c (*(float *)(albw_frame + 0x114))
  #define fStack_138 (*(float *)(albw_frame + 0x118))
  #define local_134 (*(int *)(albw_frame + 0x11c))
  #define local_130 ((float *)(albw_frame + 0x120))
  #define local_118 (*(float *)(albw_frame + 0x138))
  #define local_114 (*(float * *)(albw_frame + 0x13c))
  #define local_110 (*(float * *)(albw_frame + 0x140))
  #define fStack_108 (*(float *)(albw_frame + 0x148))
  #define local_104 (*(float *)(albw_frame + 0x14c))
  #define local_100 (*(float *)(albw_frame + 0x150))
  #define local_fc (*(float *)(albw_frame + 0x154))
  #define local_f8 (*(float *)(albw_frame + 0x158))
  #define local_f4 (*(float *)(albw_frame + 0x15c))
  #define local_f0 (*(uint *)(albw_frame + 0x160))
  #define afStack_ec ((float *)(albw_frame + 0x164))
  #define local_e0 (*(uint *)(albw_frame + 0x170))
  #define local_dc (*(int *)(albw_frame + 0x174))
  #define local_d8 (*(int *)(albw_frame + 0x178))
  #define local_d4 (*(int *)(albw_frame + 0x17c))
  #define local_d0 ((byte *)(albw_frame + 0x180))
  #define local_c0 (*(uint *)(albw_frame + 0x190))
  #define local_bc (*(undefined4 *)(albw_frame + 0x194))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x198))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x19c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x1a0))
  #define local_ac (*(float *)(albw_frame + 0x1a4))
  #define local_a8 (*(undefined1 *)(albw_frame + 0x1a8))
  #define local_a7 (*(undefined1 *)(albw_frame + 0x1a9))
  #define local_a4 (*(uint *)(albw_frame + 0x1ac))
  #define local_a0 (*(uint *)(albw_frame + 0x1b0))
  #define local_9c (*(uint *)(albw_frame + 0x1b4))
  #define local_98 (*(int *)(albw_frame + 0x1b8))
  #define local_94 (*(uint *)(albw_frame + 0x1bc))
  #define local_8c ((int *)(albw_frame + 0x1c4))
  #define uStack_3c (*(undefined8 *)(albw_frame + 0x214))
  #define iStack_34 (*(int *)(albw_frame + 0x21c))
  #define local_30 (*(float * *)(albw_frame + 0x220))
  #define iStack_2c (*(int *)(albw_frame + 0x224))
  #define local_28 (*(uint *)(albw_frame + 0x228))
  uStack_3c = CONCAT44(in_s1,fparam_0);
  local_e0 = *(uint *)(param_1 + 8);
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  bVar4 = func_00556EAC(*DAT_0066fd3c,0x62);
  local_a0 = (uint)bVar4;
  fVar15 = DAT_0066fd40;
  iVar5 = func_004ED868();
  if (iVar5 == 0) {
    uVar11 = *(uint *)(DAT_0066fd44 + 0x10);
  }
  else {
    uVar11 = *(uint *)(DAT_0066fd44 + 0x14);
  }
  local_dc = param_1 + 0x200;
  local_d8 = (int)*(char *)(param_1 + 0x22a);
  if (*(byte *)(param_1 + 0x20) != 0) {
    uVar25 = func_00114608((uint)ALBW_AS_U32((**(float **)(param_1 + 0x94) * DAT_0066fd48)),
                           (uint)*(byte *)(param_1 + 0x20));
    uVar7 = (uint)uVar25;
    if (*(char *)(param_1 + 0x164) == '\0') {
      *(uint *)(param_1 + 8) = uVar7;
    }
    local_234 = ALBW_AS_F32((uVar7 - uVar11));
    uVar6 = func_0058E2B8((int *)&local_234);
    if (uVar6 < 0x11) {
      uVar11 = uVar7;
    }
    uVar7 = local_28;
    if (local_28 == 0) {
      uVar7 = (uint)*(byte *)(param_1 + 0x164);
    }
    if (local_28 == 0 && uVar7 == 0) {
      *(undefined1 *)(param_1 + 0x137) = 0;
      piVar3 = DAT_0066fd3c;
      local_1a8[1] = 0.0;
      local_1a8[3] = 0.0;
      local_1a8[0] = ALBW_AS_F32(((uint)ALBW_AS_U32(local_1a8[0]) & 0xffffff00));
      local_190[1] = 0.0;
      local_188[0] = 0.0;
      local_188[1] = 0.0;
      local_17c = 0;
      func_0052E94C(*DAT_0066fd3c,(int)local_1a8);
      iVar5 = func_004904CC(*(float *)((int)ALBW_AS_U32(local_188[0]) + 8),*(float *)((int)ALBW_AS_U32(local_188[0]) + 0x10));
      func_0034DC88(param_1,*(float **)(*piVar3 + 0x1c),iVar5);
      if (*(char *)(param_1 + 0x137) == '\0') {
        *(undefined1 *)(param_1 + 0x138) = 0;
        *(undefined4 *)(param_1 + 0x144) = 0;
        *(undefined1 *)(param_1 + 0x136) = 0;
      }
    }
  }
  local_f4 = *(float *)(param_1 + 8);
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_164 = 0;
  local_c0 = unaff_r10 & 0xffff0000 | 0xffff;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_d0[8] = 0;
  local_d0[9] = 0;
  local_d0[10] = 0;
  local_d0[0xb] = 0;
  local_d0[0xc] = 0;
  local_d0[0xd] = 0;
  local_d0[0xe] = 0;
  local_d0[0xf] = 0;
  local_bc = 0xff;
  uStack_b8 = 0;
  lVar22 = (ulonglong)(uint)ALBW_AS_U32(DAT_0066fd4c) << 0x20;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = DAT_0066fd4c;
  local_a8 = 0;
  local_a7 = 1;
  fVar18 = DAT_0066fd4c;
  func_00110D44(&local_218,local_d0,0x2a);
  fVar19 = DAT_0066fd54;
  fparam_0_00 = ALBW_AS_F32(((ulonglong)lVar22 >> 0x20));
  local_1e8 = *DAT_0066fd50;
  fStack_1e4 = DAT_0066fd50[1];
  fStack_1e0 = DAT_0066fd50[2];
  uVar25 = CONCAT44(fparam_0,DAT_0066fd58);
  local_1c8 = unaff_r11 & 0xffff0000 | 0xffff;
  local_1d8 = (float *)0x0;
  local_1d4 = 0;
  local_1d0 = 0;
  local_1cc = 0;
  local_1c4 = 0xff;
  uStack_1c0 = 0;
  local_1bc = (float *)0x0;
  local_1b8 = (float *)0x0;
  local_1b0 = 0;
  local_1af = 1;
  local_250 = *DAT_0066fd50;
  local_d4 = 1;
  local_24c = DAT_0066fd50[1];
  local_248 = DAT_0066fd50[2];
  local_a4 = 0;
  bVar2 = true;
  bVar4 = false;
  *(undefined1 *)(param_1 + 0x220) = 0;
  uVar21 = (ulonglong)(uint)ALBW_AS_U32(DAT_0066fd5c);
  local_9c = 0;
  local_160 = 0;
  local_94 = 0;
  local_1ec = fparam_0_00;
  local_1b4 = fparam_0_00;
  if (((local_28 != 0) || (*(char *)(param_1 + 0x20) == '\0')) ||
     (*(char *)(param_1 + 0x137) == '\0')) {
    uVar23 = (ulonglong)(uint)ALBW_AS_U32(fVar15) << 0x20;
    uVar24 = CONCAT44(DAT_0067012c,DAT_00670128);
    local_98 = param_1 + 0x1d8;
    fVar15 = fparam_0_00;
    local_220 = uVar11;
    do {
      fVar17 = ALBW_AS_F32(uVar21);
      local_1ac = 0.0;
      local_178 = 0;
      fVar16 = ALBW_AS_F32(((ulonglong)lVar22 >> 0x20));
      local_240 = local_30[3];
      local_238 = local_30[5];
      local_134 = -1;
      local_f0 = 0;
      local_244 = 0.0;
      local_23c = local_30[4] + ALBW_AS_F32(uVar25);
      fVar13 = fVar18;
      fVar14 = fVar16;
      if (*(char *)(local_dc + 0x20) != '\0') {
        if (*(char *)(param_1 + 0x20) == '\0' || param_3 == 0) break;
        fparam_0_00 = fparam_0_00 + fVar17;
        if (DAT_00670130 <= fparam_0_00) {
          fparam_0_00 = fVar17;
        }
        local_244 = ALBW_AS_F32((uint)(fparam_0_00 == fVar17));
        fVar18 = fparam_0_00;
        if (local_d4 == 0) {
          iVar5 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar5 = func_005549BC(param_1,param_3);
        }
        uVar11 = iVar5 + 0x40000000;
        local_1a8[0] = ALBW_AS_F32((*(int *)(param_3 + 0xc) - (*(int *)(param_1 + 0xc) + 0x40000000)));
        uVar7 = func_0058E2B8((int *)local_1a8);
        if (uVar7 < 0x40000001) {
          if (local_d4 == 0) {
LAB_0066fef8:
            uVar11 = iVar5 + 0xc0000000;
          }
        }
        else if (local_d4 != 0) goto LAB_0066fef8;
        func_00115154(&local_228,&local_224,uVar11);
        local_240 = local_240 + local_228 * fVar18;
        local_238 = local_238 + local_224 * fVar18;
      }
      lVar22 = CONCAT44(fVar14,DAT_00670134);
      fVar18 = local_f4;
      if (*(char *)(param_1 + 0x139) != '\0') {
        fVar18 = *(float *)(param_1 + 0x13c);
      }
      *(float *)(param_1 + 8) = fVar18;
LAB_0066ff48:
      fVar17 = ALBW_AS_F32(uVar21);
      uVar9 = *(undefined4 *)(param_1 + 0xc);
      bVar12 = *(char *)(local_dc + 0x20) != '\0';
      iVar5 = 0;
      if (bVar12) {
        iVar5 = local_d4;
      }
      fVar18 = func_00554804(param_1,(uint)(bVar12 && iVar5 != 0),param_3,fparam_0_00);
      uVar11 = (uint)fVar18;
      *(uint *)(param_1 + 0xc) = uVar11;
      if (bVar2) {
LAB_0066ffa8:
        func_004D7FBC((float *)(param_1 + 0x1f8),DAT_0066fd50,*(uint *)(param_1 + 8),uVar11,fVar17);
        bVar2 = false;
        local_9c = *(uint *)(param_1 + 8);
        local_160 = *(uint *)(param_1 + 0xc);
      }
      else {
        bVar12 = local_9c == *(uint *)(param_1 + 8);
        uVar7 = local_9c;
        if (bVar12) {
          uVar7 = local_160;
        }
        if (!bVar12 || uVar7 != uVar11) goto LAB_0066ffa8;
      }
      *(undefined4 *)(param_1 + 0xc) = uVar9;
      fVar18 = fVar13;
      func_00115D70(&local_22c,(float *)(param_1 + 0x1f8),ALBW_AS_F32((uVar23 >> 0x20)));
      local_150 = local_22c;
      fStack_14c = local_228;
      fStack_148 = local_224;
      func_00115C54(&local_174,&local_240,&local_150);
      uVar9 = (undefined4)(uVar23 >> 0x20);
      local_218 = &local_250;
      local_1c4 = 0x79;
      local_1fc = afStack_ec;
      local_1f8 = &local_174;
      local_1d4 = local_98;
      *(float *)(param_1 + 0x204) = local_174;
      *(undefined4 *)(param_1 + 0x208) = local_170;
      *(undefined4 *)(param_1 + 0x20c) = local_16c;
      *(int *)(param_1 + 0x21c) = (int)lVar22;
      local_204 = 0x79;
      local_214 = 0;
      uVar11 = (uint)*(char *)(param_1 + 0x139);
      local_1ec = fVar17;
      local_1d8 = local_218;
      local_1bc = local_1fc;
      local_1b8 = local_1f8;
      if (((uVar11 != 0) && (local_28 == 0)) ||
         ((*(char *)(local_dc + 0x2a) == '\x01' || (0xe < *(short *)(local_dc + 0x28)))))
      goto LAB_0067083c;
      fVar13 = ALBW_AS_F32(((ulonglong)lVar22 >> 0x20));
      uVar21 = CONCAT44(fVar13,fVar17);
      if (fVar15 == fVar13) {
        bVar12 = (uVar11 & -local_28) == 0;
        if (bVar12) {
          uVar11 = (uint)*(byte *)(param_1 + 0x131);
        }
        if (bVar12 && uVar11 == 0) {
          local_21c = *(float *)(param_1 + 0x9c) + ALBW_AS_F32(uVar24);
          func_004D7FBC((float *)&local_114,&local_240,*(uint *)(param_1 + 8),
                        *(uint *)(param_1 + 0xc),local_21c);
          func_004D7FBC(&fStack_108,&local_240,local_220,*(uint *)(param_1 + 0xc),local_21c);
          fVar15 = func_0034EE0C(param_1,&local_140,(float *)&local_114,&fStack_108,&local_240);
          uVar23 = CONCAT44(uVar9,fVar15);
          iVar5 = 0;
LAB_006701c4:
          fVar15 = ALBW_AS_F32(uVar21);
          bVar4 = true;
LAB_00670144:
          *(bool *)((int)&local_fc + iVar5) = param_3 != 0;
          if (param_3 != 0) {
            fVar13 = fVar15;
            if (bVar4 && param_3 != 0) {
              iVar8 = func_005549BC(param_1,param_3);
            }
            else {
              iVar8 = *(int *)(param_1 + 0xc);
            }
            uVar11 = iVar8 + 0x40000000;
            local_8c[0] = *(int *)(param_3 + 0xc) - (*(int *)(param_1 + 0xc) + 0x40000000);
            uVar7 = func_0058E2B8(local_8c);
            if (uVar7 < 0x40000001) {
              if (!bVar4) {
LAB_006701d8:
                uVar11 = iVar8 + 0xc0000000;
              }
            }
            else if (bVar4) goto LAB_006701d8;
            pfVar10 = local_1a8 + iVar5 * 3;
            fVar14 = local_30[4];
            fVar17 = local_30[5];
            *pfVar10 = local_30[3];
            local_1a8[iVar5 * 3 + 1] = fVar14;
            local_1a8[iVar5 * 3 + 2] = fVar17;
            local_1a8[iVar5 * 3 + 1] = fVar14 + ALBW_AS_F32(uVar25);
            func_00115154(&local_118,&local_230,uVar11);
            *pfVar10 = *pfVar10 + local_118 * fVar13;
            local_1a8[iVar5 * 3 + 2] = local_1a8[iVar5 * 3 + 2] + local_230 * fVar13;
            fVar13 = func_00554804(param_1,1,param_3,fVar13);
            func_004D7FBC(local_130 + iVar5 * 3,pfVar10,*(uint *)(param_1 + 8),(int)fVar13,local_21c
                         );
            func_004D7FBC(local_190 + iVar5 * 3,pfVar10,local_220,(int)fVar13,local_21c);
          }
          iVar5 = iVar5 + 1;
          if (1 < iVar5) {
            fVar13 = ALBW_AS_F32(uVar23);
            fVar15 = ALBW_AS_F32((uVar21 >> 0x20));
            iVar5 = 0;
            uVar20 = uVar23 & 0xffffffff;
            do {
              fVar17 = fVar15;
              fVar14 = fVar15;
              if (*(char *)((int)&local_fc + iVar5) != '\0') {
                fVar17 = SQRT((local_140 - local_190[iVar5 * 3]) *
                              (local_140 - local_190[iVar5 * 3]) +
                              (fStack_13c - local_190[iVar5 * 3 + 1]) *
                              (fStack_13c - local_190[iVar5 * 3 + 1]) +
                              (fStack_138 - local_190[iVar5 * 3 + 2]) *
                              (fStack_138 - local_190[iVar5 * 3 + 2]));
                fVar14 = SQRT((local_140 - local_130[iVar5 * 3]) *
                              (local_140 - local_130[iVar5 * 3]) +
                              (fStack_13c - local_130[iVar5 * 3 + 1]) *
                              (fStack_13c - local_130[iVar5 * 3 + 1]) +
                              (fStack_138 - local_130[iVar5 * 3 + 2]) *
                              (fStack_138 - local_130[iVar5 * 3 + 2]));
              }
              if (fVar14 <= fVar17) {
                fVar14 = fVar17;
              }
              if (ALBW_AS_F32(uVar20) < fVar14) {
                uVar20 = (ulonglong)(uint)ALBW_AS_U32(fVar14);
              }
              if ((*(char *)((int)&local_fc + iVar5) != '\0') &&
                 (fVar14 = SQRT((local_140 - local_1a8[iVar5 * 3]) *
                                (local_140 - local_1a8[iVar5 * 3]) +
                                (fStack_13c - local_1a8[iVar5 * 3 + 1]) *
                                (fStack_13c - local_1a8[iVar5 * 3 + 1]) +
                                (fStack_138 - local_1a8[iVar5 * 3 + 2]) *
                                (fStack_138 - local_1a8[iVar5 * 3 + 2])), fVar13 < fVar14)) {
                fVar13 = fVar14;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 2);
            bVar4 = true;
            fVar15 = ALBW_AS_F32(uVar20);
            if (ALBW_AS_F32(uVar20) <= fVar13) {
              fVar15 = fVar13;
            }
            goto LAB_00670474;
          }
          if (iVar5 != 0) goto code_r0x0067013c;
          goto LAB_006701c4;
        }
      }
      else if (fVar13 < fVar15) {
        if (!bVar4) {
          uVar11 = local_94;
        }
        if (!bVar4 && uVar11 == 0) {
          local_198 = (uint)local_1f8 & 0xffff0000 | DAT_00670c34;
          local_1a8[0] = 0.0;
          local_194 = 0xff;
          local_1a8[1] = 0.0;
          local_1a8[2] = 0.0;
          local_1a8[3] = 0.0;
          fVar14 = fVar15 * ALBW_AS_F32(((ulonglong)uVar24 >> 0x20));
          local_190[0] = 0.0;
          local_190[1] = 0.0;
          local_188[0] = 0.0;
          local_180 = 0;
          local_17f = 1;
          local_188[1] = fVar13;
          func_00110D44(local_130,(byte *)local_1a8,0x2a);
          local_100 = *DAT_0066fd50;
          local_fc = DAT_0066fd50[1];
          local_f8 = DAT_0066fd50[2];
          local_114 = &local_140;
          local_110 = local_114;
          local_104 = fVar14;
          func_004AACA0(*DAT_00670c38,local_130,0xff,0);
          local_94 = 1;
        }
      }
LAB_00670474:
      piVar3 = DAT_00670c38;
      fVar13 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
      while( true ) {
        local_250 = ALBW_AS_F32((uVar21 >> 0x20));
        if (local_f0 != 0) {
          fVar13 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
        }
        local_24c = local_250;
        local_248 = local_250;
        func_00115D70(local_1a8,(float *)(param_1 + 0x1f8),fVar13);
        local_230 = local_1a8[0];
        local_22c = local_1a8[1];
        local_228 = local_1a8[2];
        func_00115C54(afStack_ec,&local_174,&local_230);
        if (((fVar15 <= ALBW_AS_F32((uVar21 >> 0x20))) || (bVar4)) || (local_94 == 0)) {
          local_1b0 = 0;
        }
        else {
          local_1b0 = 1;
        }
        *(bool *)(param_1 + 0x130) = *(uint *)(param_1 + 8) != local_220;
        uVar7 = func_004A8030(*piVar3,(int *)&local_1d8,3);
        bVar12 = *(char *)(param_1 + 0x139) != '\0';
        uVar11 = 0;
        if (bVar12) {
          uVar11 = local_28;
        }
        if (bVar12 && uVar11 != 0) {
          return uVar7 ^ 1;
        }
        fVar14 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
        uVar9 = (undefined4)(uVar23 >> 0x20);
        if ((uVar7 != 0) && (bVar4 = false, ALBW_AS_F32((uVar21 >> 0x20)) <= *(float *)(param_1 + 0x21c)))
        {
          uVar23 = CONCAT44(uVar9,fVar13 / fVar14);
          func_00115C70(local_1a8,(float *)(param_1 + 0x210),afStack_ec);
          fVar16 = local_1a8[0] * *(float *)(param_1 + 0x1f8) +
                   local_1a8[1] * *(float *)(param_1 + 0x1fc) +
                   local_1a8[2] * *(float *)(param_1 + 0x200);
          fVar13 = fVar18;
          goto LAB_006705ac;
        }
        if (fVar14 <= fVar13) break;
        fVar13 = fVar13 + ALBW_AS_F32(uVar21);
        if (fVar14 < fVar13) {
          fVar13 = fVar14;
        }
      }
      uVar23 = CONCAT44(uVar9,(int)lVar22);
      fVar13 = fVar18;
LAB_006705ac:
      fVar18 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
      if (local_f0 != 0) goto LAB_00670770;
      if (ALBW_AS_F32(uVar23) < ALBW_AS_F32((uVar21 >> 0x20))) {
        local_1ac = *(float *)(param_1 + 8);
        if ((*(char *)(local_dc + 0x20) != '\0') && ((int)ALBW_AS_U32(local_1ac) <= local_164)) {
          *(int *)(param_1 + 8) = local_164;
          goto LAB_00670770;
        }
        if (local_134 < 0) {
          if (local_f4 == local_1ac) goto LAB_00670770;
          *(int *)(param_1 + 8) = (int)(local_178 + (int)ALBW_AS_U32(local_1ac)) / 2;
          local_134 = 0;
        }
        else if (local_134 < 4) {
          *(int *)(param_1 + 8) = (int)(local_178 + (int)ALBW_AS_U32(local_1ac)) / 2;
          local_134 = local_134 + 1;
        }
        else {
          local_f0 = 1;
        }
        goto LAB_0066ff48;
      }
      uVar11 = *(uint *)(param_1 + 8);
      if (uVar11 != local_220) {
        local_178 = uVar11;
        if (local_134 < 0) {
          iVar5 = *DAT_00670c3c;
          *(uint *)(param_1 + 8) = uVar11 + iVar5;
          if ((int)local_220 <= (int)(uVar11 + iVar5)) {
            *(uint *)(param_1 + 8) = local_220;
          }
        }
        else if (local_134 < 4) {
          *(int *)(param_1 + 8) = (int)(uVar11 + (int)ALBW_AS_U32(local_1ac)) / 2;
          local_134 = local_134 + 1;
        }
        else {
          local_f0 = 1;
          *(float *)(param_1 + 8) = local_1ac;
        }
        goto LAB_0066ff48;
      }
      if (local_28 != 0) {
        return 0;
      }
      func_00115D70(&local_22c,(float *)(param_1 + 0x1f8),fVar16);
      local_1ac = local_22c;
      local_1a8[0] = local_228;
      local_1a8[1] = local_224;
      func_00115C54(&local_230,afStack_ec,&local_1ac);
      fVar18 = SQRT((local_240 - local_230) * (local_240 - local_230) +
                    (local_23c - local_22c) * (local_23c - local_22c) +
                    (local_238 - local_228) * (local_238 - local_228));
LAB_00670770:
      fVar17 = ALBW_AS_F32(uVar21);
      iVar5 = *(int *)(param_1 + 8);
      if ((local_164 < iVar5) || (*(char *)(local_dc + 0x20) == '\0')) {
        fVar13 = fVar18;
        local_164 = iVar5;
        if (*(char *)(local_dc + 0x20) != '\0') goto LAB_006707a8;
        *(undefined1 *)(param_1 + 0x220) = 1;
      }
      else {
        if ((local_164 == iVar5) && (fVar18 < fVar13)) {
          fVar13 = fVar18;
        }
LAB_006707a8:
        fVar18 = fVar13;
        if (local_244 != 0.0) {
          if (local_d4 == 0) break;
          fparam_0_00 = ALBW_AS_F32(((ulonglong)lVar22 >> 0x20));
          local_d4 = 0;
        }
      }
    } while ((local_a4 & ~local_f0) == 0);
    if (local_28 != 0) {
      return 1;
    }
    if (local_d8 == 1) {
      local_164 = *(int *)(DAT_0066fd44 + 0x20);
    }
    else if (local_a0 != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(DAT_0066fd44 + 0x14);
    }
    *(int *)(param_1 + 8) = local_164;
LAB_0067083c:
    fparam_0_00 = ALBW_AS_F32(((ulonglong)lVar22 >> 0x20));
    *(undefined1 *)(param_1 + 0x131) = 0;
    if (fVar18 <= *(float *)(param_1 + 0x1c0)) {
      fVar19 = ALBW_AS_F32(uVar24);
    }
    iVar5 = func_004ED868();
    fVar15 = DAT_00670c40;
    if (iVar5 == 0) {
      fVar15 = DAT_00670c44;
    }
    fVar13 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
    if ((local_d8 == 0) || ((local_d8 == 2 && (0x13 < *(byte *)(param_1 + 0x22b))))) {
      if ((local_a0 == 0) || (*(short *)(local_dc + 0x28) < 0xf)) {
        if ((*(char *)(param_1 + 0x139) != '\0') && (local_d8 == 0)) {
          *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x140);
          goto LAB_006709d0;
        }
        fVar16 = *(float *)(param_1 + 0x1c0);
        fVar14 = fVar16;
        if (fVar15 <= fVar16) {
          fVar14 = fVar15;
        }
        if ((fVar16 <= fVar13) || (*(char *)(param_1 + 0x164) != '\0')) {
          fVar19 = fVar16 + (fVar18 - fVar16) * fVar19;
          if (fVar19 < fVar14) goto LAB_006709c4;
          if (fVar13 < fVar19) {
            fVar19 = fVar13;
          }
        }
        else {
          fVar19 = fVar16 + (fVar18 - fVar16) * fVar19;
          if (fVar19 < fVar14) goto LAB_006709c4;
          if (fVar16 < fVar19) goto LAB_006709b0;
        }
      }
      else {
        fVar14 = *(float *)(param_1 + 0x1c0);
        fVar19 = fVar14 + (DAT_00670c48 - fVar14) * fVar19;
        fVar16 = DAT_00670c48;
        if ((int)ALBW_AS_U32(fVar14) < DAT_00670c4c) {
          if (fVar19 < fVar14) {
LAB_006709c4:
            fVar19 = fVar14;
            goto LAB_00670934;
          }
          if (fVar19 <= DAT_00670c48) goto LAB_00670934;
        }
        else if (DAT_00670c48 <= fVar19) {
          if (fVar19 <= fVar14) goto LAB_00670934;
          goto LAB_006709c4;
        }
LAB_006709b0:
        fVar19 = fVar16;
      }
LAB_00670934:
      *(float *)(param_1 + 0x1c0) = fVar19;
    }
    else {
      *(float *)(param_1 + 0x1c0) = DAT_00670c48;
    }
LAB_006709d0:
    fVar19 = DAT_00670c50;
    if (fVar13 - fVar15 != fparam_0_00) {
      fVar19 = ((*(float *)(param_1 + 0x24) - DAT_00670c50) * (*(float *)(param_1 + 0x1c0) - fVar15)
               ) / (fVar13 - fVar15) + DAT_00670c50;
    }
    *(float *)(param_1 + 0x1c4) = fVar19;
    goto LAB_00670a04;
  }
  fVar17 = DAT_0066fd5c;
  func_00115C70(&local_244,(float *)(param_1 + 0x158),local_30 + 3);
  bVar4 = *(char *)(param_1 + 0x138) != '\0';
  if (bVar4) {
    fVar15 = fVar17;
  }
  fVar18 = SQRT(local_244 * local_244 + local_240 * local_240 + local_23c * local_23c);
  if (!bVar4) {
    fVar14 = *(float *)(param_1 + 0x1c0);
    fVar13 = fVar17;
    if (fVar18 <= fVar14) {
      fVar14 = fVar14 - fVar18;
      if ((int)ALBW_AS_U32(fVar14) <= DAT_0066fd64) goto LAB_0066fdbc;
      if ((int)ALBW_AS_U32(fVar14) < DAT_0066fd6c) {
        fVar15 = DAT_00670124 * (fVar14 - DAT_0066fd60);
        goto LAB_0066fdb0;
      }
    }
    else {
      fVar14 = fVar18 - fVar14;
      if (DAT_0066fd64 < (int)ALBW_AS_U32(fVar14)) {
        fVar15 = fVar19;
        if ((int)ALBW_AS_U32(fVar14) < DAT_0066fd6c) {
          fVar15 = DAT_0066fd70 * (fVar14 - DAT_0066fd60);
LAB_0066fdb0:
          fVar15 = fVar15 / DAT_0066fd68 + fVar17;
          fVar13 = fVar15;
          if (fVar15 == 1.0) goto LAB_0066fdbc;
        }
      }
      else {
LAB_0066fdbc:
        *(undefined1 *)(param_1 + 0x138) = 1;
        fVar15 = fVar13;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x24);
  *(float *)(param_1 + 0x1c0) =
       *(float *)(param_1 + 0x1c0) + (fVar18 - *(float *)(param_1 + 0x1c0)) * fVar15;
LAB_00670a04:
  fVar15 = ALBW_AS_F32(uVar25);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0xa8);
  if (*(char *)(param_1 + 0x164) == '\0') {
    func_004D7FBC((float *)(param_1 + 0x1f8),DAT_0066fd50,local_e0,*(uint *)(param_1 + 0xc),fVar17);
  }
  else {
    func_004D7FBC((float *)(param_1 + 0x1f8),DAT_0066fd50,*(uint *)(param_1 + 8),
                  *(uint *)(param_1 + 0xc),fVar17);
  }
  func_00115D70(&local_244,(float *)(param_1 + 0x1f8),*(float *)(param_1 + 0x1c0));
  local_15c = local_244;
  fStack_158 = local_240;
  fStack_154 = local_23c;
  func_00115C54(local_30,local_30 + 3,&local_15c);
  local_1bc = local_30;
  bVar4 = *(char *)(param_1 + 0x20) == '\0';
  cVar1 = '\0';
  if (!bVar4) {
    cVar1 = *(char *)(param_1 + 0x137);
  }
  local_250 = fparam_0_00;
  local_24c = fparam_0_00;
  local_248 = fparam_0_00;
  local_1d8 = &local_250;
  if (bVar4 || cVar1 == '\0') {
    local_1fc = local_30;
    local_22c = *local_1f8;
    local_228 = local_1f8[1];
    local_224 = local_1f8[2];
    local_1f8 = &local_22c;
    func_00115C70(&local_238,local_30,&local_22c);
    fVar19 = SQRT(local_238 * local_238 + local_234 * local_234 + local_230 * local_230);
    if (fparam_0_00 < fVar19) {
      fVar19 = DAT_00670c54 / fVar19;
      local_238 = local_238 * fVar19;
      local_234 = local_234 * fVar19;
      local_230 = local_230 * fVar19;
    }
    func_00115C70(&local_22c,local_1fc,&local_238);
    local_214 = param_1 + 0x1e8;
    local_1ec = DAT_00670c50;
    local_218 = &local_250;
    iVar5 = func_004A9F98(*DAT_00670c38,(uint *)&local_218,0xf,DAT_00670c5c,DAT_00670c58);
    if (iVar5 != 0) {
      func_00115D70(&local_1ac,(float *)(param_1 + 0x1f8),
                    *(float *)(param_1 + 0x1f8) * local_250 +
                    *(float *)(param_1 + 0x1fc) * local_24c +
                    *(float *)(param_1 + 0x200) * local_248);
      local_244 = local_1ac;
      local_240 = local_1a8[0];
      local_23c = local_1a8[1];
      func_00115C70(&local_250,&local_250,&local_244);
      func_00115D70(&local_1ac,DAT_00670c60,
                    local_250 * *DAT_00670c60 + local_24c * DAT_00670c60[1] +
                    local_248 * DAT_00670c60[2]);
      local_244 = local_1ac;
      local_240 = local_1a8[0];
      local_23c = local_1a8[1];
      func_00115C70(&local_250,&local_250,&local_244);
    }
    fVar19 = DAT_00670c64;
    *(float *)(param_1 + 0x1cc) =
         *(float *)(param_1 + 0x1cc) + (local_250 - *(float *)(param_1 + 0x1cc)) * DAT_00670c64;
    *(float *)(param_1 + 0x1d0) =
         *(float *)(param_1 + 0x1d0) + (local_24c - *(float *)(param_1 + 0x1d0)) * fVar19;
    *(float *)(param_1 + 0x1d4) =
         *(float *)(param_1 + 0x1d4) + (local_248 - *(float *)(param_1 + 0x1d4)) * fVar19;
    func_00115C54(local_30,local_30,(float *)(param_1 + 0x1cc));
    bVar4 = *(char *)(param_1 + 0x20) != '\0';
    cVar1 = '\0';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x137);
    }
    if (!bVar4 || cVar1 == '\0') {
      local_30[1] = local_30[1] + fVar15;
    }
  }
  func_0034E4B0(param_1,local_30,param_3);
  if (*(char *)(param_1 + 0x164) == '\0') {
    uVar9 = *(undefined4 *)(param_1 + 8);
    *(uint *)(param_1 + 8) = local_e0;
    *(undefined4 *)(param_1 + 0x174) = uVar9;
  }
  return 1;
code_r0x0067013c:
  bVar4 = false;
  goto LAB_00670144;
}

