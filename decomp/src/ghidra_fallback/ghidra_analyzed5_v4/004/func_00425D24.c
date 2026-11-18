#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066C19C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_004260e0;
extern undefined4 DAT_004260e4;
extern int DAT_004260f0;
extern undefined DAT_004260f4;
extern int *DAT_00426110;
extern undefined4 *DAT_00426114;
extern undefined *DAT_00426118;
extern char s_Decide_004260fc[];
extern char s_OnOff_004260e8[];
extern char s_T_Btn_00_00426104[];
extern char s_cState_Decide_0042624c[];
extern char s_cState_Decided_0042625c[];
extern char s_cState_Idle_0042612c[];
extern char s_cState_Selected_0042614c[];
extern char s_cState_ToIdle_0042611c[];
extern char s_cState_ToSelected_00426138[];

// USA 00425D24 <- EU 00425D04 (Ghidra, non-matching)
// GLOBAL DAT_004260e0 undefined4
// GLOBAL DAT_004260e4 undefined4
// GLOBAL DAT_004260f0 int
// GLOBAL DAT_004260f4 undefined
// GLOBAL DAT_00426110 int *
// GLOBAL DAT_00426114 undefined4 *
// GLOBAL DAT_00426118 undefined *
// GLOBAL s_Decide_004260fc string
// GLOBAL s_OnOff_004260e8 string
// GLOBAL s_T_Btn_00_00426104 string
// GLOBAL s_cState_Decide_0042624c string
// GLOBAL s_cState_Decided_0042625c string
// GLOBAL s_cState_Idle_0042612c string
// GLOBAL s_cState_Selected_0042614c string
// GLOBAL s_cState_ToIdle_0042611c string
// GLOBAL s_cState_ToSelected_00426138 string

