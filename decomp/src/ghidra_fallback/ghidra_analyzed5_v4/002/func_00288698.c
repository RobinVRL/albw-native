#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0037D86C(undefined4 *param_1,uint *param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ECF6C(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00584B94(int param_1,int param_2);
extern int func_00661480(undefined4 *param_1,undefined1 param_2);
extern int DAT_00288ac4;
extern undefined4 DAT_00288ac8;
extern undefined4 DAT_00288acc;
extern undefined4 DAT_00288ad0;
extern undefined4 DAT_00288ad4;
extern undefined4 *DAT_00288ad8;
extern undefined4 DAT_00288adc;
extern undefined *DAT_00288ae0;
extern int DAT_00288ae4;
extern int DAT_00288af8;
extern int DAT_00288c9c;
extern int *DAT_00288ca0;
extern char s_cState_Blow_00288afc[];
extern char s_cState_Bound_00288ae8[];
extern char s_cState_Carry_00288b20[];
extern char s_cState_Fall_00288b08[];
extern char s_cState_GetDemo_00288c8c[];
extern char s_cState_Shrink_00288c7c[];
extern char s_cState_Stop_00288b14[];
extern char s_cState_WaterFloat_00288b30[];

// USA 00288698 <- EU 002886C0 (Ghidra, non-matching)
// GLOBAL DAT_00288ac4 int
// GLOBAL DAT_00288ac8 undefined4
// GLOBAL DAT_00288acc undefined4
// GLOBAL DAT_00288ad0 undefined4
// GLOBAL DAT_00288ad4 undefined4
// GLOBAL DAT_00288ad8 undefined4 *
// GLOBAL DAT_00288adc undefined4
// GLOBAL DAT_00288ae0 undefined *
// GLOBAL DAT_00288ae4 int
// GLOBAL DAT_00288af8 int
// GLOBAL DAT_00288c9c int
// GLOBAL DAT_00288ca0 int *
// GLOBAL s_cState_Blow_00288afc string
// GLOBAL s_cState_Bound_00288ae8 string
// GLOBAL s_cState_Carry_00288b20 string
// GLOBAL s_cState_Fall_00288b08 string
// GLOBAL s_cState_GetDemo_00288c8c string
// GLOBAL s_cState_Shrink_00288c7c string
// GLOBAL s_cState_Stop_00288b14 string
// GLOBAL s_cState_WaterFloat_00288b30 string

