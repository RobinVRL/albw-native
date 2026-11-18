#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001635F8(int param_1,uint param_2,float fparam_0);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC5EC(int param_1,undefined1 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00658604(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00164690;
extern int DAT_00164694;
extern int DAT_00164698;
extern undefined4 DAT_0016469c;
extern undefined4 DAT_001646a0;
extern undefined4 DAT_001646a4;
extern int DAT_001646a8;
extern int DAT_001646b8;
extern int DAT_001646bc;
extern undefined4 *DAT_001646c0;
extern undefined *DAT_001646c4;
extern int DAT_001646c8;
extern undefined4 *DAT_00164ab0;
extern float DAT_00164ab4;
extern undefined4 DAT_00164ab8;
extern float DAT_00164abc;
extern float DAT_00164ac0;
extern char s_cState_Carry_00164a48[];
extern char s_cState_Die_00164aa4[];
extern char s_cState_FlyHideEd_001646fc[];
extern char s_cState_FlyHide_001646ec[];
extern char s_cState_FlyUp_00164710[];
extern char s_cState_FlyWait_001646cc[];
extern char s_cState_FlyWalk_001646dc[];
extern char s_cState_Hooked_00164720[];
extern char s_cState_Reaction_00164a94[];
extern char s_cState_Ready_00164a84[];
extern char s_cState_Wait_00164a58[];
extern char s_cState_WalkEd_00164a74[];
extern char s_cState_WalkSt_00164a64[];
extern char s_shell_root_001646ac[];

// USA 00164284 <- EU 00164288 (Ghidra, non-matching)
// GLOBAL DAT_00164690 uint *
// GLOBAL DAT_00164694 int
// GLOBAL DAT_00164698 int
// GLOBAL DAT_0016469c undefined4
// GLOBAL DAT_001646a0 undefined4
// GLOBAL DAT_001646a4 undefined4
// GLOBAL DAT_001646a8 int
// GLOBAL DAT_001646b8 int
// GLOBAL DAT_001646bc int
// GLOBAL DAT_001646c0 undefined4 *
// GLOBAL DAT_001646c4 undefined *
// GLOBAL DAT_001646c8 int
// GLOBAL DAT_00164ab0 undefined4 *
// GLOBAL DAT_00164ab4 float
// GLOBAL DAT_00164ab8 undefined4
// GLOBAL DAT_00164abc float
// GLOBAL DAT_00164ac0 float
// GLOBAL s_cState_Carry_00164a48 string
// GLOBAL s_cState_Die_00164aa4 string
// GLOBAL s_cState_FlyHideEd_001646fc string
// GLOBAL s_cState_FlyHide_001646ec string
// GLOBAL s_cState_FlyUp_00164710 string
// GLOBAL s_cState_FlyWait_001646cc string
// GLOBAL s_cState_FlyWalk_001646dc string
// GLOBAL s_cState_Hooked_00164720 string
// GLOBAL s_cState_Reaction_00164a94 string
// GLOBAL s_cState_Ready_00164a84 string
// GLOBAL s_cState_Wait_00164a58 string
// GLOBAL s_cState_WalkEd_00164a74 string
// GLOBAL s_cState_WalkSt_00164a64 string
// GLOBAL s_shell_root_001646ac string

