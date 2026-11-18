#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_00261A8C(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,uint param_5, int param_6,uint param_7,int param_8,uint param_9,byte param_10);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_0032427C(int param_1,float fparam_0,float fparam_1);
extern int func_0036CF6C(undefined4 *param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_005330BC(int param_1,int *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_00660490(undefined4 *param_1,undefined1 param_2);
extern float fRam00264e90;
extern float fRam00264e94;
extern int iRam00264a60;
extern int iRam00264a68;
extern undefined4 uRam00264a78;
extern undefined4 uRam00264e98;
extern undefined4 uRam00264fc0;
extern undefined4 uRam00264fc4;
extern int *piRam00264e9c;
extern int *piRam00264fbc;
extern undefined4 *puRam00264a5c;
extern undefined4 *puRam00264a64;
extern uint *DAT_00264a3c;
extern int DAT_00264a40;
extern float DAT_00264a44;
extern undefined *DAT_00264a48;
extern undefined4 DAT_00264a4c;
extern undefined4 *DAT_00264a50;
extern undefined4 DAT_00264a54;
extern int DAT_00264a58;
extern char s_BombEnemy_00264ea0[];
extern char s_BombIce_00264fb4[];
extern char s_cState_AngryThrow_00264e7c[];
extern char s_cState_Die_00264e40[];
extern char s_cState_Fall_00264a6c[];
extern char s_cState_Reaction_00264e30[];
extern char s_cState_RotateForThrow_00264e64[];
extern char s_cState_RotateWait_00264e0c[];
extern char s_cState_RunEd_00264df0[];
extern char s_cState_RunEd_PreRotate_00264e4c[];
extern char s_cState_RunSt_00264a7c[];
extern char s_cState_Throw_00264e20[];
extern char s_cState_Wait_00264e00[];
extern char s_cState_Walk_00264a8c[];

// USA 0026463C <- EU 00264664 (Ghidra, non-matching)
// GLOBAL DAT_00264a3c uint *
// GLOBAL DAT_00264a40 int
// GLOBAL DAT_00264a44 float
// GLOBAL DAT_00264a48 undefined *
// GLOBAL DAT_00264a4c undefined4
// GLOBAL DAT_00264a50 undefined4 *
// GLOBAL DAT_00264a54 undefined4
// GLOBAL DAT_00264a58 int
// GLOBAL UNK_00264a5c undefined4 *
// GLOBAL UNK_00264a60 int
// GLOBAL UNK_00264a64 undefined *
// GLOBAL UNK_00264a68 int
// GLOBAL UNK_00264a78 uint
// GLOBAL UNK_00264e90 float
// GLOBAL UNK_00264e94 float
// GLOBAL UNK_00264e98 undefined4
// GLOBAL UNK_00264e9c int *
// GLOBAL UNK_00264fbc int *
// GLOBAL UNK_00264fc0 undefined4
// GLOBAL UNK_00264fc4 undefined4
// GLOBAL s_BombEnemy_00264ea0 string
// GLOBAL s_BombIce_00264fb4 string
// GLOBAL s_cState_AngryThrow_00264e7c string
// GLOBAL s_cState_Die_00264e40 string
// GLOBAL s_cState_Fall_00264a6c string
// GLOBAL s_cState_Reaction_00264e30 string
// GLOBAL s_cState_RotateForThrow_00264e64 string
// GLOBAL s_cState_RotateWait_00264e0c string
// GLOBAL s_cState_RunEd_00264df0 string
// GLOBAL s_cState_RunEd_PreRotate_00264e4c string
// GLOBAL s_cState_RunSt_00264a7c string
// GLOBAL s_cState_Throw_00264e20 string
// GLOBAL s_cState_Wait_00264e00 string
// GLOBAL s_cState_Walk_00264a8c string

/* WARNING: Variable defined which should be unmapped: objStack_48 */

int func_0026463C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fparam_0;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint in_fpscr;
  uint uVar16;
  float fVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define uStack_38 (*(uint *)(albw_frame + 0x18))
  #define pcStack_34 (*(char * *)(albw_frame + 0x1c))
  piVar2 = func_004FD464(param_1,param_2,DAT_00264a3c);
  iVar4 = DAT_00264a40;
  *piVar2 = DAT_00264a40;
  piVar2[200] = iVar4 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  fVar17 = DAT_00264a44;
  puVar3[0xb] = 0;
  puVar3[0xc] = ALBW_AS_U32(fVar17);
  iVar4 = func_00100118((int)(puVar3 + 0xd),DAT_00264a48,0x10,8);
  *(undefined4 *)(iVar4 + 0x80) = 0;
  *(undefined4 *)(iVar4 + 0x84) = 0;
  *(undefined4 *)(iVar4 + 0x88) = 0;
  uVar15 = DAT_00264a4c;
  *(undefined4 *)(iVar4 + 0x8c) = 0;
  if (iVar4 + 0x90 != 0) {
    *(int *)(iVar4 + 0x80) = iVar4 + 0x90;
    *(undefined4 *)(iVar4 + 0x84) = 10;
  }
  *(undefined4 *)(iVar4 + 0x108) = uVar15;
  *(undefined4 *)(iVar4 + 0x10c) = uVar15;
  *(undefined1 *)(iVar4 + 0x110) = 0;
  *(undefined4 *)(iVar4 + 0x114) = 0;
  *(undefined4 *)(iVar4 + 0x118) = 0;
  *(undefined4 *)(iVar4 + 0x11c) = 0;
  iVar10 = iVar4 + -0x8f0;
  *(undefined4 *)(iVar4 + 0x120) = 0;
  puVar3 = DAT_00264a50;
  *(undefined4 *)(iVar4 + 0x124) = 0;
  uVar8 = *puVar3;
  uVar9 = puVar3[1];
  uVar14 = puVar3[2];
  *(undefined4 *)(iVar4 + 0x134) = 0;
  *(undefined4 *)(iVar4 + 0x128) = uVar8;
  *(undefined4 *)(iVar4 + 300) = uVar9;
  *(undefined4 *)(iVar4 + 0x130) = uVar14;
  *(undefined4 *)(iVar4 + 0x138) = uVar15;
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  piVar2 = (int *)(iVar4 + 0x154);
  *(undefined4 *)(iVar4 + 0x13c) = *puVar3;
  *(undefined4 *)(iVar4 + 0x140) = uVar8;
  *(undefined4 *)(iVar4 + 0x144) = uVar9;
  *(undefined4 *)(iVar4 + 0x148) = 0;
  *(undefined4 *)(iVar4 + 0x14c) = 0;
  *(undefined4 *)(iVar4 + 0x150) = 0;
  *(undefined4 *)(iVar4 + 0x154) = 0;
  *(undefined1 *)(iVar4 + 0x158) = 0;
  uVar8 = *puVar3;
  uVar9 = puVar3[1];
  *(undefined4 *)(iVar4 + 0x164) = puVar3[2];
  *(undefined4 *)(iVar4 + 0x15c) = uVar8;
  *(undefined4 *)(iVar4 + 0x160) = uVar9;
  *(undefined1 *)(iVar4 + 0x168) = 0;
  *(undefined4 *)(iVar4 + -0x514) = uVar15;
  *(undefined4 *)(iVar4 + -0x510) = uVar15;
  *(undefined4 *)(iVar4 + -0x50c) = uVar15;
  puVar3 = (undefined4 *)func_0010BAB4(0x1c);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[2] = DAT_00264a54;
    *puVar3 = uVar15;
    puVar3[1] = ALBW_AS_U32(fVar17);
    puVar3[3] = uVar15;
    puVar3[4] = uVar15;
    puVar3[5] = 0;
    puVar3[6] = 0;
  }
  *(undefined4 **)(iVar4 + 0x124) = puVar3;
  func_004FB344(iVar10,0xf);
  iVar12 = DAT_00264a58;
  uVar11 = 0;
  do {
    func_004FACA4(iVar10,uVar11,(int *)(iVar12 + uVar11 * 8));
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0xf);
  func_004FB468(iVar10);
  func_004FABDC(iVar10,7,0xffffffff,0);
  func_004FB4E0(iVar10,fVar17);
  iVar12 = *(int *)(iVar4 + -0x4e0);
  uVar16 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(*(int *)(iVar12 + 0x14) + 0x14)),3);
  uVar11 = func_00111A64((uint *)*puRam00264a5c);
  iVar12 = *(int *)(iVar12 + 0x14);
  fVar17 = (float)VectorUnsignedToFloat
                            ((int)((ulonglong)uVar16 * (ulonglong)uVar11 >> 0x20),
                             (byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(iVar12 + 8) != fVar17) {
    *(float *)(iVar12 + 8) = fVar17;
    *(undefined1 *)(iVar12 + 0x26) = 1;
  }
  *(int *)(iVar4 + -0x20) = iVar10;
  puVar13 = (undefined4 *)(iVar4 + -0x34);
  *(undefined1 *)(iVar4 + -0x2e) = 0xc;
  iVar5 = func_0010BA78(0xc0);
  iVar12 = iRam00264a60;
  *(int *)(iVar4 + -0x1c) = iVar5;
  *(uint *)(iVar4 + -0x18) = iVar5 + (uint)*(byte *)(iVar4 + -0x2e) * 8;
  iVar6 = 0xc;
  puVar3 = (undefined4 *)(iVar5 + -8);
  do {
    uVar15 = *(undefined4 *)(iVar12 + 0xd4);
    iVar6 = iVar6 + -1;
    puVar3[2] = *(undefined4 *)(iVar12 + 0xd0);
    puVar3[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar12 + 0xd4);
    puVar3[4] = *(undefined4 *)(iVar12 + 0xd0);
    puVar3[5] = uVar15;
    puVar3 = puVar3 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)(iVar4 + -0x2e);
  uVar11 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar11 << 3);
  *(undefined4 **)(iVar4 + -0x14) = puVar3;
  if (uVar11 != 0) {
    puVar7 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar12 + 0x1c);
      *puVar3 = *(undefined4 *)(iVar12 + 0x18);
      puVar3[1] = uVar15;
      puVar7 = puVar3;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar15 = *(undefined4 *)(iVar12 + 0x1c);
      puVar7[2] = *(undefined4 *)(iVar12 + 0x18);
      puVar7[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar12 + 0x1c);
      puVar7[4] = *(undefined4 *)(iVar12 + 0x18);
      puVar7[5] = uVar15;
      puVar7 = puVar7 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x1b8,(int *)0x0,4);
  iVar5 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 0xc;
    iVar5 = func_00100118((int)(puVar3 + 2),puRam00264a64,0x24,0xc);
  }
  if (iVar5 != 0) {
    *(int *)(iVar4 + -0x28) = iVar5;
    *(undefined4 *)(iVar4 + -0x2c) = 0xc;
  }
  iVar5 = iRam00264a68;
  *(undefined4 **)(iVar4 + -0x59c) = puVar13;
  uVar11 = uRam00264a78;
  *(undefined2 *)(iVar5 + iVar10) = 0xc;
  pcStack_34 = s_cState_Fall_00264a6c;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,0,(int *)&uStack_38);
  puVar3 = *(undefined4 **)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0xc);
  uVar8 = *(undefined4 *)(iVar12 + 0x10);
  uVar9 = *(undefined4 *)(iVar12 + 0x14);
  uVar18 = *(undefined8 *)(iVar12 + 0x18);
  *puVar3 = *(undefined4 *)(iVar12 + 8);
  puVar3[1] = uVar15;
  puVar3 = *(undefined4 **)(iVar4 + -0x18);
  *puVar3 = uVar8;
  puVar3[1] = uVar9;
  puVar3 = *(undefined4 **)(iVar4 + -0x14);
  *puVar3 = (int)uVar18;
  puVar3[1] = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_RunSt_00264a7c;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,1,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0x24);
  uVar8 = *(undefined4 *)(iVar12 + 0x28);
  uVar9 = *(undefined4 *)(iVar12 + 0x2c);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar12 + 0x20);
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 8) = uVar8;
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 8) = (int)uVar18;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Walk_00264a8c;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,2,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0x34);
  uVar8 = *(undefined4 *)(iVar12 + 0x38);
  uVar9 = *(undefined4 *)(iVar12 + 0x3c);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar12 + 0x30);
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x10) = uVar8;
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x10) = (int)uVar18;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_RunEd_00264df0;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,3,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0x44);
  uVar8 = *(undefined4 *)(iVar12 + 0x48);
  uVar9 = *(undefined4 *)(iVar12 + 0x4c);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar12 + 0x40);
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x18) = uVar8;
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x18) = (int)uVar18;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Wait_00264e00;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,4,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0x54);
  uVar8 = *(undefined4 *)(iVar12 + 0x58);
  uVar9 = *(undefined4 *)(iVar12 + 0x5c);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar12 + 0x50);
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x20) = uVar8;
  *(undefined4 *)(iVar5 + 0x24) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x20) = (int)uVar18;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_RotateWait_00264e0c;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,5,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 100);
  uVar8 = *(undefined4 *)(iVar12 + 0x68);
  uVar9 = *(undefined4 *)(iVar12 + 0x6c);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar12 + 0x60);
  *(undefined4 *)(iVar5 + 0x2c) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x28) = uVar8;
  *(undefined4 *)(iVar5 + 0x2c) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x28) = (int)uVar18;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Throw_00264e20;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,6,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0x74);
  uVar8 = *(undefined4 *)(iVar12 + 0x78);
  uVar9 = *(undefined4 *)(iVar12 + 0x7c);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar12 + 0x70);
  *(undefined4 *)(iVar5 + 0x34) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x30) = uVar8;
  *(undefined4 *)(iVar5 + 0x34) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x30) = (int)uVar18;
  *(int *)(iVar5 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Reaction_00264e30;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,7,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0x84);
  uVar8 = *(undefined4 *)(iVar12 + 0x88);
  uVar9 = *(undefined4 *)(iVar12 + 0x8c);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(iVar12 + 0x80);
  *(undefined4 *)(iVar5 + 0x3c) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x38) = uVar8;
  *(undefined4 *)(iVar5 + 0x3c) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x38) = (int)uVar18;
  *(int *)(iVar5 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Die_00264e40;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,8,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0x94);
  uVar8 = *(undefined4 *)(iVar12 + 0x9c);
  uVar9 = *(undefined4 *)(iVar12 + 0x98);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar12 + 0x90);
  *(undefined4 *)(iVar5 + 0x44) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x40) = uVar9;
  *(undefined4 *)(iVar5 + 0x44) = uVar8;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x40) = (int)uVar18;
  *(int *)(iVar5 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_RunEd_PreRotate_00264e4c;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,9,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0xa4);
  uVar8 = *(undefined4 *)(iVar12 + 0xa8);
  uVar9 = *(undefined4 *)(iVar12 + 0xac);
  *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar12 + 0xa0);
  *(undefined4 *)(iVar5 + 0x4c) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x48) = uVar8;
  *(undefined4 *)(iVar5 + 0x4c) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x48) = (int)uVar18;
  *(int *)(iVar5 + 0x4c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_RotateForThrow_00264e64;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,10,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0xb4);
  uVar8 = *(undefined4 *)(iVar12 + 0xb8);
  uVar9 = *(undefined4 *)(iVar12 + 0xbc);
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar12 + 0xb0);
  *(undefined4 *)(iVar5 + 0x54) = uVar15;
  iVar5 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar5 + 0x50) = uVar8;
  *(undefined4 *)(iVar5 + 0x54) = uVar9;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar5 + 0x50) = (int)uVar18;
  *(int *)(iVar5 + 0x54) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_AngryThrow_00264e7c;
  uStack_38 = uVar11;
  func_0010BEC4((int)puVar13,0xb,(int *)&uStack_38);
  iVar5 = *(int *)(iVar4 + -0x1c);
  uVar15 = *(undefined4 *)(iVar12 + 0xc4);
  uVar8 = *(undefined4 *)(iVar12 + 200);
  uVar9 = *(undefined4 *)(iVar12 + 0xcc);
  *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar12 + 0xc0);
  *(undefined4 *)(iVar5 + 0x5c) = uVar15;
  fparam_0 = fRam00264e94;
  fVar17 = fRam00264e90;
  iVar12 = *(int *)(iVar4 + -0x18);
  *(undefined4 *)(iVar12 + 0x58) = uVar8;
  *(undefined4 *)(iVar12 + 0x5c) = uVar9;
  iVar12 = *(int *)(iVar4 + -0x14);
  *(int *)(iVar12 + 0x58) = (int)uVar18;
  *(int *)(iVar12 + 0x5c) = (int)((ulonglong)uVar18 >> 0x20);
  func_0032427C(iVar4,fparam_0,fVar17);
  puVar7 = (undefined4 *)func_0010BAB4(0x18);
  puVar3 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = func_0036CF6C(puVar7,4);
  }
  *(undefined4 **)(iVar4 + 0x114) = puVar3;
  func_00660490(puVar13,4);
  *(undefined4 *)(iVar4 + -0x400) = uRam00264e98;
  iVar5 = *(int *)(*(int *)(iVar4 + -0x620) + 0x1cc);
  iVar12 = func_00588BE4(iVar10);
  objStack_48[0] = uVar11;
  if (iVar12 == *piRam00264e9c) {
    objStack_48[1] = (uint)s_BombEnemy_00264ea0;
    uVar11 = func_005330BC(iVar5,(int *)objStack_48);
  }
  else {
    objStack_48[1] = (uint)s_BombIce_00264fb4;
    uVar11 = func_005330BC(iVar5,(int *)objStack_48);
  }
  puVar13 = (undefined4 *)func_0010BAB4(0x34);
  puVar3 = (undefined4 *)0x0;
  if (puVar13 != (undefined4 *)0x0) {
    objStack_48[2] = 0;
    objStack_48[3] = 0xb;
    objStack_48[0] = 0;
    objStack_48[1] = 0;
    puVar3 = func_00261A8C(puVar13,iVar10,piRam00264fbc,1,uVar11,0,0,0,0,0xb);
  }
  *(undefined4 **)(iVar4 + 0x154) = puVar3;
  uVar15 = uRam00264fc0;
  iVar12 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    iVar12 = puVar3[6];
  }
  if (puVar3 != (undefined4 *)0x0 && iVar12 != 0) {
    *(uint *)(iVar12 + 0x164) = *(uint *)(iVar12 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar12 + 0x74) = uVar15;
    *(undefined4 *)(iVar12 + 0x78) = uVar15;
    *(undefined4 *)(iVar12 + 0x7c) = uVar15;
    *(undefined1 *)(*piVar2 + 0x24) = 0;
    func_004CF478(*(int *)(*piVar2 + 0x18),0);
    func_0026171C(*piVar2,(float *)0x0,(uint *)0x0,(float *)0x0);
    uVar11 = func_00564A78(*(int *)(iVar4 + -0x4e4),piRam00264fbc);
    uVar15 = uRam00264fc4;
    *(uint *)(iVar4 + 0x150) = uVar11;
    *(undefined4 *)(iVar4 + -0x424) = uVar15;
    func_002AF5FC(iVar10,0xd,-1);
    *(undefined1 *)(iVar4 + -0x173) = 0xe;
    *(undefined1 *)(iVar4 + -0x172) = 0xff;
    *(undefined1 *)(iVar4 + -0x171) = 0;
    func_002AED68(iVar10,0xd);
  }
  else {
    *(undefined1 *)(iVar4 + -0x619) = 1;
  }
  return iVar10;
}

