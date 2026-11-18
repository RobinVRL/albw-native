#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00229DEC(int param_1,uint param_2,undefined4 param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_002BDDA4(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00532554(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00662A14(undefined4 *param_1,undefined1 param_2);
extern float fRam002be880;
extern float fRam002be884;
extern int iRam002be464;
extern undefined4 uRam002be454;
extern undefined4 uRam002be87c;
extern undefined4 *puRam002be458;
extern undefined4 *puRam002be45c;
extern undefined4 *puRam002be460;
extern uint *DAT_002be420;
extern int DAT_002be424;
extern undefined4 DAT_002be428;
extern int DAT_002be42c;
extern undefined4 DAT_002be430;
extern uint DAT_002be434;
extern undefined4 DAT_002be438;
extern undefined DAT_002be43c;
extern uint DAT_002be44c;
extern int DAT_002be450;
extern char s__skl_root_002be43f[];
extern char s_cState_Appear_002be474[];
extern char s_cState_Die_002be870[];
extern char s_cState_Hide_002be468[];
extern char s_cState_Hookshot_002be81c[];
extern char s_cState_PullBack_002be83c[];
extern char s_cState_PullWait_002be82c[];
extern char s_cState_Reaction_002be860[];
extern char s_cState_ReturnTarget_002be84c[];
extern char s_cState_Shooting_002be7fc[];
extern char s_cState_ShotBack_002be80c[];
extern char s_cState_ShotReady_002be7e8[];
extern char s_cState_Wait_002be484[];
extern undefined4 _DAT_002be43c;

// USA 002BE030 <- EU 002BE00C (Ghidra, non-matching)
// GLOBAL DAT_002be420 uint *
// GLOBAL DAT_002be424 int
// GLOBAL DAT_002be428 undefined4
// GLOBAL DAT_002be42c int
// GLOBAL DAT_002be430 undefined4
// GLOBAL DAT_002be434 uint
// GLOBAL DAT_002be438 undefined4
// GLOBAL DAT_002be43c undefined
// GLOBAL DAT_002be44c uint
// GLOBAL DAT_002be450 int
// GLOBAL UNK_002be454 undefined4
// GLOBAL UNK_002be458 undefined4 *
// GLOBAL UNK_002be45c undefined4 *
// GLOBAL UNK_002be460 undefined *
// GLOBAL UNK_002be464 int
// GLOBAL UNK_002be87c uint
// GLOBAL UNK_002be880 float
// GLOBAL UNK_002be884 float
// GLOBAL s_cState_Appear_002be474 string
// GLOBAL s_cState_Die_002be870 string
// GLOBAL s_cState_Hide_002be468 string
// GLOBAL s_cState_Hookshot_002be81c string
// GLOBAL s_cState_PullBack_002be83c string
// GLOBAL s_cState_PullWait_002be82c string
// GLOBAL s_cState_Reaction_002be860 string
// GLOBAL s_cState_ReturnTarget_002be84c string
// GLOBAL s_cState_Shooting_002be7fc string
// GLOBAL s_cState_ShotBack_002be80c string
// GLOBAL s_cState_ShotReady_002be7e8 string
// GLOBAL s_cState_Wait_002be484 string

