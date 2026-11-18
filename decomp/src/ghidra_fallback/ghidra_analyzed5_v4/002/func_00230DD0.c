#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_0065EC84(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0023129c;
extern int DAT_002312a0;
extern undefined4 DAT_002312a4;
extern undefined4 DAT_002312a8;
extern undefined4 DAT_002312ac;
extern undefined4 *DAT_002312b0;
extern undefined *DAT_002312b4;
extern char s_cState_CameraMove_002312c8[];
extern char s_cState_Normal_002312b8[];
extern char s_cState_Pop_002312e8[];
extern char s_cState_Wait_002312dc[];

// USA 00230DD0 <- EU 00230DD0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_0023129c undefined4
// GLOBAL DAT_002312a0 int
// GLOBAL DAT_002312a4 undefined4
// GLOBAL DAT_002312a8 undefined4
// GLOBAL DAT_002312ac undefined4
// GLOBAL DAT_002312b0 undefined4 *
// GLOBAL DAT_002312b4 undefined *
// GLOBAL s_cState_CameraMove_002312c8 string
// GLOBAL s_cState_Normal_002312b8 string
// GLOBAL s_cState_Pop_002312e8 string
// GLOBAL s_cState_Wait_002312dc string

undefined4 *
func_00230DD0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  puVar2 = (undefined4 *)func_001663BC(param_1,param_2,param_3,param_4,param_5);
  *puVar2 = DAT_0023129c;
  puVar3 = func_0010A794(puVar2 + 0x42);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 10) = 0;
  *(undefined1 *)((int)puVar3 + 0x29) = 1;
  puVar3[0xb] = 0;
  puVar3[0xd] = puVar3 + 0xf;
  puVar3[0xe] = 0x40;
  iVar9 = DAT_002312a0;
  *(undefined1 *)(puVar3[0xd] + 0x3f) = 0;
  uVar11 = DAT_002312ac;
  *(undefined1 *)puVar3[0xd] = 0;
  puVar3[0xc] = uVar11;
  *(undefined1 *)((int)puVar3 + 6) = 4;
  puVar3[5] = puVar3 + -0x42;
  iVar4 = func_0010BA78(0x40);
  puVar3[6] = iVar4;
  puVar2 = DAT_002312b0;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 4;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar11 = puVar2[1];
    puVar5[2] = *puVar2;
    puVar5[3] = uVar11;
    iVar7 = iVar7 + -1;
    uVar11 = puVar2[1];
    puVar5[4] = *puVar2;
    puVar5[5] = uVar11;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar8 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar3[8] = puVar5;
  if (uVar8 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar11;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar11 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar11;
      uVar11 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar11;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 4;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_002312b4,0x24,4);
  }
  if (iVar4 != 0) {
    puVar3[2] = 4;
    puVar3[3] = iVar4;
  }
  local_2c = (uint *)s_cState_Normal_002312b8;
  local_30 = iVar9;
  iVar4 = puVar3[3];
  puVar10 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_2c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_00230fc4;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_00230fc4:
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 <= (int)uVar8) {
    uVar8 = iVar4 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar10,local_2c,uVar8);
  *(undefined1 *)((int)puVar10 + uVar8) = 0;
  puVar5 = (undefined4 *)puVar3[6];
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  uVar14 = puVar2[4];
  uVar15 = puVar2[5];
  *puVar5 = *puVar2;
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar12;
  puVar5[1] = uVar13;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar14;
  puVar5[1] = uVar15;
  local_2c = (uint *)s_cState_CameraMove_002312c8;
  local_30 = iVar9;
  if ((uint)puVar3[2] < 2) {
    iVar4 = puVar3[3];
  }
  else {
    iVar4 = puVar3[3] + 0x24;
  }
  puVar10 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_2c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_00231074;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_00231074:
  if (*(int *)(iVar4 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar10,local_2c,uVar8);
  *(undefined1 *)((int)puVar10 + uVar8) = 0;
  iVar4 = puVar3[6];
  uVar14 = puVar2[6];
  uVar11 = puVar2[4];
  uVar13 = puVar2[1];
  uVar12 = puVar2[7];
  uVar15 = puVar2[5];
  *(undefined4 *)(iVar4 + 8) = *puVar2;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar14;
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 8) = uVar11;
  *(undefined4 *)(iVar4 + 0xc) = uVar15;
  local_2c = (uint *)s_cState_Wait_002312dc;
  local_30 = iVar9;
  if ((uint)puVar3[2] < 3) {
    iVar4 = puVar3[3];
  }
  else {
    iVar4 = puVar3[3] + 0x48;
  }
  puVar10 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_2c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_00231144;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_00231144:
  if (*(int *)(iVar4 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar10,local_2c,uVar8);
  *(undefined1 *)((int)puVar10 + uVar8) = 0;
  iVar4 = puVar3[6];
  uVar11 = puVar2[4];
  uVar15 = puVar2[5];
  uVar12 = puVar2[8];
  uVar14 = puVar2[9];
  uVar13 = puVar2[1];
  *(undefined4 *)(iVar4 + 0x10) = *puVar2;
  *(undefined4 *)(iVar4 + 0x14) = uVar13;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar12;
  *(undefined4 *)(iVar4 + 0x14) = uVar14;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x10) = uVar11;
  *(undefined4 *)(iVar4 + 0x14) = uVar15;
  local_2c = (uint *)s_cState_Pop_002312e8;
  local_30 = iVar9;
  if ((uint)puVar3[2] < 4) {
    iVar4 = puVar3[3];
  }
  else {
    iVar4 = puVar3[3] + 0x6c;
  }
  puVar10 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_2c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_00231218;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_00231218:
  if (*(int *)(iVar4 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar10,local_2c,uVar8);
  *(undefined1 *)((int)puVar10 + uVar8) = 0;
  iVar9 = puVar3[6];
  uVar11 = puVar2[5];
  uVar12 = puVar2[0xb];
  uVar13 = puVar2[1];
  uVar14 = puVar2[10];
  uVar15 = puVar2[4];
  *(undefined4 *)(iVar9 + 0x18) = *puVar2;
  *(undefined4 *)(iVar9 + 0x1c) = uVar13;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar14;
  *(undefined4 *)(iVar9 + 0x1c) = uVar12;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x18) = uVar15;
  *(undefined4 *)(iVar9 + 0x1c) = uVar11;
  func_0065EC84(puVar3,0);
  return puVar3 + -0x42;
}

