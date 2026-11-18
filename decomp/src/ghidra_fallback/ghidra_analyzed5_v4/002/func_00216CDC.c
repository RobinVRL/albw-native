#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00214C68(int param_1);
extern int func_0021529C(int param_1);
extern int func_00215EC4(int param_1);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_003C2630(int param_1);
extern int func_003C30DC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4, float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB024(int param_1);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0058A7D4(void);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern float fRam00217940;
extern float fRam00217944;
extern int iRam0021711c;
extern int iRam00217584;
extern int iRam00217598;
extern undefined4 uRam00217938;
extern int *piRam00217934;
extern undefined4 *puRam00217580;
extern undefined4 *puRam00217630;
extern undefined4 *puRam0021793c;
extern uint *DAT_002170e0;
extern int DAT_002170e4;
extern float DAT_002170e8;
extern float DAT_002170ec;
extern undefined4 DAT_002170f0;
extern undefined *DAT_002170f4;
extern undefined4 *DAT_002170f8;
extern undefined4 DAT_002170fc;
extern undefined4 *DAT_00217100;
extern uint DAT_00217104;
extern undefined4 DAT_00217108;
extern int DAT_0021710c;
extern undefined4 DAT_00217110;
extern undefined4 DAT_00217114;
extern int DAT_00217118;
extern char s_cState_Die_00217658[];
extern char s_cState_DiveGround_00217634[];
extern char s_cState_EscapeAttack_002175ac[];
extern char s_cState_Fall_002175e4[];
extern char s_cState_Fly_00217624[];
extern char s_cState_InGround_0021759c[];
extern char s_cState_InSandPillar_002175c0[];
extern char s_cState_Jump_00217618[];
extern char s_cState_Reaction_00217648[];
extern char s_cState_RefrectWall_00217604[];
extern char s_cState_Separate_002175d4[];
extern char s_cState_Standby_00217588[];
extern char s_cState_TouchDown_002175f0[];

// USA 00216CDC <- EU 00216CDC (Ghidra, non-matching)
// GLOBAL DAT_002170e0 uint *
// GLOBAL DAT_002170e4 int
// GLOBAL DAT_002170e8 float
// GLOBAL DAT_002170ec float
// GLOBAL DAT_002170f0 undefined4
// GLOBAL DAT_002170f4 undefined *
// GLOBAL DAT_002170f8 undefined4 *
// GLOBAL DAT_002170fc undefined4
// GLOBAL DAT_00217100 undefined4 *
// GLOBAL DAT_00217104 uint
// GLOBAL DAT_00217108 undefined4
// GLOBAL DAT_0021710c int
// GLOBAL DAT_00217110 undefined4
// GLOBAL DAT_00217114 undefined4
// GLOBAL DAT_00217118 int
// GLOBAL UNK_0021711c int
// GLOBAL UNK_00217580 undefined *
// GLOBAL UNK_00217584 int
// GLOBAL UNK_00217598 int
// GLOBAL UNK_00217630 undefined4 *
// GLOBAL UNK_00217934 int *
// GLOBAL UNK_00217938 undefined4
// GLOBAL UNK_0021793c uint *
// GLOBAL UNK_00217940 float
// GLOBAL UNK_00217944 float
// GLOBAL s_cState_Die_00217658 string
// GLOBAL s_cState_DiveGround_00217634 string
// GLOBAL s_cState_EscapeAttack_002175ac string
// GLOBAL s_cState_Fall_002175e4 string
// GLOBAL s_cState_Fly_00217624 string
// GLOBAL s_cState_InGround_0021759c string
// GLOBAL s_cState_InSandPillar_002175c0 string
// GLOBAL s_cState_Jump_00217618 string
// GLOBAL s_cState_Reaction_00217648 string
// GLOBAL s_cState_RefrectWall_00217604 string
// GLOBAL s_cState_Separate_002175d4 string
// GLOBAL s_cState_Standby_00217588 string
// GLOBAL s_cState_TouchDown_002175f0 string

/* WARNING: Variable defined which should be unmapped: objStack_60 */