/* WARNING: Variable defined which should be unmapped: objStack_48 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_002BE030(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  ushort uVar13;
  undefined4 uVar14;
  float *pfVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define uStack_38 (*(uint *)(albw_frame + 0x18))
  #define pcStack_34 (*(char * *)(albw_frame + 0x1c))
  piVar3 = func_004FD464(param_1,param_2,DAT_002be420);
  iVar10 = DAT_002be424;
  *piVar3 = DAT_002be424;
  piVar3[200] = iVar10 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  uVar17 = DAT_002be428;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = uVar17;
  iVar10 = DAT_002be42c;
  puVar4[10] = puVar4 + -0x22f;
  puVar4[0xb] = 0xffffffff;
  uVar17 = DAT_002be438;
  uVar16 = DAT_002be434;
  puVar11 = puVar4 + -0x22f;
  uVar14 = *(undefined4 *)(iVar10 + 0xc);
  puVar4[0x1e] = *(undefined4 *)(iVar10 + 8);
  puVar4[0x1f] = uVar14;
  uVar14 = _DAT_002be43c;
  puVar4[0x1c] = DAT_002be430;
  puVar4[0x1d] = puVar11;
  puVar4[0x21] = uVar16;
  puVar4[0x22] = uVar17;
  puVar4[0x20] = 0;
  puVar4[0x23] = 0;
  puVar4[0x24] = 0;
  puVar4[0x26] = uVar14;
  puVar4[0x27] = 0;
  *(undefined1 *)(puVar4 + 0x28) = 0;
  puVar4[-0x134] = puVar4 + 0x1c;
  uVar2 = DAT_002be44c;
  objStack_48[1] = (int)s__skl_root_002be43f + 1;
  objStack_48[0] = DAT_002be44c;
  uVar5 = func_00564A78(puVar4[-300],(int *)objStack_48);
  if (uVar5 != uVar16) {
    puVar4[0xb] = uVar5;
    puVar6 = (uint *)(*(int *)(*(int *)(puVar4[-300] + 0x24) + 0xc) + uVar5 * 0x40);
    *puVar6 = *puVar6 | 0x10;
  }
  *(undefined4 **)(puVar4[-300] + 0x16c) = puVar4 + 9;
  puVar7 = func_002BDDA4((int)puVar11);
  if (puVar7 != (undefined4 *)0x0) {
    func_00229DEC((int)puVar7,(int)*(short *)((int)puVar4 + -0x88e),puVar4[-0x17c]);
  }
  func_004FB344((int)puVar11,0xf);
  iVar8 = DAT_002be450;
  uVar16 = 0;
  do {
    func_004FACA4((int)puVar11,uVar16,(int *)(iVar8 + uVar16 * 8));
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0xf);
  func_004FB468((int)puVar11);
  pfVar15 = (float *)0x0;
  func_004FABDC((int)puVar11,3,0xffffffff,0);
  func_004F5BD8((int)puVar11,(uint *)0x0,(int **)0x0,pfVar15);
  puVar7 = func_002BDDA4((int)puVar11);
  if (puVar7 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)func_00532554((int)puVar7,(int)*(short *)((int)puVar4 + -0x88e));
    puVar4[0x19] = *puVar7;
    puVar4[0x1a] = puVar7[1];
    puVar4[0x1b] = puVar7[2];
  }
  uVar17 = uRam002be454;
  puVar4[-0x13b] = puVar4[0x19];
  puVar4[-0x13a] = puVar4[0x1a];
  puVar4[-0x139] = puVar4[0x1b];
  puVar7 = puRam002be458;
  puVar4[-0xf6] = uVar17;
  puVar4[-0xf5] = uVar17;
  puVar4[-0xf4] = uVar17;
  puVar4[-0x119] = *puVar7;
  puVar4[-0x118] = puVar7[1];
  puVar4[-0x117] = puVar7[2];
  puVar7 = puRam002be45c;
  puVar4[-0x113] = *puRam002be45c;
  puVar4[-0x112] = puVar7[1];
  puVar4[-0x111] = puVar7[2];
  *(undefined1 *)((int)puVar4 + 6) = 0xc;
  puVar4[5] = puVar11;
  iVar8 = func_0010BA78(0xc0);
  puVar4[6] = iVar8;
  puVar4[7] = iVar8 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar12 = 0xc;
  puVar7 = (undefined4 *)(iVar8 + -8);
  do {
    uVar17 = *(undefined4 *)(iVar10 + 0xec);
    iVar12 = iVar12 + -1;
    puVar7[2] = *(undefined4 *)(iVar10 + 0xe8);
    puVar7[3] = uVar17;
    uVar17 = *(undefined4 *)(iVar10 + 0xec);
    puVar7[4] = *(undefined4 *)(iVar10 + 0xe8);
    puVar7[5] = uVar17;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar16 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar4[8] = puVar7;
  if (uVar16 != 0) {
    puVar9 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = *(undefined4 *)(iVar10 + 0x54);
      *puVar7 = *(undefined4 *)(iVar10 + 0x50);
      puVar7[1] = uVar17;
      puVar9 = puVar7;
    }
    for (iVar8 = (int)uVar16 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar17 = *(undefined4 *)(iVar10 + 0x54);
      puVar9[2] = *(undefined4 *)(iVar10 + 0x50);
      puVar9[3] = uVar17;
      uVar17 = *(undefined4 *)(iVar10 + 0x54);
      puVar9[4] = *(undefined4 *)(iVar10 + 0x50);
      puVar9[5] = uVar17;
      puVar9 = puVar9 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x1b8,(int *)0x0,4);
  iVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 0xc;
    iVar8 = func_00100118((int)(puVar7 + 2),puRam002be460,0x24,0xc);
  }
  if (iVar8 != 0) {
    puVar4[3] = iVar8;
    puVar4[2] = 0xc;
  }
  iVar8 = iRam002be464;
  puVar4[-0x15a] = puVar4;
  *(undefined2 *)(iVar8 + (int)puVar11) = 0xc;
  pcStack_34 = s_cState_Hide_002be468;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,0,(int *)&uStack_38);
  puVar7 = (undefined4 *)puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0x14);
  uVar14 = *(undefined4 *)(iVar10 + 0x18);
  uVar18 = *(undefined4 *)(iVar10 + 0x1c);
  uVar19 = *(undefined4 *)(iVar10 + 0x20);
  uVar20 = *(undefined4 *)(iVar10 + 0x24);
  *puVar7 = *(undefined4 *)(iVar10 + 0x10);
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar14;
  puVar7[1] = uVar18;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar19;
  puVar7[1] = uVar20;
  pcStack_34 = s_cState_Appear_002be474;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,1,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0x2c);
  uVar14 = *(undefined4 *)(iVar10 + 0x30);
  uVar18 = *(undefined4 *)(iVar10 + 0x34);
  uVar19 = *(undefined4 *)(iVar10 + 0x38);
  uVar20 = *(undefined4 *)(iVar10 + 0x3c);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar10 + 0x28);
  *(undefined4 *)(iVar8 + 0xc) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar14;
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 8) = uVar19;
  *(undefined4 *)(iVar8 + 0xc) = uVar20;
  pcStack_34 = s_cState_Wait_002be484;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,2,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar18 = *(undefined4 *)(iVar10 + 0x44);
  uVar17 = *(undefined4 *)(iVar10 + 0x48);
  uVar14 = *(undefined4 *)(iVar10 + 0x4c);
  uVar21 = *(undefined8 *)(iVar10 + 0x50);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar10 + 0x40);
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar17;
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x10) = (int)uVar21;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_ShotReady_002be7e8;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,3,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0x5c);
  uVar14 = *(undefined4 *)(iVar10 + 0x60);
  uVar18 = *(undefined4 *)(iVar10 + 100);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar10 + 0x58);
  *(undefined4 *)(iVar8 + 0x1c) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar14;
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x18) = (int)uVar21;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_Shooting_002be7fc;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,4,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0x6c);
  uVar14 = *(undefined4 *)(iVar10 + 0x70);
  uVar18 = *(undefined4 *)(iVar10 + 0x74);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar10 + 0x68);
  *(undefined4 *)(iVar8 + 0x24) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar14;
  *(undefined4 *)(iVar8 + 0x24) = uVar18;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x20) = (int)uVar21;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_ShotBack_002be80c;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,5,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0x7c);
  uVar14 = *(undefined4 *)(iVar10 + 0x80);
  uVar18 = *(undefined4 *)(iVar10 + 0x84);
  *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar10 + 0x78);
  *(undefined4 *)(iVar8 + 0x2c) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x28) = uVar14;
  *(undefined4 *)(iVar8 + 0x2c) = uVar18;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x28) = (int)uVar21;
  *(int *)(iVar8 + 0x2c) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_Hookshot_002be81c;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,6,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0x8c);
  uVar14 = *(undefined4 *)(iVar10 + 0x90);
  uVar18 = *(undefined4 *)(iVar10 + 0x94);
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar10 + 0x88);
  *(undefined4 *)(iVar8 + 0x34) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x30) = uVar14;
  *(undefined4 *)(iVar8 + 0x34) = uVar18;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x30) = (int)uVar21;
  *(int *)(iVar8 + 0x34) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_PullWait_002be82c;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,7,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar18 = *(undefined4 *)(iVar10 + 0x9c);
  uVar17 = *(undefined4 *)(iVar10 + 0xa4);
  uVar14 = *(undefined4 *)(iVar10 + 0xa0);
  *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar10 + 0x98);
  *(undefined4 *)(iVar8 + 0x3c) = uVar18;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x38) = uVar14;
  *(undefined4 *)(iVar8 + 0x3c) = uVar17;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x38) = (int)uVar21;
  *(int *)(iVar8 + 0x3c) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_PullBack_002be83c;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,8,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0xac);
  uVar14 = *(undefined4 *)(iVar10 + 0xb0);
  uVar18 = *(undefined4 *)(iVar10 + 0xb4);
  *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)(iVar10 + 0xa8);
  *(undefined4 *)(iVar8 + 0x44) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x40) = uVar14;
  *(undefined4 *)(iVar8 + 0x44) = uVar18;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x40) = (int)uVar21;
  *(int *)(iVar8 + 0x44) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_ReturnTarget_002be84c;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,9,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0xbc);
  uVar14 = *(undefined4 *)(iVar10 + 0xc0);
  uVar18 = *(undefined4 *)(iVar10 + 0xc4);
  *(undefined4 *)(iVar8 + 0x48) = *(undefined4 *)(iVar10 + 0xb8);
  *(undefined4 *)(iVar8 + 0x4c) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x48) = uVar14;
  *(undefined4 *)(iVar8 + 0x4c) = uVar18;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x48) = (int)uVar21;
  *(int *)(iVar8 + 0x4c) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_Reaction_002be860;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,10,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0xcc);
  uVar14 = *(undefined4 *)(iVar10 + 0xd0);
  uVar18 = *(undefined4 *)(iVar10 + 0xd4);
  *(undefined4 *)(iVar8 + 0x50) = *(undefined4 *)(iVar10 + 200);
  *(undefined4 *)(iVar8 + 0x54) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x50) = uVar14;
  *(undefined4 *)(iVar8 + 0x54) = uVar18;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x50) = (int)uVar21;
  *(int *)(iVar8 + 0x54) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_Die_002be870;
  uStack_38 = uVar2;
  func_0010BEC4((int)puVar4,0xb,(int *)&uStack_38);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar10 + 0xdc);
  uVar14 = *(undefined4 *)(iVar10 + 0xe0);
  uVar18 = *(undefined4 *)(iVar10 + 0xe4);
  *(undefined4 *)(iVar8 + 0x58) = *(undefined4 *)(iVar10 + 0xd8);
  *(undefined4 *)(iVar8 + 0x5c) = uVar17;
  iVar10 = puVar4[7];
  *(undefined4 *)(iVar10 + 0x58) = uVar14;
  *(undefined4 *)(iVar10 + 0x5c) = uVar18;
  iVar10 = puVar4[8];
  *(int *)(iVar10 + 0x58) = (int)uVar21;
  *(int *)(iVar10 + 0x5c) = (int)((ulonglong)uVar21 >> 0x20);
  func_00662A14(puVar4,0);
  uVar16 = uRam002be87c;
  puVar4[0x27] = (int)*(char *)(puVar4 + 1);
  puVar4[-200] = puVar4[-200] & 0xfeffffdf;
  uVar13 = (ushort)uVar16;
  func_002B1440((int)puVar11,-1,uVar13,0);
  objStack_48[2] = uVar16;
  objStack_48[0] = 0xc;
  objStack_48[1] = 0;
  func_004FBA18((int)puVar11,0xe,0xff,-1,0xc,0,uVar13,fRam002be884,fRam002be880);
  *(undefined1 *)((int)puVar4 + -0x13f) = 0xc;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  iVar10 = func_0054DDF4((int)puVar11,1);
  puVar4[0x18] = iVar10;
  return puVar11;
}

