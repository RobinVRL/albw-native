#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_0032427C(int param_1,float fparam_0,float fparam_1);
extern int func_0036CF6C(undefined4 *param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00657FA0(undefined4 *param_1,undefined1 param_2);
extern float fRam00158880;
extern int iRam00158478;
extern int iRam00158480;
extern int iRam00158494;
extern undefined4 uRam00158884;
extern undefined4 uRam00158888;
extern undefined4 *puRam00158474;
extern undefined4 *puRam0015847c;
extern uint *DAT_00158458;
extern int DAT_0015845c;
extern undefined4 DAT_00158460;
extern undefined *DAT_00158464;
extern undefined4 DAT_00158468;
extern undefined4 *DAT_0015846c;
extern int DAT_00158470;
extern char s_cState_AttackPlayerEd_0015882c[];
extern char s_cState_AttackPlayerMd_00158814[];
extern char s_cState_AttackPlayerSt_001587fc[];
extern char s_cState_Die_00158874[];
extern char s_cState_Reaction_00158864[];
extern char s_cState_RotateSt_00158844[];
extern char s_cState_Rotate_00158854[];
extern char s_cState_Wait_001584b8[];
extern char s_cState_WalkEd_001584a8[];
extern char s_cState_WalkMd_00158498[];
extern char s_cState_WalkSt_00158484[];

// USA 0015807C <- EU 00158080 (Ghidra, non-matching)
// GLOBAL DAT_00158458 uint *
// GLOBAL DAT_0015845c int
// GLOBAL DAT_00158460 undefined4
// GLOBAL DAT_00158464 undefined *
// GLOBAL DAT_00158468 undefined4
// GLOBAL DAT_0015846c undefined4 *
// GLOBAL DAT_00158470 int
// GLOBAL UNK_00158474 undefined4 *
// GLOBAL UNK_00158478 int
// GLOBAL UNK_0015847c undefined *
// GLOBAL UNK_00158480 int
// GLOBAL UNK_00158494 int
// GLOBAL UNK_00158880 float
// GLOBAL UNK_00158884 undefined4
// GLOBAL UNK_00158888 undefined4
// GLOBAL s_cState_AttackPlayerEd_0015882c string
// GLOBAL s_cState_AttackPlayerMd_00158814 string
// GLOBAL s_cState_AttackPlayerSt_001587fc string
// GLOBAL s_cState_Die_00158874 string
// GLOBAL s_cState_Reaction_00158864 string
// GLOBAL s_cState_RotateSt_00158844 string
// GLOBAL s_cState_Rotate_00158854 string
// GLOBAL s_cState_Wait_001584b8 string
// GLOBAL s_cState_WalkEd_001584a8 string
// GLOBAL s_cState_WalkMd_00158498 string
// GLOBAL s_cState_WalkSt_00158484 string

int func_0015807C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_40 (*(int *)(albw_frame + 0x0))
  #define pcStack_3c (*(char * *)(albw_frame + 0x4))
  piVar2 = func_004FD464(param_1,param_2,DAT_00158458);
  iVar4 = DAT_0015845c;
  *piVar2 = DAT_0015845c;
  piVar2[200] = iVar4 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 1;
  puVar3[10] = 0;
  uVar14 = DAT_00158460;
  puVar3[0xb] = 0;
  puVar3[0xc] = uVar14;
  iVar4 = func_00100118((int)(puVar3 + 0xd),DAT_00158464,0x10,8);
  *(int *)(iVar4 + 0x80) = 0;
  *(undefined4 *)(iVar4 + 0x84) = 0;
  *(undefined4 *)(iVar4 + 0x88) = 0;
  *(undefined4 *)(iVar4 + 0x8c) = 0;
  if (iVar4 + 0x90 != 0) {
    *(int *)(iVar4 + 0x80) = iVar4 + 0x90;
    *(undefined4 *)(iVar4 + 0x84) = 10;
  }
  puVar3 = DAT_0015846c;
  uVar17 = DAT_00158468;
  uVar18 = CONCAT44(uVar14,DAT_00158468);
  *(undefined4 *)(iVar4 + 0x108) = DAT_00158468;
  *(undefined4 *)(iVar4 + 0x10c) = uVar17;
  *(undefined1 *)(iVar4 + 0x110) = 0;
  *(undefined4 *)(iVar4 + 0x114) = 0;
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  iVar11 = iVar4 + -0x8f0;
  *(undefined4 *)(iVar4 + 0x118) = *puVar3;
  *(undefined4 *)(iVar4 + 0x11c) = uVar9;
  *(undefined4 *)(iVar4 + 0x120) = uVar10;
  *(undefined4 *)(iVar4 + 0x124) = *(undefined4 *)(iVar4 + -0x520);
  *(undefined4 *)(iVar4 + 0x128) = *(undefined4 *)(iVar4 + -0x51c);
  *(undefined4 *)(iVar4 + 300) = *(undefined4 *)(iVar4 + -0x518);
  *(undefined4 *)(iVar4 + 0x130) = 0;
  *(undefined4 *)(iVar4 + 0x134) = 0;
  *(undefined1 *)(iVar4 + 0x138) = 0;
  *(undefined1 *)(iVar4 + 0x139) = 0;
  *(undefined1 *)(iVar4 + 0x140) = 1;
  *(undefined4 *)(iVar4 + 0x144) = 0;
  *(undefined4 *)(iVar4 + 0x148) = 0;
  *(undefined4 *)(iVar4 + 0x14c) = uVar14;
  *(undefined4 *)(iVar4 + 0x150) = uVar17;
  *(undefined4 *)(iVar4 + 0x158) = uVar17;
  *(undefined4 *)(iVar4 + -0x514) = uVar17;
  *(undefined4 *)(iVar4 + -0x510) = uVar17;
  *(undefined4 *)(iVar4 + -0x50c) = uVar17;
  func_004FB344(iVar11,0x13);
  iVar13 = DAT_00158470;
  uVar12 = 0;
  do {
    func_004FACA4(iVar11,uVar12,(int *)(iVar13 + uVar12 * 8));
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x13);
  func_004FB468(iVar11);
  func_004FABDC(iVar11,0,0xffffffff,0);
  func_004FB4E0(iVar11,ALBW_AS_F32(((ulonglong)uVar18 >> 0x20)));
  iVar13 = *(int *)(iVar4 + -0x4e0);
  uVar15 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(*(int *)(iVar13 + 0x14) + 0x14)),3);
  uVar12 = func_00111A64((uint *)*puRam00158474);
  iVar13 = *(int *)(iVar13 + 0x14);
  puVar3 = (undefined4 *)(iVar4 + -0x34);
  fVar16 = (float)VectorUnsignedToFloat
                            ((int)((ulonglong)uVar15 * (ulonglong)uVar12 >> 0x20),
                             (byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(iVar13 + 8) != fVar16) {
    *(float *)(iVar13 + 8) = fVar16;
    *(undefined1 *)(iVar13 + 0x26) = 1;
  }
  *(int *)(iVar4 + -0x20) = iVar11;
  *(undefined1 *)(iVar4 + -0x2e) = 0xb;
  iVar5 = func_0010BA78(0xb0);
  iVar13 = iRam00158478;
  *(int *)(iVar4 + -0x1c) = iVar5;
  *(uint *)(iVar4 + -0x18) = iVar5 + (uint)*(byte *)(iVar4 + -0x2e) * 8;
  iVar8 = 0xb;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar14 = *(undefined4 *)(iVar13 + 0xc0);
    iVar8 = iVar8 + -1;
    puVar6[2] = *(undefined4 *)(iVar13 + 0xbc);
    puVar6[3] = uVar14;
    uVar14 = *(undefined4 *)(iVar13 + 0xc0);
    puVar6[4] = *(undefined4 *)(iVar13 + 0xbc);
    puVar6[5] = uVar14;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)(iVar4 + -0x2e);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  *(undefined4 **)(iVar4 + -0x14) = puVar6;
  if (uVar12 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = *(undefined4 *)(iVar13 + 0x18);
      *puVar6 = *(undefined4 *)(iVar13 + 0x14);
      puVar6[1] = uVar14;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar14 = *(undefined4 *)(iVar13 + 0x18);
      puVar7[2] = *(undefined4 *)(iVar13 + 0x14);
      puVar7[3] = uVar14;
      uVar14 = *(undefined4 *)(iVar13 + 0x18);
      puVar7[4] = *(undefined4 *)(iVar13 + 0x14);
      puVar7[5] = uVar14;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 0xb;
    iVar5 = func_00100118((int)(puVar6 + 2),puRam0015847c,0x24,0xb);
  }
  if (iVar5 != 0) {
    *(int *)(iVar4 + -0x28) = iVar5;
    *(undefined4 *)(iVar4 + -0x2c) = 0xb;
  }
  iVar5 = iRam00158480;
  *(undefined4 **)(iVar4 + -0x59c) = puVar3;
  iVar8 = iRam00158494;
  *(undefined2 *)(iVar5 + iVar11) = 0xb;
  pcStack_3c = s_cState_WalkSt_00158484;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,0,&iStack_40);
  puVar6 = *(undefined4 **)(iVar4 + -0x1c);
  uVar14 = *(undefined4 *)(iVar13 + 0xc);
  uVar9 = *(undefined4 *)(iVar13 + 8);
  uVar17 = *(undefined4 *)(iVar13 + 0x10);
  uVar19 = *(undefined8 *)(iVar13 + 0x14);
  *puVar6 = *(undefined4 *)(iVar13 + 4);
  puVar6[1] = uVar9;
  puVar6 = *(undefined4 **)(iVar4 + -0x18);
  *puVar6 = uVar14;
  puVar6[1] = uVar17;
  puVar6 = *(undefined4 **)(iVar4 + -0x14);
  *puVar6 = (int)uVar19;
  puVar6[1] = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_WalkMd_00158498;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,1,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar9 = *(undefined4 *)(iVar13 + 0x20);
  uVar14 = *(undefined4 *)(iVar13 + 0x24);
  uVar17 = *(undefined4 *)(iVar13 + 0x28);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar13 + 0x1c);
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 8) = uVar14;
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 8) = (int)uVar19;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_WalkEd_001584a8;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,2,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar14 = *(undefined4 *)(iVar13 + 0x34);
  uVar17 = *(undefined4 *)(iVar13 + 0x30);
  uVar9 = *(undefined4 *)(iVar13 + 0x38);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar13 + 0x2c);
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x10) = (int)uVar19;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_Wait_001584b8;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,3,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar14 = *(undefined4 *)(iVar13 + 0x40);
  uVar17 = *(undefined4 *)(iVar13 + 0x44);
  uVar9 = *(undefined4 *)(iVar13 + 0x48);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar13 + 0x3c);
  *(undefined4 *)(iVar5 + 0x1c) = uVar14;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x18) = uVar17;
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x18) = (int)uVar19;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_AttackPlayerSt_001587fc;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,4,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar9 = *(undefined4 *)(iVar13 + 0x50);
  uVar14 = *(undefined4 *)(iVar13 + 0x54);
  uVar17 = *(undefined4 *)(iVar13 + 0x58);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar13 + 0x4c);
  *(undefined4 *)(iVar5 + 0x24) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x20) = uVar14;
  *(undefined4 *)(iVar5 + 0x24) = uVar17;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x20) = (int)uVar19;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_AttackPlayerMd_00158814;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,5,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar14 = *(undefined4 *)(iVar13 + 0x60);
  uVar17 = *(undefined4 *)(iVar13 + 100);
  uVar9 = *(undefined4 *)(iVar13 + 0x68);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar13 + 0x5c);
  *(undefined4 *)(iVar5 + 0x2c) = uVar14;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x28) = uVar17;
  *(undefined4 *)(iVar5 + 0x2c) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x28) = (int)uVar19;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_AttackPlayerEd_0015882c;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,6,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar17 = *(undefined4 *)(iVar13 + 0x70);
  uVar9 = *(undefined4 *)(iVar13 + 0x74);
  uVar14 = *(undefined4 *)(iVar13 + 0x78);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar13 + 0x6c);
  *(undefined4 *)(iVar5 + 0x34) = uVar17;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x30) = uVar9;
  *(undefined4 *)(iVar5 + 0x34) = uVar14;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x30) = (int)uVar19;
  *(int *)(iVar5 + 0x34) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_RotateSt_00158844;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,7,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar14 = *(undefined4 *)(iVar13 + 0x80);
  uVar17 = *(undefined4 *)(iVar13 + 0x84);
  uVar9 = *(undefined4 *)(iVar13 + 0x88);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(iVar13 + 0x7c);
  *(undefined4 *)(iVar5 + 0x3c) = uVar14;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x38) = uVar17;
  *(undefined4 *)(iVar5 + 0x3c) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x38) = (int)uVar19;
  *(int *)(iVar5 + 0x3c) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_Rotate_00158854;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,8,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar17 = *(undefined4 *)(iVar13 + 0x90);
  uVar14 = *(undefined4 *)(iVar13 + 0x94);
  uVar9 = *(undefined4 *)(iVar13 + 0x98);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar13 + 0x8c);
  *(undefined4 *)(iVar5 + 0x44) = uVar17;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x40) = uVar14;
  *(undefined4 *)(iVar5 + 0x44) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x40) = (int)uVar19;
  *(int *)(iVar5 + 0x44) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_Reaction_00158864;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,9,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar14 = *(undefined4 *)(iVar13 + 0xa0);
  uVar17 = *(undefined4 *)(iVar13 + 0xa4);
  uVar9 = *(undefined4 *)(iVar13 + 0xa8);
  *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar13 + 0x9c);
  *(undefined4 *)(iVar5 + 0x4c) = uVar14;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x48) = uVar17;
  *(undefined4 *)(iVar5 + 0x4c) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x48) = (int)uVar19;
  *(int *)(iVar5 + 0x4c) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_3c = s_cState_Die_00158874;
  iStack_40 = iVar8;
  func_0010BEC4((int)puVar3,10,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar14 = *(undefined4 *)(iVar13 + 0xb4);
  uVar9 = *(undefined4 *)(iVar13 + 0xb8);
  uVar17 = *(undefined4 *)(iVar13 + 0xb0);
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar13 + 0xac);
  *(undefined4 *)(iVar5 + 0x54) = uVar17;
  iVar13 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar13 + 0x50) = uVar14;
  *(undefined4 *)(iVar13 + 0x54) = uVar9;
  iVar13 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar13 + 0x50) = (int)uVar19;
  *(int *)(iVar13 + 0x54) = (int)((ulonglong)uVar19 >> 0x20);
  func_00657FA0(puVar3,3);
  func_0032427C(iVar4,*(float *)(iVar4 + -0x42c),fRam00158880);
  puVar6 = (undefined4 *)func_0010BAB4(0x18);
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar3 = func_0036CF6C(puVar6,4);
  }
  *(undefined4 **)(iVar4 + 0x114) = puVar3;
  puVar3 = (undefined4 *)func_0010BAB4(0x1c);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[2] = uRam00158884;
    uVar14 = (undefined4)uVar18;
    *puVar3 = uVar14;
    puVar3[1] = (int)((ulonglong)uVar18 >> 0x20);
    puVar3[3] = uVar14;
    puVar3[4] = uVar14;
    puVar3[5] = 0;
    puVar3[6] = 0;
  }
  *(undefined4 **)(iVar4 + 0x134) = puVar3;
  func_002AF5FC(iVar11,0x12,-1);
  *(undefined1 *)(iVar4 + -0x173) = 0xf;
  *(undefined1 *)(iVar4 + -0x172) = 0xff;
  *(undefined1 *)(iVar4 + -0x171) = 0;
  func_004FC218(iVar11,'\x0e',-1,0x7fff);
  func_002AED68(iVar11,0x12);
  uVar14 = uRam00158888;
  *(undefined4 *)(iVar4 + 0x148) = 0xb4;
  *(undefined4 *)(iVar4 + 0x14c) = uVar14;
  *(undefined4 *)(iVar4 + 0x144) = 0xb4;
  return iVar11;
}

