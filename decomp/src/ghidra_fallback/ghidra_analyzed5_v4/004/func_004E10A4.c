#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0037CC14(int param_1,uint param_2);
extern int func_0037D62C(int param_1,undefined4 *param_2,float *param_3);
extern int func_0037D86C(undefined4 *param_1,uint *param_2);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_00491C08(float *param_1,float *param_2);
extern undefined8 func_004D74A8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0066A650(undefined4 *param_1,undefined1 param_2);
extern int DAT_004e1454;
extern undefined4 DAT_004e1458;
extern undefined4 *DAT_004e145c;
extern int *DAT_004e1460;
extern undefined4 *DAT_004e1464;
extern undefined *DAT_004e1468;
extern int DAT_004e146c;
extern int DAT_004e147c;
extern undefined4 *DAT_004e16a8;
extern int *DAT_004e16ac;
extern undefined4 DAT_004e16b0;
extern int *DAT_004e16b4;
extern char s_cState_Carry_004e14c8[];
extern char s_cState_DropAroundTree_004e149c[];
extern char s_cState_DropByArea_004e14b4[];
extern char s_cState_Fall_004e1470[];
extern char s_cState_Fruit_004e1480[];
extern char s_cState_Shrink_004e1698[];
extern char s_cState_Stop_004e1490[];
extern char s_cState_WaterFloat_004e1684[];

// USA 004E10A4 <- EU 004E107C (Ghidra, non-matching)
// GLOBAL DAT_004e1454 int
// GLOBAL DAT_004e1458 undefined4
// GLOBAL DAT_004e145c undefined4 *
// GLOBAL DAT_004e1460 int *
// GLOBAL DAT_004e1464 undefined4 *
// GLOBAL DAT_004e1468 undefined *
// GLOBAL DAT_004e146c int
// GLOBAL DAT_004e147c int
// GLOBAL DAT_004e16a8 undefined4 *
// GLOBAL DAT_004e16ac int *
// GLOBAL DAT_004e16b0 undefined4
// GLOBAL DAT_004e16b4 int *
// GLOBAL s_cState_Carry_004e14c8 string
// GLOBAL s_cState_DropAroundTree_004e149c string
// GLOBAL s_cState_DropByArea_004e14b4 string
// GLOBAL s_cState_Fall_004e1470 string
// GLOBAL s_cState_Fruit_004e1480 string
// GLOBAL s_cState_Shrink_004e1698 string
// GLOBAL s_cState_Stop_004e1490 string
// GLOBAL s_cState_WaterFloat_004e1684 string

