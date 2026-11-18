#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066D2AC(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_004567fc;
extern undefined4 DAT_00456800;
extern undefined4 DAT_00456804;
extern undefined DAT_00456808;
extern int DAT_0045680c;
extern undefined DAT_0045681c;
extern undefined DAT_00456838;
extern undefined DAT_0045683c;
extern undefined4 *DAT_00456bf8;
extern undefined *DAT_00456bfc;
extern char s_B_PinL_00_00456860[];
extern char s_B_PinS_00_00456854[];
extern char s_Disable_0045684c[];
extern char s_G_InOutL_00_00456810[];
extern char s_G_InOutS_00_00456820[];
extern char s_N_PinL_00_00456be0[];
extern char s_N_PinS_00_00456bd4[];
extern char s_P_PinL_00_00456bec[];
extern char s_SwitchMap_0045682c[];
extern char s_Yellow_00456844[];
extern char s_cState_Invalid_00456c00[];
extern char s_cState_StandL_00456c30[];
extern char s_cState_StandS_00456c20[];
extern char s_cState_Stick_00456c10[];
extern char s_cState_SwitchToL_00456c40[];
extern char s_cState_SwitchToS_00456c54[];

// USA 00456468 <- EU 00456440 (Ghidra, non-matching)
// GLOBAL DAT_004567fc undefined4
// GLOBAL DAT_00456800 undefined4
// GLOBAL DAT_00456804 undefined4
// GLOBAL DAT_00456808 undefined
// GLOBAL DAT_0045680c int
// GLOBAL DAT_0045681c undefined
// GLOBAL DAT_00456838 undefined
// GLOBAL DAT_0045683c undefined
// GLOBAL DAT_00456bf8 undefined4 *
// GLOBAL DAT_00456bfc undefined *
// GLOBAL s_B_PinL_00_00456860 string
// GLOBAL s_B_PinS_00_00456854 string
// GLOBAL s_Disable_0045684c string
// GLOBAL s_G_InOutL_00_00456810 string
// GLOBAL s_G_InOutS_00_00456820 string
// GLOBAL s_N_PinL_00_00456be0 string
// GLOBAL s_N_PinS_00_00456bd4 string
// GLOBAL s_P_PinL_00_00456bec string
// GLOBAL s_SwitchMap_0045682c string
// GLOBAL s_Yellow_00456844 string
// GLOBAL s_cState_Invalid_00456c00 string
// GLOBAL s_cState_StandL_00456c30 string
// GLOBAL s_cState_StandS_00456c20 string
// GLOBAL s_cState_Stick_00456c10 string
// GLOBAL s_cState_SwitchToL_00456c40 string
// GLOBAL s_cState_SwitchToS_00456c54 string

