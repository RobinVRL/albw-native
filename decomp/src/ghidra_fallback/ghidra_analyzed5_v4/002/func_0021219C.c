#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_003C30DC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4, float fparam_0,float fparam_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FAD10(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004FB024(int param_1);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FB148(int param_1,undefined1 param_2,undefined1 param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC168(int param_1,float fparam_0);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern float func_0058AC38(int param_1);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);
extern float fRam00212aa0;
extern int iRam002125b4;
extern int iRam002125bc;
extern int iRam002125d0;
extern undefined4 uRam00212a9c;
extern undefined4 *puRam002125b8;
extern undefined4 *puRam0021299c;
extern undefined4 *puRam002129b4;
extern uint *DAT_00212588;
extern int DAT_0021258c;
extern float DAT_00212590;
extern float DAT_00212594;
extern undefined4 DAT_00212598;
extern undefined4 DAT_0021259c;
extern int DAT_002125a0;
extern undefined4 DAT_002125a4;
extern int *DAT_002125a8;
extern undefined4 DAT_002125ac;
extern int DAT_002125b0;
extern char s_cState_AppearReady_00212600[];
extern char s_cState_Appear_0021293c[];
extern char s_cState_Die_002129c8[];
extern char s_cState_DiveGround_002125e0[];
extern char s_cState_Fall_00212980[];
extern char s_cState_Fire_0021294c[];
extern char s_cState_Hide_002125f4[];
extern char s_cState_InSandPillar_00212958[];
extern char s_cState_OnSandPillar_0021296c[];
extern char s_cState_Reaction_002129b8[];
extern char s_cState_Standby_002125c0[];
extern char s_cState_StruggleDown_002129a0[];
extern char s_cState_Struggle_0021298c[];
extern char s_cState_Wait_002125d4[];
extern char s_mouth_00212aa4[];

// USA 0021219C <- EU 0021219C (Ghidra, non-matching)
// GLOBAL DAT_00212588 uint *
// GLOBAL DAT_0021258c int
// GLOBAL DAT_00212590 float
// GLOBAL DAT_00212594 float
// GLOBAL DAT_00212598 undefined4
// GLOBAL DAT_0021259c undefined4
// GLOBAL DAT_002125a0 int
// GLOBAL DAT_002125a4 undefined4
// GLOBAL DAT_002125a8 int *
// GLOBAL DAT_002125ac undefined4
// GLOBAL DAT_002125b0 int
// GLOBAL UNK_002125b4 int
// GLOBAL UNK_002125b8 undefined *
// GLOBAL UNK_002125bc int
// GLOBAL UNK_002125d0 int
// GLOBAL UNK_0021299c undefined4 *
// GLOBAL UNK_002129b4 undefined4 *
// GLOBAL UNK_00212a9c undefined4
// GLOBAL UNK_00212aa0 float
// GLOBAL s_cState_AppearReady_00212600 string
// GLOBAL s_cState_Appear_0021293c string
// GLOBAL s_cState_Die_002129c8 string
// GLOBAL s_cState_DiveGround_002125e0 string
// GLOBAL s_cState_Fall_00212980 string
// GLOBAL s_cState_Fire_0021294c string
// GLOBAL s_cState_Hide_002125f4 string
// GLOBAL s_cState_InSandPillar_00212958 string
// GLOBAL s_cState_OnSandPillar_0021296c string
// GLOBAL s_cState_Reaction_002129b8 string
// GLOBAL s_cState_Standby_002125c0 string
// GLOBAL s_cState_StruggleDown_002129a0 string
// GLOBAL s_cState_Struggle_0021298c string
// GLOBAL s_cState_Wait_002125d4 string
// GLOBAL s_mouth_00212aa4 string

