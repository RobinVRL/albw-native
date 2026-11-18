#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0019B04C(uint param_1);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065AC0C(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_0000002d;
extern uint *DAT_001ad9b8;
extern int DAT_001ad9bc;
extern undefined4 DAT_001ad9c0;
extern uint DAT_001ad9c4;
extern undefined4 DAT_001ad9c8;
extern undefined4 DAT_001ad9cc;
extern undefined *DAT_001ad9d0;
extern int DAT_001ad9d4;
extern undefined4 DAT_001ad9d8;
extern int *DAT_001ad9dc;
extern undefined4 DAT_001ad9e0;
extern int DAT_001ad9e4;
extern int DAT_001ad9e8;
extern int DAT_001ad9ec;
extern undefined4 DAT_001ad9f0;
extern int DAT_001ad9f4;
extern undefined4 DAT_001ad9f8;
extern int *DAT_001ad9fc;
extern uint DAT_001ada00;
extern int *DAT_001ada04;
extern uint *DAT_001ada10;
extern int *DAT_001ada14;
extern undefined4 DAT_001ada18;
extern int DAT_001ada1c;
extern undefined4 DAT_001ada20;
extern undefined4 DAT_001ada24;
extern undefined *DAT_001adefc;
extern int DAT_001adf00;
extern float DAT_001ae2c8;
extern int *DAT_001ae2cc;
extern uint *DAT_001ae2d0;
extern undefined4 *DAT_001ae2d4;
extern undefined4 DAT_001ae2d8;
extern char s_cState_Appear_001adf10[];
extern char s_cState_Die_001adfe0[];
extern char s_cState_EventWait_001adf44[];
extern char s_cState_Hide_001adf04[];
extern char s_cState_MoveWait_001adf20[];
extern char s_cState_RandomMove_001adf30[];
extern char s_cState_Reaction_001adfd0[];
extern char s_cState_RoundMove_001adf94[];
extern char s_cState_ShuffleMove_001adf6c[];
extern char s_cState_ShuffleTurn0_001adf58[];
extern char s_cState_ShuffleTurn1_001adf80[];
extern char s_cState_TargetMove_001adfa8[];
extern char s_cState_TargetWait_001adfbc[];
extern char s_eye_1_001ada08[];

// USA 001AD594 <- EU 001AD594 (Ghidra, non-matching)
// GLOBAL DAT_0000002d undefined
// GLOBAL DAT_001ad9b8 uint *
// GLOBAL DAT_001ad9bc int
// GLOBAL DAT_001ad9c0 undefined4
// GLOBAL DAT_001ad9c4 uint
// GLOBAL DAT_001ad9c8 undefined4
// GLOBAL DAT_001ad9cc undefined4
// GLOBAL DAT_001ad9d0 undefined *
// GLOBAL DAT_001ad9d4 int
// GLOBAL DAT_001ad9d8 undefined4
// GLOBAL DAT_001ad9dc int *
// GLOBAL DAT_001ad9e0 undefined4
// GLOBAL DAT_001ad9e4 int
// GLOBAL DAT_001ad9e8 int
// GLOBAL DAT_001ad9ec int
// GLOBAL DAT_001ad9f0 undefined4
// GLOBAL DAT_001ad9f4 int
// GLOBAL DAT_001ad9f8 undefined4
// GLOBAL DAT_001ad9fc int *
// GLOBAL DAT_001ada00 uint
// GLOBAL DAT_001ada04 int *
// GLOBAL DAT_001ada10 uint *
// GLOBAL DAT_001ada14 int *
// GLOBAL DAT_001ada18 undefined4
// GLOBAL DAT_001ada1c int
// GLOBAL DAT_001ada20 undefined4
// GLOBAL DAT_001ada24 undefined4
// GLOBAL DAT_001adefc undefined *
// GLOBAL DAT_001adf00 int
// GLOBAL DAT_001ae2c8 float
// GLOBAL DAT_001ae2cc int *
// GLOBAL DAT_001ae2d0 uint *
// GLOBAL DAT_001ae2d4 undefined4 *
// GLOBAL DAT_001ae2d8 undefined4
// GLOBAL s_cState_Appear_001adf10 string
// GLOBAL s_cState_Die_001adfe0 string
// GLOBAL s_cState_EventWait_001adf44 string
// GLOBAL s_cState_Hide_001adf04 string
// GLOBAL s_cState_MoveWait_001adf20 string
// GLOBAL s_cState_RandomMove_001adf30 string
// GLOBAL s_cState_Reaction_001adfd0 string
// GLOBAL s_cState_RoundMove_001adf94 string
// GLOBAL s_cState_ShuffleMove_001adf6c string
// GLOBAL s_cState_ShuffleTurn0_001adf58 string
// GLOBAL s_cState_ShuffleTurn1_001adf80 string
// GLOBAL s_cState_TargetMove_001adfa8 string
// GLOBAL s_cState_TargetWait_001adfbc string
// GLOBAL s_eye_1_001ada08 string

