#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0037D530(int param_1,uint param_2,float *param_3);
extern int func_0037D86C(undefined4 *param_1,uint *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065C310(undefined4 *param_1,undefined1 param_2);
extern int DAT_001cdc18;
extern int DAT_001cdc1c;
extern undefined4 DAT_001cdc20;
extern undefined *DAT_001cdc24;
extern int DAT_001cdc28;
extern int DAT_001cdc38;
extern char s_cState_Blow_001cdc2c[];
extern char s_cState_Carry_001cdc54[];
extern char s_cState_Erase_001cdcac[];
extern char s_cState_Fall_001cdc3c[];
extern char s_cState_GetDemo_001cdc88[];
extern char s_cState_Lava_001cdcbc[];
extern char s_cState_Shrink_001cdc78[];
extern char s_cState_Stop_001cdc48[];
extern char s_cState_TreasureBox_001cdc98[];
extern char s_cState_WaterFloat_001cdc64[];

// USA 001CD73C <- EU 001CD73C (Ghidra, non-matching)
// GLOBAL DAT_001cdc18 int
// GLOBAL DAT_001cdc1c int
// GLOBAL DAT_001cdc20 undefined4
// GLOBAL DAT_001cdc24 undefined *
// GLOBAL DAT_001cdc28 int
// GLOBAL DAT_001cdc38 int
// GLOBAL s_cState_Blow_001cdc2c string
// GLOBAL s_cState_Carry_001cdc54 string
// GLOBAL s_cState_Erase_001cdcac string
// GLOBAL s_cState_Fall_001cdc3c string
// GLOBAL s_cState_GetDemo_001cdc88 string
// GLOBAL s_cState_Lava_001cdcbc string
// GLOBAL s_cState_Shrink_001cdc78 string
// GLOBAL s_cState_Stop_001cdc48 string
// GLOBAL s_cState_TreasureBox_001cdc98 string
// GLOBAL s_cState_WaterFloat_001cdc64 string

undefined4 * func_001CD73C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  ushort uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_28 (*(uint * *)(albw_frame + 0x18))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar5 = func_0037D86C(param_1,param_2);
  iVar11 = DAT_001cdc18;
  *piVar5 = DAT_001cdc18;
  piVar5[200] = iVar11 + 100;
  puVar6 = func_0010A794(piVar5 + 0x135);
  puVar6[5] = 0;
  puVar6[6] = 0;
  iVar11 = DAT_001cdc1c;
  puVar6[7] = 0;
  puVar6[8] = 0;
  *(undefined1 *)(puVar6 + 9) = 0;
  *(undefined1 *)((int)puVar6 + 0x25) = 0;
  uVar12 = *(undefined4 *)(iVar11 + 0xc);
  puVar6[0xd] = *(undefined4 *)(iVar11 + 0x10);
  puVar6[10] = DAT_001cdc20;
  puVar6[0xb] = puVar6 + -0x135;
  puVar6[0xc] = uVar12;
  puVar14 = puVar6 + -0x135;
  *(undefined1 *)(puVar6 + 0xe) = 0;
  iVar7 = func_0054D89C((int)puVar14,0);
  puVar6[-0x31] = iVar7;
  uVar12 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar6[-0x32] = uVar12;
  *(undefined1 *)((int)puVar6 + 6) = 10;
  puVar6[5] = puVar14;
  iVar7 = func_0010BA78(0xa0);
  puVar6[6] = iVar7;
  puVar6[7] = iVar7 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar10 = 10;
  puVar8 = (undefined4 *)(iVar7 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar11 + 0xc0);
    iVar10 = iVar10 + -1;
    puVar8[2] = *(undefined4 *)(iVar11 + 0xbc);
    puVar8[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar11 + 0xc0);
    puVar8[4] = *(undefined4 *)(iVar11 + 0xbc);
    puVar8[5] = uVar12;
    puVar8 = puVar8 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar15 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[8] = puVar8;
  if (uVar15 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar11 + 0x28);
      *puVar8 = *(undefined4 *)(iVar11 + 0x24);
      puVar8[1] = uVar12;
      puVar9 = puVar8;
    }
    for (iVar7 = (int)uVar15 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar12 = *(undefined4 *)(iVar11 + 0x28);
      puVar9[2] = *(undefined4 *)(iVar11 + 0x24);
      puVar9[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar11 + 0x28);
      puVar9[4] = *(undefined4 *)(iVar11 + 0x24);
      puVar9[5] = uVar12;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  puVar2 = DAT_001cdc24;
  iVar7 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 10;
    *puVar8 = 0x24;
    iVar7 = func_00100118((int)(puVar8 + 2),puVar2,0x24,10);
  }
  if (iVar7 != 0) {
    puVar6[3] = iVar7;
    puVar6[2] = 10;
  }
  iVar7 = DAT_001cdc28;
  puVar6[-0x60] = puVar6;
  iVar10 = DAT_001cdc38;
  *(undefined2 *)(iVar7 + (int)puVar14) = 10;
  local_3c = s_cState_Blow_001cdc2c;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,0,&local_40);
  puVar8 = (undefined4 *)puVar6[6];
  uVar16 = *(undefined4 *)(iVar11 + 0x18);
  uVar12 = *(undefined4 *)(iVar11 + 0x1c);
  uVar13 = *(undefined4 *)(iVar11 + 0x20);
  uVar17 = *(undefined8 *)(iVar11 + 0x24);
  *puVar8 = *(undefined4 *)(iVar11 + 0x14);
  puVar8[1] = uVar16;
  puVar8 = (undefined4 *)puVar6[7];
  *puVar8 = uVar12;
  puVar8[1] = uVar13;
  puVar8 = (undefined4 *)puVar6[8];
  *puVar8 = (int)uVar17;
  puVar8[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Fall_001cdc3c;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,1,&local_40);
  iVar7 = puVar6[6];
  uVar12 = *(undefined4 *)(iVar11 + 0x30);
  uVar13 = *(undefined4 *)(iVar11 + 0x34);
  uVar16 = *(undefined4 *)(iVar11 + 0x38);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar11 + 0x2c);
  *(undefined4 *)(iVar7 + 0xc) = uVar12;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 8) = uVar13;
  *(undefined4 *)(iVar7 + 0xc) = uVar16;
  iVar7 = puVar6[8];
  *(int *)(iVar7 + 8) = (int)uVar17;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Stop_001cdc48;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,2,&local_40);
  iVar7 = puVar6[6];
  uVar12 = *(undefined4 *)(iVar11 + 0x40);
  uVar13 = *(undefined4 *)(iVar11 + 0x44);
  uVar16 = *(undefined4 *)(iVar11 + 0x48);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar11 + 0x3c);
  *(undefined4 *)(iVar7 + 0x14) = uVar12;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar13;
  *(undefined4 *)(iVar7 + 0x14) = uVar16;
  iVar7 = puVar6[8];
  *(int *)(iVar7 + 0x10) = (int)uVar17;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Carry_001cdc54;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,3,&local_40);
  iVar7 = puVar6[6];
  uVar16 = *(undefined4 *)(iVar11 + 0x50);
  uVar12 = *(undefined4 *)(iVar11 + 0x54);
  uVar13 = *(undefined4 *)(iVar11 + 0x58);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar11 + 0x4c);
  *(undefined4 *)(iVar7 + 0x1c) = uVar16;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar12;
  *(undefined4 *)(iVar7 + 0x1c) = uVar13;
  iVar7 = puVar6[8];
  *(int *)(iVar7 + 0x18) = (int)uVar17;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_WaterFloat_001cdc64;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,4,&local_40);
  iVar7 = puVar6[6];
  uVar12 = *(undefined4 *)(iVar11 + 0x60);
  uVar13 = *(undefined4 *)(iVar11 + 100);
  uVar16 = *(undefined4 *)(iVar11 + 0x68);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar11 + 0x5c);
  *(undefined4 *)(iVar7 + 0x24) = uVar12;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar13;
  *(undefined4 *)(iVar7 + 0x24) = uVar16;
  iVar7 = puVar6[8];
  *(int *)(iVar7 + 0x20) = (int)uVar17;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Shrink_001cdc78;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,5,&local_40);
  iVar7 = puVar6[6];
  uVar12 = *(undefined4 *)(iVar11 + 0x74);
  uVar16 = *(undefined4 *)(iVar11 + 0x78);
  uVar13 = *(undefined4 *)(iVar11 + 0x70);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar11 + 0x6c);
  *(undefined4 *)(iVar7 + 0x2c) = uVar13;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar12;
  *(undefined4 *)(iVar7 + 0x2c) = uVar16;
  iVar7 = puVar6[8];
  *(int *)(iVar7 + 0x28) = (int)uVar17;
  *(int *)(iVar7 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_GetDemo_001cdc88;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,6,&local_40);
  iVar7 = puVar6[6];
  uVar12 = *(undefined4 *)(iVar11 + 0x80);
  uVar13 = *(undefined4 *)(iVar11 + 0x84);
  uVar16 = *(undefined4 *)(iVar11 + 0x88);
  *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar11 + 0x7c);
  *(undefined4 *)(iVar7 + 0x34) = uVar12;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x30) = uVar13;
  *(undefined4 *)(iVar7 + 0x34) = uVar16;
  iVar7 = puVar6[8];
  *(int *)(iVar7 + 0x30) = (int)uVar17;
  *(int *)(iVar7 + 0x34) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_TreasureBox_001cdc98;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,7,&local_40);
  iVar7 = puVar6[6];
  uVar12 = *(undefined4 *)(iVar11 + 0x90);
  uVar13 = *(undefined4 *)(iVar11 + 0x94);
  uVar16 = *(undefined4 *)(iVar11 + 0x98);
  *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar11 + 0x8c);
  *(undefined4 *)(iVar7 + 0x3c) = uVar12;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x38) = uVar13;
  *(undefined4 *)(iVar7 + 0x3c) = uVar16;
  iVar7 = puVar6[8];
  *(int *)(iVar7 + 0x38) = (int)uVar17;
  *(int *)(iVar7 + 0x3c) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Erase_001cdcac;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,8,&local_40);
  iVar7 = puVar6[6];
  uVar12 = *(undefined4 *)(iVar11 + 0xa0);
  uVar13 = *(undefined4 *)(iVar11 + 0xa4);
  uVar16 = *(undefined4 *)(iVar11 + 0xa8);
  *(undefined4 *)(iVar7 + 0x40) = *(undefined4 *)(iVar11 + 0x9c);
  *(undefined4 *)(iVar7 + 0x44) = uVar12;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x40) = uVar13;
  *(undefined4 *)(iVar7 + 0x44) = uVar16;
  iVar7 = puVar6[8];
  *(int *)(iVar7 + 0x40) = (int)uVar17;
  *(int *)(iVar7 + 0x44) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Lava_001cdcbc;
  local_40 = iVar10;
  func_0010BEC4((int)puVar6,9,&local_40);
  iVar7 = puVar6[6];
  uVar13 = *(undefined4 *)(iVar11 + 0xb0);
  uVar12 = *(undefined4 *)(iVar11 + 0xb4);
  uVar16 = *(undefined4 *)(iVar11 + 0xb8);
  *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(iVar11 + 0xac);
  *(undefined4 *)(iVar7 + 0x4c) = uVar13;
  iVar11 = puVar6[7];
  *(undefined4 *)(iVar11 + 0x48) = uVar12;
  *(undefined4 *)(iVar11 + 0x4c) = uVar16;
  iVar11 = puVar6[8];
  *(int *)(iVar11 + 0x48) = (int)uVar17;
  *(int *)(iVar11 + 0x4c) = (int)((ulonglong)uVar17 >> 0x20);
  bVar3 = func_00588BF0((int)puVar14,0);
  if (bVar3) {
    func_0065C310(puVar6,8);
    goto LAB_001cdd04;
  }
  if (*(short *)((int)puVar6 + -0x47a) < 0) {
    uVar4 = (ushort)local_28[10] & 0xff;
    *(char *)(puVar6 + 9) = (char)(ushort)local_28[10];
    if (uVar4 == 1) {
      func_0065C310(puVar6,0);
      goto LAB_001cdd04;
    }
    if (uVar4 == 2) {
      func_0065C310(puVar6,7);
      goto LAB_001cdd04;
    }
  }
  *(undefined1 *)(puVar6 + 9) = 0;
  func_0065C310(puVar6,2);
LAB_001cdd04:
  if (*(char *)(puVar6 + 9) == '\x02') {
    iVar11 = puVar6[-0x12d];
    iVar7 = puVar6[-0x32];
    *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
    if (iVar11 == 0) {
      func_004D8AEC((float *)(iVar7 + 0x80),puVar6[-0x3b],(float *)(puVar6 + -0x41));
    }
    else {
      func_004D7EB0((float *)(iVar7 + 0x80),puVar6[-0x12d],puVar6[-0x3b],(float *)(puVar6 + -0x41));
    }
    func_004CEAF0(puVar6[-0x32]);
  }
  else {
    func_0037D530((int)puVar14,puVar6[-0x3b],(float *)(puVar6 + -0x41));
  }
  return puVar14;
}

