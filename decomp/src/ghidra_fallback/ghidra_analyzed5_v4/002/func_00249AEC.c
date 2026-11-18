#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00143C00(int param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002496A4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004ECF6C(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0065F6A4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00249eec;
extern undefined4 DAT_00249ef0;
extern undefined4 DAT_00249ef4;
extern int DAT_00249ef8;
extern undefined DAT_00249efc;
extern undefined *DAT_00249f10;
extern int *DAT_00249f14;
extern undefined4 DAT_00249f18;
extern int DAT_00249f1c;
extern undefined4 *DAT_00249f20;
extern undefined *DAT_00249f24;
extern int DAT_00249f28;
extern float DAT_0024a1f8;
extern char s_cState_GetDemo_0024a1d8[];
extern char s_cState_ScaleUp_0024a1e8[];
extern char s_cState_Wait_00249f2c[];

// USA 00249AEC <- EU 00249AEC (Ghidra, non-matching)
// GLOBAL DAT_00249eec int
// GLOBAL DAT_00249ef0 undefined4
// GLOBAL DAT_00249ef4 undefined4
// GLOBAL DAT_00249ef8 int
// GLOBAL DAT_00249efc undefined
// GLOBAL DAT_00249f10 undefined *
// GLOBAL DAT_00249f14 int *
// GLOBAL DAT_00249f18 undefined4
// GLOBAL DAT_00249f1c int
// GLOBAL DAT_00249f20 undefined4 *
// GLOBAL DAT_00249f24 undefined *
// GLOBAL DAT_00249f28 int
// GLOBAL DAT_0024a1f8 float
// GLOBAL s_cState_GetDemo_0024a1d8 string
// GLOBAL s_cState_ScaleUp_0024a1e8 string
// GLOBAL s_cState_Wait_00249f2c string