/* WARNING: Variable defined which should be unmapped: objStack_308 */

int func_001AD594(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float *pfVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  _Alignas(8) unsigned char albw_frame[0x310];
  #define objStack_308 ((uint *)(albw_frame + 0x8))
  #define local_40 (*(uint *)(albw_frame + 0x2d0))
  #define local_3c (*(char * *)(albw_frame + 0x2d4))
  piVar5 = func_004FD464(param_1,param_2,DAT_001ad9b8);
  iVar8 = DAT_001ad9bc;
  *piVar5 = DAT_001ad9bc;
  piVar5[200] = iVar8 + 0x84;
  puVar6 = func_0010A794(piVar5 + 0x22f);
  puVar6[5] = 0;
  uVar13 = DAT_001ad9c0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = uVar13;
  puVar6[10] = puVar6 + -0x22f;
  puVar6[0xb] = 0xffffffff;
  puVar6[0xc] = 0;
  uVar12 = DAT_001ad9c4;
  uVar23 = (ulonglong)DAT_001ad9c4;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0x18] = uVar12;
  uVar13 = DAT_001ad9c8;
  puVar6[0x1a] = 0xffff;
  puVar6[0x1b] = uVar13;
  puVar6[0x19] = 0;
  puVar6[0x1d] = 0xffff;
  uVar19 = DAT_001ad9cc;
  puVar6[0x1e] = uVar13;
  puVar6[0x1c] = 0;
  puVar6[0x20] = 0xffff;
  puVar6[0x21] = uVar13;
  puVar6[0x1f] = 0;
  puVar6[0x23] = 0xffff;
  puVar6[0x24] = uVar13;
  puVar6[0x25] = 0;
  puVar6[0x22] = 0;
  puVar3 = DAT_001ad9d0;
  puVar6[0x26] = 0;
  iVar7 = func_00100118((int)(puVar6 + 0x30),puVar3,4,8);
  iVar8 = DAT_001ad9d4;
  pfVar17 = (float *)&DAT_0000002d;
  *(undefined4 *)(iVar7 + 0x28) = 0x2d;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined4 *)(iVar7 + 0x30) = 0;
  piVar5 = DAT_001ad9dc;
  uVar13 = *(undefined4 *)(iVar8 + 0x100);
  *(undefined4 *)(iVar7 + 0x34) = *(undefined4 *)(iVar8 + 0xfc);
  *(undefined4 *)(iVar7 + 0x38) = uVar13;
  iVar18 = iVar7 + -0x97c;
  *(undefined4 *)(iVar7 + 0x2c) = DAT_001ad9d8;
  objStack_308[3] = iVar7 - 0x17c;
  *(undefined4 *)(iVar7 + 0x3c) = uVar19;
  *(undefined4 *)(iVar7 + 0x40) = 0;
  sVar2 = *(short *)(iVar7 + -0x94c);
  *(bool *)(iVar7 + 0x44) = *(short *)((int)param_2 + 0x32) != 0;
  iVar8 = DAT_001ad9e4;
  if (sVar2 == 0) {
    *(undefined4 *)(iVar7 + -0x24) = DAT_001ad9e0;
    bVar4 = func_00584B94(*piVar5,iVar8);
    if (bVar4) {
      *(undefined4 *)(iVar7 + 0x24) = 2;
    }
    else {
      bVar4 = func_00584B94(*piVar5,DAT_001ad9e8);
      if (bVar4) {
        *(undefined4 *)(iVar7 + 0x24) = 1;
      }
    }
  }
  else {
    if (sVar2 == 1) {
      bVar4 = func_00584B94(*piVar5,DAT_001ad9ec);
      if (bVar4) {
        *(undefined4 *)(iVar7 + 0x24) = 2;
        uVar13 = DAT_001ad9f0;
      }
      else {
        bVar4 = func_00584B94(*piVar5,0x180);
        uVar13 = DAT_001ad9f0;
        if (bVar4) {
          *(undefined4 *)(iVar7 + 0x24) = 1;
          uVar13 = DAT_001ad9f0;
        }
      }
    }
    else {
      if (sVar2 != 2) goto LAB_001ad784;
      bVar4 = func_00584B94(*piVar5,0x184);
      if (bVar4) {
        *(undefined4 *)(iVar7 + 0x24) = 2;
        uVar13 = DAT_001ad9f8;
      }
      else {
        bVar4 = func_00584B94(*piVar5,DAT_001ad9f4);
        uVar13 = DAT_001ad9f8;
        if (bVar4) {
          *(undefined4 *)(iVar7 + 0x24) = 1;
          uVar13 = DAT_001ad9f8;
        }
      }
    }
    *(undefined4 *)(iVar7 + -0x24) = uVar13;
  }
