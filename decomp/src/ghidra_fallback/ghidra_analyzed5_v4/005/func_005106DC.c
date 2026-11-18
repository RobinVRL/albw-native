#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00110848(int param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014F0B0(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004ED71C(void);
extern int func_004ED868(void);
extern int func_00511094(int param_1,float *param_2,int param_3,int param_4,float fparam_0);
extern int func_00511A18(int param_1);
extern int func_00512030(undefined4 param_1,undefined4 *param_2,int param_3,float fparam_0,float fparam_1, float fparam_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00581C5C(int param_1);
extern float func_00581F68(int param_1);
extern int *DAT_00510ac8;
extern uint *DAT_00510acc;
extern int *DAT_00510ad0;
extern undefined4 *DAT_00510ad4;
extern undefined4 DAT_00510ad8;
extern float DAT_00510adc;
extern float DAT_00510ae0;
extern uint *DAT_00510ae4;
extern float DAT_00510ae8;
extern uint DAT_00510aec;
extern int DAT_00510af0;
extern int DAT_00510af4;
extern float DAT_00510af8;
extern float DAT_00510afc;
extern float DAT_00510b00;
extern float DAT_00510b04;
extern float DAT_00510b08;
extern undefined4 DAT_00510b0c;
extern undefined4 DAT_00510b10;
extern undefined4 DAT_00510b14;
extern float DAT_00510b18;
extern uint DAT_00510b1c;
extern undefined4 DAT_00510b20;
extern int *DAT_00510b24;
extern int DAT_00511048;
extern int DAT_00511054;
extern int *DAT_00511058;
extern uint *DAT_0051105c;
extern float DAT_00511060;
extern undefined4 *DAT_00511064;
extern char s_Sight_0051104c[];

// USA 005106DC <- EU 005106B4 (Ghidra, non-matching)
// GLOBAL DAT_00510ac8 int *
// GLOBAL DAT_00510acc uint *
// GLOBAL DAT_00510ad0 int *
// GLOBAL DAT_00510ad4 undefined4 *
// GLOBAL DAT_00510ad8 undefined4
// GLOBAL DAT_00510adc float
// GLOBAL DAT_00510ae0 float
// GLOBAL DAT_00510ae4 uint *
// GLOBAL DAT_00510ae8 float
// GLOBAL DAT_00510aec uint
// GLOBAL DAT_00510af0 int
// GLOBAL DAT_00510af4 int
// GLOBAL DAT_00510af8 float
// GLOBAL DAT_00510afc float
// GLOBAL DAT_00510b00 float
// GLOBAL DAT_00510b04 float
// GLOBAL DAT_00510b08 float
// GLOBAL DAT_00510b0c undefined4
// GLOBAL DAT_00510b10 undefined4
// GLOBAL DAT_00510b14 undefined4
// GLOBAL DAT_00510b18 float
// GLOBAL DAT_00510b1c uint
// GLOBAL DAT_00510b20 undefined4
// GLOBAL DAT_00510b24 int *
// GLOBAL DAT_00511048 int
// GLOBAL DAT_00511054 int
// GLOBAL DAT_00511058 int *
// GLOBAL DAT_0051105c uint *
// GLOBAL DAT_00511060 float
// GLOBAL DAT_00511064 undefined4 *
// GLOBAL s_Sight_0051104c string

void func_005106DC(int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  int *piVar10;
  float fVar11;
  uint *unaff_r5;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fparam_0;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define local_13c (*(float *)(albw_frame + 0x4))
  #define uStack_138 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_134 (*(float *)(albw_frame + 0xc))
  #define local_130 (*(uint * *)(albw_frame + 0x10))
  #define local_12c (*(int *)(albw_frame + 0x14))
  #define local_120 (*(undefined4 *)(albw_frame + 0x20))
  #define local_118 (*(uint *)(albw_frame + 0x28))
  #define local_114 (*(float *)(albw_frame + 0x2c))
  #define uStack_110 (*(uint *)(albw_frame + 0x30))
  #define local_100 (*(int *)(albw_frame + 0x40))
  #define local_fc (*(int *)(albw_frame + 0x44))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_f0 (*(uint *)(albw_frame + 0x50))
  #define local_ec (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_e8 (*(undefined4 *)(albw_frame + 0x58))
  #define local_e4 (*(float * *)(albw_frame + 0x5c))
  #define local_e0 (*(float * *)(albw_frame + 0x60))
  #define local_dc (*(float *)(albw_frame + 0x64))
  #define local_d8 (*(undefined1 *)(albw_frame + 0x68))
  #define local_d7 (*(undefined1 *)(albw_frame + 0x69))
  #define local_d4 ((float *)(albw_frame + 0x6c))
  #define local_cc (*(float *)(albw_frame + 0x74))
  #define local_c8 (*(float *)(albw_frame + 0x78))
  #define local_c4 (*(float *)(albw_frame + 0x7c))
  #define local_c0 (*(float *)(albw_frame + 0x80))
  #define local_bc (*(float *)(albw_frame + 0x84))
  #define fStack_b8 (*(float *)(albw_frame + 0x88))
  #define local_b4 (*(float *)(albw_frame + 0x8c))
  #define local_b0 (*(int *)(albw_frame + 0x90))
  #define local_a8 (*(int *)(albw_frame + 0x98))
  #define local_a4 (*(int *)(albw_frame + 0x9c))
  #define local_a0 (*(int *)(albw_frame + 0xa0))
  #define local_9c (*(int *)(albw_frame + 0xa4))
  #define local_98 ((float *)(albw_frame + 0xa8))
  #define local_90 (*(float *)(albw_frame + 0xb0))
  #define local_8c (*(float *)(albw_frame + 0xb4))
  #define local_88 (*(float *)(albw_frame + 0xb8))
  #define local_84 (*(float *)(albw_frame + 0xbc))
  #define local_80 (*(float *)(albw_frame + 0xc0))
  #define local_7c (*(float *)(albw_frame + 0xc4))
  #define local_78 (*(float *)(albw_frame + 0xc8))
  #define local_74 (*(float *)(albw_frame + 0xcc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0xd0))
  #define fStack_6c (*(float *)(albw_frame + 0xd4))
  #define fStack_68 (*(float *)(albw_frame + 0xd8))
  #define afStack_64 ((float *)(albw_frame + 0xdc))
  if (*(uint *)(param_1 + 0x488) == 0) {
    pfVar5 = *(float **)(*DAT_00510ad0 + 0x1c);
    local_c8 = *pfVar5;
    local_c4 = pfVar5[1];
    local_c0 = pfVar5[2];
  }
  else {
    unaff_r5 = (uint *)func_0052FBA0(*DAT_00510ac8 + 0x3dbbc,*(uint *)(param_1 + 0x488));
    if (((*DAT_00510acc & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00510acc), iVar6 != 0)) {
      *DAT_00510ad4 = DAT_00510ad8;
    }
    if ((unaff_r5 == (uint *)0x0) ||
       (iVar6 = (**(code **)*unaff_r5)(unaff_r5,DAT_00510ad4), iVar6 == 0)) {
      unaff_r5 = (uint *)0x0;
    }
    if (unaff_r5 == (uint *)0x0) {
      return;
    }
    local_c8 = ALBW_AS_F32(unaff_r5[0xf4]);
    local_c4 = ALBW_AS_F32(unaff_r5[0xf5]);
    local_c0 = ALBW_AS_F32(unaff_r5[0xf6]);
  }
  fVar27 = local_c4;
  iVar6 = func_004ED868();
  fVar28 = DAT_00510adc;
  if ((iVar6 == 0) &&
     (fVar18 = DAT_00510ae0, bVar4 = func_004ED71C(), puVar14 = DAT_00510ae4, !bVar4)) {
    iVar6 = func_00581C5C(*DAT_00510ae4);
    fVar21 = fVar28;
    if (iVar6 != 0) {
      fVar21 = *(float *)(iVar6 + 0x60);
    }
    fVar17 = func_00581F68(*puVar14);
    fVar18 = (fVar17 + fVar21 + DAT_00510ae8) - fVar18;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar27 <= fVar18) << 0x1d;
    unaff_r5 = puVar14;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar27 = fVar18;
    }
  }
  func_00115154(&fStack_68,afStack_64,*(uint *)(param_1 + 1000));
  local_12c = 0;
  if (*(byte *)(param_1 + 0x477) != 0) {
    uVar29 = func_00114608(DAT_00510aec,(uint)*(byte *)(param_1 + 0x477));
    uVar7 = (uint)((int)uVar29 + *(int *)(param_1 + 1000)) >> 0x1d;
    local_12c = DAT_00510af4;
    if ((uVar7 != 0 && uVar7 != 2) && (uVar7 != 4 && uVar7 != 6)) {
      local_12c = DAT_00510af0;
    }
  }
  local_130 = (uint *)0x0;
  local_a4 = param_1 + 0x40c;
  local_a0 = param_1 + 0x46f;
  local_9c = param_1 + 0x473;
  fVar26 = fVar27 + DAT_00510af8;
  fVar27 = fVar27 + DAT_00510ae0;
  local_b0 = param_1 + 0x48c;
  local_a8 = param_1 + 0x478;
  uVar29 = CONCAT44(DAT_00510b10,DAT_00510b0c);
  local_120 = DAT_00510b14;
  fVar18 = DAT_00510b04;
  fVar21 = DAT_00510afc;
  fVar17 = DAT_00510b00;
  fVar24 = DAT_00510b08;
  do {
    fparam_0 = DAT_00510b18;
    *(float *)(param_1 + 0x464) = fVar24;
    fVar11 = fVar24;
    fVar20 = fVar24;
    fVar22 = fVar21;
    func_00511094(param_1,&local_c8,local_12c,(int)local_130,fparam_0);
    local_f0 = DAT_00510b1c | (uint)unaff_r5 & 0xffff0000;
    local_100 = 0;
    local_f8 = 0;
    uStack_e8 = 0;
    local_d8 = 0;
    local_d7 = 1;
    local_fc = local_a4;
    local_f4 = *(undefined4 *)(param_1 + 0x2cc);
    local_ec = DAT_00510b20;
    local_e0 = &local_8c;
    local_e4 = &local_80;
    fVar19 = fVar18;
    fVar25 = fVar24;
    local_dc = fVar28;
    local_bc = fVar17;
    fStack_b8 = fVar28;
    local_b4 = fVar17;
    func_00115D70(&local_74,&local_bc,fVar18);
    local_13c = local_74;
    uStack_138 = uStack_70;
    fStack_134 = fStack_6c;
    func_00115C70(local_98,(float *)(param_1 + 0x450),&local_13c);
    fVar24 = fVar11;
    func_00115D70(&local_74,&local_bc,fVar19);
    local_13c = local_74;
    uStack_138 = uStack_70;
    fStack_134 = fStack_6c;
    fVar11 = fStack_6c;
    func_00115C54(local_d4,(float *)(param_1 + 0x450),&local_13c);
    piVar10 = DAT_00510b24;
    iVar6 = 0;
    bVar4 = false;
    iVar15 = 0;
    local_74 = 0.0;
    local_88 = fVar27;
    local_7c = fVar26;
    do {
      iVar12 = 0;
      fVar19 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x15) & 3);
      local_8c = local_98[0] + (local_d4[0] - local_98[0]) * fVar19;
      local_80 = local_8c;
      do {
        fVar19 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
        local_84 = local_90 + (local_cc - local_90) * fVar19;
        local_78 = local_84;
        func_0014F0B0(param_1);
        uVar23 = *(undefined4 *)(param_1 + 0x45c);
        *(float *)(param_1 + 0x45c) = fVar24;
        *(float *)(param_1 + 0x460) = fVar24;
        *(float *)(param_1 + 0x468) = fVar24;
        *(undefined1 *)(param_1 + 0x46c) = 0;
        *(undefined1 *)(param_1 + 0x46d) = 0;
        *(undefined1 *)(param_1 + 0x46e) = 0;
        func_004A8030(*piVar10,&local_100,0xf);
        puVar14 = local_130;
        bVar16 = *(char *)(param_1 + 0x46e) != '\0';
        cVar1 = '\0';
        if (bVar16) {
          cVar1 = *(char *)(param_1 + 0x46d);
        }
        if ((bVar16 && cVar1 != '\0') &&
           (in_fpscr = in_fpscr & 0xfffffff |
                       (uint)(*(float *)(param_1 + 0x45c) <= *(float *)(param_1 + 0x460)) << 0x1d,
           !SUB41(in_fpscr >> 0x1d,0))) {
          *(undefined1 *)(param_1 + 0x46e) = 0;
        }
        cVar1 = *(char *)(param_1 + 0x46c);
        if (cVar1 != '\0') {
          fVar11 = ALBW_AS_F32((uint)*(byte *)(param_1 + 0x46d));
        }
        if ((cVar1 == '\0' || fVar11 == 0.0) ||
           (fVar11 = ALBW_AS_F32((uint)*(byte *)(param_1 + 0x46e)), fVar11 != 0.0)) {
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0x45c) = uVar23;
        }
        else {
          fVar19 = *(float *)(param_1 + 0x45c);
          if (fVar19 < fVar22) {
            fVar22 = fVar19;
          }
          if (fVar20 < fVar19) {
            fVar20 = fVar19;
          }
          fVar11 = fVar20 - fVar22;
          if (fVar25 < fVar20) {
            fVar25 = fVar20;
          }
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar19 == *(float *)(param_1 + 0x468)) << 0x1e;
          uVar7 = (uint)((int)ALBW_AS_U32(fVar11) < DAT_00511048);
          if (!SUB41(in_fpscr >> 0x1e,0)) {
            uVar7 = 0;
          }
        }
        bVar4 = bVar4 || cVar1 != '\0';
        iVar12 = iVar12 + 1;
        iVar6 = iVar6 + uVar7;
      } while (iVar12 < 2);
      iVar15 = iVar15 + 1;
    } while (iVar15 < 2);
    fVar11 = *(float *)(param_1 + 0x464) - ALBW_AS_F32(uVar29);
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar25) << 0x1f |
            (uint)(fVar11 == fVar25) << 0x1e;
    in_fpscr = uVar7 | (uint)(NAN(fVar11) || NAN(fVar25)) << 0x1c;
    bVar3 = (byte)(uVar7 >> 0x18);
    if (((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) && (iVar6 != 0)) {
      local_74 = 1.4013e-45;
    }
    else if (bVar4) {
      local_74 = 1.4013e-45;
      fVar25 = *(float *)(param_1 + 0x464);
    }
    cVar1 = *(char *)((int)local_130 + param_1 + 0x46f);
    *(undefined1 *)(local_a0 + (int)local_130) = 1;
    iVar6 = local_12c;
    if (local_12c == 0) {
      iVar6 = 1;
    }
    uVar9 = (undefined1)iVar6;
    if (local_12c != 0) {
      uVar9 = *(undefined1 *)(local_12c + (int)local_130 * 0xc + 8);
    }
    *(undefined1 *)((int)local_130 + local_9c) = uVar9;
    if (local_74 == 0.0) {
      func_00511094(param_1,&local_c8,local_12c,(int)local_130,fparam_0);
      *(float *)(param_1 + 0x454) = fVar26;
    }
    else {
      func_00511094(param_1,&local_c8,local_12c,(int)local_130,fparam_0);
      *(float *)(param_1 + 0x454) = fVar25;
    }
    cVar2 = *(char *)((int)puVar14 + param_1 + 0x46f);
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        iVar6 = param_1 + (int)local_130 * 8;
        puVar13 = (uint *)(iVar6 + 0x48c);
        if (*(int *)(param_1 + 0x344) == 0) {
          *puVar13 = 0;
          *(undefined4 *)(iVar6 + 0x490) = 0;
        }
        else {
          uVar7 = *puVar13;
          if ((uVar7 != 0) && (*(int *)(uVar7 + 0x1c) == *(int *)(iVar6 + 0x490))) {
            func_00110848(uVar7);
          }
          func_004A1B9C((int *)&local_118,*(int *)(param_1 + 0x344),(uint *)s_Sight_0051104c);
          *puVar13 = local_118;
          *(float *)(iVar6 + 0x490) = local_114;
        }
LAB_00510d4c:
        if (*(char *)((int)puVar14 + param_1 + 0x46f) != '\0') goto LAB_00510d58;
      }
