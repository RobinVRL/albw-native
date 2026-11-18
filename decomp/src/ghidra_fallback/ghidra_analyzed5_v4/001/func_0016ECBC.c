#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_0065888C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0016f06c;
extern undefined4 DAT_0016f070;
extern undefined4 DAT_0016f074;
extern undefined4 DAT_0016f078;
extern undefined *DAT_0016f07c;
extern undefined *DAT_0016f080;
extern undefined4 *DAT_0016f084;
extern undefined *DAT_0016f088;
extern int DAT_0016f09c;
extern char s_cState_Active_0016f0b0[];
extern char s_cState_Destroy_0016f0d0[];
extern char s_cState_FadeIn_0016f0a0[];
extern char s_cState_FadeOut_0016f0c0[];
extern char s_cState_Sleep_0016f08c[];

// USA 0016ECBC <- EU 0016ECBC (Ghidra, non-matching)
// GLOBAL DAT_0016f06c undefined4
// GLOBAL DAT_0016f070 undefined4
// GLOBAL DAT_0016f074 undefined4
// GLOBAL DAT_0016f078 undefined4
// GLOBAL DAT_0016f07c undefined *
// GLOBAL DAT_0016f080 undefined *
// GLOBAL DAT_0016f084 undefined4 *
// GLOBAL DAT_0016f088 undefined *
// GLOBAL DAT_0016f09c int
// GLOBAL s_cState_Active_0016f0b0 string
// GLOBAL s_cState_Destroy_0016f0d0 string
// GLOBAL s_cState_FadeIn_0016f0a0 string
// GLOBAL s_cState_FadeOut_0016f0c0 string
// GLOBAL s_cState_Sleep_0016f08c string