int func_00249AEC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 extraout_r1;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(uint * *)(albw_frame + 0x14))
  piVar4 = (int *)func_00324A30(param_1,param_2);
  iVar5 = DAT_00249eec + 0x5c;
  *piVar4 = DAT_00249eec;
  piVar4[200] = iVar5;
  piVar4[0x11e] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  piVar4[0x121] = (int)puVar7;
  puVar7 = func_0010A794(piVar4 + 0x122);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  uVar8 = DAT_00249ef0;
  puVar7[9] = DAT_00249ef0;
  puVar7[10] = uVar8;
  puVar7[0xb] = uVar8;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  *(undefined1 *)((int)puVar7 + 0x31) = 0;
  *(undefined1 *)((int)puVar7 + 0x32) = 0;
  *(undefined1 *)((int)puVar7 + 0x33) = 0;
  puVar7[0xd] = 0;
  uVar13 = DAT_00249ef4;
  puVar7[0xe] = 0;
  puVar7[0xf] = uVar13;
  puVar7[0x11] = 0xe5;
  puVar7[0x10] = 0;
  puVar7[0x12] = uVar13;
  puVar7[0x13] = 0;
  puVar7[0x14] = uVar8;
  puVar6 = (undefined4 *)func_0010BAB4(0x108);
  iVar5 = DAT_00249ef8;
  uVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    local_2c = (uint *)&DAT_00249efc;
    local_30 = DAT_00249ef8;
    local_34 = puVar7[-0x6f];
    uVar8 = func_001663BC(puVar6,&local_30,local_34,8,1);
  }
  puVar7[0x15] = uVar8;
  puVar6 = (undefined4 *)func_0010BAB4(0xb0);
  uVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    local_34 = puVar7[-0x6f];
    uVar8 = func_002FCDA0(puVar6,local_34,8);
  }
  puVar7[0x16] = uVar8;
  iVar9 = func_00100118((int)(puVar7 + 0x17),DAT_00249f10,4,3);
  iVar14 = iVar9 + -0x4e4;
  uVar8 = func_0014E428(iVar14,0,0,0,1,0,0);
  *(undefined4 *)(iVar9 + -0x6c) = uVar8;
  if (*(short *)(iVar9 + -0x4b8) == 1) {
    *(undefined1 *)(iVar9 + -0x29) = 1;
    func_004CF478(*(int *)(iVar9 + -0x6c),0);
  }
  iVar10 = func_0054D964(iVar14,1);
  piVar4 = (int *)(iVar9 + -0x60);
  *(undefined2 *)(iVar10 + 0x28) = 0xe0;
  *(int *)(*(int *)(iVar9 + -0x60) + 0x18) = iVar10;
  local_34 = *(uint *)(iVar9 + -0x218);
  func_004EDAD0(*(int *)(iVar9 + -0x60),&local_34);
  *(undefined2 *)(*(int *)(*piVar4 + 0x18) + 0x28) = 4;
  func_004ED9C8(*piVar4);
  *(undefined2 *)(*piVar4 + 0x2c) = *(undefined2 *)(iVar9 + -0x490);
  func_004A879C(*DAT_00249f14,*piVar4,2);
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar6,3,DAT_00249f18,1);
  }
  iVar10 = DAT_00249f1c;
  uVar15 = 0;
  *(undefined4 **)(iVar9 + -0x68) = puVar7;
  do {
    func_00169688(*(uint **)(iVar9 + -0x68),uVar15,(int *)(iVar10 + uVar15 * 8),
                  *(int *)(*(int *)(iVar9 + -0x214) + 0x1c8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 3);
  func_0016A02C(*(int *)(iVar9 + -0x68),-1,(int *)0xffffffff,0);
  *(undefined1 *)(iVar9 + -0x56) = 3;
  *(int *)(iVar9 + -0x48) = iVar14;
  iVar10 = func_0010BA78(0x30);
  *(int *)(iVar9 + -0x44) = iVar10;
  puVar7 = DAT_00249f20;
  *(uint *)(iVar9 + -0x40) = iVar10 + (uint)*(byte *)(iVar9 + -0x56) * 8;
  iVar11 = 3;
  puVar6 = (undefined4 *)(iVar10 + -8);
  do {
    uVar8 = puVar7[0xb];
    iVar11 = iVar11 + -1;
    puVar6[2] = puVar7[10];
    puVar6[3] = uVar8;
    uVar8 = puVar7[0xb];
    puVar6[4] = puVar7[10];
    puVar6[5] = uVar8;
    puVar6 = puVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)(iVar9 + -0x56);
  uVar15 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar15 << 3);
  *(undefined4 **)(iVar9 + -0x3c) = puVar6;
  if (uVar15 != 0) {
    puVar12 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = puVar7[5];
      *puVar6 = puVar7[4];
      puVar6[1] = uVar8;
      puVar12 = puVar6;
    }
    for (iVar10 = (int)uVar15 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar8 = puVar7[5];
      puVar12[2] = puVar7[4];
      puVar12[3] = uVar8;
      uVar8 = puVar7[5];
      puVar12[4] = puVar7[4];
      puVar12[5] = uVar8;
      puVar12 = puVar12 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar3 = DAT_00249f24;
  iVar10 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 3;
    *puVar7 = 0x24;
    iVar10 = func_00100118((int)(puVar7 + 2),puVar3,0x24,3);
  }
  if (iVar10 != 0) {
    *(int *)(iVar9 + -0x50) = iVar10;
    *(undefined4 *)(iVar9 + -0x54) = 3;
  }
  iVar10 = DAT_00249f28;
  *(undefined4 **)(iVar9 + -400) = (undefined4 *)(iVar9 + -0x5c);
  *(undefined2 *)(iVar10 + iVar14) = 3;
  local_2c = (uint *)s_cState_Wait_00249f2c;
  local_30 = iVar5;
  iVar10 = *(int *)(iVar9 + -0x50);
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00249f44;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00249f44:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar15) {
    uVar15 = iVar10 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  puVar7 = *(undefined4 **)(iVar9 + -0x44);
  uVar13 = DAT_00249f20[4];
  uVar8 = DAT_00249f20[3];
  uVar20 = DAT_00249f20[2];
  uVar18 = DAT_00249f20[1];
  uVar19 = DAT_00249f20[5];
  *puVar7 = *DAT_00249f20;
  puVar7[1] = uVar18;
  puVar7 = *(undefined4 **)(iVar9 + -0x40);
  *puVar7 = uVar20;
  puVar7[1] = uVar8;
  puVar7 = *(undefined4 **)(iVar9 + -0x3c);
  *puVar7 = uVar13;
  puVar7[1] = uVar19;
  local_2c = (uint *)s_cState_GetDemo_0024a1d8;
  local_30 = iVar5;
  if (*(uint *)(iVar9 + -0x54) < 2) {
    iVar10 = *(int *)(iVar9 + -0x50);
  }
  else {
    iVar10 = *(int *)(iVar9 + -0x50) + 0x24;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0024a018;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0024a018:
  if (*(int *)(iVar10 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  puVar7 = DAT_00249f20;
  iVar10 = *(int *)(iVar9 + -0x44);
  uVar8 = DAT_00249f20[5];
  uVar18 = DAT_00249f20[8];
  uVar13 = DAT_00249f20[4];
  uVar19 = DAT_00249f20[7];
  uVar20 = DAT_00249f20[9];
  *(undefined4 *)(iVar10 + 8) = DAT_00249f20[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar19;
  iVar10 = *(int *)(iVar9 + -0x40);
  *(undefined4 *)(iVar10 + 8) = uVar18;
  *(undefined4 *)(iVar10 + 0xc) = uVar20;
  iVar10 = *(int *)(iVar9 + -0x3c);
  *(undefined4 *)(iVar10 + 8) = uVar13;
  *(undefined4 *)(iVar10 + 0xc) = uVar8;
  local_2c = (uint *)s_cState_ScaleUp_0024a1e8;
  local_30 = iVar5;
  uVar15 = *(uint *)(iVar9 + -0x54);
  if (uVar15 < 3) {
    iVar10 = *(int *)(iVar9 + -0x50);
    uVar2 = uVar15;
  }
  else {
    iVar10 = iVar5;
    uVar2 = *(uint *)(iVar9 + -0x50);
  }
  if (2 < uVar15) {
    iVar10 = uVar2 + 0x48;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0024a0f4;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0024a0f4:
  if (*(int *)(iVar10 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar5 = *(int *)(iVar9 + -0x44);
  uVar19 = puVar7[0xb];
  uVar8 = puVar7[0xc];
  uVar18 = puVar7[0xd];
  uVar13 = puVar7[4];
  piVar4 = (int *)puVar7[5];
  *(undefined4 *)(iVar5 + 0x10) = puVar7[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar19;
  iVar5 = *(int *)(iVar9 + -0x40);
  *(undefined4 *)(iVar5 + 0x10) = uVar8;
  *(undefined4 *)(iVar5 + 0x14) = uVar18;
  iVar5 = *(int *)(iVar9 + -0x3c);
  *(undefined4 *)(iVar5 + 0x10) = uVar13;
  *(int **)(iVar5 + 0x14) = piVar4;
  func_0065F6A4((undefined4 *)(iVar9 + -0x5c),0);
  uVar8 = extraout_r1;
  if (*(char *)(iVar9 + -0x29) == '\0') {
    func_003249E0(iVar14,0);
    func_00324964(iVar14);
    iVar5 = *(int *)(iVar9 + -0xd8);
    uVar8 = *(undefined4 *)(iVar5 + 4);
    uVar13 = *(undefined4 *)(iVar5 + 8);
    fVar17 = *(float *)(iVar5 + 0xc) + DAT_0024a1f8;
    *(undefined4 *)(iVar5 + 4) = uVar8;
    *(undefined4 *)(iVar5 + 8) = uVar13;
    *(float *)(iVar5 + 0xc) = fVar17;
  }
  func_002496A4(iVar14,uVar8,uVar13,piVar4);
  func_004ECF6C(iVar14);
  func_00143C00(iVar14);
  return iVar14;
}