undefined4 * func_0021219C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 extraout_r1;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  ushort uVar22;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define pcStack_34 (*(char * *)(albw_frame + 0xc))
  piVar4 = func_004FD464(param_1,param_2,DAT_00212588);
  iVar9 = DAT_0021258c;
  *piVar4 = DAT_0021258c;
  piVar4[200] = iVar9 + 0x84;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5 = func_003C30DC(puVar5 + 9,puVar5 + -0x22f,puVar5 + -0x13b,0,DAT_00212590,DAT_00212594);
  iVar9 = DAT_002125a0;
  uVar11 = DAT_0021259c;
  *puVar5 = DAT_00212598;
  *(undefined1 *)(puVar5 + 0x1f) = 0;
  puVar5[0x20] = 0;
  puVar13 = puVar5 + -0x238;
  puVar5[0x21] = 0;
  puVar5[0x22] = 0;
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0;
  puVar5[0x26] = uVar11;
  uVar11 = *(undefined4 *)(iVar9 + 8);
  puVar5[0x29] = *(undefined4 *)(iVar9 + 4);
  puVar5[0x2a] = uVar11;
  uVar11 = DAT_002125ac;
  puVar5[0x27] = DAT_002125a4;
  puVar5[0x28] = puVar13;
  piVar4 = DAT_002125a8;
  puVar5[0x2b] = 0;
  *(bool *)(puVar5 + 0x2d) = *(char *)(*piVar4 + 0x18) == '\a' || *(char *)(*piVar4 + 0x18) == '%';
  *(undefined4 *)(puVar5[-0x135] + 0x14c) = uVar11;
  puVar5[-0x13d] = puVar5 + 0x27;
  func_004FB344((int)puVar13,10);
  iVar2 = DAT_002125b0;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar13,uVar14,(int *)(iVar2 + uVar14 * 8));
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 10);
  func_004FB468((int)puVar13);
  pfVar12 = (float *)0x0;
  uVar11 = 0xffffffff;
  func_004FABDC((int)puVar13,2,0xffffffff,0);
  fVar16 = func_0058AC38(puVar13);
  func_004FB0A4((int)puVar13,fVar16);
  func_004FAD10((int)puVar13,extraout_r1,uVar11,(int *)pfVar12);
  func_004F5BD8((int)puVar13,(uint *)0x0,(int **)0x0,pfVar12);
  puVar5[-4] = puVar13;
  puVar15 = puVar5 + -9;
  *(undefined1 *)((int)puVar5 + -0x1e) = 0xe;
  iVar6 = func_0010BA78(0xe0);
  iVar2 = iRam002125b4;
  puVar5[-3] = iVar6;
  puVar5[-2] = iVar6 + (uint)*(byte *)((int)puVar5 + -0x1e) * 8;
  iVar10 = 0xe;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar11 = *(undefined4 *)(DAT_002125a0 + 0x140);
    iVar10 = iVar10 + -1;
    puVar7[2] = *(undefined4 *)(DAT_002125a0 + 0x13c);
    puVar7[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar2 + 0x40);
    puVar7[4] = *(undefined4 *)(iVar2 + 0x3c);
    puVar7[5] = uVar11;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x1e);
  uVar14 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar5[-1] = puVar7;
  if (uVar14 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar9 + 0x38);
      *puVar7 = *(undefined4 *)(iVar9 + 0x34);
      puVar7[1] = uVar11;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar14 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar11 = *(undefined4 *)(iVar9 + 0x38);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x34);
      puVar8[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar9 + 0x38);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x34);
      puVar8[5] = uVar11;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x200,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 0xe;
    iVar6 = func_00100118((int)(puVar7 + 2),puRam002125b8,0x24,0xe);
  }
  if (iVar6 != 0) {
    puVar5[-6] = iVar6;
    puVar5[-7] = 0xe;
  }
  iVar6 = iRam002125bc;
  puVar5[-0x163] = puVar15;
  iVar10 = iRam002125d0;
  *(undefined2 *)(iVar6 + (int)puVar13) = 0xe;
  pcStack_34 = s_cState_Standby_002125c0;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,0,&iStack_38);
  puVar7 = (undefined4 *)puVar5[-3];
  uVar11 = *(undefined4 *)(iVar9 + 0x10);
  uVar17 = *(undefined4 *)(iVar9 + 0x14);
  uVar18 = *(undefined4 *)(iVar9 + 0x18);
  uVar19 = *(undefined4 *)(iVar9 + 0x1c);
  uVar20 = *(undefined4 *)(iVar9 + 0x20);
  *puVar7 = *(undefined4 *)(iVar9 + 0xc);
  puVar7[1] = uVar11;
  puVar7 = (undefined4 *)puVar5[-2];
  *puVar7 = uVar17;
  puVar7[1] = uVar18;
  puVar7 = (undefined4 *)puVar5[-1];
  *puVar7 = uVar19;
  puVar7[1] = uVar20;
  pcStack_34 = s_cState_Wait_002125d4;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,1,&iStack_38);
  iVar6 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar9 + 0x28);
  uVar17 = *(undefined4 *)(iVar9 + 0x2c);
  uVar18 = *(undefined4 *)(iVar9 + 0x30);
  uVar19 = *(undefined4 *)(iVar9 + 0x34);
  uVar20 = *(undefined4 *)(iVar9 + 0x38);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar9 + 0x24);
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 8) = uVar17;
  *(undefined4 *)(iVar6 + 0xc) = uVar18;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 8) = uVar19;
  *(undefined4 *)(iVar6 + 0xc) = uVar20;
  pcStack_34 = s_cState_DiveGround_002125e0;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,2,&iStack_38);
  iVar6 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar9 + 0x40);
  uVar17 = *(undefined4 *)(iVar9 + 0x44);
  uVar18 = *(undefined4 *)(iVar9 + 0x48);
  uVar19 = *(undefined4 *)(iVar9 + 0x4c);
  uVar20 = *(undefined4 *)(iVar9 + 0x50);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar9 + 0x3c);
  *(undefined4 *)(iVar6 + 0x14) = uVar11;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x10) = uVar17;
  *(undefined4 *)(iVar6 + 0x14) = uVar18;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x10) = uVar19;
  *(undefined4 *)(iVar6 + 0x14) = uVar20;
  pcStack_34 = s_cState_Hide_002125f4;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,3,&iStack_38);
  iVar6 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar9 + 0x58);
  uVar17 = *(undefined4 *)(iVar9 + 0x5c);
  uVar18 = *(undefined4 *)(iVar9 + 0x60);
  uVar19 = *(undefined4 *)(iVar9 + 100);
  uVar20 = *(undefined4 *)(iVar9 + 0x68);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(iVar6 + 0x1c) = uVar11;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x18) = uVar17;
  *(undefined4 *)(iVar6 + 0x1c) = uVar18;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x18) = uVar19;
  *(undefined4 *)(iVar6 + 0x1c) = uVar20;
  pcStack_34 = s_cState_AppearReady_00212600;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,4,&iStack_38);
  iVar6 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar9 + 0x70);
  uVar17 = *(undefined4 *)(iVar9 + 0x74);
  uVar18 = *(undefined4 *)(iVar9 + 0x78);
  uVar19 = *(undefined4 *)(iVar9 + 0x7c);
  uVar20 = *(undefined4 *)(iVar9 + 0x80);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar9 + 0x6c);
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x20) = uVar17;
  *(undefined4 *)(iVar6 + 0x24) = uVar18;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x20) = uVar19;
  *(undefined4 *)(iVar6 + 0x24) = uVar20;
  pcStack_34 = s_cState_Appear_0021293c;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,5,&iStack_38);
  iVar6 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar9 + 0x88);
  uVar17 = *(undefined4 *)(iVar9 + 0x8c);
  uVar18 = *(undefined4 *)(iVar9 + 0x90);
  uVar19 = *(undefined4 *)(iVar9 + 0x94);
  uVar20 = *(undefined4 *)(iVar9 + 0x98);
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar9 + 0x84);
  *(undefined4 *)(iVar6 + 0x2c) = uVar11;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x28) = uVar17;
  *(undefined4 *)(iVar6 + 0x2c) = uVar18;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x28) = uVar19;
  *(undefined4 *)(iVar6 + 0x2c) = uVar20;
  pcStack_34 = s_cState_Fire_0021294c;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,6,&iStack_38);
  iVar6 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar9 + 0xa0);
  uVar17 = *(undefined4 *)(iVar9 + 0xa4);
  uVar18 = *(undefined4 *)(iVar9 + 0xa8);
  uVar19 = *(undefined4 *)(iVar9 + 0xac);
  uVar20 = *(undefined4 *)(iVar9 + 0xb0);
  *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar9 + 0x9c);
  *(undefined4 *)(iVar6 + 0x34) = uVar11;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x30) = uVar17;
  *(undefined4 *)(iVar6 + 0x34) = uVar18;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x30) = uVar19;
  *(undefined4 *)(iVar6 + 0x34) = uVar20;
  pcStack_34 = s_cState_InSandPillar_00212958;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,7,&iStack_38);
  iVar6 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar9 + 0xb8);
  uVar18 = *(undefined4 *)(iVar9 + 0xbc);
  uVar17 = *(undefined4 *)(iVar9 + 0xc4);
  uVar19 = *(undefined4 *)(iVar9 + 0xc0);
  uVar20 = *(undefined4 *)(iVar9 + 200);
  *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar9 + 0xb4);
  *(undefined4 *)(iVar6 + 0x3c) = uVar11;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x38) = uVar18;
  *(undefined4 *)(iVar6 + 0x3c) = uVar19;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x38) = uVar17;
  *(undefined4 *)(iVar6 + 0x3c) = uVar20;
  pcStack_34 = s_cState_OnSandPillar_0021296c;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,8,&iStack_38);
  iVar6 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar9 + 0xd0);
  uVar17 = *(undefined4 *)(iVar9 + 0xd4);
  uVar18 = *(undefined4 *)(iVar9 + 0xd8);
  uVar19 = *(undefined4 *)(iVar9 + 0xdc);
  uVar20 = *(undefined4 *)(iVar9 + 0xe0);
  *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar9 + 0xcc);
  *(undefined4 *)(iVar6 + 0x44) = uVar11;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x40) = uVar17;
  *(undefined4 *)(iVar6 + 0x44) = uVar18;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x40) = uVar19;
  *(undefined4 *)(iVar6 + 0x44) = uVar20;
  pcStack_34 = s_cState_Fall_00212980;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,9,&iStack_38);
  iVar6 = puVar5[-3];
  uVar17 = *(undefined4 *)(iVar9 + 0xe8);
  uVar11 = *(undefined4 *)(iVar9 + 0xec);
  uVar18 = *(undefined4 *)(iVar9 + 0xf0);
  uVar21 = *(undefined8 *)(iVar9 + 0x34);
  *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar9 + 0xe4);
  *(undefined4 *)(iVar6 + 0x4c) = uVar17;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x48) = uVar11;
  *(undefined4 *)(iVar6 + 0x4c) = uVar18;
  iVar6 = puVar5[-1];
  *(int *)(iVar6 + 0x48) = (int)uVar21;
  *(int *)(iVar6 + 0x4c) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_Struggle_0021298c;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,10,&iStack_38);
  iVar6 = puVar5[-3];
  uVar18 = *(undefined4 *)(iVar9 + 0xf8);
  uVar11 = *puRam0021299c;
  uVar17 = puRam0021299c[1];
  *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar9 + 0xf4);
  *(undefined4 *)(iVar6 + 0x54) = uVar18;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x50) = uVar11;
  *(undefined4 *)(iVar6 + 0x54) = uVar17;
  iVar6 = puVar5[-1];
  *(int *)(iVar6 + 0x50) = (int)uVar21;
  *(int *)(iVar6 + 0x54) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_StruggleDown_002129a0;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,0xb,&iStack_38);
  iVar6 = puVar5[-3];
  uVar20 = puRam002129b4[1];
  uVar11 = *(undefined4 *)(iVar2 + 0xc);
  uVar17 = *(undefined4 *)(iVar2 + 0x10);
  uVar18 = *(undefined4 *)(iVar2 + 0x14);
  uVar19 = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(iVar6 + 0x58) = *puRam002129b4;
  *(undefined4 *)(iVar6 + 0x5c) = uVar20;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x58) = uVar11;
  *(undefined4 *)(iVar6 + 0x5c) = uVar17;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x58) = uVar18;
  *(undefined4 *)(iVar6 + 0x5c) = uVar19;
  pcStack_34 = s_cState_Reaction_002129b8;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,0xc,&iStack_38);
  iVar6 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar2 + 0x20);
  uVar21 = *(undefined8 *)(iVar9 + 0x34);
  uVar17 = *(undefined4 *)(iVar2 + 0x24);
  uVar18 = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(iVar6 + 0x60) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar6 + 100) = uVar11;
  iVar9 = puVar5[-2];
  *(undefined4 *)(iVar9 + 0x60) = uVar17;
  *(undefined4 *)(iVar9 + 100) = uVar18;
  iVar9 = puVar5[-1];
  *(int *)(iVar9 + 0x60) = (int)uVar21;
  *(int *)(iVar9 + 100) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_34 = s_cState_Die_002129c8;
  iStack_38 = iVar10;
  func_0010BEC4((int)puVar15,0xd,&iStack_38);
  iVar9 = puVar5[-3];
  uVar11 = *(undefined4 *)(iVar2 + 0x30);
  uVar17 = *(undefined4 *)(iVar2 + 0x34);
  uVar18 = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar9 + 0x68) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(iVar9 + 0x6c) = uVar11;
  iVar9 = puVar5[-2];
  *(undefined4 *)(iVar9 + 0x68) = uVar17;
  *(undefined4 *)(iVar9 + 0x6c) = uVar18;
  iVar9 = puVar5[-1];
  *(int *)(iVar9 + 0x68) = (int)uVar21;
  *(int *)(iVar9 + 0x6c) = (int)((ulonglong)uVar21 >> 0x20);
  if (*(short *)((int)puVar5 + -0x8b2) == 1) {
    *(undefined1 *)(puVar5 + 0x1f) = 1;
  }
  if (*(short *)((int)puVar5 + -0x8aa) == 0) {
    func_0065D774(puVar15,3);
  }
  else {
    bVar3 = func_00588BF0((int)puVar13,0);
    if (bVar3) {
      *(undefined1 *)((int)puVar5 + -0x609) = 1;
    }
    else {
      func_0065D774(puVar15,0);
    }
  }
  uVar22 = (ushort)uRam00212a9c;
  fVar16 = fRam00212aa0;
  func_004FBA18((int)puVar13,4,0xff,-1,0,0,uVar22,fRam00212aa0,fRam00212aa0);
  puVar5[-0xd1] = puVar5[-0xd1] | 0x8000;
  pcStack_34 = s_mouth_00212aa4;
  iStack_38 = iVar10;
  uVar14 = func_00564A78(puVar5[-0x135],&iStack_38);
  puVar5[0x22] = uVar14;
  puVar5[0xd] = 0x3c;
  *(undefined1 *)((int)puVar5 + 0x77) = 1;
  *(undefined1 *)((int)puVar5 + 0x76) = 1;
  func_004FB024((int)puVar13);
  func_002AF5FC((int)puVar13,8,-1);
  func_004FB148((int)puVar13,5,0xff);
  func_004FC168((int)puVar13,fVar16);
  func_002B1FB4((int)puVar13,-1,uVar22);
  return puVar13;
}