int func_0016ECBC(undefined4 *param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  uVar13 = DAT_0016f06c;
  param_1[1] = DAT_0016f06c;
  param_1[2] = uVar13;
  param_1[3] = uVar13;
  uVar13 = DAT_0016f070;
  param_1[4] = DAT_0016f070;
  param_1[5] = uVar13;
  param_1[6] = uVar13;
  *param_1 = DAT_0016f074;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0xb7] = 0;
  func_002DFF7C(param_1 + 7);
  puVar4 = func_0010A794(param_1 + 0xb8);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  func_0010B3EC(puVar4 + 9,4,(int)(puVar4 + 0xc));
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  func_0010B3EC(puVar4 + 0x10,4,(int)(puVar4 + 0x13));
  puVar4[0x37] = 0;
  uVar13 = DAT_0016f078;
  puVar4[0x3c] = 0;
  puVar4[0x45] = 0;
  puVar4[0x46] = uVar13;
  *(undefined1 *)(puVar4 + 0x47) = 0xff;
  *(undefined1 *)((int)puVar4 + 0x11d) = 0;
  *(undefined1 *)((int)puVar4 + 0x11e) = 0;
  puVar3 = DAT_0016f07c;
  *(undefined1 *)((int)puVar4 + 0x11f) = 0;
  iVar5 = func_00100118((int)(puVar4 + 0x48),puVar3,0xc,0xf);
  iVar5 = func_00100118(iVar5 + 0xb4,DAT_0016f080,0xc,6);
  *(undefined4 *)(iVar5 + 0x48) = 0xffffffff;
  *(undefined1 *)(iVar5 + 0x4c) = 0;
  *(undefined4 *)(iVar5 + 0x50) = 0;
  *(undefined4 *)(iVar5 + 0x54) = 0;
  *(undefined1 *)(iVar5 + -0x1ce) = 5;
  *(int *)(iVar5 + -0x1c0) = iVar5 + -0x4b4;
  iVar6 = func_0010BA78(0x50);
  *(int *)(iVar5 + -0x1bc) = iVar6;
  puVar4 = DAT_0016f084;
  *(uint *)(iVar5 + -0x1b8) = iVar6 + (uint)*(byte *)(iVar5 + -0x1ce) * 8;
  iVar9 = 5;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar13 = puVar4[0x17];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar4[0x16];
    puVar7[3] = uVar13;
    uVar13 = puVar4[0x17];
    puVar7[4] = puVar4[0x16];
    puVar7[5] = uVar13;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar2 = *(byte *)(iVar5 + -0x1ce);
  uVar12 = (uint)bVar2;
  puVar7 = (undefined4 *)func_0010BA78(uVar12 << 3);
  *(undefined4 **)(iVar5 + -0x1b4) = puVar7;
  if (uVar12 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar2 & 1) != 0) {
      uVar13 = puVar4[5];
      *puVar7 = puVar4[4];
      puVar7[1] = uVar13;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar12 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar13 = puVar4[5];
      puVar8[2] = puVar4[4];
      puVar8[3] = uVar13;
      uVar13 = puVar4[5];
      puVar8[4] = puVar4[4];
      puVar8[5] = uVar13;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  puVar3 = DAT_0016f088;
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 5;
    *puVar7 = 0x24;
    iVar6 = func_00100118((int)(puVar7 + 2),puVar3,0x24,5);
  }
  if (iVar6 != 0) {
    *(undefined4 *)(iVar5 + -0x1cc) = 5;
    *(int *)(iVar5 + -0x1c8) = iVar6;
  }
  iVar6 = DAT_0016f09c;
  local_2c = s_cState_Sleep_0016f08c;
  local_30 = DAT_0016f09c;
  func_0010BEC4(iVar5 + -0x1d4,0,&local_30);
  puVar7 = *(undefined4 **)(iVar5 + -0x1bc);
  uVar13 = puVar4[1];
  uVar11 = puVar4[2];
  uVar10 = puVar4[3];
  uVar14 = *(undefined8 *)(puVar4 + 4);
  *puVar7 = *puVar4;
  puVar7[1] = uVar13;
  puVar7 = *(undefined4 **)(iVar5 + -0x1b8);
  puVar7[1] = uVar10;
  *puVar7 = uVar11;
  puVar7 = *(undefined4 **)(iVar5 + -0x1b4);
  *puVar7 = (int)uVar14;
  puVar7[1] = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_FadeIn_0016f0a0;
  local_30 = iVar6;
  func_0010BEC4(iVar5 + -0x1d4,1,&local_30);
  iVar9 = *(int *)(iVar5 + -0x1bc);
  uVar13 = puVar4[7];
  uVar11 = puVar4[8];
  uVar10 = puVar4[9];
  *(undefined4 *)(iVar9 + 8) = puVar4[6];
  *(undefined4 *)(iVar9 + 0xc) = uVar13;
  iVar9 = *(int *)(iVar5 + -0x1b8);
  *(undefined4 *)(iVar9 + 8) = uVar11;
  *(undefined4 *)(iVar9 + 0xc) = uVar10;
  iVar9 = *(int *)(iVar5 + -0x1b4);
  *(int *)(iVar9 + 8) = (int)uVar14;
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_Active_0016f0b0;
  local_30 = iVar6;
  func_0010BEC4(iVar5 + -0x1d4,2,&local_30);
  iVar9 = *(int *)(iVar5 + -0x1bc);
  uVar11 = puVar4[0xb];
  uVar13 = puVar4[0xd];
  uVar10 = puVar4[0xc];
  *(undefined4 *)(iVar9 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar9 + 0x14) = uVar11;
  iVar9 = *(int *)(iVar5 + -0x1b8);
  *(undefined4 *)(iVar9 + 0x10) = uVar10;
  *(undefined4 *)(iVar9 + 0x14) = uVar13;
  iVar9 = *(int *)(iVar5 + -0x1b4);
  *(int *)(iVar9 + 0x10) = (int)uVar14;
  *(int *)(iVar9 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_FadeOut_0016f0c0;
  local_30 = iVar6;
  func_0010BEC4(iVar5 + -0x1d4,3,&local_30);
  iVar9 = *(int *)(iVar5 + -0x1bc);
  uVar13 = puVar4[0x11];
  uVar10 = puVar4[0x10];
  uVar11 = puVar4[0xf];
  *(undefined4 *)(iVar9 + 0x18) = puVar4[0xe];
  *(undefined4 *)(iVar9 + 0x1c) = uVar11;
  iVar9 = *(int *)(iVar5 + -0x1b8);
  *(undefined4 *)(iVar9 + 0x18) = uVar10;
  *(undefined4 *)(iVar9 + 0x1c) = uVar13;
  iVar9 = *(int *)(iVar5 + -0x1b4);
  *(int *)(iVar9 + 0x18) = (int)uVar14;
  *(int *)(iVar9 + 0x1c) = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_Destroy_0016f0d0;
  local_30 = iVar6;
  func_0010BEC4(iVar5 + -0x1d4,4,&local_30);
  uVar13 = puVar4[0x14];
  uVar11 = puVar4[0x15];
  uVar10 = puVar4[0x13];
  iVar6 = *(int *)(iVar5 + -0x1bc);
  *(undefined4 *)(iVar6 + 0x20) = puVar4[0x12];
  *(undefined4 *)(iVar6 + 0x24) = uVar10;
  iVar6 = *(int *)(iVar5 + -0x1b8);
  *(undefined4 *)(iVar6 + 0x20) = uVar13;
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  iVar6 = *(int *)(iVar5 + -0x1b4);
  *(int *)(iVar6 + 0x20) = (int)uVar14;
  *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar14 >> 0x20);
  func_0065888C((undefined4 *)(iVar5 + -0x1d4),0);
  iVar6 = 0;
  iVar9 = 0x40;
  do {
    iVar1 = iVar6 * 2;
    iVar9 = iVar9 + -1;
    iVar6 = iVar6 + 1;
    *(undefined2 *)(iVar5 + -0x178 + iVar1) = 0xffff;
  } while (iVar9 != 0);
  return iVar5 + -0x4b4;
}

