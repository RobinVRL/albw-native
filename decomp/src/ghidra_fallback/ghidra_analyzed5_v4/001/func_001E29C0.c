#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_0036D6F4(undefined4 *param_1,int param_2);
extern int func_004ECF6C(int param_1);
extern int func_00503324(undefined4 *param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065CC10(undefined4 *param_1,undefined1 param_2);
extern int DAT_001e2e08;
extern undefined4 *DAT_001e2e0c;
extern undefined *DAT_001e2e10;
extern int DAT_001e2e14;
extern int DAT_001e2e24;
extern char s_cState_End_001e2e38[];
extern char s_cState_Event_001e2e28[];
extern char s_cState_Wait_001e2e18[];

// USA 001E29C0 <- EU 001E29C0 (Ghidra, non-matching)
// GLOBAL DAT_001e2e08 int
// GLOBAL DAT_001e2e0c undefined4 *
// GLOBAL DAT_001e2e10 undefined *
// GLOBAL DAT_001e2e14 int
// GLOBAL DAT_001e2e24 int
// GLOBAL s_cState_End_001e2e38 string
// GLOBAL s_cState_Event_001e2e28 string
// GLOBAL s_cState_Wait_001e2e18 string

undefined4 * func_001E29C0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar3 = (int *)func_001E6CEC(param_1,param_2,0xb);
  iVar5 = DAT_001e2e08;
  *piVar3 = DAT_001e2e08;
  piVar3[200] = iVar5 + 0x98;
  puVar4 = func_0010A794(piVar3 + 0x1e2);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  iVar5 = func_00503324(puVar4 + 9);
  puVar6 = func_0036D6F4((undefined4 *)(iVar5 + 0x2e4),iVar5 + -0x7ac);
  *(undefined1 *)(puVar6 + 10) = 0;
  puVar11 = puVar6 + -0x2a4;
  *(undefined1 *)((int)puVar6 + -0x302) = 3;
  puVar12 = puVar6 + -0xc2;
  puVar6[-0xbd] = puVar11;
  iVar5 = func_0010BA78(0x30);
  puVar6[-0xbc] = iVar5;
  puVar4 = DAT_001e2e0c;
  puVar6[-0xbb] = iVar5 + (uint)*(byte *)((int)puVar6 + -0x302) * 8;
  iVar9 = 3;
  puVar7 = (undefined4 *)(iVar5 + -8);
  do {
    uVar17 = puVar4[1];
    puVar7[2] = *puVar4;
    puVar7[3] = uVar17;
    iVar9 = iVar9 + -1;
    uVar17 = puVar4[1];
    puVar7[4] = *puVar4;
    puVar7[5] = uVar17;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar6 + -0x302);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar6[-0xba] = puVar7;
  if (uVar13 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar4[5];
      *puVar7 = puVar4[4];
      puVar7[1] = uVar17;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar17 = puVar4[5];
      puVar8[2] = puVar4[4];
      puVar8[3] = uVar17;
      uVar17 = puVar4[5];
      puVar8[4] = puVar4[4];
      puVar8[5] = uVar17;
      puVar8 = puVar8 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 3;
    iVar5 = func_00100118((int)(puVar4 + 2),DAT_001e2e10,0x24,3);
  }
  if (iVar5 != 0) {
    puVar6[-0xbf] = iVar5;
    puVar6[-0xc0] = 3;
  }
  iVar5 = DAT_001e2e14;
  puVar6[-0x1cf] = puVar12;
  iVar9 = DAT_001e2e24;
  *(undefined2 *)(iVar5 + (int)puVar11) = 3;
  local_2c = (uint *)s_cState_Wait_001e2e18;
  local_30 = iVar9;
  iVar5 = puVar6[-0xbf];
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001e2b98;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001e2b98:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar13) {
    uVar13 = iVar5 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  puVar4 = (undefined4 *)puVar6[-0xbc];
  uVar10 = DAT_001e2e0c[1];
  uVar14 = DAT_001e2e0c[2];
  uVar15 = DAT_001e2e0c[3];
  uVar18 = DAT_001e2e0c[4];
  uVar17 = DAT_001e2e0c[5];
  *puVar4 = *DAT_001e2e0c;
  puVar4[1] = uVar10;
  puVar4 = (undefined4 *)puVar6[-0xbb];
  *puVar4 = uVar14;
  puVar4[1] = uVar15;
  puVar4 = (undefined4 *)puVar6[-0xba];
  puVar4[1] = uVar17;
  *puVar4 = uVar18;
  local_2c = (uint *)s_cState_Event_001e2e28;
  local_30 = iVar9;
  if ((uint)puVar6[-0xc0] < 2) {
    iVar5 = puVar6[-0xbf];
  }
  else {
    iVar5 = puVar6[-0xbf] + 0x24;
  }
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001e2c58;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001e2c58:
  if (*(int *)(iVar5 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  puVar4 = DAT_001e2e0c;
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  iVar5 = puVar6[-0xbc];
  uVar18 = puVar4[1];
  uVar10 = puVar4[4];
  uVar17 = puVar4[6];
  uVar15 = puVar4[7];
  uVar14 = puVar4[5];
  *(undefined4 *)(iVar5 + 8) = *puVar4;
  *(undefined4 *)(iVar5 + 0xc) = uVar18;
  iVar5 = puVar6[-0xbb];
  *(undefined4 *)(iVar5 + 8) = uVar17;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = puVar6[-0xba];
  *(undefined4 *)(iVar5 + 8) = uVar10;
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  local_2c = (uint *)s_cState_End_001e2e38;
  local_30 = iVar9;
  if ((uint)puVar6[-0xc0] < 3) {
    iVar5 = puVar6[-0xbf];
  }
  else {
    iVar5 = puVar6[-0xbf] + 0x48;
  }
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001e2d2c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001e2d2c:
  if (*(int *)(iVar5 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  puVar4 = DAT_001e2e0c;
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  iVar5 = puVar6[-0xbc];
  uVar18 = puVar4[1];
  uVar14 = puVar4[4];
  uVar10 = puVar4[8];
  uVar15 = puVar4[9];
  uVar17 = puVar4[5];
  *(undefined4 *)(iVar5 + 0x10) = *puVar4;
  *(undefined4 *)(iVar5 + 0x14) = uVar18;
  iVar5 = puVar6[-0xbb];
  *(undefined4 *)(iVar5 + 0x10) = uVar10;
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  iVar5 = puVar6[-0xba];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  func_0065CC10(puVar12,0);
  bVar2 = func_00588BF0((int)puVar11,1);
  if (bVar2) {
    func_0065CC10(puVar12,2);
  }
  else {
    if (*(short *)((int)puVar6 + -0xa62) == 0) {
      bVar2 = func_00588BF0((int)puVar11,0);
      if (bVar2) goto LAB_001e2e6c;
    }
    else if ((*(short *)((int)puVar6 + -0xa5a) != 0) &&
            (bVar2 = func_00588BF0((int)puVar11,0), bVar2)) goto LAB_001e2e6c;
    if (*(char *)(puVar6 + 10) == '\0') {
      *(undefined1 *)(puVar6 + 10) = 1;
    }
  }
LAB_001e2e6c:
  func_004ECF6C((int)puVar11);
  return puVar11;
}

