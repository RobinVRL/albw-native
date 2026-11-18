#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0021992C(int param_1,undefined1 param_2,undefined1 param_3);
extern int func_0026D050(int param_1,int *param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00656370(undefined4 *param_1,uint *param_2,undefined1 param_3,uint *param_4);
extern int func_006609A0(undefined4 *param_1,undefined1 param_2);
extern float *DAT_0026d984;
extern int DAT_0026d988;
extern int DAT_0026d98c;
extern int DAT_0026d990;
extern int *DAT_0026d994;
extern undefined4 DAT_0026d998;
extern uint DAT_0026d9a4;
extern uint DAT_0026d9a8;
extern uint DAT_0026d9ac;
extern int DAT_0026d9b0;
extern int DAT_0026d9b4;
extern int DAT_0026d9b8;
extern undefined *DAT_0026d9bc;
extern int DAT_0026d9c0;
extern undefined4 *DAT_0026de20;
extern int DAT_0026de30;
extern int *DAT_0026de50;
extern char s_cStateBase_AttackPlayer_0026da00[];
extern char s_cStateBase_ChasePlayer_0026d9e8[];
extern char s_cStateBase_Die_0026ddd8[];
extern char s_cStateBase_EatStart_0026da18[];
extern char s_cStateBase_Eat_0026dd94[];
extern char s_cStateBase_GoHome_0026d9d4[];
extern char s_cStateBase_Reaction_0026ddc4[];
extern char s_cStateBase_Run_0026ddb4[];
extern char s_cStateBase_Spit_0026dda4[];
extern char s_cStateBase_Walk_0026d9c4[];
extern char s_cState_ChangeLike_0026ddfc[];
extern char s_cState_Erase_0026de10[];
extern char s_cState_RupeeWait_0026dde8[];
extern char s_color_0026d99c[];
extern char s_locator1_0026de24[];

// USA 0026D488 <- EU 0026D4B0 (Ghidra, non-matching)
// GLOBAL DAT_0026d984 float *
// GLOBAL DAT_0026d988 int
// GLOBAL DAT_0026d98c int
// GLOBAL DAT_0026d990 int
// GLOBAL DAT_0026d994 int *
// GLOBAL DAT_0026d998 undefined4
// GLOBAL DAT_0026d9a4 uint
// GLOBAL DAT_0026d9a8 uint
// GLOBAL DAT_0026d9ac uint
// GLOBAL DAT_0026d9b0 int
// GLOBAL DAT_0026d9b4 int
// GLOBAL DAT_0026d9b8 int
// GLOBAL DAT_0026d9bc undefined *
// GLOBAL DAT_0026d9c0 int
// GLOBAL DAT_0026de20 undefined4 *
// GLOBAL DAT_0026de30 int
// GLOBAL DAT_0026de50 int *
// GLOBAL s_cStateBase_AttackPlayer_0026da00 string
// GLOBAL s_cStateBase_ChasePlayer_0026d9e8 string
// GLOBAL s_cStateBase_Die_0026ddd8 string
// GLOBAL s_cStateBase_EatStart_0026da18 string
// GLOBAL s_cStateBase_Eat_0026dd94 string
// GLOBAL s_cStateBase_GoHome_0026d9d4 string
// GLOBAL s_cStateBase_Reaction_0026ddc4 string
// GLOBAL s_cStateBase_Run_0026ddb4 string
// GLOBAL s_cStateBase_Spit_0026dda4 string
// GLOBAL s_cStateBase_Walk_0026d9c4 string
// GLOBAL s_cState_ChangeLike_0026ddfc string
// GLOBAL s_cState_Erase_0026de10 string
// GLOBAL s_cState_RupeeWait_0026dde8 string
// GLOBAL s_color_0026d99c string
// GLOBAL s_locator1_0026de24 string

/* WARNING: Variable defined which should be unmapped: objStack_bc */

int * func_0026D488(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  uint uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint in_fpscr;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar20;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_bc ((uint *)(albw_frame + 0x4))
  #define local_58 (*(int *)(albw_frame + 0x68))
  #define local_54 (*(char * *)(albw_frame + 0x6c))
  #define local_48 (*(int *)(albw_frame + 0x78))
  #define local_44 (*(char * *)(albw_frame + 0x7c))
  pfVar12 = DAT_0026d984;
  piVar2 = (int *)func_00656370(param_1,param_2,1,(uint *)DAT_0026d984);
  iVar10 = DAT_0026d988;
  piVar2[200] = DAT_0026d988 + 0x84;
  *piVar2 = iVar10;
  piVar2[0x246] = 0;
  piVar2[0x249] = 0;
  piVar2[0x24a] = 0;
  *(undefined1 *)(piVar2 + 0x24b) = 0;
  piVar2[0x247] = 0;
  piVar14 = piVar2 + 0x248;
  piVar2[0x248] = 0;
  func_0021992C((int)piVar2,9,10);
  func_004FB344((int)piVar2,0xb);
  iVar10 = DAT_0026d98c;
  uVar13 = 0;
  do {
    func_004FACA4((int)piVar2,uVar13,(int *)(iVar10 + uVar13 * 8));
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0xb);
  func_004FB468((int)piVar2);
  func_004F5BD8((int)piVar2,(uint *)0x0,(int **)0x0,pfVar12);
  *(char *)(piVar2 + 0x24b) = (char)*(ushort *)(piVar2 + 0xc);
  if (4 < (*(ushort *)(piVar2 + 0xc) & 0xff)) {
    *(undefined1 *)(piVar2 + 0x24b) = 0;
  }
  objStack_bc[0] = 0;
  if ((char)piVar2[0x24b] == '\x04') {
    iVar10 = 2;
  }
  else {
    iVar10 = 1;
  }
  piVar3 = func_0014DF18(piVar2[0xb4],1,iVar10,0,0,0);
  iVar10 = DAT_0026d990;
  piVar2[0x247] = (int)piVar3;
  if ((char)piVar2[0x24b] == '\x04') {
    func_0026D050((int)piVar2,DAT_0026de50,2);
  }
  else {
    func_0026D050((int)piVar2,DAT_0026d994,1);
    puVar4 = (undefined4 *)func_0010BAB4(0xa8);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = func_0016A2FC(puVar4,1,DAT_0026d998,1);
    }
    piVar2[0x248] = (int)puVar5;
    local_44 = s_color_0026d99c;
    local_48 = iVar10;
    func_00169608((uint *)*piVar14,0,&local_48,*(int *)(piVar2[0xb4] + 0x1cc));
    uVar13 = 0;
    func_0016A02C(*piVar14,-1,(int *)0xffffffff,0);
    objStack_bc[2] = (uint)(objStack_bc + 3);
    objStack_bc[1] = 3;
    objStack_bc[0] = 1;
    objStack_bc[3] = 0;
    objStack_bc[6] = DAT_0026d9ac;
    objStack_bc[7] = DAT_0026d9a8;
    objStack_bc[8] = uVar13 | 0xff;
    objStack_bc[4] = DAT_0026d9a4;
    objStack_bc[5] = DAT_0026d9a8;
    uVar13 = DAT_0026d9a4;
    func_0016898C(piVar2[0x248],objStack_bc);
    iVar9 = DAT_0026d9b0;
    *(uint *)(*(int *)(*piVar14 + 0x14) + 0x10) = uVar13;
    iVar6 = *(int *)(piVar2[0x248] + 0x14);
    fVar17 = (float)VectorSignedToFloat(*(undefined4 *)(iVar9 + (uint)*(byte *)(piVar2 + 0x24b) * 4)
                                        ,(byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(iVar6 + 8) != fVar17) {
      *(float *)(iVar6 + 8) = fVar17;
      *(undefined1 *)(iVar6 + 0x26) = 1;
    }
    func_00168E9C((int *)piVar2[0x248],piVar2[0x247],(int *)0x0);
  }
  puVar7 = (undefined2 *)func_0054DDF4((int)piVar2,1);
  piVar2[0x246] = (int)puVar7;
  func_004F88A0(piVar2,puVar7);
  *(undefined2 *)(piVar2[0x10c] + 0x28) = 0xe0;
  *(undefined1 *)((int)piVar2 + 0x8f6) = 0xd;
  piVar2[0x241] = (int)piVar2;
  iVar6 = func_0010BA78(0xd0);
  piVar2[0x242] = iVar6;
  iVar9 = DAT_0026d9b4;
  piVar2[0x243] = iVar6 + (uint)*(byte *)((int)piVar2 + 0x8f6) * 8;
  iVar8 = 0xd;
  puVar5 = (undefined4 *)(iVar6 + -8);
  do {
    uVar15 = *(undefined4 *)(DAT_0026d9b8 + 0x110);
    iVar8 = iVar8 + -1;
    puVar5[2] = *(undefined4 *)(DAT_0026d9b8 + 0x10c);
    puVar5[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar9 + 0x10);
    puVar5[4] = *(undefined4 *)(iVar9 + 0xc);
    puVar5[5] = uVar15;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar2 + 0x8f6);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  iVar9 = DAT_0026d9b8;
  piVar2[0x244] = (int)puVar5;
  if (uVar13 != 0) {
    puVar4 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar9 + 0x20);
      *puVar5 = *(undefined4 *)(iVar9 + 0x1c);
      puVar5[1] = uVar15;
      puVar4 = puVar5;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar15 = *(undefined4 *)(iVar9 + 0x20);
      puVar4[2] = *(undefined4 *)(iVar9 + 0x1c);
      puVar4[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar9 + 0x20);
      puVar4[4] = *(undefined4 *)(iVar9 + 0x1c);
      puVar4[5] = uVar15;
      puVar4 = puVar4 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x1dc,(int *)0x0,4);
  iVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 0xd;
    iVar6 = func_00100118((int)(puVar5 + 2),DAT_0026d9bc,0x24,0xd);
  }
  if (iVar6 != 0) {
    piVar2[0x23e] = 0xd;
    piVar2[0x23f] = iVar6;
  }
  iVar6 = DAT_0026d9c0;
  piVar2[0xd5] = (int)(piVar2 + 0x23c);
  *(undefined2 *)(iVar6 + (int)piVar2) = 0xd;
  local_54 = s_cStateBase_Walk_0026d9c4;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),0,&local_58);
  puVar5 = (undefined4 *)piVar2[0x242];
  uVar15 = *(undefined4 *)(iVar9 + 0x10);
  uVar11 = *(undefined4 *)(iVar9 + 0x14);
  uVar16 = *(undefined4 *)(iVar9 + 0x18);
  uVar20 = *(undefined4 *)(iVar9 + 0x1c);
  uVar18 = *(undefined4 *)(iVar9 + 0x20);
  *puVar5 = *(undefined4 *)(iVar9 + 0xc);
  puVar5[1] = uVar15;
  puVar5 = (undefined4 *)piVar2[0x243];
  *puVar5 = uVar11;
  puVar5[1] = uVar16;
  puVar5 = (undefined4 *)piVar2[0x244];
  *puVar5 = uVar20;
  puVar5[1] = uVar18;
  local_54 = s_cStateBase_GoHome_0026d9d4;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),1,&local_58);
  iVar6 = piVar2[0x242];
  uVar15 = *(undefined4 *)(iVar9 + 0x28);
  uVar16 = *(undefined4 *)(iVar9 + 0x2c);
  uVar11 = *(undefined4 *)(iVar9 + 0x30);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar9 + 0x24);
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 8) = uVar16;
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  iVar6 = piVar2[0x244];
  *(undefined4 *)(iVar6 + 8) = uVar20;
  *(undefined4 *)(iVar6 + 0xc) = uVar18;
  local_54 = s_cStateBase_ChasePlayer_0026d9e8;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),2,&local_58);
  iVar6 = piVar2[0x242];
  uVar16 = *(undefined4 *)(iVar9 + 0x38);
  uVar15 = *(undefined4 *)(iVar9 + 0x40);
  uVar11 = *(undefined4 *)(iVar9 + 0x3c);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar9 + 0x34);
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x10) = uVar11;
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  iVar6 = piVar2[0x244];
  *(undefined4 *)(iVar6 + 0x10) = uVar20;
  *(undefined4 *)(iVar6 + 0x14) = uVar18;
  local_54 = s_cStateBase_AttackPlayer_0026da00;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),3,&local_58);
  iVar6 = piVar2[0x242];
  uVar15 = *(undefined4 *)(iVar9 + 0x48);
  uVar16 = *(undefined4 *)(iVar9 + 0x4c);
  uVar11 = *(undefined4 *)(iVar9 + 0x50);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(iVar6 + 0x1c) = uVar15;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x18) = uVar16;
  *(undefined4 *)(iVar6 + 0x1c) = uVar11;
  iVar6 = piVar2[0x244];
  *(undefined4 *)(iVar6 + 0x18) = uVar20;
  *(undefined4 *)(iVar6 + 0x1c) = uVar18;
  local_54 = s_cStateBase_EatStart_0026da18;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),4,&local_58);
  iVar6 = piVar2[0x242];
  uVar18 = *(undefined4 *)(iVar9 + 0x58);
  uVar20 = *(undefined4 *)(iVar9 + 0x5c);
  uVar15 = *(undefined4 *)(iVar9 + 0x60);
  uVar11 = *(undefined4 *)(iVar9 + 100);
  uVar16 = *(undefined4 *)(iVar9 + 0x68);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(iVar6 + 0x24) = uVar18;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x20) = uVar20;
  *(undefined4 *)(iVar6 + 0x24) = uVar15;
  iVar6 = piVar2[0x244];
  *(undefined4 *)(iVar6 + 0x20) = uVar11;
  *(undefined4 *)(iVar6 + 0x24) = uVar16;
  local_54 = s_cStateBase_Eat_0026dd94;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),5,&local_58);
  iVar6 = piVar2[0x242];
  uVar15 = *(undefined4 *)(iVar9 + 0x70);
  uVar11 = *(undefined4 *)(iVar9 + 0x74);
  uVar16 = *(undefined4 *)(iVar9 + 0x78);
  uVar18 = *(undefined4 *)(iVar9 + 0x7c);
  uVar20 = *(undefined4 *)(iVar9 + 0x80);
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar9 + 0x6c);
  *(undefined4 *)(iVar6 + 0x2c) = uVar15;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x28) = uVar11;
  *(undefined4 *)(iVar6 + 0x2c) = uVar16;
  iVar6 = piVar2[0x244];
  *(undefined4 *)(iVar6 + 0x28) = uVar18;
  *(undefined4 *)(iVar6 + 0x2c) = uVar20;
  local_54 = s_cStateBase_Spit_0026dda4;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),6,&local_58);
  iVar6 = piVar2[0x242];
  uVar15 = *(undefined4 *)(iVar9 + 0x90);
  uVar16 = *(undefined4 *)(iVar9 + 0x88);
  uVar20 = *(undefined4 *)(iVar9 + 0x8c);
  uVar11 = *(undefined4 *)(iVar9 + 0x1c);
  uVar18 = *(undefined4 *)(iVar9 + 0x20);
  *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar9 + 0x84);
  *(undefined4 *)(iVar6 + 0x34) = uVar16;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x30) = uVar20;
  *(undefined4 *)(iVar6 + 0x34) = uVar15;
  iVar6 = piVar2[0x244];
  *(undefined4 *)(iVar6 + 0x30) = uVar11;
  *(undefined4 *)(iVar6 + 0x34) = uVar18;
  local_54 = s_cStateBase_Run_0026ddb4;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),7,&local_58);
  iVar6 = piVar2[0x242];
  uVar18 = *(undefined4 *)(iVar9 + 0x98);
  uVar15 = *(undefined4 *)(iVar9 + 0xa4);
  uVar20 = *(undefined4 *)(iVar9 + 0xa8);
  uVar11 = *(undefined4 *)(iVar9 + 0xa0);
  uVar16 = *(undefined4 *)(iVar9 + 0x9c);
  *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar9 + 0x94);
  *(undefined4 *)(iVar6 + 0x3c) = uVar18;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x38) = uVar16;
  *(undefined4 *)(iVar6 + 0x3c) = uVar11;
  iVar6 = piVar2[0x244];
  *(undefined4 *)(iVar6 + 0x38) = uVar15;
  *(undefined4 *)(iVar6 + 0x3c) = uVar20;
  local_54 = s_cStateBase_Reaction_0026ddc4;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),8,&local_58);
  iVar6 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar9 + 0xb0);
  uVar16 = *(undefined4 *)(iVar9 + 0xb4);
  uVar15 = *(undefined4 *)(iVar9 + 0xb8);
  uVar19 = *(undefined8 *)(iVar9 + 0x1c);
  *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar9 + 0xac);
  *(undefined4 *)(iVar6 + 0x44) = uVar11;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x40) = uVar16;
  *(undefined4 *)(iVar6 + 0x44) = uVar15;
  iVar6 = piVar2[0x244];
  *(int *)(iVar6 + 0x40) = (int)uVar19;
  *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar19 >> 0x20);
  local_54 = s_cStateBase_Die_0026ddd8;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),9,&local_58);
  iVar6 = piVar2[0x242];
  uVar15 = *(undefined4 *)(iVar9 + 0xc0);
  uVar16 = *(undefined4 *)(iVar9 + 0xc4);
  uVar11 = *(undefined4 *)(iVar9 + 200);
  *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar9 + 0xbc);
  *(undefined4 *)(iVar6 + 0x4c) = uVar15;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x48) = uVar16;
  *(undefined4 *)(iVar6 + 0x4c) = uVar11;
  iVar6 = piVar2[0x244];
  *(int *)(iVar6 + 0x48) = (int)uVar19;
  *(int *)(iVar6 + 0x4c) = (int)((ulonglong)uVar19 >> 0x20);
  local_54 = s_cState_RupeeWait_0026dde8;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),10,&local_58);
  iVar6 = piVar2[0x242];
  uVar18 = *(undefined4 *)(iVar9 + 0xd4);
  uVar16 = *(undefined4 *)(iVar9 + 0xdc);
  uVar20 = *(undefined4 *)(iVar9 + 0xe0);
  uVar11 = *(undefined4 *)(iVar9 + 0xd0);
  uVar15 = *(undefined4 *)(iVar9 + 0xd8);
  *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar9 + 0xcc);
  *(undefined4 *)(iVar6 + 0x54) = uVar11;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x50) = uVar18;
  *(undefined4 *)(iVar6 + 0x54) = uVar15;
  iVar6 = piVar2[0x244];
  *(undefined4 *)(iVar6 + 0x50) = uVar16;
  *(undefined4 *)(iVar6 + 0x54) = uVar20;
  local_54 = s_cState_ChangeLike_0026ddfc;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),0xb,&local_58);
  iVar6 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar9 + 0xf4);
  uVar20 = *(undefined4 *)(iVar9 + 0xf8);
  uVar16 = *(undefined4 *)(iVar9 + 0xe8);
  uVar18 = *(undefined4 *)(iVar9 + 0xec);
  uVar15 = *(undefined4 *)(iVar9 + 0xf0);
  *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(iVar9 + 0xe4);
  *(undefined4 *)(iVar6 + 0x5c) = uVar16;
  iVar6 = piVar2[0x243];
  *(undefined4 *)(iVar6 + 0x58) = uVar18;
  *(undefined4 *)(iVar6 + 0x5c) = uVar15;
  iVar6 = piVar2[0x244];
  *(undefined4 *)(iVar6 + 0x58) = uVar11;
  *(undefined4 *)(iVar6 + 0x5c) = uVar20;
  local_54 = s_cState_Erase_0026de10;
  local_58 = iVar10;
  func_0010BEC4((int)(piVar2 + 0x23c),0xc,&local_58);
  iVar6 = piVar2[0x242];
  uVar11 = DAT_0026de20[1];
  uVar16 = *(undefined4 *)(iVar9 + 0x1c);
  uVar18 = *(undefined4 *)(iVar9 + 0x20);
  uVar20 = DAT_0026de20[2];
  uVar15 = DAT_0026de20[3];
  *(undefined4 *)(iVar6 + 0x60) = *DAT_0026de20;
  *(undefined4 *)(iVar6 + 100) = uVar11;
  iVar9 = piVar2[0x243];
  *(undefined4 *)(iVar9 + 0x60) = uVar20;
  *(undefined4 *)(iVar9 + 100) = uVar15;
  iVar9 = piVar2[0x244];
  *(undefined4 *)(iVar9 + 0x60) = uVar16;
  *(undefined4 *)(iVar9 + 100) = uVar18;
  func_006609A0(piVar2 + 0x23c,10);
  local_54 = s_locator1_0026de24;
  local_58 = iVar10;
  uVar13 = func_00564A78(piVar2[0x103],&local_58);
  piVar2[0x24a] = uVar13;
  iVar10 = piVar2[0x247];
  *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar10 + 0x80),piVar2[0xfa],(float *)(piVar2 + 0xf4));
  func_00168E9C((int *)piVar2[0x249],piVar2[0x247],(int *)0x0);
  func_004CEAF0(piVar2[0x247]);
  *(undefined2 *)(DAT_0026de30 + (int)piVar2) = 1;
  return piVar2;
}

