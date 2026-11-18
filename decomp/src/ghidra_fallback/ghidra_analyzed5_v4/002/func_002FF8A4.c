#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_001139F8(int param_1);
extern int func_0016E5A0(undefined4 *param_1,int param_2,int param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3);
extern int func_002C3098(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_003CD3DC(undefined4 *param_1);
extern int func_00529808(int param_1,uint param_2,uint param_3);
extern int func_00529874(int param_1,uint param_2,uint param_3);
extern int func_00561B30(int *param_1,uint *param_2,uint param_3,int param_4);
extern int func_00563710(uint *param_1,uint *param_2,int param_3);
extern int *DAT_002ffd98;
extern int *DAT_002ffd9c;
extern undefined4 DAT_002ffda0;
extern int *DAT_002ffda4;
extern float DAT_002ffda8;
extern undefined4 DAT_002ffdac;
extern undefined4 DAT_002ffdb0;
extern float DAT_002ffdb4;
extern float DAT_002ffdb8;
extern undefined4 DAT_002ffdbc;
extern undefined4 DAT_002ffdc0;

// USA 002FF8A4 <- EU 002FF880 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int *
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_002ffd98 int *
// GLOBAL DAT_002ffd9c int *
// GLOBAL DAT_002ffda0 undefined4
// GLOBAL DAT_002ffda4 int *
// GLOBAL DAT_002ffda8 float
// GLOBAL DAT_002ffdac undefined4
// GLOBAL DAT_002ffdb0 undefined4
// GLOBAL DAT_002ffdb4 float
// GLOBAL DAT_002ffdb8 float
// GLOBAL DAT_002ffdbc undefined4
// GLOBAL DAT_002ffdc0 undefined4

undefined4
func_002FF8A4(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  code *pcVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  float in_s0;
  float fVar19;
  float fVar20;
  float in_s1;
  float fVar21;
  float in_s2;
  float fVar22;
  float fVar23;
  float fVar24;
  float in_s3;
  float fVar25;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e8 (*(uint *)(albw_frame + 0x8))
  #define local_e4 (*(undefined2 *)(albw_frame + 0xc))
  #define local_e2 (*(undefined2 *)(albw_frame + 0xe))
  #define local_e0 (*(undefined1 *)(albw_frame + 0x10))
  #define local_df (*(undefined1 *)(albw_frame + 0x11))
  #define local_de (*(undefined1 *)(albw_frame + 0x12))
  #define local_cc (*(undefined1 *)(albw_frame + 0x24))
  #define iStack_34 (*(int *)(albw_frame + 0xbc))
  #define iStack_30 (*(int *)(albw_frame + 0xc0))
  #define iStack_2c (*(int *)(albw_frame + 0xc4))
  #define local_28 (*(int *)(albw_frame + 0xc8))
  uVar14 = param_2 + 7U & 0xfffffff8;
  uVar15 = param_3 + 7U & 0xfffffff8;
  if (param_5 == 0) {
    iVar2 = 3;
  }
  else {
    iVar2 = 0;
  }
  *(char *)(param_1 + 0x40) = (char)iVar2;
  if (iVar2 == 0) {
LAB_002ff8dc:
    iVar2 = 4;
  }
  else {
    bVar16 = iVar2 == 2;
    bVar17 = iVar2 == 3;
    bVar18 = iVar2 != 4;
    if ((bVar16 || bVar17) || !bVar18) {
      iVar2 = 2;
    }
    if ((!bVar16 && !bVar17) && bVar18) goto LAB_002ff8dc;
  }
  uVar9 = (int)(iVar2 * uVar14) * uVar15;
  piVar13 = (int *)(iVar2 * uVar14);
  if (param_6 != (int *)0x0) {
    piVar13 = param_6;
  }
  *(uint *)(param_1 + 0x84) = uVar9;
  piVar4 = DAT_002ffd9c;
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (param_6 == (int *)0x0) {
    piVar13 = *(int **)(*DAT_002ffd98 + 0x1fa8);
    bVar16 = func_00529808(*DAT_002ffd9c,uVar9,0x80);
    uVar8 = DAT_002ffda0;
    if (bVar16) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 0x10000000;
      uVar3 = *(undefined4 *)(param_1 + 0x84);
      piVar4 = (int *)*piVar4;
      pcVar12 = *(code **)(*piVar4 + 8);
      uVar10 = 0x20000;
    }
    else {
      bVar16 = func_00529874(*piVar4,*(uint *)(param_1 + 0x84),0x80);
      if (!bVar16) {
        uVar9 = *(uint *)(param_1 + 0x188) & 0xefffffff;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x188) | 0x10000000;
      }
      *(uint *)(param_1 + 0x188) = uVar9;
      if (!bVar16) {
        uVar9 = *(uint *)(param_1 + 0x84);
        pcVar12 = *(code **)(*piVar13 + 0x18);
        goto LAB_002ffa1c;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x84);
      piVar4 = (int *)*piVar4;
      pcVar12 = *(code **)(*piVar4 + 8);
      uVar10 = 0x30000;
      uVar8 = DAT_002ffda0;
    }
    iVar2 = (*pcVar12)(piVar4,uVar10,uVar8,0,uVar3);
  }
  else {
    pcVar12 = *(code **)(*piVar13 + 0x18);
LAB_002ffa1c:
    iVar2 = (*pcVar12)(piVar13,uVar9,0x80);
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  *(uint *)(param_1 + 0x44) = uVar14;
  *(uint *)(param_1 + 0x48) = uVar15;
  *(undefined1 *)(param_1 + 0x41) = 0;
  func_0010E3C4((uint *)(param_1 + 0x4c),(uint *)(param_1 + 0x88),0x10);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (param_7 == 0) {
    func_002C3098(*DAT_002ffda4,param_1 + 0x3c,uVar14,uVar15);
  }
  else {
    *(int *)(param_1 + 0x60) = param_7;
    *(undefined1 *)(param_1 + 100) = 0;
    *(uint *)(param_1 + 0x68) = uVar14;
    *(uint *)(param_1 + 0x6c) = uVar15;
  }
  if (*(int *)(param_1 + 0x60) + 0xe1000000U < 0x600000) {
    uVar9 = *(uint *)(param_1 + 0x188) | 0x8000000;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x188) & 0xf7ffffff;
  }
  *(uint *)(param_1 + 0x188) = uVar9;
  *(uint *)(param_1 + 0x7c) = uVar14;
  *(uint *)(param_1 + 0x80) = uVar15;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  uVar8 = DAT_002ffdac;
  fVar24 = DAT_002ffda8;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    fVar24 = in_s0;
    fVar19 = DAT_002ffda8;
  }
  else {
    in_s3 = (float)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
    in_s2 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
    in_s1 = (float)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
    puVar5[1] = ALBW_AS_U32(in_s2);
    puVar5[2] = ALBW_AS_U32(in_s3);
    *puVar5 = uVar8;
    fVar19 = fVar24 + fVar19;
    in_s1 = fVar24 + in_s1;
    if (fVar24 < fVar19) {
      puVar5[3] = ALBW_AS_U32(fVar24);
      in_s2 = fVar24;
    }
    else {
      puVar5[3] = ALBW_AS_U32(fVar19);
      fVar19 = fVar24;
    }
    puVar5[5] = ALBW_AS_U32(fVar19);
    if (in_s1 <= fVar24) {
      puVar5[4] = ALBW_AS_U32(in_s1);
      puVar5[6] = ALBW_AS_U32(fVar24);
    }
    else {
      puVar5[4] = ALBW_AS_U32(fVar24);
      puVar5[6] = ALBW_AS_U32(in_s1);
    }
    *puVar5 = DAT_002ffdb0;
    fVar19 = fVar24;
    func_00110D44(puVar5 + 7,(byte *)(param_1 + 0x3c),0x48);
    puVar5[7] = *(undefined4 *)(param_1 + 0x3c);
    *(undefined1 *)(puVar5 + 8) = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)((int)puVar5 + 0x21) = *(undefined1 *)(param_1 + 0x41);
    puVar5[9] = *(undefined4 *)(param_1 + 0x44);
    puVar5[10] = *(undefined4 *)(param_1 + 0x48);
    func_0010E3C4(puVar5 + 0xb,(uint *)(param_1 + 0x4c),0x10);
    puVar5[0x10] = *(undefined4 *)(param_1 + 0x60);
    *(undefined1 *)(puVar5 + 0x11) = *(undefined1 *)(param_1 + 100);
    puVar5[0x12] = *(undefined4 *)(param_1 + 0x68);
    puVar5[0x13] = *(undefined4 *)(param_1 + 0x6c);
    puVar5[0x14] = *(undefined4 *)(param_1 + 0x70);
    *(undefined1 *)(puVar5 + 0x15) = *(undefined1 *)(param_1 + 0x74);
    puVar5[0x17] = *(undefined4 *)(param_1 + 0x7c);
    puVar5[0x18] = *(undefined4 *)(param_1 + 0x80);
  }
  *(undefined4 **)(param_1 + 0x38) = puVar5;
  iVar2 = func_0010CEE0(0x60,(int *)0x0,4);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x34) = iVar2;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x18;
  }
  puVar11 = *(uint **)(param_1 + 0x34);
  puVar6 = func_00561B30((int *)(param_1 + 0x3c),puVar11,3,0);
  uVar9 = (int)puVar6 - (int)puVar11 >> 2;
  if (uVar9 <= *(uint *)(param_1 + 0x30)) {
    *(uint *)(param_1 + 0x2c) = uVar9;
  }
  func_003CD3DC(&local_e8);
  local_cc = 0;
  local_e8 = func_001139F8(*(int *)(param_1 + 0x3c));
  if (param_5 == 0) {
    local_e0 = 3;
  }
  else {
    local_e0 = 0;
  }
  local_de = 0;
  local_e4 = (undefined2)uVar14;
  local_df = 0;
  local_e2 = (undefined2)uVar15;
  iVar2 = func_0010CEE0(200,(int *)0x0,4);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x28) = iVar2;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x32;
  }
  puVar11 = *(uint **)(param_1 + 0x28);
  puVar6 = func_00563710(&local_e8,puVar11,1);
  uVar14 = (int)puVar6 - (int)puVar11 >> 2;
  if (uVar14 <= *(uint *)(param_1 + 0x24)) {
    *(uint *)(param_1 + 0x20) = uVar14;
  }
  puVar7 = (undefined4 *)func_0010BAB4(0x4c);
  puVar5 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar5 = func_0016E5A0(puVar7,*(int *)(param_1 + 0x38),0,fVar24,in_s1,in_s2,in_s3);
  }
  *(undefined4 **)(param_1 + 0x98) = puVar5;
  uVar14 = *(uint *)(param_1 + 0x188);
  uVar15 = uVar14 | 8;
  *(uint *)(param_1 + 0x188) = uVar15;
  if ((int)(uVar15 << 0x1c) < 0) {
    *(uint *)(param_1 + 0x188) = uVar14 & 0xfffffff7;
    fVar1 = DAT_002ffdb8;
    fVar24 = DAT_002ffdb4;
    iVar2 = *(int *)(param_1 + 0x98);
    fVar22 = *(float *)(iVar2 + 4);
    fVar20 = DAT_002ffdb4 / *(float *)(param_1 + 0x164);
    fVar21 = *(float *)(iVar2 + 0xc);
    fVar25 = *(float *)(iVar2 + 8);
    fVar23 = *(float *)(iVar2 + 0x10);
    *(float *)(param_1 + 0x128) = fVar19;
    *(float *)(param_1 + 300) = fVar19;
    *(float *)(param_1 + 0x134) = fVar19;
    *(float *)(param_1 + 0x13c) = fVar19;
    *(float *)(param_1 + 0x144) = fVar19;
    *(float *)(param_1 + 0x148) = fVar19;
    *(float *)(param_1 + 0x154) = fVar19;
    *(float *)(param_1 + 0x158) = fVar19;
    *(float *)(param_1 + 0x15c) = fVar19;
    *(float *)(param_1 + 0x160) = fVar24;
    uVar3 = DAT_002ffdc0;
    uVar8 = DAT_002ffdbc;
    fVar19 = (fVar21 - fVar22) / (fVar23 - fVar25);
    fVar21 = fVar19 * fVar20;
    fVar19 = -(fVar19 * fVar20);
    fVar22 = fVar24 / (fVar20 - -fVar20);
    fVar24 = fVar24 / (fVar21 - fVar19);
    *(float *)(param_1 + 0x124) = fVar24 * fVar1;
    *(float *)(param_1 + 0x130) = -((fVar21 + fVar19) * fVar24);
    *(float *)(param_1 + 0x138) = fVar22 * fVar1;
    *(float *)(param_1 + 0x140) = -((fVar20 + -fVar20) * fVar22);
    *(undefined4 *)(param_1 + 0x14c) = uVar8;
    *(undefined4 *)(param_1 + 0x150) = uVar3;
  }
  uVar8 = func_0010B380((undefined4 *)(param_1 + 0x178),local_28,(int *)0x0,4);
  return uVar8;
}