undefined4 * func_00425D24(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar20;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  puVar3 = func_001B6E04(param_1);
  *puVar3 = DAT_004260e0;
  puVar3 = func_0010A794(puVar3 + 0xe);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined2 *)(puVar3 + 9) = 0;
  uVar16 = DAT_004260e4;
  *(undefined2 *)((int)puVar3 + 0x26) = 0xffff;
  puVar3[10] = uVar16;
  puVar13 = puVar3 + -0xe;
  puVar3[0xb] = 0;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  *(undefined2 *)((int)puVar3 + 0x32) = 0xffff;
  puVar3[0xd] = uVar16;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined1 *)(puVar3 + 0x10) = 1;
  *(undefined1 *)((int)puVar3 + 0x41) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar4 == (undefined4 *)0x0) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = func_00168434(puVar4);
  }
  func_00168100(piVar14,param_2,param_3);
  puVar3[-7] = piVar14;
  puVar3[-8] = puVar3[-8] | 0x10;
  func_0016773C((int)piVar14,3);
  iVar17 = DAT_004260f0;
  local_2c = s_OnOff_004260e8;
  local_30 = DAT_004260f0;
  func_00166C20(piVar14,0,&local_30,0);
  local_2c = &DAT_004260f4;
  local_30 = iVar17;
  func_00166C20(piVar14,1,&local_30,0);
  local_2c = s_Decide_004260fc;
  local_30 = iVar17;
  func_00166C20(piVar14,2,&local_30,0);
  puVar3[0xe] = piVar14;
  *(undefined2 *)((int)puVar3 + 0x32) = 1;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar4 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = func_002C0294(puVar5);
  }
  puVar3[-9] = puVar4;
  func_002C00D4(puVar4,puVar13,piVar14);
  *(undefined4 *)(puVar3[-9] + 0xc) = 1;
  *(ushort *)(puVar3[-9] + 0x16) = *(ushort *)(puVar3[-9] + 0x16) & 0xffbf;
  local_2c = s_T_Btn_00_00426104;
  local_30 = iVar17;
  piVar6 = (int *)func_005229AC((int *)puVar3[-7],&local_30);
  piVar14 = DAT_00426110;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar14) goto LAB_00425ec8;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_00425ec8:
  puVar3[0xf] = piVar6;
  puVar3[5] = puVar13;
  *(undefined1 *)((int)puVar3 + 6) = 6;
  iVar8 = func_0010BA78(0x60);
  puVar4 = DAT_00426114;
  puVar3[6] = iVar8;
  puVar3[7] = iVar8 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar10 = 6;
  puVar5 = (undefined4 *)(iVar8 + -8);
  do {
    uVar16 = puVar4[0x1d];
    iVar10 = iVar10 + -1;
    puVar5[2] = puVar4[0x1c];
    puVar5[3] = uVar16;
    uVar16 = puVar4[0x1d];
    puVar5[4] = puVar4[0x1c];
    puVar5[5] = uVar16;
    puVar5 = puVar5 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar15 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar3[8] = puVar5;
  if (uVar15 != 0) {
    puVar9 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar4[5];
      *puVar5 = puVar4[4];
      puVar5[1] = uVar16;
      puVar9 = puVar5;
    }
    for (iVar8 = (int)uVar15 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar16 = puVar4[5];
      puVar9[2] = puVar4[4];
      puVar9[3] = uVar16;
      uVar16 = puVar4[5];
      puVar9[4] = puVar4[4];
      puVar9[5] = uVar16;
      puVar9 = puVar9 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  puVar2 = DAT_00426118;
  iVar8 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 6;
    *puVar5 = 0x24;
    iVar8 = func_00100118((int)(puVar5 + 2),puVar2,0x24,6);
  }
  if (iVar8 != 0) {
    puVar3[3] = iVar8;
    puVar3[2] = 6;
  }
  local_2c = s_cState_ToIdle_0042611c;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,0,&local_30);
  puVar5 = (undefined4 *)puVar3[6];
  uVar12 = puVar4[1];
  uVar16 = puVar4[2];
  uVar11 = puVar4[3];
  uVar20 = puVar4[4];
  uVar18 = puVar4[5];
  *puVar5 = *puVar4;
  puVar5[1] = uVar12;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar16;
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar20;
  puVar5[1] = uVar18;
  local_2c = s_cState_Idle_0042612c;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,1,&local_30);
  iVar8 = puVar3[6];
  uVar16 = puVar4[7];
  uVar11 = puVar4[8];
  uVar12 = puVar4[9];
  *(undefined4 *)(iVar8 + 8) = puVar4[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar16;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 8) = uVar20;
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  local_2c = s_cState_ToSelected_00426138;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,2,&local_30);
  iVar8 = puVar3[6];
  uVar12 = puVar4[0xb];
  uVar16 = puVar4[0xc];
  uVar11 = puVar4[0xd];
  *(undefined4 *)(iVar8 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar12;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar16;
  *(undefined4 *)(iVar8 + 0x14) = uVar11;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar20;
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  local_2c = s_cState_Selected_0042614c;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,3,&local_30);
  iVar8 = puVar3[6];
  uVar16 = puVar4[0xf];
  uVar20 = puVar4[0x10];
  uVar11 = puVar4[0x13];
  uVar12 = puVar4[0x11];
  uVar18 = puVar4[0x12];
  *(undefined4 *)(iVar8 + 0x18) = puVar4[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar16;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar20;
  *(undefined4 *)(iVar8 + 0x1c) = uVar12;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar18;
  *(undefined4 *)(iVar8 + 0x1c) = uVar11;
  local_2c = s_cState_Decide_0042624c;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,4,&local_30);
  iVar8 = puVar3[6];
  uVar16 = puVar4[0x15];
  uVar11 = puVar4[0x16];
  uVar12 = puVar4[0x17];
  uVar19 = *(undefined8 *)(puVar4 + 4);
  *(undefined4 *)(iVar8 + 0x20) = puVar4[0x14];
  *(undefined4 *)(iVar8 + 0x24) = uVar16;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar11;
  *(undefined4 *)(iVar8 + 0x24) = uVar12;
  iVar8 = puVar3[8];
  *(int *)(iVar8 + 0x20) = (int)uVar19;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar19 >> 0x20);
  local_2c = s_cState_Decided_0042625c;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,5,&local_30);
  iVar17 = puVar3[6];
  uVar16 = puVar4[0x19];
  uVar11 = puVar4[0x1a];
  uVar12 = puVar4[0x1b];
  *(undefined4 *)(iVar17 + 0x28) = puVar4[0x18];
  *(undefined4 *)(iVar17 + 0x2c) = uVar16;
  iVar17 = puVar3[7];
  *(undefined4 *)(iVar17 + 0x28) = uVar11;
  *(undefined4 *)(iVar17 + 0x2c) = uVar12;
  iVar17 = puVar3[8];
  *(int *)(iVar17 + 0x28) = (int)uVar19;
  *(int *)(iVar17 + 0x2c) = (int)((ulonglong)uVar19 >> 0x20);
  func_0066C19C(puVar3,1);
  return puVar13;
}