undefined4 * func_00288698(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar4 = func_0037D86C(param_1,param_2);
  iVar5 = DAT_00288ac4;
  *piVar4 = DAT_00288ac4;
  piVar4[0x135] = 0;
  piVar4[200] = iVar5 + 100;
  iVar5 = func_0054D89C((int)piVar4,0);
  piVar4[0x136] = iVar5;
  puVar6 = func_0010A794(piVar4 + 0x137);
  puVar6[5] = 0;
  puVar6[6] = 0;
  uVar9 = DAT_00288ac8;
  puVar6[7] = 0;
  puVar6[8] = 0;
  uVar14 = DAT_00288acc;
  puVar6[10] = uVar9;
  puVar6[0xb] = uVar14;
  puVar6[9] = 0;
  uVar14 = DAT_00288ad0;
  fVar13 = func_0054DE3C(puVar6 + -0x137,0,1);
  puVar2 = DAT_00288ad8;
  uVar9 = DAT_00288ad4;
  puVar6[0xc] = ALBW_AS_U32(fVar13);
  puVar6[0xd] = uVar9;
  puVar6[0xe] = uVar9;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  puVar6[0x10] = uVar9;
  uVar9 = puVar2[1];
  puVar6[0x13] = *puVar2;
  puVar6[0x14] = uVar9;
  puVar6[0x11] = DAT_00288adc;
  puVar6[0x12] = puVar6 + -0x137;
  puVar11 = puVar6 + -0x137;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  *(undefined1 *)((int)puVar6 + 0x55) = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = uVar14;
  puVar6[-0x33] = puVar6[-1];
  iVar5 = func_0014E428((int)puVar11,1,0,0,1,0,0);
  puVar6[-2] = iVar5;
  puVar6[-0x34] = iVar5;
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar5 + 0x80),puVar6[-0x3d],(float *)(puVar6 + -0x43));
  func_004CEAF0(puVar6[-2]);
  *(undefined1 *)((int)puVar6 + 6) = 8;
  puVar6[5] = puVar11;
  iVar5 = func_0010BA78(0x80);
  puVar6[6] = iVar5;
  puVar6[7] = iVar5 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar10 = 8;
  puVar7 = (undefined4 *)(iVar5 + -8);
  do {
    uVar9 = puVar2[0x25];
    iVar10 = iVar10 + -1;
    puVar7[2] = puVar2[0x24];
    puVar7[3] = uVar9;
    uVar9 = puVar2[0x25];
    puVar7[4] = puVar2[0x24];
    puVar7[5] = uVar9;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar12 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar6[8] = puVar7;
  if (uVar12 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar2[7];
      *puVar7 = puVar2[6];
      puVar7[1] = uVar9;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar9 = puVar2[7];
      puVar8[2] = puVar2[6];
      puVar8[3] = uVar9;
      uVar9 = puVar2[7];
      puVar8[4] = puVar2[6];
      puVar8[5] = uVar9;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 8;
    iVar5 = func_00100118((int)(puVar7 + 2),DAT_00288ae0,0x24,8);
  }
  if (iVar5 != 0) {
    puVar6[3] = iVar5;
    puVar6[2] = 8;
  }
  iVar5 = DAT_00288ae4;
  puVar6[-0x62] = puVar6;
  iVar10 = DAT_00288af8;
  *(undefined2 *)(iVar5 + (int)puVar11) = 8;
  local_34 = s_cState_Bound_00288ae8;
  local_38 = iVar10;
  func_0010BEC4((int)puVar6,0,&local_38);
  puVar7 = (undefined4 *)puVar6[6];
  uVar9 = puVar2[4];
  uVar15 = puVar2[5];
  uVar14 = puVar2[3];
  uVar16 = *(undefined8 *)(puVar2 + 6);
  *puVar7 = puVar2[2];
  puVar7[1] = uVar14;
  puVar7 = (undefined4 *)puVar6[7];
  *puVar7 = uVar9;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar6[8];
  *puVar7 = (int)uVar16;
  puVar7[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Blow_00288afc;
  local_38 = iVar10;
  func_0010BEC4((int)puVar6,1,&local_38);
  iVar5 = puVar6[6];
  uVar9 = puVar2[9];
  uVar14 = puVar2[10];
  uVar15 = puVar2[0xb];
  *(undefined4 *)(iVar5 + 8) = puVar2[8];
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 8) = uVar14;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = puVar6[8];
  *(int *)(iVar5 + 8) = (int)uVar16;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Fall_00288b08;
  local_38 = iVar10;
  func_0010BEC4((int)puVar6,2,&local_38);
  iVar5 = puVar6[6];
  uVar14 = puVar2[0xd];
  uVar9 = puVar2[0xe];
  uVar15 = puVar2[0xf];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[0xc];
  *(undefined4 *)(iVar5 + 0x14) = uVar14;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar9;
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  iVar5 = puVar6[8];
  *(int *)(iVar5 + 0x10) = (int)uVar16;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Stop_00288b14;
  local_38 = iVar10;
  func_0010BEC4((int)puVar6,3,&local_38);
  iVar5 = puVar6[6];
  uVar9 = puVar2[0x11];
  uVar14 = puVar2[0x12];
  uVar15 = puVar2[0x13];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0x10];
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = puVar6[8];
  *(int *)(iVar5 + 0x18) = (int)uVar16;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Carry_00288b20;
  local_38 = iVar10;
  func_0010BEC4((int)puVar6,4,&local_38);
  iVar5 = puVar6[6];
  uVar9 = puVar2[0x16];
  uVar15 = puVar2[0x17];
  uVar14 = puVar2[0x15];
  *(undefined4 *)(iVar5 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar5 + 0x24) = uVar14;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar9;
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  iVar5 = puVar6[8];
  *(int *)(iVar5 + 0x20) = (int)uVar16;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_WaterFloat_00288b30;
  local_38 = iVar10;
  func_0010BEC4((int)puVar6,5,&local_38);
  iVar5 = puVar6[6];
  uVar9 = puVar2[0x19];
  uVar14 = puVar2[0x1a];
  uVar15 = puVar2[0x1b];
  *(undefined4 *)(iVar5 + 0x28) = puVar2[0x18];
  *(undefined4 *)(iVar5 + 0x2c) = uVar9;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar14;
  *(undefined4 *)(iVar5 + 0x2c) = uVar15;
  iVar5 = puVar6[8];
  *(int *)(iVar5 + 0x28) = (int)uVar16;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Shrink_00288c7c;
  local_38 = iVar10;
  func_0010BEC4((int)puVar6,6,&local_38);
  iVar5 = puVar6[6];
  uVar9 = puVar2[0x1e];
  uVar15 = puVar2[0x1f];
  uVar14 = puVar2[0x1d];
  *(undefined4 *)(iVar5 + 0x30) = puVar2[0x1c];
  *(undefined4 *)(iVar5 + 0x34) = uVar14;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x30) = uVar9;
  *(undefined4 *)(iVar5 + 0x34) = uVar15;
  iVar5 = puVar6[8];
  *(int *)(iVar5 + 0x30) = (int)uVar16;
  *(int *)(iVar5 + 0x34) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_GetDemo_00288c8c;
  local_38 = iVar10;
  func_0010BEC4((int)puVar6,7,&local_38);
  iVar5 = puVar6[6];
  uVar14 = puVar2[0x21];
  uVar9 = puVar2[0x22];
  uVar15 = puVar2[0x23];
  *(undefined4 *)(iVar5 + 0x38) = puVar2[0x20];
  *(undefined4 *)(iVar5 + 0x3c) = uVar14;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x38) = uVar9;
  *(undefined4 *)(iVar5 + 0x3c) = uVar15;
  iVar5 = puVar6[8];
  *(int *)(iVar5 + 0x38) = (int)uVar16;
  *(int *)(iVar5 + 0x3c) = (int)((ulonglong)uVar16 >> 0x20);
  if (*(short *)((int)puVar6 + -0x482) < 0) {
    *(char *)(puVar6 + 0xf) = (char)(short)param_2[10];
    if ((short)param_2[10] != 0) {
      func_00661480(puVar6,1);
      goto LAB_00288c38;
    }
  }
  else {
    *(undefined1 *)(puVar6 + 0xf) = 0;
  }
  func_00661480(puVar6,3);
LAB_00288c38:
  bVar3 = func_00584B94(*DAT_00288ca0,DAT_00288c9c);
  if (!bVar3) {
    func_004ECF6C((int)puVar11);
  }
  return puVar11;
}

