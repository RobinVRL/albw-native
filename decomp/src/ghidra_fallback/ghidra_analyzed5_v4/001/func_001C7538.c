#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002E117C(undefined4 *param_1,uint *param_2);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_004356B4(int *param_1);
extern int func_004ECF6C(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_0065BF44(undefined4 *param_1,undefined1 param_2);
extern int DAT_001c787c;
extern undefined4 DAT_001c7880;
extern undefined4 *DAT_001c7884;
extern undefined4 DAT_001c7888;
extern undefined *DAT_001c788c;
extern int DAT_001c7890;
extern int DAT_001c78a0;
extern undefined4 *DAT_001c7af8;
extern char s_cState_Hide_001c7894[];
extern char s_cState_Hold_001c7afc[];
extern char s_cState_Show_001c78a4[];
extern char s_cState_Wait_001c7b08[];

// USA 001C7538 <- EU 001C7538 (Ghidra, non-matching)
// GLOBAL DAT_001c787c int
// GLOBAL DAT_001c7880 undefined4
// GLOBAL DAT_001c7884 undefined4 *
// GLOBAL DAT_001c7888 undefined4
// GLOBAL DAT_001c788c undefined *
// GLOBAL DAT_001c7890 int
// GLOBAL DAT_001c78a0 int
// GLOBAL DAT_001c7af8 undefined4 *
// GLOBAL s_cState_Hide_001c7894 string
// GLOBAL s_cState_Hold_001c7afc string
// GLOBAL s_cState_Show_001c78a4 string
// GLOBAL s_cState_Wait_001c7b08 string

undefined4 * func_001C7538(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  float fVar19;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar4 = (int *)func_002E117C(param_1,param_2);
  iVar5 = DAT_001c787c + 0x5c;
  *piVar4 = DAT_001c787c;
  piVar4[200] = iVar5;
  iVar5 = func_0054D964((int)piVar4,0);
  piVar4[0x103] = iVar5;
  fVar19 = func_0054DE3C(piVar4,0,1);
  piVar4[0x104] = (int)ALBW_AS_U32(fVar19);
  puVar6 = func_0010A794(piVar4 + 0x105);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  uVar11 = DAT_001c7880;
  puVar6[10] = 0;
  puVar6[0xb] = uVar11;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  *(undefined1 *)((int)puVar6 + 0x31) = 0;
  *(undefined1 *)((int)puVar6 + 0x32) = 0;
  *(undefined1 *)((int)puVar6 + 0x33) = 0;
  puVar6[0xd] = 0;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  puVar6[0x10] = 0;
  *(undefined2 *)(puVar6 + 0x11) = 0;
  puVar9 = DAT_001c7884;
  *(undefined1 *)((int)puVar6 + 0x46) = 0;
  puVar6[0x13] = 0;
  uVar11 = puVar9[0x17];
  puVar6[0x14] = puVar9[0x16];
  puVar6[0x15] = uVar11;
  puVar6[0x12] = DAT_001c7888;
  puVar7 = func_002E1BB4(puVar6 + 0x16,0);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 0;
  uVar11 = *puVar9;
  uVar12 = puVar9[1];
  puVar14 = puVar7 + -0x11b;
  puVar7[-3] = puVar14;
  puVar7[-2] = uVar11;
  puVar7[-1] = uVar12;
  *(undefined1 *)((int)puVar7 + -0x52) = 4;
  puVar7[-0x11] = puVar14;
  iVar5 = func_0010BA78(0x40);
  puVar7[-0x10] = iVar5;
  puVar7[-0xf] = iVar5 + (uint)*(byte *)((int)puVar7 + -0x52) * 8;
  iVar10 = 4;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar11 = puVar9[0x15];
    iVar10 = iVar10 + -1;
    puVar6[2] = puVar9[0x14];
    puVar6[3] = uVar11;
    uVar11 = puVar9[0x15];
    puVar6[4] = puVar9[0x14];
    puVar6[5] = uVar11;
    puVar6 = puVar6 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar7 + -0x52);
  uVar15 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar7[-0xe] = puVar6;
  if (uVar15 != 0) {
    puVar8 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar9[7];
      *puVar6 = puVar9[6];
      puVar6[1] = uVar11;
      puVar8 = puVar6;
    }
    for (iVar5 = (int)uVar15 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar11 = puVar9[7];
      puVar8[2] = puVar9[6];
      puVar8[3] = uVar11;
      uVar11 = puVar9[7];
      puVar8[4] = puVar9[6];
      puVar8[5] = uVar11;
      puVar8 = puVar8 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar3 = DAT_001c788c;
  iVar5 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 4;
    *puVar9 = 0x24;
    iVar5 = func_00100118((int)(puVar9 + 2),puVar3,0x24,4);
  }
  if (iVar5 != 0) {
    puVar7[-0x13] = iVar5;
    puVar7[-0x14] = 4;
  }
  iVar5 = DAT_001c7890;
  puVar7[-0x46] = puVar7 + -0x16;
  iVar10 = DAT_001c78a0;
  *(undefined2 *)(iVar5 + (int)puVar14) = 4;
  local_2c = (uint *)s_cState_Hide_001c7894;
  local_30 = iVar10;
  iVar5 = puVar7[-0x13];
  puVar17 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001c77c4;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001c77c4:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar15) {
    uVar15 = iVar5 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  puVar9 = (undefined4 *)puVar7[-0x10];
  uVar11 = DAT_001c7884[7];
  uVar12 = DAT_001c7884[3];
  uVar13 = DAT_001c7884[4];
  uVar16 = DAT_001c7884[5];
  uVar18 = DAT_001c7884[6];
  *puVar9 = DAT_001c7884[2];
  puVar9[1] = uVar12;
  puVar9 = (undefined4 *)puVar7[-0xf];
  *puVar9 = uVar13;
  puVar9[1] = uVar16;
  puVar9 = (undefined4 *)puVar7[-0xe];
  puVar9[1] = uVar11;
  *puVar9 = uVar18;
  local_2c = (uint *)s_cState_Show_001c78a4;
  local_30 = iVar10;
  if ((uint)puVar7[-0x14] < 2) {
    iVar5 = puVar7[-0x13];
  }
  else {
    iVar5 = puVar7[-0x13] + 0x24;
  }
  puVar17 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001c78bc;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001c78bc:
  if (*(int *)(iVar5 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  iVar5 = puVar7[-0x10];
  uVar11 = *DAT_001c7af8;
  uVar12 = DAT_001c7af8[1];
  uVar13 = DAT_001c7af8[3];
  uVar16 = DAT_001c7af8[4];
  uVar18 = DAT_001c7af8[5];
  *(undefined4 *)(iVar5 + 8) = DAT_001c7af8[2];
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  iVar5 = puVar7[-0xf];
  *(undefined4 *)(iVar5 + 8) = uVar16;
  *(undefined4 *)(iVar5 + 0xc) = uVar18;
  iVar5 = puVar7[-0xe];
  *(undefined4 *)(iVar5 + 8) = uVar11;
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  local_2c = (uint *)s_cState_Hold_001c7afc;
  local_30 = iVar10;
  if ((uint)puVar7[-0x14] < 3) {
    iVar5 = puVar7[-0x13];
  }
  else {
    iVar5 = puVar7[-0x13] + 0x48;
  }
  puVar17 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001c7980;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001c7980:
  if (*(int *)(iVar5 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  puVar9 = DAT_001c7884;
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  iVar5 = puVar7[-0x10];
  uVar11 = puVar9[6];
  uVar13 = puVar9[7];
  uVar12 = puVar9[0xe];
  uVar18 = puVar9[0xf];
  uVar16 = puVar9[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar9[0xc];
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = puVar7[-0xf];
  *(undefined4 *)(iVar5 + 0x10) = uVar12;
  *(undefined4 *)(iVar5 + 0x14) = uVar18;
  iVar5 = puVar7[-0xe];
  *(undefined4 *)(iVar5 + 0x10) = uVar11;
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  local_2c = (uint *)s_cState_Wait_001c7b08;
  local_30 = iVar10;
  uVar15 = puVar7[-0x14];
  if (uVar15 < 4) {
    iVar5 = puVar7[-0x13];
    uVar2 = uVar15;
  }
  else {
    iVar5 = iVar10;
    uVar2 = puVar7[-0x13];
  }
  if (3 < uVar15) {
    iVar5 = uVar2 + 0x6c;
  }
  puVar17 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001c7a58;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001c7a58:
  if (*(int *)(iVar5 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  uVar11 = puVar9[0x13];
  uVar13 = puVar9[0x12];
  iVar5 = puVar7[-0x10];
  uVar16 = puVar9[0x11];
  uVar12 = puVar9[6];
  uVar18 = puVar9[7];
  *(undefined4 *)(iVar5 + 0x18) = puVar9[0x10];
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  iVar5 = puVar7[-0xf];
  *(undefined4 *)(iVar5 + 0x18) = uVar13;
  *(undefined4 *)(iVar5 + 0x1c) = uVar11;
  iVar5 = puVar7[-0xe];
  *(undefined4 *)(iVar5 + 0x18) = uVar12;
  *(undefined4 *)(iVar5 + 0x1c) = uVar18;
  func_0065BF44(puVar7 + -0x16,0);
  *(char *)(puVar7 + 3) = (char)*(undefined2 *)((int)puVar7 + -0x43e);
  func_004356B4((int *)puVar7[-0x18]);
  func_004ECF6C((int)puVar14);
  return puVar14;
}