LAB_00510f70:
      unaff_r5 = local_130;
      uVar7 = *(uint *)(local_a8 + (int)local_130 * 4);
      if (uVar7 != 0) {
        puVar8 = (undefined4 *)func_0052FBA0(*DAT_00510ac8 + 0x3dbbc,uVar7);
        if (((*DAT_0051105c & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0051105c), iVar6 != 0))
        {
          *DAT_00511064 = local_120;
        }
        if ((puVar8 == (undefined4 *)0x0) || (iVar6 = (**(code **)*puVar8)(puVar8), iVar6 == 0)) {
          puVar8 = (undefined4 *)0x0;
        }
        if (puVar8 != (undefined4 *)0x0) {
          *(undefined1 *)((int)puVar8 + 0x2d7) = 1;
          *(undefined4 *)(param_1 + (int)unaff_r5 * 4 + 0x478) = 0;
        }
      }
    }
    else {
      if (cVar2 == '\0') {
        piVar10 = (int *)(local_b0 + (int)local_130 * 8);
        iVar6 = *piVar10;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar10[1])) {
          iVar15 = *(int *)(iVar6 + 0x20);
          if ((iVar15 != 0) &&
             ((*(int *)(iVar6 + 0x24) == *(int *)(iVar15 + 0xc) && (0 < *(int *)(iVar15 + 4))))) {
            *(undefined1 *)(iVar15 + 0x280) = 1;
          }
          *(uint *)(iVar6 + 0x3c) = *(uint *)(iVar6 + 0x3c) & 0xfffffffb | 8;
          goto LAB_00510d4c;
        }
        goto LAB_00510f70;
      }