int func_00216CDC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  float *pfVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_60 ((uint *)(albw_frame + 0x0))
  #define iStack_50 (*(int *)(albw_frame + 0x10))
  #define pcStack_4c (*(char * *)(albw_frame + 0x14))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_28 (*(uint * *)(albw_frame + 0x38))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = func_004FD464(param_1,param_2,DAT_002170e0);
  iVar6 = DAT_002170e4;
  *piVar4 = DAT_002170e4;
  piVar4[200] = iVar6 + 0x84;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  fVar22 = DAT_002170e8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5 = func_003C30DC(puVar5 + 9,puVar5 + -0x22f,puVar5 + -0x13b,0,fVar22,DAT_002170ec);
  *puVar5 = DAT_002170f0;
  puVar2 = DAT_002170f4;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x21] = 0;
  puVar5[0x22] = 0;
  iVar6 = func_00100118((int)(puVar5 + 0x23),puVar2,0x28,3);
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + -4) = 0;
    *(int *)(iVar6 + -0x10) = iVar6;
    *(undefined4 *)(iVar6 + -0xc) = 3;
    *(undefined4 *)(iVar6 + -8) = 0;
  }
  uVar13 = DAT_002170fc;
  puVar5 = DAT_002170f8;
  uVar17 = DAT_002170f8[1];
  uVar18 = DAT_002170f8[2];
  uVar23 = CONCAT44(DAT_002170fc,fVar22);
  *(undefined4 *)(iVar6 + 0x78) = *DAT_002170f8;
  *(undefined4 *)(iVar6 + 0x7c) = uVar17;
  *(undefined4 *)(iVar6 + 0x80) = uVar18;
  uVar16 = DAT_00217104;
  uVar17 = puVar5[1];
  uVar18 = puVar5[2];
  uVar24 = (ulonglong)DAT_00217104;
  *(undefined4 *)(iVar6 + 0x84) = *puVar5;
  *(undefined4 *)(iVar6 + 0x88) = uVar17;
  *(undefined4 *)(iVar6 + 0x8c) = uVar18;
  uVar17 = puVar5[1];
  uVar18 = puVar5[2];
  *(undefined4 *)(iVar6 + 0x90) = *puVar5;
  *(undefined4 *)(iVar6 + 0x94) = uVar17;
  *(undefined4 *)(iVar6 + 0x98) = uVar18;
  uVar17 = puVar5[1];
  uVar18 = puVar5[2];
  *(undefined4 *)(iVar6 + 0x9c) = *puVar5;
  *(undefined4 *)(iVar6 + 0xa0) = uVar17;
  *(undefined4 *)(iVar6 + 0xa4) = uVar18;
  uVar17 = *DAT_00217100;
  uVar18 = DAT_00217100[1];
  *(undefined4 *)(iVar6 + 0xb0) = DAT_00217100[2];
  *(undefined4 *)(iVar6 + 0xa8) = uVar17;
  *(undefined4 *)(iVar6 + 0xac) = uVar18;
  uVar17 = puVar5[1];
  uVar18 = puVar5[2];
  *(undefined4 *)(iVar6 + 0xb4) = *puVar5;
  *(undefined4 *)(iVar6 + 0xb8) = uVar17;
  *(undefined4 *)(iVar6 + 0xbc) = uVar18;
  uVar17 = puVar5[1];
  uVar18 = puVar5[2];
  *(undefined4 *)(iVar6 + 0xc0) = *puVar5;
  *(undefined4 *)(iVar6 + 0xc4) = uVar17;
  *(undefined4 *)(iVar6 + 200) = uVar18;
  *(undefined4 *)(iVar6 + 0xd4) = *(undefined4 *)(iVar6 + -0x594);
  *(undefined4 *)(iVar6 + 0xcc) = *(undefined4 *)(iVar6 + -0x59c);
  *(undefined4 *)(iVar6 + 0xd0) = *(undefined4 *)(iVar6 + -0x598);
  *(undefined4 *)(iVar6 + 0xd8) = uVar13;
  *(undefined4 *)(iVar6 + 0xdc) = uVar13;
  *(undefined4 *)(iVar6 + 0xe0) = uVar13;
  *(undefined4 *)(iVar6 + 0xe4) = 0;
  *(undefined4 *)(iVar6 + 0xe8) = 0;
  *(undefined4 *)(iVar6 + 0xec) = 0;
  *(undefined4 *)(iVar6 + 0xf0) = 0;
  *(undefined4 *)(iVar6 + 0xf4) = uVar13;
  *(undefined4 *)(iVar6 + 0xf8) = 0;
  *(undefined4 *)(iVar6 + 0xfc) = 0;
  *(undefined4 *)(iVar6 + 0x104) = 0;
  iVar15 = iVar6 + -0x96c;
  objStack_60[0] = iVar6 - 0x16c;
  uVar13 = puVar5[1];
  uVar17 = puVar5[2];
  *(undefined4 *)(iVar6 + 0x108) = *puVar5;
  *(undefined4 *)(iVar6 + 0x10c) = uVar13;
  *(undefined4 *)(iVar6 + 0x110) = uVar17;
  uVar13 = *puVar5;
  uVar17 = puVar5[1];
  uVar18 = puVar5[2];
  *(undefined4 *)(iVar6 + 0x120) = 3;
  *(undefined4 *)(iVar6 + 0x124) = 0;
  *(undefined4 *)(iVar6 + 0x128) = 0;
  *(undefined4 *)(iVar6 + 300) = 0;
  iVar9 = DAT_0021710c;
  *(undefined4 *)(iVar6 + 0x114) = uVar13;
  *(undefined4 *)(iVar6 + 0x118) = uVar17;
  *(undefined4 *)(iVar6 + 0x11c) = uVar18;
  *(uint *)(iVar6 + 0x130) = uVar16;
  *(undefined4 *)(iVar6 + 0x134) = 0;
  *(undefined4 *)(iVar6 + 0x138) = 0;
  uVar13 = DAT_00217108;
  *(uint *)(iVar6 + 0x13c) = uVar16;
  *(undefined4 *)(iVar6 + 0x144) = uVar13;
  *(undefined4 *)(iVar6 + 0x140) = 0;
  *(uint *)(iVar6 + 0x148) = uVar16;
  *(undefined4 *)(iVar6 + 0x14c) = 0;
  *(undefined4 *)(iVar6 + 0x150) = 0;
  *(uint *)(iVar6 + 0x154) = uVar16;
  *(undefined4 *)(iVar6 + 0x158) = 0;
  *(undefined4 *)(iVar6 + 0x15c) = 0;
  *(uint *)(iVar6 + 0x160) = uVar16;
  *(undefined4 *)(iVar6 + 0x164) = 0;
  *(undefined4 *)(iVar6 + 0x168) = 0;
  *(uint *)(iVar6 + 0x16c) = uVar16;
  *(undefined4 *)(iVar6 + 0x170) = 0;
  *(undefined4 *)(iVar6 + 0x174) = 0;
  *(uint *)(iVar6 + 0x178) = uVar16;
  *(undefined4 *)(iVar6 + 0x17c) = 0;
  *(undefined4 *)(iVar6 + 0x180) = 0;
  *(uint *)(iVar6 + 0x184) = uVar16;
  *(undefined4 *)(iVar6 + 0x188) = 0;
  uVar13 = *(undefined4 *)(iVar9 + 0xc);
  *(undefined4 *)(iVar6 + 0x194) = *(undefined4 *)(iVar9 + 8);
  *(undefined4 *)(iVar6 + 0x198) = uVar13;
  uVar13 = DAT_00217110;
  *(undefined4 *)(iVar6 + 0x18c) = DAT_00217110;
  *(int *)(iVar6 + 400) = iVar15;
  uVar17 = *(undefined4 *)(iVar9 + 0x10);
  uVar18 = *(undefined4 *)(iVar9 + 0x14);
  *(undefined4 *)(iVar6 + 0x19c) = uVar13;
  *(int *)(iVar6 + 0x1a0) = iVar15;
  *(undefined4 *)(iVar6 + 0x1a4) = uVar17;
  *(undefined4 *)(iVar6 + 0x1a8) = uVar18;
  uVar17 = *(undefined4 *)(iVar9 + 0x18);
  objStack_60[1] = iVar6 + 0x1ac;
  *(undefined4 *)(iVar6 + 0x1b8) = *(undefined4 *)(iVar9 + 0x1c);
  *(undefined4 *)objStack_60[1] = uVar13;
  *(int *)(iVar6 + 0x1b0) = iVar15;
  *(undefined4 *)(iVar6 + 0x1b4) = uVar17;
  uVar17 = *(undefined4 *)(iVar9 + 0x20);
  uVar18 = *(undefined4 *)(iVar9 + 0x24);
  *(undefined4 *)(iVar6 + 0x1bc) = uVar13;
  *(int *)(iVar6 + 0x1c0) = iVar15;
  *(undefined4 *)(iVar6 + 0x1c4) = uVar17;
  *(undefined4 *)(iVar6 + 0x1c8) = uVar18;
  *(undefined1 *)(iVar6 + 0x1cc) = 0;
  *(undefined1 *)(iVar6 + 0x1cd) = 0;
  *(undefined1 *)(iVar6 + 0x1ce) = 0;
  *(undefined1 *)(iVar6 + 0x1cf) = 0;
  *(undefined1 *)(iVar6 + 0x1d0) = 0;
  *(undefined1 *)(iVar6 + 0x1d1) = 0;
  uVar13 = DAT_00217114;
  uVar17 = *puVar5;
  uVar18 = puVar5[1];
  *(undefined4 *)(iVar6 + 0x1dc) = puVar5[2];
  *(undefined4 *)(iVar6 + 0x1d4) = uVar17;
  *(undefined4 *)(iVar6 + 0x1d8) = uVar18;
  *(undefined1 *)(iVar6 + 0x1e0) = 0;
  *(undefined4 *)(iVar6 + -0x488) = uVar13;
  *(undefined4 *)(iVar6 + -0x484) = uVar13;
  *(undefined4 *)(iVar6 + -0x480) = uVar13;
  func_0021529C(iVar15);
  func_00214C68(iVar15);
  func_00215EC4(iVar15);
  func_004FB344(iVar15,6);
  iVar10 = DAT_00217118;
  uVar16 = 0;
  do {
    func_004FACA4(iVar15,uVar16,(int *)(iVar10 + uVar16 * 8));
    fVar22 = ALBW_AS_F32(uVar24);
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 6);
  func_004FB468(iVar15);
  pfVar14 = (float *)0x0;
  func_004FABDC(iVar15,0,0xffffffff,0);
  func_004F5BD8(iVar15,(uint *)0x0,(int **)0x0,pfVar14);
  *(int *)(iVar6 + -0x9c) = iVar15;
  puVar19 = (undefined4 *)(iVar6 + -0xb0);
  *(undefined1 *)(iVar6 + -0xaa) = 0xd;
  iVar7 = func_0010BA78(0xd0);
  iVar10 = iRam0021711c;
  *(int *)(iVar6 + -0x98) = iVar7;
  *(uint *)(iVar6 + -0x94) = iVar7 + (uint)*(byte *)(iVar6 + -0xaa) * 8;
  iVar12 = 0xd;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar13 = *(undefined4 *)(DAT_0021710c + 0x194);
    iVar12 = iVar12 + -1;
    puVar5[2] = *(undefined4 *)(DAT_0021710c + 400);
    puVar5[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar10 + 0x94);
    puVar5[4] = *(undefined4 *)(iVar10 + 0x90);
    puVar5[5] = uVar13;
    puVar5 = puVar5 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)(iVar6 + -0xaa);
  uVar16 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar16 << 3);
  *(undefined4 **)(iVar6 + -0x90) = puVar5;
  if (uVar16 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar9 + 0x6c);
      *puVar5 = *(undefined4 *)(iVar9 + 0x68);
      puVar5[1] = uVar13;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar16 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar13 = *(undefined4 *)(iVar9 + 0x6c);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x68);
      puVar8[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar9 + 0x6c);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x68);
      puVar8[5] = uVar13;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x1dc,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 0xd;
    iVar7 = func_00100118((int)(puVar5 + 2),puRam00217580,0x24,0xd);
  }
  if (iVar7 != 0) {
    *(int *)(iVar6 + -0xa4) = iVar7;
    *(undefined4 *)(iVar6 + -0xa8) = 0xd;
  }
  iVar7 = iRam00217584;
  *(undefined4 **)(iVar6 + -0x618) = puVar19;
  iVar12 = iRam00217598;
  *(undefined2 *)(iVar7 + iVar15) = 0xd;
  pcStack_4c = s_cState_Standby_00217588;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,0,&iStack_50);
  puVar5 = *(undefined4 **)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar9 + 0x2c);
  uVar17 = *(undefined4 *)(iVar9 + 0x30);
  uVar18 = *(undefined4 *)(iVar9 + 0x34);
  uVar20 = *(undefined4 *)(iVar9 + 0x38);
  uVar21 = *(undefined4 *)(iVar9 + 0x3c);
  *puVar5 = *(undefined4 *)(iVar9 + 0x28);
  puVar5[1] = uVar13;
  puVar5 = *(undefined4 **)(iVar6 + -0x94);
  *puVar5 = uVar17;
  puVar5[1] = uVar18;
  puVar5 = *(undefined4 **)(iVar6 + -0x90);
  *puVar5 = uVar20;
  puVar5[1] = uVar21;
  pcStack_4c = s_cState_InGround_0021759c;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,1,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar9 + 0x44);
  uVar17 = *(undefined4 *)(iVar9 + 0x48);
  uVar18 = *(undefined4 *)(iVar9 + 0x4c);
  uVar20 = *(undefined4 *)(iVar9 + 0x50);
  uVar21 = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar9 + 0x40);
  *(undefined4 *)(iVar7 + 0xc) = uVar13;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 8) = uVar17;
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 8) = uVar20;
  *(undefined4 *)(iVar7 + 0xc) = uVar21;
  pcStack_4c = s_cState_EscapeAttack_002175ac;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,2,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar9 + 0x5c);
  uVar17 = *(undefined4 *)(iVar9 + 0x60);
  uVar18 = *(undefined4 *)(iVar9 + 100);
  uVar20 = *(undefined4 *)(iVar9 + 0x68);
  uVar21 = *(undefined4 *)(iVar9 + 0x6c);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar9 + 0x58);
  *(undefined4 *)(iVar7 + 0x14) = uVar13;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 0x10) = uVar17;
  *(undefined4 *)(iVar7 + 0x14) = uVar18;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 0x10) = uVar20;
  *(undefined4 *)(iVar7 + 0x14) = uVar21;
  pcStack_4c = s_cState_InSandPillar_002175c0;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,3,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar9 + 0x74);
  uVar17 = *(undefined4 *)(iVar9 + 0x78);
  uVar18 = *(undefined4 *)(iVar9 + 0x7c);
  uVar20 = *(undefined4 *)(iVar9 + 0x80);
  uVar21 = *(undefined4 *)(iVar9 + 0x84);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar9 + 0x70);
  *(undefined4 *)(iVar7 + 0x1c) = uVar13;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 0x18) = uVar17;
  *(undefined4 *)(iVar7 + 0x1c) = uVar18;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 0x18) = uVar20;
  *(undefined4 *)(iVar7 + 0x1c) = uVar21;
  pcStack_4c = s_cState_Separate_002175d4;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,4,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar9 + 0x8c);
  uVar17 = *(undefined4 *)(iVar9 + 0x90);
  uVar18 = *(undefined4 *)(iVar9 + 0x94);
  uVar20 = *(undefined4 *)(iVar9 + 0x98);
  uVar21 = *(undefined4 *)(iVar9 + 0x9c);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar9 + 0x88);
  *(undefined4 *)(iVar7 + 0x24) = uVar13;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 0x20) = uVar17;
  *(undefined4 *)(iVar7 + 0x24) = uVar18;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 0x20) = uVar20;
  *(undefined4 *)(iVar7 + 0x24) = uVar21;
  pcStack_4c = s_cState_Fall_002175e4;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,5,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar9 + 0xa4);
  uVar17 = *(undefined4 *)(iVar9 + 0xa8);
  uVar18 = *(undefined4 *)(iVar9 + 0xac);
  uVar20 = *(undefined4 *)(iVar9 + 0xb0);
  uVar21 = *(undefined4 *)(iVar9 + 0xb4);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar9 + 0xa0);
  *(undefined4 *)(iVar7 + 0x2c) = uVar13;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 0x28) = uVar17;
  *(undefined4 *)(iVar7 + 0x2c) = uVar18;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 0x28) = uVar20;
  *(undefined4 *)(iVar7 + 0x2c) = uVar21;
  pcStack_4c = s_cState_TouchDown_002175f0;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,6,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar9 + 0xbc);
  uVar17 = *(undefined4 *)(iVar9 + 0xc0);
  uVar18 = *(undefined4 *)(iVar9 + 0xc4);
  uVar20 = *(undefined4 *)(iVar9 + 200);
  uVar21 = *(undefined4 *)(iVar9 + 0xcc);
  *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar9 + 0xb8);
  *(undefined4 *)(iVar7 + 0x34) = uVar13;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 0x30) = uVar17;
  *(undefined4 *)(iVar7 + 0x34) = uVar18;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 0x30) = uVar20;
  *(undefined4 *)(iVar7 + 0x34) = uVar21;
  pcStack_4c = s_cState_RefrectWall_00217604;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,7,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar9 + 0xd4);
  uVar17 = *(undefined4 *)(iVar9 + 0xd8);
  uVar18 = *(undefined4 *)(iVar9 + 0xdc);
  uVar20 = *(undefined4 *)(iVar9 + 0xe0);
  uVar21 = *(undefined4 *)(iVar9 + 0xe4);
  *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar9 + 0xd0);
  *(undefined4 *)(iVar7 + 0x3c) = uVar13;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 0x38) = uVar17;
  *(undefined4 *)(iVar7 + 0x3c) = uVar18;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 0x38) = uVar20;
  *(undefined4 *)(iVar7 + 0x3c) = uVar21;
  pcStack_4c = s_cState_Jump_00217618;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,8,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar21 = *(undefined4 *)(iVar9 + 0xec);
  uVar17 = *(undefined4 *)(iVar9 + 0xf0);
  uVar20 = *(undefined4 *)(iVar9 + 0xf4);
  uVar13 = *(undefined4 *)(iVar9 + 0x68);
  uVar18 = *(undefined4 *)(iVar9 + 0x6c);
  *(undefined4 *)(iVar7 + 0x40) = *(undefined4 *)(iVar9 + 0xe8);
  *(undefined4 *)(iVar7 + 0x44) = uVar21;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 0x40) = uVar17;
  *(undefined4 *)(iVar7 + 0x44) = uVar20;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 0x40) = uVar13;
  *(undefined4 *)(iVar7 + 0x44) = uVar18;
  pcStack_4c = s_cState_Fly_00217624;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,9,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar21 = puRam00217630[1];
  uVar20 = puRam00217630[2];
  uVar13 = puRam00217630[3];
  uVar17 = *(undefined4 *)(iVar10 + 8);
  uVar18 = *(undefined4 *)(iVar10 + 0xc);
  *(undefined4 *)(iVar7 + 0x48) = *puRam00217630;
  *(undefined4 *)(iVar7 + 0x4c) = uVar21;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 0x48) = uVar20;
  *(undefined4 *)(iVar7 + 0x4c) = uVar13;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 0x48) = uVar17;
  *(undefined4 *)(iVar7 + 0x4c) = uVar18;
  pcStack_4c = s_cState_DiveGround_00217634;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,10,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar10 + 0x14);
  uVar17 = *(undefined4 *)(iVar10 + 0x18);
  uVar18 = *(undefined4 *)(iVar10 + 0x1c);
  uVar20 = *(undefined4 *)(iVar10 + 0x20);
  uVar21 = *(undefined4 *)(iVar10 + 0x24);
  *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar10 + 0x10);
  *(undefined4 *)(iVar7 + 0x54) = uVar13;
  iVar7 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar7 + 0x50) = uVar17;
  *(undefined4 *)(iVar7 + 0x54) = uVar18;
  iVar7 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar7 + 0x50) = uVar20;
  *(undefined4 *)(iVar7 + 0x54) = uVar21;
  pcStack_4c = s_cState_Reaction_00217648;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,0xb,&iStack_50);
  iVar7 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar10 + 0x2c);
  uVar20 = *(undefined4 *)(iVar9 + 0x68);
  uVar21 = *(undefined4 *)(iVar9 + 0x6c);
  uVar17 = *(undefined4 *)(iVar10 + 0x30);
  uVar18 = *(undefined4 *)(iVar10 + 0x34);
  *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(iVar10 + 0x28);
  *(undefined4 *)(iVar7 + 0x5c) = uVar13;
  iVar9 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar9 + 0x58) = uVar17;
  *(undefined4 *)(iVar9 + 0x5c) = uVar18;
  iVar9 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar9 + 0x58) = uVar20;
  *(undefined4 *)(iVar9 + 0x5c) = uVar21;
  pcStack_4c = s_cState_Die_00217658;
  iStack_50 = iVar12;
  func_0010BEC4((int)puVar19,0xc,&iStack_50);
  iVar9 = *(int *)(iVar6 + -0x98);
  uVar13 = *(undefined4 *)(iVar10 + 0x3c);
  uVar17 = *(undefined4 *)(iVar10 + 0x40);
  uVar18 = *(undefined4 *)(iVar10 + 0x44);
  *(undefined4 *)(iVar9 + 0x60) = *(undefined4 *)(iVar10 + 0x38);
  *(undefined4 *)(iVar9 + 100) = uVar13;
  iVar9 = *(int *)(iVar6 + -0x94);
  *(undefined4 *)(iVar9 + 0x60) = uVar17;
  *(undefined4 *)(iVar9 + 100) = uVar18;
  iVar9 = *(int *)(iVar6 + -0x90);
  *(undefined4 *)(iVar9 + 0x60) = uVar20;
  *(undefined4 *)(iVar9 + 100) = uVar21;
  if (*(short *)(iVar6 + -0x936) == 0) {
    func_0065D9FC(puVar19,1);
  }
  else {
    bVar3 = func_00588BF0(iVar15,0);
    if (bVar3) {
      *(undefined1 *)(iVar6 + -0x695) = 1;
    }
    else {
      func_003C2630(iVar6 + -0x8c);
      func_0065D9FC(puVar19,0);
    }
  }
  uVar16 = local_28[0xa7];
  if (-1 < (int)uVar16) {
    iVar9 = *piRam00217934;
    iVar10 = func_00581B9C(iVar9);
    if ((iVar10 == 1) && (puVar11 = (uint *)func_00582250(iVar9), uVar16 < *puVar11)) {
      iVar9 = *(int *)(puVar11[2] + uVar16 * 4);
    }
    else {
      iVar9 = 0;
    }
    *(int *)(iVar6 + 0xe4) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(iVar6 + 0xe8) = *(undefined4 *)(iVar9 + 0x20);
      piVar4 = *(int **)(iVar9 + 0x28);
      if (piVar4 != (int *)0x0) {
        iVar9 = *(int *)(iVar9 + 0x20);
      }
      if (piVar4 != (int *)0x0 && iVar9 != 0) {
        iVar9 = *piVar4;
      }
      else {
        iVar9 = 0;
      }
      uVar13 = *(undefined4 *)(iVar9 + 0x18);
      uVar17 = *(undefined4 *)(iVar9 + 0x1c);
      *(undefined4 *)(iVar6 + -0x594) = *(undefined4 *)(iVar9 + 0x20);
      *(undefined4 *)(iVar6 + -0x59c) = uVar13;
      *(undefined4 *)(iVar6 + -0x598) = uVar17;
      *(float *)(iVar6 + -0x598) = *(float *)(iVar6 + -0x598) - ALBW_AS_F32(uVar23);
      *(undefined4 *)(iVar6 + 0xcc) = *(undefined4 *)(iVar6 + -0x59c);
      *(undefined4 *)(iVar6 + 0xd0) = *(undefined4 *)(iVar6 + -0x598);
      *(undefined4 *)(iVar6 + 0xd4) = *(undefined4 *)(iVar6 + -0x594);
    }
  }
  uVar17 = (undefined4)((ulonglong)uVar23 >> 0x20);
  *(uint *)(iVar6 + -0x3d0) = *(uint *)(iVar6 + -0x3d0) | 0x8000;
  *(undefined4 **)(iVar6 + -0x52c) = (undefined4 *)(iVar6 + 0x18c);
  *(undefined4 **)(iVar6 + -0x580) = (undefined4 *)(iVar6 + 0x19c);
  *(uint *)(iVar6 + -0x524) = objStack_60[1];
  puVar11 = (uint *)func_0058A7D4();
  uVar16 = func_00111A64(puVar11);
  *(uint *)(iVar6 + 0xf8) = uVar16;
  func_004D80A4((float *)(iVar6 + 0x90),uVar16,fVar22);
  uVar16 = objStack_60[0];
  *(undefined4 *)(objStack_60[0] + 0x200) = uVar17;
  func_00115DC8((float *)(iVar6 + 0x90));
  *(undefined4 *)(uVar16 + 0x200) = uVar17;
  *(undefined4 *)(iVar6 + 0x108) = *(undefined4 *)(iVar6 + -0x508);
  *(undefined4 *)(iVar6 + 0x10c) = *(undefined4 *)(iVar6 + -0x504);
  *(undefined4 *)(iVar6 + 0x110) = *(undefined4 *)(iVar6 + -0x500);
  *(undefined4 *)(iVar6 + 0x114) = *(undefined4 *)(iVar6 + -0x4fc);
  *(undefined4 *)(iVar6 + 0x118) = *(undefined4 *)(iVar6 + -0x4f8);
  *(undefined4 *)(iVar6 + 0x11c) = *(undefined4 *)(iVar6 + -0x4f4);
  func_004F9554(*(int *)(iVar6 + -0x53c),0x12,7,1);
  func_004F9554(*(int *)(iVar6 + -0x538),0x12,7,1);
  uVar13 = uRam00217938;
  *(undefined4 *)(iVar6 + -0x508) = uVar17;
  *(undefined4 *)(iVar6 + -0x504) = uVar13;
  *(undefined4 *)(iVar6 + -0x500) = uVar17;
  puVar11 = puRam0021793c;
  *(undefined4 *)(iVar6 + -0x520) = uVar17;
  *(undefined4 *)(iVar6 + -0x51c) = uVar13;
  *(undefined4 *)(iVar6 + -0x518) = uVar17;
  objStack_60[0] = *puVar11;
  objStack_60[1] = puVar11[1];
  objStack_60[2] = puVar11[2];
  func_00115D70((float *)objStack_60,(float *)objStack_60,fRam00217940);
  *(uint *)(iVar6 + -0x4fc) = objStack_60[0];
  *(uint *)(iVar6 + -0x4f8) = objStack_60[1];
  *(uint *)(iVar6 + -0x4f4) = objStack_60[2];
  func_004FB024(iVar15);
  objStack_60[2] = 0x7fff;
  objStack_60[0] = 0xffffffff;
  objStack_60[1] = 0;
  func_004FBA18(iVar15,2,0xff,-1,-1,0,0x7fff,fRam00217944,fRam00217944);
  *(undefined1 *)(iVar6 + -0x1ef) = 3;
  *(undefined1 *)(iVar6 + -0x1ee) = 0xff;
  *(undefined1 *)(iVar6 + -0x1ed) = 0;
  func_002AF5FC(iVar15,4,-1);
  *(undefined1 *)(iVar6 + -0x16) = 1;
  *(undefined4 *)(iVar6 + -0x58) = 0x3c;
  return iVar15;
}

