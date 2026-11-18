#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern int func_005FF7F0(int param_1);
extern int func_005FF938(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4, undefined4 *param_5);
extern int func_006005B0(int param_1);
extern int func_0065EDC8(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002322e0;
extern undefined4 *DAT_002322e4;
extern undefined *DAT_002322e8;
extern int DAT_002322fc;
extern char s_cState_Capture_00232300[];
extern char s_cState_Ready_00232310[];
extern char s_cState_Sleep_002322ec[];

// USA 00231EE4 <- EU 00231EE4 (Ghidra, non-matching)
// GLOBAL DAT_002322e0 undefined4
// GLOBAL DAT_002322e4 undefined4 *
// GLOBAL DAT_002322e8 undefined *
// GLOBAL DAT_002322fc int
// GLOBAL s_cState_Capture_00232300 string
// GLOBAL s_cState_Ready_00232310 string
// GLOBAL s_cState_Sleep_002322ec string

undefined4 * func_00231EE4(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  *param_1 = DAT_002322e0;
  param_1[1] = 0;
  puVar2 = func_0010A794(param_1 + 0x13);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined1 *)((int)puVar2 + 0x36) = 1;
  iVar3 = func_006005B0(4);
  uVar4 = func_0058FAAC(0x80,0x10);
  puVar5 = (undefined4 *)func_0058FAAC(iVar3,0x10);
  func_005FF938(puVar2 + -0x11,0x80,uVar4,4,puVar5);
  func_005FF7F0((int)(puVar2 + -0x11));
  *(undefined1 *)((int)puVar2 + 6) = 3;
  puVar2[5] = puVar2 + -0x13;
  iVar3 = func_0010BA78(0x30);
  puVar2[6] = iVar3;
  puVar5 = DAT_002322e4;
  puVar2[7] = iVar3 + (uint)*(byte *)((int)puVar2 + 6) * 8;
  iVar8 = 3;
  puVar6 = (undefined4 *)(iVar3 + -8);
  do {
    uVar4 = puVar5[7];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar5[6];
    puVar6[3] = uVar4;
    uVar4 = puVar5[7];
    puVar6[4] = puVar5[6];
    puVar6[5] = uVar4;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar2 + 6);
  uVar9 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar9 << 3);
  puVar2[8] = puVar6;
  if (uVar9 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar4 = puVar5[5];
      *puVar6 = puVar5[4];
      puVar6[1] = uVar4;
      puVar7 = puVar6;
    }
    for (iVar3 = (int)uVar9 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar4 = puVar5[5];
      puVar7[2] = puVar5[4];
      puVar7[3] = uVar4;
      uVar4 = puVar5[5];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar4;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar3 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 3;
    iVar3 = func_00100118((int)(puVar6 + 2),DAT_002322e8,0x24,3);
  }
  if (iVar3 != 0) {
    puVar2[3] = iVar3;
    puVar2[2] = 3;
  }
  iVar3 = DAT_002322fc;
  local_2c = (uint *)s_cState_Sleep_002322ec;
  local_30 = DAT_002322fc;
  iVar8 = puVar2[3];
  puVar10 = *(uint **)(iVar8 + 4);
  (**(code **)(DAT_002322fc + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_002320d4;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_002320d4:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar9) {
    uVar9 = iVar8 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar10,local_2c,uVar9);
  *(undefined1 *)((int)puVar10 + uVar9) = 0;
  puVar6 = (undefined4 *)puVar2[6];
  uVar4 = puVar5[5];
  uVar11 = puVar5[1];
  uVar12 = puVar5[2];
  uVar13 = puVar5[3];
  uVar14 = puVar5[4];
  *puVar6 = *puVar5;
  puVar6[1] = uVar11;
  puVar6 = (undefined4 *)puVar2[7];
  *puVar6 = uVar12;
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)puVar2[8];
  *puVar6 = uVar14;
  puVar6[1] = uVar4;
  local_2c = (uint *)s_cState_Capture_00232300;
  local_30 = iVar3;
  if ((uint)puVar2[2] < 2) {
    iVar8 = puVar2[3];
  }
  else {
    iVar8 = puVar2[3] + 0x24;
  }
  puVar10 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar3 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_0023218c;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_0023218c:
  if (*(int *)(iVar8 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar10,local_2c,uVar9);
  *(undefined1 *)((int)puVar10 + uVar9) = 0;
  iVar8 = puVar2[6];
  uVar4 = puVar5[4];
  uVar11 = puVar5[5];
  uVar12 = puVar5[8];
  uVar13 = puVar5[7];
  uVar14 = puVar5[9];
  *(undefined4 *)(iVar8 + 8) = puVar5[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = puVar2[7];
  *(undefined4 *)(iVar8 + 8) = uVar12;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  iVar8 = puVar2[8];
  *(undefined4 *)(iVar8 + 8) = uVar4;
  *(undefined4 *)(iVar8 + 0xc) = uVar11;
  local_2c = (uint *)s_cState_Ready_00232310;
  local_30 = iVar3;
  if ((uint)puVar2[2] < 3) {
    iVar8 = puVar2[3];
  }
  else {
    iVar8 = puVar2[3] + 0x48;
  }
  puVar10 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar3 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_0023225c;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_0023225c:
  if (*(int *)(iVar8 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar10,local_2c,uVar9);
  *(undefined1 *)((int)puVar10 + uVar9) = 0;
  iVar3 = puVar2[6];
  uVar12 = puVar5[0xb];
  uVar4 = puVar5[0xc];
  uVar14 = puVar5[0xd];
  uVar11 = puVar5[4];
  uVar13 = puVar5[5];
  *(undefined4 *)(iVar3 + 0x10) = puVar5[10];
  *(undefined4 *)(iVar3 + 0x14) = uVar12;
  iVar3 = puVar2[7];
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  *(undefined4 *)(iVar3 + 0x14) = uVar14;
  iVar3 = puVar2[8];
  *(undefined4 *)(iVar3 + 0x10) = uVar11;
  *(undefined4 *)(iVar3 + 0x14) = uVar13;
  func_0065EDC8(puVar2,0);
  return puVar2 + -0x13;
}