undefined4 * func_00456468(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  puVar2 = func_001B6E04(param_1);
  *puVar2 = DAT_004567fc;
  uVar6 = DAT_00456800;
  *(undefined2 *)(puVar2 + 0xe) = 0;
  *(undefined2 *)((int)puVar2 + 0x3a) = 0xffff;
  puVar2[0xf] = uVar6;
  puVar2[0x10] = 0;
  *(undefined2 *)(puVar2 + 0x11) = 0;
  *(undefined2 *)((int)puVar2 + 0x46) = 0xffff;
  puVar2[0x12] = uVar6;
  puVar2[0x13] = 0;
  *(undefined2 *)(puVar2 + 0x14) = 0;
  *(undefined2 *)((int)puVar2 + 0x52) = 0xffff;
  puVar2[0x15] = uVar6;
  puVar2[0x16] = 0;
  *(undefined2 *)(puVar2 + 0x17) = 0;
  *(undefined2 *)((int)puVar2 + 0x5e) = 0xffff;
  puVar2[0x18] = uVar6;
  puVar2[0x19] = 0;
  puVar3 = func_0010A794(puVar2 + 0x1a);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  puVar3[10] = uVar6;
  puVar3[0xb] = uVar6;
  *(undefined1 *)(puVar3 + 0xc) = 1;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x15] = param_2;
  puVar9 = puVar3 + -0x1a;
  puVar3[0x14] = 0;
  (**(code **)(puVar3[-0x1a] + 0x38))(puVar9,DAT_00456804,0);
  piVar10 = (int *)puVar3[-0x13];
  func_0016773C((int)piVar10,10);
  iVar12 = DAT_0045680c;
  local_2c = &DAT_00456808;
  local_30 = DAT_0045680c;
  local_34 = s_G_InOutL_00_00456810;
  local_38 = DAT_0045680c;
  (**(code **)(DAT_0045680c + 8))(&local_38);
  iVar4 = func_003FDF90(*(int *)(*piVar10 + 0x14),(int)local_34);
  func_00166C20(piVar10,0,&local_30,iVar4);
  local_34 = &DAT_0045681c;
  local_38 = iVar12;
  local_2c = s_G_InOutL_00_00456810;
  local_30 = iVar12;
  (**(code **)(iVar12 + 8))(&local_30);
  iVar4 = func_003FDF90(*(int *)(*piVar10 + 0x14),(int)local_2c);
  func_00166C20(piVar10,1,&local_38,iVar4);
  local_34 = &DAT_00456808;
  local_38 = iVar12;
  local_2c = s_G_InOutS_00_00456820;
  local_30 = iVar12;
  (**(code **)(iVar12 + 8))(&local_30);
  iVar4 = func_003FDF90(*(int *)(*piVar10 + 0x14),(int)local_2c);
  func_00166C20(piVar10,2,&local_38,iVar4);
  local_34 = &DAT_0045681c;
  local_38 = iVar12;
  local_2c = s_G_InOutS_00_00456820;
  local_30 = iVar12;
  (**(code **)(iVar12 + 8))(&local_30);
  iVar4 = func_003FDF90(*(int *)(*piVar10 + 0x14),(int)local_2c);
  func_00166C20(piVar10,3,&local_38,iVar4);
  local_34 = s_SwitchMap_0045682c;
  local_38 = iVar12;
  func_00166C20(piVar10,4,&local_38,0);
  local_34 = &DAT_00456838;
  local_38 = iVar12;
  func_00166C20(piVar10,5,&local_38,0);
  local_34 = &DAT_0045683c;
  local_38 = iVar12;
  func_00166C20(piVar10,6,&local_38,0);
  local_34 = s_Yellow_00456844;
  local_38 = iVar12;
  func_00166C20(piVar10,7,&local_38,0);
  local_34 = s_Disable_0045684c;
  local_38 = iVar12;
  local_2c = s_G_InOutL_00_00456810;
  local_30 = iVar12;
  (**(code **)(iVar12 + 8))(&local_30);
  iVar4 = func_003FDF90(*(int *)(*piVar10 + 0x14),(int)local_2c);
  func_00166C20(piVar10,8,&local_38,iVar4);
  local_34 = s_Disable_0045684c;
  local_38 = iVar12;
  local_2c = s_G_InOutS_00_00456820;
  local_30 = iVar12;
  (**(code **)(iVar12 + 8))(&local_30);
  iVar4 = func_003FDF90(*(int *)(*piVar10 + 0x14),(int)local_2c);
  func_00166C20(piVar10,9,&local_38,iVar4);
  puVar3[-7] = piVar10;
  *(undefined2 *)((int)puVar3 + -0x22) = 8;
  *(undefined2 *)(puVar3 + -9) = 0;
  puVar3[-4] = piVar10;
  *(undefined2 *)((int)puVar3 + -0x16) = 9;
  *(undefined2 *)(puVar3 + -6) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar2 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = func_002C0294(puVar5);
  }
  puVar3[-0x15] = puVar2;
  func_002C00D4(puVar2,puVar9,(int *)0x0);
  local_34 = s_B_PinS_00_00456854;
  local_38 = iVar12;
  uVar6 = func_005229AC(piVar10,&local_38);
  puVar3[0xd] = uVar6;
  local_34 = s_B_PinL_00_00456860;
  local_38 = iVar12;
  uVar6 = func_005229AC(piVar10,&local_38);
  puVar3[0xe] = uVar6;
  local_34 = s_N_PinS_00_00456bd4;
  local_38 = iVar12;
  uVar6 = func_005229AC(piVar10,&local_38);
  puVar3[0x10] = uVar6;
  local_34 = s_N_PinL_00_00456be0;
  local_38 = iVar12;
  uVar6 = func_005229AC(piVar10,&local_38);
  puVar3[0x11] = uVar6;
  local_34 = s_P_PinL_00_00456bec;
  local_38 = iVar12;
  uVar6 = func_005229AC(piVar10,&local_38);
  puVar3[0x12] = uVar6;
  puVar3[0xf] = *(undefined4 *)(*piVar10 + 0x10);
  *(undefined1 *)((int)puVar3 + 6) = 6;
  puVar3[5] = puVar9;
  iVar4 = func_0010BA78(0x60);
  puVar3[6] = iVar4;
  puVar2 = DAT_00456bf8;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar8 = 6;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar6 = puVar2[0x1d];
    iVar8 = iVar8 + -1;
    puVar5[2] = puVar2[0x1c];
    puVar5[3] = uVar6;
    uVar6 = puVar2[0x1d];
    puVar5[4] = puVar2[0x1c];
    puVar5[5] = uVar6;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar11 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar3[8] = puVar5;
  if (uVar11 != 0) {
    puVar7 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = puVar2[0xb];
      *puVar5 = puVar2[10];
      puVar5[1] = uVar6;
      puVar7 = puVar5;
    }
    for (iVar4 = (int)uVar11 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar6 = puVar2[0xb];
      puVar7[2] = puVar2[10];
      puVar7[3] = uVar6;
      uVar6 = puVar2[0xb];
      puVar7[4] = puVar2[10];
      puVar7[5] = uVar6;
      puVar7 = puVar7 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 6;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_00456bfc,0x24,6);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 6;
  }
  local_34 = s_cState_Invalid_00456c00;
  local_38 = iVar12;
  func_0010BEC4((int)puVar3,0,&local_38);
  puVar5 = (undefined4 *)puVar3[6];
  uVar6 = puVar2[3];
  uVar13 = puVar2[2];
  uVar14 = puVar2[1];
  uVar15 = puVar2[4];
  uVar16 = puVar2[5];
  *puVar5 = *puVar2;
  puVar5[1] = uVar14;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar13;
  puVar5[1] = uVar6;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar15;
  puVar5[1] = uVar16;
  local_34 = s_cState_Stick_00456c10;
  local_38 = iVar12;
  func_0010BEC4((int)puVar3,1,&local_38);
  iVar4 = puVar3[6];
  uVar6 = puVar2[8];
  uVar13 = puVar2[9];
  uVar14 = puVar2[7];
  uVar17 = *(undefined8 *)(puVar2 + 10);
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar6;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 8) = (int)uVar17;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_StandS_00456c20;
  local_38 = iVar12;
  func_0010BEC4((int)puVar3,2,&local_38);
  iVar4 = puVar3[6];
  uVar14 = puVar2[0xd];
  uVar6 = puVar2[0xf];
  uVar13 = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[0xc];
  *(undefined4 *)(iVar4 + 0x14) = uVar14;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar13;
  *(undefined4 *)(iVar4 + 0x14) = uVar6;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x10) = (int)uVar17;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_StandL_00456c30;
  local_38 = iVar12;
  func_0010BEC4((int)puVar3,3,&local_38);
  iVar4 = puVar3[6];
  uVar6 = puVar2[0x12];
  uVar14 = puVar2[0x13];
  uVar13 = puVar2[0x11];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0x10];
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar6;
  *(undefined4 *)(iVar4 + 0x1c) = uVar14;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x18) = (int)uVar17;
  *(int *)(iVar4 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_SwitchToL_00456c40;
  local_38 = iVar12;
  func_0010BEC4((int)puVar3,4,&local_38);
  iVar4 = puVar3[6];
  uVar6 = puVar2[0x16];
  uVar13 = puVar2[0x17];
  uVar14 = puVar2[0x15];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar4 + 0x24) = uVar14;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x20) = uVar6;
  *(undefined4 *)(iVar4 + 0x24) = uVar13;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x20) = (int)uVar17;
  *(int *)(iVar4 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_SwitchToS_00456c54;
  local_38 = iVar12;
  func_0010BEC4((int)puVar3,5,&local_38);
  iVar12 = puVar3[6];
  uVar14 = puVar2[0x19];
  uVar6 = puVar2[0x1a];
  uVar13 = puVar2[0x1b];
  *(undefined4 *)(iVar12 + 0x28) = puVar2[0x18];
  *(undefined4 *)(iVar12 + 0x2c) = uVar14;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x28) = uVar6;
  *(undefined4 *)(iVar12 + 0x2c) = uVar13;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x28) = (int)uVar17;
  *(int *)(iVar12 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  func_0066D2AC(puVar3,0);
  return puVar9;
}