LAB_001ad784:
  iVar8 = func_00588BE4(iVar18);
  uVar12 = DAT_001ada00;
  piVar5 = DAT_001ad9fc;
  if ((iVar8 == *DAT_001ad9fc) || (iVar8 = func_00588BE4(iVar18), iVar8 == *DAT_001ada04)) {
    objStack_308[1] = (uint)s_eye_1_001ada08;
    objStack_308[0] = uVar12;
    uVar9 = func_00564A78(*(int *)(iVar7 + -0x570),(int *)objStack_308);
    if (uVar9 != 0xffff) {
      *(uint *)(iVar7 + -0x94) = uVar9;
      puVar10 = (uint *)(*(int *)(*(int *)(*(int *)(iVar7 + -0x570) + 0x24) + 0xc) + uVar9 * 0x40);
      *puVar10 = *puVar10 | 0x10;
      *(int *)(*(int *)(iVar7 + -0x570) + 0x16c) = iVar7 + -0x9c;
    }
  }
  iVar8 = func_00588BE4(iVar18);
  if (iVar8 == *piVar5) {
    (**(code **)(**(int **)(iVar7 + -0x570) + 0x10))(*(int **)(iVar7 + -0x570),0xd2);
  }
  *(undefined4 *)(iVar7 + -0x8c) = 0;
  uVar9 = func_00588BE4(iVar18);
  if (uVar9 == *DAT_001ada10) {
    *(undefined4 *)(iVar7 + -0x88) = 0;
    *(undefined4 *)(iVar7 + -0x594) = 0;
  }
  else {
    iVar8 = *DAT_001ada14;
    *(int *)(iVar7 + -0x594) = iVar8;
    *(uint *)(iVar7 + -0x88) = iVar8 + 0x20000000U & 0xc0000000;
  }
  uVar13 = DAT_001ada18;
  *(undefined4 *)(iVar7 + -0x4c) = 3;
  *(undefined4 *)(iVar7 + -0x48) = uVar13;
  *(undefined4 *)(iVar7 + -0x50) = 0;
  *(undefined4 *)(iVar7 + -0x6c) = *(undefined4 *)(iVar7 + -0x5ac);
  *(undefined4 *)(iVar7 + -0x68) = *(undefined4 *)(iVar7 + -0x5a8);
  *(undefined4 *)(iVar7 + -100) = *(undefined4 *)(iVar7 + -0x5a4);
  *(undefined4 *)(iVar7 + -0x84) = *(undefined4 *)(iVar7 + -0x5ac);
  *(undefined4 *)(iVar7 + -0x80) = *(undefined4 *)(iVar7 + -0x5a8);
  *(undefined4 *)(iVar7 + -0x7c) = *(undefined4 *)(iVar7 + -0x5a4);
  *(undefined4 *)(iVar7 + -0x78) = *(undefined4 *)(iVar7 + -0x5ac);
  *(undefined4 *)(iVar7 + -0x74) = *(undefined4 *)(iVar7 + -0x5a8);
  *(undefined4 *)(iVar7 + -0x70) = *(undefined4 *)(iVar7 + -0x5a4);
  *(int *)(iVar7 + -0x59c) = (int)uVar23;
  func_004FB344(iVar18,5);
  iVar8 = DAT_001ada1c;
  uVar9 = 0;
  do {
    func_004FACA4(iVar18,uVar9,(int *)(iVar8 + uVar9 * 8));
    fVar16 = ALBW_AS_F32(uVar23);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 5);
  func_004FB468(iVar18);
  objStack_308[4] = iVar7 - 0x57c;
  *(undefined4 *)(iVar7 + -0x408) = DAT_001ada20;
  *(undefined4 *)(iVar7 + -0x528) = DAT_001ada24;
  *(undefined4 *)(iVar7 + -0x530) = *(undefined4 *)(iVar7 + -0x530);
  *(undefined4 *)(iVar7 + -0x52c) = *(undefined4 *)(iVar7 + -0x52c);
  func_004F5BD8(iVar18,(uint *)0x0,(int **)0x0,pfVar17);
  *(uint *)(iVar7 + -0x3e0) = *(uint *)(iVar7 + -0x3e0) & 0xffffff4b | 0x8000;
  func_004FD038(iVar7 + -0x3d4,0);
  func_004F87F8(iVar18,1);
  iVar8 = 0;
  iVar14 = 8;
  do {
    iVar14 = iVar14 + -1;
    *(int *)(iVar7 + -0x20 + iVar8 * 4) = iVar8;
    iVar8 = iVar8 + 1;
  } while (iVar14 != 0);
  *(int *)(iVar7 + 0x20) = (int)*(short *)((int)param_2 + 0x2a);
  objStack_308[0] = iVar7 - 0xc0;
  *(undefined1 *)(iVar7 + -0xba) = 0xd;
  *(int *)(iVar7 + -0xac) = iVar18;
  iVar14 = func_0010BA78(0xd0);
  *(int *)(iVar7 + -0xa8) = iVar14;
  iVar8 = DAT_001ad9d4;
  *(uint *)(iVar7 + -0xa4) = iVar14 + (uint)*(byte *)(iVar7 + -0xba) * 8;
  iVar15 = 0xd;
  puVar6 = (undefined4 *)(iVar14 + -8);
  do {
    uVar13 = *(undefined4 *)(iVar8 + 0xf8);
    iVar15 = iVar15 + -1;
    puVar6[2] = *(undefined4 *)(iVar8 + 0xf4);
    puVar6[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar8 + 0xf8);
    puVar6[4] = *(undefined4 *)(iVar8 + 0xf4);
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar15 != 0);
  bVar1 = *(byte *)(iVar7 + -0xba);
  uVar9 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar9 << 3);
  *(undefined4 **)(iVar7 + -0xa0) = puVar6;
  if (uVar9 != 0) {
    puVar11 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar8 + 0x28);
      *puVar6 = *(undefined4 *)(iVar8 + 0x24);
      puVar6[1] = uVar13;
      puVar11 = puVar6;
    }
    for (iVar14 = (int)uVar9 >> 1; iVar14 != 0; iVar14 = iVar14 + -1) {
      uVar13 = *(undefined4 *)(iVar8 + 0x28);
      puVar11[2] = *(undefined4 *)(iVar8 + 0x24);
      puVar11[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar8 + 0x28);
      puVar11[4] = *(undefined4 *)(iVar8 + 0x24);
      puVar11[5] = uVar13;
      puVar11 = puVar11 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x1dc,(int *)0x0,4);
  iVar14 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 0xd;
    iVar14 = func_00100118((int)(puVar6 + 2),DAT_001adefc,0x24,0xd);
  }
  if (iVar14 != 0) {
    *(undefined4 *)(iVar7 + -0xb8) = 0xd;
    *(int *)(iVar7 + -0xb4) = iVar14;
  }
  iVar14 = DAT_001adf00;
  *(uint *)(iVar7 + -0x628) = objStack_308[0];
  *(undefined2 *)(iVar14 + iVar18) = 0xd;
  local_3c = s_cState_Hide_001adf04;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],0,(int *)&local_40);
  puVar6 = *(undefined4 **)(iVar7 + -0xa8);
  uVar19 = *(undefined4 *)(iVar8 + 0x1c);
  uVar22 = *(undefined4 *)(iVar8 + 0x24);
  uVar21 = *(undefined4 *)(iVar8 + 0x28);
  uVar20 = *(undefined4 *)(iVar8 + 0x18);
  uVar13 = *(undefined4 *)(iVar8 + 0x20);
  *puVar6 = *(undefined4 *)(iVar8 + 0x14);
  puVar6[1] = uVar20;
  puVar6 = *(undefined4 **)(iVar7 + -0xa4);
  *puVar6 = uVar19;
  puVar6[1] = uVar13;
  puVar6 = *(undefined4 **)(iVar7 + -0xa0);
  *puVar6 = uVar22;
  puVar6[1] = uVar21;
  local_3c = s_cState_Appear_001adf10;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],1,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0x30);
  uVar19 = *(undefined4 *)(iVar8 + 0x34);
  uVar20 = *(undefined4 *)(iVar8 + 0x38);
  *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(iVar14 + 0xc) = uVar13;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 8) = uVar19;
  *(undefined4 *)(iVar14 + 0xc) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 8) = uVar22;
  *(undefined4 *)(iVar14 + 0xc) = uVar21;
  local_3c = s_cState_MoveWait_001adf20;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],2,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0x40);
  uVar19 = *(undefined4 *)(iVar8 + 0x44);
  uVar20 = *(undefined4 *)(iVar8 + 0x48);
  *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(iVar8 + 0x3c);
  *(undefined4 *)(iVar14 + 0x14) = uVar13;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x10) = uVar19;
  *(undefined4 *)(iVar14 + 0x14) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x10) = uVar22;
  *(undefined4 *)(iVar14 + 0x14) = uVar21;
  local_3c = s_cState_RandomMove_001adf30;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],3,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar19 = *(undefined4 *)(iVar8 + 0x50);
  uVar20 = *(undefined4 *)(iVar8 + 0x54);
  uVar13 = *(undefined4 *)(iVar8 + 0x58);
  *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(iVar8 + 0x4c);
  *(undefined4 *)(iVar14 + 0x1c) = uVar19;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x18) = uVar20;
  *(undefined4 *)(iVar14 + 0x1c) = uVar13;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x18) = uVar22;
  *(undefined4 *)(iVar14 + 0x1c) = uVar21;
  local_3c = s_cState_EventWait_001adf44;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],4,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0x60);
  uVar19 = *(undefined4 *)(iVar8 + 100);
  uVar20 = *(undefined4 *)(iVar8 + 0x68);
  *(undefined4 *)(iVar14 + 0x20) = *(undefined4 *)(iVar8 + 0x5c);
  *(undefined4 *)(iVar14 + 0x24) = uVar13;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x20) = uVar19;
  *(undefined4 *)(iVar14 + 0x24) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x20) = uVar22;
  *(undefined4 *)(iVar14 + 0x24) = uVar21;
  local_3c = s_cState_ShuffleTurn0_001adf58;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],5,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0x74);
  uVar19 = *(undefined4 *)(iVar8 + 0x70);
  uVar20 = *(undefined4 *)(iVar8 + 0x78);
  *(undefined4 *)(iVar14 + 0x28) = *(undefined4 *)(iVar8 + 0x6c);
  *(undefined4 *)(iVar14 + 0x2c) = uVar19;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x28) = uVar13;
  *(undefined4 *)(iVar14 + 0x2c) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x28) = uVar22;
  *(undefined4 *)(iVar14 + 0x2c) = uVar21;
  local_3c = s_cState_ShuffleMove_001adf6c;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],6,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0x84);
  uVar19 = *(undefined4 *)(iVar8 + 0x88);
  uVar20 = *(undefined4 *)(iVar8 + 0x80);
  *(undefined4 *)(iVar14 + 0x30) = *(undefined4 *)(iVar8 + 0x7c);
  *(undefined4 *)(iVar14 + 0x34) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x30) = uVar13;
  *(undefined4 *)(iVar14 + 0x34) = uVar19;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x30) = uVar22;
  *(undefined4 *)(iVar14 + 0x34) = uVar21;
  local_3c = s_cState_ShuffleTurn1_001adf80;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],7,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0x94);
  uVar19 = *(undefined4 *)(iVar8 + 0x98);
  uVar20 = *(undefined4 *)(iVar8 + 0x90);
  *(undefined4 *)(iVar14 + 0x38) = *(undefined4 *)(iVar8 + 0x8c);
  *(undefined4 *)(iVar14 + 0x3c) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x38) = uVar13;
  *(undefined4 *)(iVar14 + 0x3c) = uVar19;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x38) = uVar22;
  *(undefined4 *)(iVar14 + 0x3c) = uVar21;
  local_3c = s_cState_RoundMove_001adf94;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],8,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0xa0);
  uVar19 = *(undefined4 *)(iVar8 + 0xa4);
  uVar20 = *(undefined4 *)(iVar8 + 0xa8);
  *(undefined4 *)(iVar14 + 0x40) = *(undefined4 *)(iVar8 + 0x9c);
  *(undefined4 *)(iVar14 + 0x44) = uVar13;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x40) = uVar19;
  *(undefined4 *)(iVar14 + 0x44) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x40) = uVar22;
  *(undefined4 *)(iVar14 + 0x44) = uVar21;
  local_3c = s_cState_TargetMove_001adfa8;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],9,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0xb0);
  uVar19 = *(undefined4 *)(iVar8 + 0xb4);
  uVar20 = *(undefined4 *)(iVar8 + 0xb8);
  *(undefined4 *)(iVar14 + 0x48) = *(undefined4 *)(iVar8 + 0xac);
  *(undefined4 *)(iVar14 + 0x4c) = uVar13;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x48) = uVar19;
  *(undefined4 *)(iVar14 + 0x4c) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x48) = uVar22;
  *(undefined4 *)(iVar14 + 0x4c) = uVar21;
  local_3c = s_cState_TargetWait_001adfbc;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],10,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0xc0);
  uVar19 = *(undefined4 *)(iVar8 + 0xc4);
  uVar20 = *(undefined4 *)(iVar8 + 200);
  *(undefined4 *)(iVar14 + 0x50) = *(undefined4 *)(iVar8 + 0xbc);
  *(undefined4 *)(iVar14 + 0x54) = uVar13;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x50) = uVar19;
  *(undefined4 *)(iVar14 + 0x54) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x50) = uVar22;
  *(undefined4 *)(iVar14 + 0x54) = uVar21;
  local_3c = s_cState_Reaction_001adfd0;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],0xb,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0xd0);
  uVar19 = *(undefined4 *)(iVar8 + 0xd4);
  uVar20 = *(undefined4 *)(iVar8 + 0xd8);
  *(undefined4 *)(iVar14 + 0x58) = *(undefined4 *)(iVar8 + 0xcc);
  *(undefined4 *)(iVar14 + 0x5c) = uVar13;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x58) = uVar19;
  *(undefined4 *)(iVar14 + 0x5c) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x58) = uVar22;
  *(undefined4 *)(iVar14 + 0x5c) = uVar21;
  local_3c = s_cState_Die_001adfe0;
  local_40 = uVar12;
  func_0010BEC4(objStack_308[0],0xc,(int *)&local_40);
  iVar14 = *(int *)(iVar7 + -0xa8);
  uVar13 = *(undefined4 *)(iVar8 + 0xe0);
  uVar19 = *(undefined4 *)(iVar8 + 0xe4);
  uVar20 = *(undefined4 *)(iVar8 + 0xe8);
  *(undefined4 *)(iVar14 + 0x60) = *(undefined4 *)(iVar8 + 0xdc);
  *(undefined4 *)(iVar14 + 100) = uVar13;
  iVar14 = *(int *)(iVar7 + -0xa4);
  *(undefined4 *)(iVar14 + 0x60) = uVar19;
  *(undefined4 *)(iVar14 + 100) = uVar20;
  iVar14 = *(int *)(iVar7 + -0xa0);
  *(undefined4 *)(iVar14 + 0x60) = uVar22;
  *(undefined4 *)(iVar14 + 100) = uVar21;
  uVar12 = func_00588BE4(iVar18);
  puVar10 = DAT_001ada10;
  if (uVar12 == *DAT_001ada10) {
    func_0065AC0C((undefined4 *)objStack_308[0],4);
  }
  else if ((*(char *)(iVar7 + 0x44) == '\0') || (bVar4 = func_00588BF0(iVar18,0), bVar4)) {
    func_0065AC0C((undefined4 *)objStack_308[0],2);
  }
  else {
    func_0065AC0C((undefined4 *)objStack_308[0],0);
  }
  *(undefined1 *)(iVar7 + -0x1ff) = 2;
  *(undefined1 *)(iVar7 + -0x1fe) = 0xff;
  *(undefined1 *)(iVar7 + -0x1fd) = 0;
  func_002B1440(iVar18,-1,0x7fff,0);
  pfVar17 = (float *)0xffffffff;
  objStack_308[2] = 0x7fff;
  objStack_308[0] = 0xc;
  objStack_308[1] = 0;
  func_004FBA18(iVar18,4,0xff,-1,0xc,0,0x7fff,DAT_001ae2c8,fVar16);
  *(undefined4 *)(objStack_308[4] + 0xf8) = *(undefined4 *)(objStack_308[3] + 0x1b8);
  uVar12 = func_00588BE4(iVar18);
  piVar5 = DAT_001ae2cc;
  if ((((uVar12 == *puVar10) && (0 < *(short *)((int)param_2 + 0x5a))) &&
      (iVar14 = func_0052FBDC(*DAT_001ae2cc + 0x3dbbc,(int)*(short *)((int)param_2 + 0x5a),0),
      iVar14 != 0)) &&
     (func_00230610(iVar14 + 0x7e0,*(undefined4 *)(iVar7 + -0x6b0)),
     *(short *)((int)param_2 + 0x2e) == 0)) {
    pfVar17 = (float *)(iVar7 + 0x34);
    fVar16 = *(float *)(iVar8 + 0xec);
    uVar13 = *(undefined4 *)(iVar8 + 0xf0);
    *(int *)(iVar7 + 0x30) = iVar18;
    *pfVar17 = fVar16;
    *(undefined4 *)(iVar7 + 0x38) = uVar13;
    *(int *)(iVar14 + 0xa98) = iVar7 + 0x2c;
  }
  func_004F5BD8(iVar18,(uint *)0x0,(int **)0x0,pfVar17);
  uVar12 = func_00588BE4(iVar18);
  if (uVar12 == *puVar10) {
    if (*(short *)((int)param_2 + 0x2e) == 0) {
      iVar8 = 1;
      do {
        func_0010E3C4(objStack_308,param_2,0x2c4);
        objStack_308[0] = func_0019B04C(*puVar10);
        func_004C43E0(*piVar5,(int *)objStack_308);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 8);
    }
    else {
      puVar6 = (undefined4 *)func_0052FBA0(*piVar5 + 0x3dbbc,param_2[0x13]);
      if (puVar6 != (undefined4 *)0x0) {
        if (((*DAT_001ae2d0 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_001ae2d0), iVar8 != 0))
        {
          *DAT_001ae2d4 = DAT_001ae2d8;
        }
        iVar8 = (**(code **)*puVar6)(puVar6,DAT_001ae2d4);
        if (iVar8 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        puVar6[*(short *)((int)param_2 + 0x2e) + 0x25f] = *(undefined4 *)(iVar7 + -0x6b0);
      }
    }
  }
  return iVar18;
}

