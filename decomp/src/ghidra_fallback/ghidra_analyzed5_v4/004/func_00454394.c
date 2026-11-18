#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_00254EFC(undefined4 *param_1,int *param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_00367E18(int param_1,int *param_2,int *param_3);
extern int func_00368300(int param_1,int *param_2,int *param_3);
extern int func_00368828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern int func_003693A0(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00369560(int param_1,int *param_2,int *param_3,int param_4);
extern int func_0036959C(undefined4 *param_1,int param_2);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9660(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00454778;
extern int DAT_0045477c;
extern undefined4 DAT_00454780;
extern undefined4 *DAT_00454784;
extern undefined *DAT_00454788;
extern uint DAT_0045479c;
extern undefined1 *DAT_004547e4;
extern uint DAT_004547e8;
extern int DAT_004547ec;
extern undefined4 DAT_004549dc;
extern int *DAT_00454a10;
extern undefined *DAT_00454a24;
extern int DAT_00454a28;
extern char s_L_Arrow_00_004549d0[];
extern char s_L_RupeeNum_00_00454a14[];
extern char s_N_Guide_00_00454a2c[];
extern char s_T_MedalNum_00_004549e0[];
extern char s_T_PlayerName_00_004549f0[];
extern char s_T_UserName_00_00454a00[];
extern char s_cState_ArrowIn_0045478c[];
extern char s_cState_AskLeave_004547d4[];
extern char s_cState_GuideRemove_004547c0[];
extern char s_cState_LeaveDecide_004547ac[];
extern char s_cState_Wait_004547a0[];

// USA 00454394 <- EU 0045436C (Ghidra, non-matching)
// GLOBAL DAT_00454778 int
// GLOBAL DAT_0045477c int
// GLOBAL DAT_00454780 undefined4
// GLOBAL DAT_00454784 undefined4 *
// GLOBAL DAT_00454788 undefined *
// GLOBAL DAT_0045479c uint
// GLOBAL DAT_004547e4 undefined1 *
// GLOBAL DAT_004547e8 uint
// GLOBAL DAT_004547ec int
// GLOBAL DAT_004549dc undefined4
// GLOBAL DAT_00454a10 int *
// GLOBAL DAT_00454a24 undefined *
// GLOBAL DAT_00454a28 int
// GLOBAL s_L_Arrow_00_004549d0 string
// GLOBAL s_L_RupeeNum_00_00454a14 string
// GLOBAL s_N_Guide_00_00454a2c string
// GLOBAL s_T_MedalNum_00_004549e0 string
// GLOBAL s_T_PlayerName_00_004549f0 string
// GLOBAL s_T_UserName_00_00454a00 string
// GLOBAL s_cState_ArrowIn_0045478c string
// GLOBAL s_cState_AskLeave_004547d4 string
// GLOBAL s_cState_GuideRemove_004547c0 string
// GLOBAL s_cState_LeaveDecide_004547ac string
// GLOBAL s_cState_Wait_004547a0 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

int * func_00454394(undefined4 *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_48 (*(uint *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(uint *)(albw_frame + 0x1c))
  piVar3 = func_004B9A10(param_1,1);
  iVar7 = DAT_00454778;
  *piVar3 = DAT_00454778;
  piVar3[0xe] = iVar7 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x1d);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  piVar3 = puVar4 + -0x1d;
  puVar4[8] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0xf8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0036959C(puVar5,DAT_0045477c);
  }
  uVar16 = DAT_00454780;
  puVar4[9] = puVar6;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  *(undefined2 *)((int)puVar4 + 0x32) = 0xffff;
  puVar4[0xd] = uVar16;
  puVar4[0xe] = 0;
  *(undefined2 *)(puVar4 + 0xf) = 0;
  *(undefined2 *)((int)puVar4 + 0x3e) = 0xffff;
  puVar4[0x10] = uVar16;
  puVar4[0x11] = 0;
  *(undefined2 *)(puVar4 + 0x12) = 0;
  *(undefined2 *)((int)puVar4 + 0x4a) = 0xffff;
  puVar4[0x13] = uVar16;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  *(undefined1 *)((int)puVar4 + 6) = 5;
  puVar4[5] = piVar3;
  iVar7 = func_0010BA78(0x50);
  puVar4[6] = iVar7;
  puVar6 = DAT_00454784;
  iVar12 = 5;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar16 = puVar6[0x17];
    iVar12 = iVar12 + -1;
    puVar5[2] = puVar6[0x16];
    puVar5[3] = uVar16;
    uVar16 = puVar6[0x17];
    puVar5[4] = puVar6[0x16];
    puVar5[5] = uVar16;
    puVar5 = puVar5 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar5;
  if (uVar13 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar16;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar16 = puVar6[5];
      puVar8[2] = puVar6[4];
      puVar8[3] = uVar16;
      uVar16 = puVar6[5];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar16;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 5;
    iVar7 = func_00100118((int)(puVar5 + 2),DAT_00454788,0x24,5);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 5;
  }
  uVar13 = DAT_0045479c;
  local_44 = s_cState_ArrowIn_0045478c;
  local_48 = DAT_0045479c;
  func_0010BEC4((int)puVar4,0,(int *)&local_48);
  puVar5 = (undefined4 *)puVar4[6];
  uVar20 = puVar6[4];
  uVar19 = puVar6[5];
  uVar16 = puVar6[1];
  uVar17 = puVar6[2];
  uVar18 = puVar6[3];
  *puVar5 = *puVar6;
  puVar5[1] = uVar16;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar17;
  puVar5[1] = uVar18;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = uVar20;
  puVar5[1] = uVar19;
  local_44 = s_cState_Wait_004547a0;
  local_48 = uVar13;
  func_0010BEC4((int)puVar4,1,(int *)&local_48);
  iVar7 = puVar4[6];
  uVar17 = puVar6[9];
  uVar18 = puVar6[7];
  uVar16 = puVar6[8];
  *(undefined4 *)(iVar7 + 8) = puVar6[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar16;
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 8) = uVar20;
  *(undefined4 *)(iVar7 + 0xc) = uVar19;
  local_44 = s_cState_LeaveDecide_004547ac;
  local_48 = uVar13;
  func_0010BEC4((int)puVar4,2,(int *)&local_48);
  iVar7 = puVar4[6];
  uVar18 = puVar6[0xb];
  uVar16 = puVar6[0xc];
  uVar17 = puVar6[0xd];
  *(undefined4 *)(iVar7 + 0x10) = puVar6[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar18;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar16;
  *(undefined4 *)(iVar7 + 0x14) = uVar17;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar20;
  *(undefined4 *)(iVar7 + 0x14) = uVar19;
  local_44 = s_cState_GuideRemove_004547c0;
  local_48 = uVar13;
  func_0010BEC4((int)puVar4,3,(int *)&local_48);
  iVar7 = puVar4[6];
  uVar17 = puVar6[0xf];
  uVar18 = puVar6[0x10];
  uVar16 = puVar6[0x11];
  *(undefined4 *)(iVar7 + 0x18) = puVar6[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar17;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar18;
  *(undefined4 *)(iVar7 + 0x1c) = uVar16;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar20;
  *(undefined4 *)(iVar7 + 0x1c) = uVar19;
  local_44 = s_cState_AskLeave_004547d4;
  local_48 = uVar13;
  func_0010BEC4((int)puVar4,4,(int *)&local_48);
  iVar7 = puVar4[6];
  uVar18 = puVar6[0x13];
  uVar16 = puVar6[0x14];
  uVar17 = puVar6[0x15];
  *(undefined4 *)(iVar7 + 0x20) = puVar6[0x12];
  puVar2 = DAT_004547e4;
  *(undefined4 *)(iVar7 + 0x24) = uVar18;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar16;
  *(undefined4 *)(iVar7 + 0x24) = uVar17;
  iVar7 = DAT_0045477c;
  iVar12 = puVar4[8];
  *(undefined4 *)(iVar12 + 0x20) = uVar20;
  *(undefined4 *)(iVar12 + 0x24) = uVar19;
  objStack_50[0] = DAT_004547e8;
  *puVar2 = 1;
  (**(code **)(*piVar3 + 0x38))(piVar3,iVar7,objStack_50);
  piVar15 = (int *)puVar4[-0x16];
  *puVar2 = 0;
  func_0016773C((int)piVar15,0xc);
  iVar7 = DAT_004547ec;
  uVar14 = 0;
  do {
    func_00166C20(piVar15,uVar14,(int *)(iVar7 + uVar14 * 8),0);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 8);
  puVar4[-0x13] = piVar15;
  *(undefined2 *)((int)puVar4 + -0x52) = 0;
  *(undefined2 *)(puVar4 + -0x15) = 0;
  func_002313DC((int)(puVar4 + -0x15));
  puVar4[0x14] = piVar15;
  *(undefined2 *)((int)puVar4 + 0x4a) = 7;
  *(undefined2 *)(puVar4 + 0x12) = 0;
  func_002313DC((int)(puVar4 + 0x12));
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_002C0294(puVar5);
  }
  puVar4[-0x18] = puVar6;
  func_004B9660((int)piVar3,(int)puVar6);
  *(undefined4 *)(puVar4[-0x18] + 0xc) = 0x10;
  puVar5 = (undefined4 *)func_0010BAB4(0x44);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    objStack_50[1] = (uint)s_L_Arrow_00_004549d0;
    objStack_50[0] = uVar13;
    puVar6 = func_00254EFC(puVar5,piVar15,(int *)objStack_50);
  }
  puVar4[10] = puVar6;
  func_004B948C((int)piVar3,(int)puVar6);
  *(undefined4 *)(*(int *)(puVar4[10] + 0x14) + 0xc) = DAT_004549dc;
  local_3c = s_T_MedalNum_00_004549e0;
  local_40 = uVar13;
  objStack_50[1] = (uint)s_T_PlayerName_00_004549f0;
  objStack_50[0] = uVar13;
  func_003693A0(puVar4[9],piVar15,(int *)objStack_50,(int *)&local_40);
  objStack_50[1] = (uint)s_T_UserName_00_00454a00;
  objStack_50[0] = uVar13;
  func_00368300(puVar4[9],piVar15,(int *)objStack_50);
  func_00367E18(puVar4[9],piVar15,DAT_00454a10);
  objStack_50[1] = (uint)s_L_RupeeNum_00_00454a14;
  objStack_50[0] = uVar13;
  func_00369560(puVar4[9],piVar15,(int *)objStack_50,(int)piVar3);
  iVar7 = func_0010CEE0(0x30,(int *)0x0,4);
  if ((iVar7 != 0) && (iVar7 = func_00100118(iVar7,DAT_00454a24,0xc,4), iVar7 != 0)) {
    puVar4[0x16] = iVar7;
    puVar4[0x15] = 4;
  }
  iVar7 = DAT_00454a28;
  uVar14 = 0;
  do {
    func_00166C20(piVar15,uVar14 + 8,(int *)(iVar7 + uVar14 * 8),0);
    if (uVar14 < (uint)puVar4[0x15]) {
      puVar9 = (undefined2 *)(puVar4[0x16] + uVar14 * 0xc);
    }
    else {
      puVar9 = (undefined2 *)puVar4[0x16];
    }
    if (uVar14 < 4) {
      puVar11 = &local_40 + uVar14;
    }
    else {
      puVar11 = &local_40;
    }
    *puVar9 = 0;
    *(int **)(puVar9 + 4) = piVar15;
    puVar9[1] = (short)(uVar14 + 8);
    if (uVar14 < (uint)puVar4[0x15]) {
      uVar10 = puVar4[0x16] + uVar14 * 0xc;
    }
    else {
      uVar10 = puVar4[0x16];
    }
    uVar14 = uVar14 + 1;
    *puVar11 = uVar10;
  } while ((int)uVar14 < 4);
  objStack_50[0] = local_34;
  func_00368828(puVar4[9],local_40,local_3c,uStack_38,local_34);
  local_44 = s_N_Guide_00_00454a2c;
  local_48 = uVar13;
  uVar16 = func_005229AC(piVar15,(int *)&local_48);
  puVar4[0xb] = uVar16;
  func_004B9958((int)piVar3,2);
  return piVar3;
}