LAB_00510d58:
      if (DAT_00511054 <= (int)ALBW_AS_U32(*(float *)(param_1 + 0x454))) {
        cVar1 = *(char *)(*DAT_00511058 + 0x18);
        iVar6 = *(int *)(*DAT_00511058 + 0x1c);
        if (cVar1 == '\x04') {
          if (iVar6 == 0x18) goto LAB_00510da4;
        }
        else if ((cVar1 == '\x05') && (iVar6 == 8)) {
LAB_00510da4:
          *(float *)(param_1 + 0x454) =
               *(float *)(param_1 + 0x454) + ALBW_AS_F32(((ulonglong)uVar29 >> 0x20));
        }
      }
      piVar10 = (int *)(local_b0 + (int)local_130 * 8);
      iVar6 = *piVar10;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == piVar10[1])) {
        func_004A2F38(iVar6,(undefined4 *)(param_1 + 0x450));
      }
      if (*(char *)((int)puVar14 + param_1 + 0x46f) == '\0') goto LAB_00510f70;
      local_118 = *(uint *)(param_1 + 0x450);
      uStack_110 = *(uint *)(param_1 + 0x458);
      unaff_r5 = (uint *)(local_a8 + (int)local_130 * 4);
      local_114 = fVar27;
      if (*unaff_r5 == 0) {
        uVar7 = func_00512030(*(undefined4 *)(param_1 + 0x2cc),&local_118,
                              (int)*(char *)(param_1 + 0x477),fparam_0,fparam_0,DAT_00511060);
        *unaff_r5 = uVar7;
        if (*(int *)(param_1 + 0x488) != 0) {
          unaff_r5 = (uint *)func_0052FBA0(*DAT_00510ac8 + 0x3dbbc,*unaff_r5);
          if (((*DAT_0051105c & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0051105c), iVar6 != 0)
             ) {
            *DAT_00511064 = local_120;
          }
          if ((unaff_r5 == (uint *)0x0) ||
             (iVar6 = (**(code **)*unaff_r5)(unaff_r5), puVar14 = unaff_r5, iVar6 == 0)) {
            puVar14 = (uint *)0x0;
          }
          if (puVar14 != (uint *)0x0) {
            func_00511A18((int)puVar14);
          }
        }
      }
      else {
        unaff_r5 = (uint *)func_0052FBA0(*DAT_00510ac8 + 0x3dbbc,*unaff_r5);
        if (((*DAT_0051105c & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0051105c), iVar6 != 0))
        {
          *DAT_00511064 = local_120;
        }
        if ((unaff_r5 == (uint *)0x0) ||
           (iVar6 = (**(code **)*unaff_r5)(unaff_r5), puVar14 = unaff_r5, iVar6 == 0)) {
          puVar14 = (uint *)0x0;
        }
        if (puVar14 != (uint *)0x0) {
          puVar14[0xf4] = local_118;
          puVar14[0xf5] = (uint)ALBW_AS_U32(local_114);
          puVar14[0xf6] = uStack_110;
        }
      }
    }
    if (*(char *)(param_1 + 0x477) == '\0') {
      iVar6 = 1;
    }
    else {
      iVar6 = 4;
    }
    local_130 = (uint *)((int)local_130 + 1);
    if (iVar6 <= (int)local_130) {
      return;
    }
  } while( true );
}