undefined4 * func_00164284(undefined4 *param_1,uint *param_2)

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
  int iVar10;
  int iVar11;
  uint extraout_r1;
  float *pfVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar19;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_004FD464(param_1,param_2,DAT_00164690);
  iVar8 = DAT_00164694;
  *piVar2 = DAT_00164694;
  piVar2[200] = iVar8 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  iVar8 = DAT_00164698;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar9 = *(undefined4 *)(iVar8 + 4);
  puVar3[0xc] = *(undefined4 *)(iVar8 + 8);
  uVar15 = DAT_0016469c;
  puVar3[0xb] = uVar9;
  uVar9 = DAT_001646a4;
  puVar3[9] = uVar15;
  puVar3[10] = puVar3 + -0x22f;
  uVar15 = DAT_001646a0;
  puVar13 = puVar3 + -0x22f;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = uVar15;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = uVar9;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = uVar9;
  *(undefined1 *)(puVar3 + 0x19) = 0;
  *(undefined1 *)((int)puVar3 + 0x65) = 0;
  puVar3[0xd] = puVar3[-0x147];
  iVar4 = func_0054DDF4((int)puVar13,1);
  puVar3[-0x11f] = puVar3 + 9;
  puVar3[0xe] = iVar4;
  func_004FB344((int)puVar13,0x10);
  iVar4 = DAT_001646a8;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar13,uVar14,(int *)(iVar4 + uVar14 * 8));
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x10);
  func_004FB468((int)puVar13);
  iVar4 = DAT_001646b8;
  local_34 = s_shell_root_001646ac;
  local_38 = DAT_001646b8;
  uVar14 = func_00564A78(puVar3[-300],&local_38);
  puVar3[0x11] = uVar14;
  *(undefined1 *)((int)puVar3 + 6) = 0xd;
  puVar3[5] = puVar13;
  iVar5 = func_0010BA78(0xd0);
  puVar3[6] = iVar5;
  iVar11 = DAT_001646bc;
  puVar3[7] = iVar5 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar10 = 0xd;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar15 = DAT_001646c0[1];
    iVar10 = iVar10 + -1;
    puVar6[2] = *DAT_001646c0;
    puVar6[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar11 + 8);
    puVar6[4] = *(undefined4 *)(iVar11 + 4);
    puVar6[5] = uVar15;
    puVar6 = puVar6 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar3[8] = puVar6;
  if (uVar14 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar8 + 0x20);
      *puVar6 = *(undefined4 *)(iVar8 + 0x1c);
      puVar6[1] = uVar15;
      puVar7 = puVar6;
    }
    for (iVar11 = (int)uVar14 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar15 = *(undefined4 *)(iVar8 + 0x20);
      puVar7[2] = *(undefined4 *)(iVar8 + 0x1c);
      puVar7[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar8 + 0x20);
      puVar7[4] = *(undefined4 *)(iVar8 + 0x1c);
      puVar7[5] = uVar15;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x1dc,(int *)0x0,4);
  iVar11 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 0xd;
    iVar11 = func_00100118((int)(puVar6 + 2),DAT_001646c4,0x24,0xd);
  }
  if (iVar11 != 0) {
    puVar3[3] = iVar11;
    puVar3[2] = 0xd;
  }
  iVar11 = DAT_001646c8;
  puVar3[-0x15a] = puVar3;
  *(undefined2 *)(iVar11 + (int)puVar13) = 0xd;
  local_34 = s_cState_FlyWait_001646cc;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,0,&local_38);
  puVar6 = (undefined4 *)puVar3[6];
  uVar16 = *(undefined4 *)(iVar8 + 0x10);
  uVar15 = *(undefined4 *)(iVar8 + 0x14);
  uVar9 = *(undefined4 *)(iVar8 + 0x18);
  uVar19 = *(undefined4 *)(iVar8 + 0x1c);
  uVar17 = *(undefined4 *)(iVar8 + 0x20);
  *puVar6 = *(undefined4 *)(iVar8 + 0xc);
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar15;
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = uVar19;
  puVar6[1] = uVar17;
  local_34 = s_cState_FlyWalk_001646dc;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,1,&local_38);
  iVar11 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar8 + 0x28);
  uVar9 = *(undefined4 *)(iVar8 + 0x2c);
  uVar16 = *(undefined4 *)(iVar8 + 0x30);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar8 + 0x24);
  *(undefined4 *)(iVar11 + 0xc) = uVar15;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 8) = uVar9;
  *(undefined4 *)(iVar11 + 0xc) = uVar16;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 8) = uVar19;
  *(undefined4 *)(iVar11 + 0xc) = uVar17;
  local_34 = s_cState_FlyHide_001646ec;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,2,&local_38);
  iVar11 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar8 + 0x38);
  uVar9 = *(undefined4 *)(iVar8 + 0x3c);
  uVar16 = *(undefined4 *)(iVar8 + 0x40);
  uVar17 = *(undefined4 *)(iVar8 + 0x44);
  uVar19 = *(undefined4 *)(iVar8 + 0x48);
  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar8 + 0x34);
  *(undefined4 *)(iVar11 + 0x14) = uVar15;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x10) = uVar9;
  *(undefined4 *)(iVar11 + 0x14) = uVar16;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x10) = uVar17;
  *(undefined4 *)(iVar11 + 0x14) = uVar19;
  local_34 = s_cState_FlyHideEd_001646fc;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,3,&local_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar8 + 0x50);
  uVar15 = *(undefined4 *)(iVar8 + 0x54);
  uVar9 = *(undefined4 *)(iVar8 + 0x58);
  uVar18 = *(undefined8 *)(iVar8 + 0x1c);
  *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(iVar8 + 0x4c);
  *(undefined4 *)(iVar11 + 0x1c) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x18) = uVar15;
  *(undefined4 *)(iVar11 + 0x1c) = uVar9;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x18) = (int)uVar18;
  *(int *)(iVar11 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_FlyUp_00164710;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,4,&local_38);
  iVar11 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar8 + 0x60);
  uVar9 = *(undefined4 *)(iVar8 + 100);
  uVar16 = *(undefined4 *)(iVar8 + 0x68);
  *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(iVar8 + 0x5c);
  *(undefined4 *)(iVar11 + 0x24) = uVar15;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x20) = uVar9;
  *(undefined4 *)(iVar11 + 0x24) = uVar16;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x20) = (int)uVar18;
  *(int *)(iVar11 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Hooked_00164720;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,5,&local_38);
  iVar11 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar8 + 0x74);
  uVar16 = *(undefined4 *)(iVar8 + 0x78);
  uVar17 = *(undefined4 *)(iVar8 + 0x7c);
  uVar19 = *(undefined4 *)(iVar8 + 0x80);
  uVar9 = *(undefined4 *)(iVar8 + 0x70);
  *(undefined4 *)(iVar11 + 0x28) = *(undefined4 *)(iVar8 + 0x6c);
  *(undefined4 *)(iVar11 + 0x2c) = uVar9;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x28) = uVar15;
  *(undefined4 *)(iVar11 + 0x2c) = uVar16;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x28) = uVar17;
  *(undefined4 *)(iVar11 + 0x2c) = uVar19;
  local_34 = s_cState_Carry_00164a48;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,6,&local_38);
  iVar11 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar8 + 0x88);
  uVar9 = *(undefined4 *)(iVar8 + 0x8c);
  uVar16 = *(undefined4 *)(iVar8 + 0x90);
  uVar17 = *(undefined4 *)(iVar8 + 0x94);
  uVar19 = *(undefined4 *)(iVar8 + 0x98);
  *(undefined4 *)(iVar11 + 0x30) = *(undefined4 *)(iVar8 + 0x84);
  *(undefined4 *)(iVar11 + 0x34) = uVar15;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x30) = uVar9;
  *(undefined4 *)(iVar11 + 0x34) = uVar16;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x30) = uVar17;
  *(undefined4 *)(iVar11 + 0x34) = uVar19;
  local_34 = s_cState_Wait_00164a58;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,7,&local_38);
  iVar11 = puVar3[6];
  uVar17 = *(undefined4 *)(iVar8 + 0xa4);
  uVar9 = *(undefined4 *)(iVar8 + 0xa0);
  uVar15 = *(undefined4 *)(iVar8 + 0x1c);
  uVar16 = *(undefined4 *)(iVar8 + 0xa8);
  uVar19 = *(undefined4 *)(iVar8 + 0x20);
  *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(iVar8 + 0x9c);
  *(undefined4 *)(iVar11 + 0x3c) = uVar9;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x38) = uVar17;
  *(undefined4 *)(iVar11 + 0x3c) = uVar16;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x38) = uVar15;
  *(undefined4 *)(iVar11 + 0x3c) = uVar19;
  local_34 = s_cState_WalkSt_00164a64;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,8,&local_38);
  iVar11 = puVar3[6];
  uVar19 = *(undefined4 *)(iVar8 + 0xb0);
  uVar15 = *(undefined4 *)(iVar8 + 0xb4);
  uVar17 = *(undefined4 *)(iVar8 + 0xb8);
  uVar9 = *(undefined4 *)(iVar8 + 0xbc);
  uVar16 = *(undefined4 *)(iVar8 + 0xc0);
  *(undefined4 *)(iVar11 + 0x40) = *(undefined4 *)(iVar8 + 0xac);
  *(undefined4 *)(iVar11 + 0x44) = uVar19;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x40) = uVar15;
  *(undefined4 *)(iVar11 + 0x44) = uVar17;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x40) = uVar9;
  *(undefined4 *)(iVar11 + 0x44) = uVar16;
  local_34 = s_cState_WalkEd_00164a74;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,9,&local_38);
  iVar11 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar8 + 200);
  uVar9 = *(undefined4 *)(iVar8 + 0xcc);
  uVar16 = *(undefined4 *)(iVar8 + 0xd0);
  uVar18 = *(undefined8 *)(iVar8 + 0x1c);
  *(undefined4 *)(iVar11 + 0x48) = *(undefined4 *)(iVar8 + 0xc4);
  *(undefined4 *)(iVar11 + 0x4c) = uVar15;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x48) = uVar9;
  *(undefined4 *)(iVar11 + 0x4c) = uVar16;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x48) = (int)uVar18;
  *(int *)(iVar11 + 0x4c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Ready_00164a84;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,10,&local_38);
  iVar11 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar8 + 0xdc);
  uVar16 = *(undefined4 *)(iVar8 + 0xe0);
  uVar9 = *(undefined4 *)(iVar8 + 0xd8);
  *(undefined4 *)(iVar11 + 0x50) = *(undefined4 *)(iVar8 + 0xd4);
  *(undefined4 *)(iVar11 + 0x54) = uVar9;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x50) = uVar15;
  *(undefined4 *)(iVar11 + 0x54) = uVar16;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x50) = (int)uVar18;
  *(int *)(iVar11 + 0x54) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Reaction_00164a94;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,0xb,&local_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar8 + 0xe8);
  uVar15 = *(undefined4 *)(iVar8 + 0xec);
  uVar9 = *(undefined4 *)(iVar8 + 0xf0);
  *(undefined4 *)(iVar11 + 0x58) = *(undefined4 *)(iVar8 + 0xe4);
  *(undefined4 *)(iVar11 + 0x5c) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x58) = uVar15;
  *(undefined4 *)(iVar11 + 0x5c) = uVar9;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x58) = (int)uVar18;
  *(int *)(iVar11 + 0x5c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Die_00164aa4;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,0xc,&local_38);
  iVar4 = puVar3[6];
  pfVar12 = *(float **)(iVar8 + 0xf8);
  uVar15 = *DAT_00164ab0;
  uVar9 = DAT_00164ab0[1];
  *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(iVar8 + 0xf4);
  *(float **)(iVar4 + 100) = pfVar12;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x60) = uVar15;
  *(undefined4 *)(iVar8 + 100) = uVar9;
  iVar8 = puVar3[8];
  *(int *)(iVar8 + 0x60) = (int)uVar18;
  *(int *)(iVar8 + 100) = (int)((ulonglong)uVar18 >> 0x20);
  if (*(short *)((int)puVar3 + -0x88e) == 1 || *(short *)((int)puVar3 + -0x88e) == 2) {
    func_00658604(puVar3,10);
  }
  else {
    func_00658604(puVar3,0);
    func_001635F8((int)puVar13,extraout_r1,DAT_00164ab4);
  }
  func_004F5BD8((int)puVar13,(uint *)0x0,(int **)0x0,pfVar12);
  func_004FC5EC((int)puVar13,8);
  func_004FBA18((int)puVar13,9,10,-1,0x1e,0,(ushort)DAT_00164ab8,DAT_00164ac0,DAT_00164abc);
  puVar3[-200] = puVar3[-200] & 0xfbffffff | 0x8000;
  func_002AF5FC((int)puVar13,0xd,-1);
  func_002AED68((int)puVar13,0xd);
  *(undefined1 *)((int)puVar3 + -0x13f) = 0xe;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  return puVar13;
}