undefined4 * func_004E10A4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define afStack_68 ((float *)(albw_frame + 0x8))
  piVar5 = func_0037D86C(param_1,param_2);
  iVar8 = DAT_004e1454;
  *piVar5 = DAT_004e1454;
  piVar5[200] = iVar8 + 100;
  puVar6 = func_0010A794(piVar5 + 0x135);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar3 = DAT_004e145c;
  uVar12 = DAT_004e1458;
  puVar6[10] = 0;
  puVar6[0xb] = uVar12;
  puVar14 = puVar6 + -0x135;
  uVar7 = puVar3[1];
  uVar13 = puVar3[2];
  puVar6[0xc] = *puVar3;
  puVar6[0xd] = uVar7;
  puVar6[0xe] = uVar13;
  uVar7 = puVar3[1];
  uVar13 = puVar3[2];
  puVar6[0xf] = *puVar3;
  puVar6[0x10] = uVar7;
  puVar6[0x11] = uVar13;
  uVar7 = *puVar3;
  uVar13 = puVar3[1];
  puVar6[0x14] = puVar3[2];
  puVar6[0x1f] = 0;
  puVar6[0x12] = uVar7;
  puVar6[0x13] = uVar13;
  iVar8 = func_0054D89C((int)puVar14,0);
  puVar6[-0x31] = iVar8;
  uVar7 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar6[-0x32] = uVar7;
  iVar8 = func_00588BE4((int)puVar14);
  if (iVar8 == *DAT_004e1460) {
    func_0037CC14((int)puVar14,10);
  }
  else {
    func_0037CC14((int)puVar14,9);
  }
  puVar6[5] = puVar14;
  *(undefined1 *)((int)puVar6 + 6) = 8;
  iVar8 = func_0010BA78(0x80);
  puVar3 = DAT_004e1464;
  puVar6[6] = iVar8;
  puVar6[7] = iVar8 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar9 = 8;
  puVar10 = (undefined4 *)(iVar8 + -8);
  do {
    uVar7 = puVar3[0x23];
    iVar9 = iVar9 + -1;
    puVar10[2] = puVar3[0x22];
    puVar10[3] = uVar7;
    uVar7 = puVar3[0x23];
    puVar10[4] = puVar3[0x22];
    puVar10[5] = uVar7;
    puVar10 = puVar10 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar15 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[8] = puVar10;
  if (uVar15 != 0) {
    puVar11 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar3[5];
      *puVar10 = puVar3[4];
      puVar10[1] = uVar7;
      puVar11 = puVar10;
    }
    for (iVar8 = (int)uVar15 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar7 = puVar3[5];
      puVar11[2] = puVar3[4];
      puVar11[3] = uVar7;
      uVar7 = puVar3[5];
      puVar11[4] = puVar3[4];
      puVar11[5] = uVar7;
      puVar11 = puVar11 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  puVar4 = DAT_004e1468;
  iVar8 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar10[1] = 8;
    *puVar10 = 0x24;
    iVar8 = func_00100118((int)(puVar10 + 2),puVar4,0x24,8);
  }
  if (iVar8 != 0) {
    puVar6[3] = iVar8;
    puVar6[2] = 8;
  }
  iVar8 = DAT_004e146c;
  puVar6[-0x60] = puVar6;
  iVar9 = DAT_004e147c;
  *(undefined2 *)(iVar8 + (int)puVar14) = 8;
  local_6c = s_cState_Fall_004e1470;
  local_70 = iVar9;
  func_0010BEC4((int)puVar6,0,&local_70);
  puVar10 = (undefined4 *)puVar6[6];
  uVar7 = puVar3[2];
  uVar13 = puVar3[1];
  uVar16 = puVar3[3];
  uVar17 = *(undefined8 *)(puVar3 + 4);
  *puVar10 = *puVar3;
  puVar10[1] = uVar13;
  puVar10 = (undefined4 *)puVar6[7];
  *puVar10 = uVar7;
  puVar10[1] = uVar16;
  puVar10 = (undefined4 *)puVar6[8];
  *puVar10 = (int)uVar17;
  puVar10[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_6c = s_cState_Fruit_004e1480;
  local_70 = iVar9;
  func_0010BEC4((int)puVar6,2,&local_70);
  iVar8 = puVar6[6];
  uVar16 = puVar3[7];
  uVar7 = puVar3[8];
  uVar13 = puVar3[9];
  *(undefined4 *)(iVar8 + 0x10) = puVar3[6];
  *(undefined4 *)(iVar8 + 0x14) = uVar16;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar7;
  *(undefined4 *)(iVar8 + 0x14) = uVar13;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x10) = (int)uVar17;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_6c = s_cState_Stop_004e1490;
  local_70 = iVar9;
  func_0010BEC4((int)puVar6,1,&local_70);
  iVar8 = puVar6[6];
  uVar13 = puVar3[0xb];
  uVar16 = puVar3[0xc];
  uVar7 = puVar3[0xd];
  *(undefined4 *)(iVar8 + 8) = puVar3[10];
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 8) = uVar16;
  *(undefined4 *)(iVar8 + 0xc) = uVar7;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 8) = (int)uVar17;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_6c = s_cState_DropAroundTree_004e149c;
  local_70 = iVar9;
  func_0010BEC4((int)puVar6,3,&local_70);
  iVar8 = puVar6[6];
  uVar7 = puVar3[0xf];
  uVar16 = puVar3[0x10];
  uVar13 = puVar3[0x11];
  *(undefined4 *)(iVar8 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar7;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar16;
  *(undefined4 *)(iVar8 + 0x1c) = uVar13;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x18) = (int)uVar17;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  local_6c = s_cState_DropByArea_004e14b4;
  local_70 = iVar9;
  func_0010BEC4((int)puVar6,4,&local_70);
  iVar8 = puVar6[6];
  uVar16 = puVar3[0x13];
  uVar7 = puVar3[0x14];
  uVar13 = puVar3[0x15];
  *(undefined4 *)(iVar8 + 0x20) = puVar3[0x12];
  *(undefined4 *)(iVar8 + 0x24) = uVar16;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar7;
  *(undefined4 *)(iVar8 + 0x24) = uVar13;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x20) = (int)uVar17;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  local_6c = s_cState_Carry_004e14c8;
  local_70 = iVar9;
  func_0010BEC4((int)puVar6,5,&local_70);
  iVar8 = puVar6[6];
  uVar7 = puVar3[0x17];
  uVar13 = puVar3[0x18];
  uVar16 = puVar3[0x19];
  *(undefined4 *)(iVar8 + 0x28) = puVar3[0x16];
  *(undefined4 *)(iVar8 + 0x2c) = uVar7;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x28) = uVar13;
  *(undefined4 *)(iVar8 + 0x2c) = uVar16;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x28) = (int)uVar17;
  *(int *)(iVar8 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  local_6c = s_cState_WaterFloat_004e1684;
  local_70 = iVar9;
  func_0010BEC4((int)puVar6,6,&local_70);
  iVar8 = puVar6[6];
  uVar7 = puVar3[0x1b];
  uVar13 = puVar3[0x1c];
  uVar16 = puVar3[0x1d];
  *(undefined4 *)(iVar8 + 0x30) = puVar3[0x1a];
  *(undefined4 *)(iVar8 + 0x34) = uVar7;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x30) = uVar13;
  *(undefined4 *)(iVar8 + 0x34) = uVar16;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x30) = (int)uVar17;
  *(int *)(iVar8 + 0x34) = (int)((ulonglong)uVar17 >> 0x20);
  local_6c = s_cState_Shrink_004e1698;
  local_70 = iVar9;
  func_0010BEC4((int)puVar6,7,&local_70);
  iVar8 = puVar6[6];
  uVar16 = puVar3[0x1f];
  uVar7 = puVar3[0x20];
  uVar13 = puVar3[0x21];
  *(undefined4 *)(iVar8 + 0x38) = puVar3[0x1e];
  *(undefined4 *)(iVar8 + 0x3c) = uVar16;
  puVar3 = DAT_004e16a8;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x38) = uVar7;
  *(undefined4 *)(iVar8 + 0x3c) = uVar13;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x38) = (int)uVar17;
  *(int *)(iVar8 + 0x3c) = (int)((ulonglong)uVar17 >> 0x20);
  if (*(short *)(puVar6 + -0x12a) == 0) {
    iVar8 = func_0052FBA0(*DAT_004e16ac + 0x3dbbc,puVar6[-0x121]);
    sVar2 = *(short *)(puVar6 + -0x129);
    uVar7 = DAT_004e16b0;
    if ((iVar8 == 0) || (iVar9 = func_00588BE4(iVar8), iVar9 != *DAT_004e16b4)) {
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar16 = puVar3[3];
      puVar6[0x15] = *puVar3;
      puVar6[0x16] = uVar12;
      puVar6[0x17] = uVar13;
      puVar6[0x18] = uVar16;
      puVar6[0x1d] = uVar7;
    }
    else {
      uVar17 = func_004D74A8(iVar8);
      if ((int)uVar17 != 0) {
        iVar8 = *(int *)(*(int *)((int)uVar17 + 0x24) + 0x14);
        *(undefined4 *)(puVar6[-0x32] + 0x134) = uVar7;
        func_00491C08((float *)(puVar6 + 0x15),(float *)(iVar8 + sVar2 * 0x30));
        puVar6[0x1d] = uVar12;
      }
    }
  }
  else {
    uVar12 = puVar3[1];
    uVar7 = puVar3[2];
    uVar13 = puVar3[3];
    puVar6[0x15] = *puVar3;
    puVar6[0x16] = uVar12;
    puVar6[0x17] = uVar7;
    puVar6[0x18] = uVar13;
  }
  func_0066A650(puVar6,2);
  func_00491B3C(afStack_68,(float *)(puVar6 + 0x15));
  func_0037D62C((int)puVar14,afStack_68,(float *)(puVar6 + -0x41));
  return puVar14;
}

