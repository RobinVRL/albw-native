#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00669210(undefined4 *param_1,undefined1 param_2);
extern int DAT_003ae454;
extern undefined4 *DAT_003ae458;
extern undefined4 DAT_003ae45c;
extern undefined4 DAT_003ae460;
extern undefined *DAT_003ae464;
extern int DAT_003ae468;
extern int DAT_003ae478;
extern char s_cState_Attack_003ae47c[];
extern char s_cState_Mgr_003ae46c[];

// USA 003AE090 <- EU 003AE06C (Ghidra, non-matching)
// GLOBAL DAT_003ae454 int
// GLOBAL DAT_003ae458 undefined4 *
// GLOBAL DAT_003ae45c undefined4
// GLOBAL DAT_003ae460 undefined4
// GLOBAL DAT_003ae464 undefined *
// GLOBAL DAT_003ae468 int
// GLOBAL DAT_003ae478 int
// GLOBAL s_cState_Attack_003ae47c string
// GLOBAL s_cState_Mgr_003ae46c string

undefined4 * func_003AE090(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c ((uint *)(albw_frame + 0x4))
  #define local_44 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(uint * *)(albw_frame + 0x14))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_28 (*(uint * *)(albw_frame + 0x28))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = func_00150E40(param_1,param_2);
  iVar6 = DAT_003ae454;
  *piVar4 = DAT_003ae454;
  piVar4[200] = iVar6 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar2 = DAT_003ae458;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xc] = 0;
  uVar15 = DAT_003ae460;
  uVar10 = puVar2[0xf];
  puVar5[0xd] = puVar2[0xe];
  puVar5[0xe] = uVar10;
  puVar12 = puVar5 + -0x103;
  puVar5[0xb] = DAT_003ae45c;
  local_44 = puVar5 + -3;
  puVar5[0xf] = uVar15;
  puVar5[0x10] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  *(undefined1 *)((int)puVar5 + 6) = 2;
  puVar5[5] = puVar12;
  iVar6 = func_0010BA78(0x20);
  puVar5[6] = iVar6;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar11 = 2;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar15 = puVar2[0xd];
    iVar11 = iVar11 + -1;
    puVar7[2] = puVar2[0xc];
    puVar7[3] = uVar15;
    uVar15 = puVar2[0xd];
    puVar7[4] = puVar2[0xc];
    puVar7[5] = uVar15;
    puVar7 = puVar7 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar5[8] = puVar7;
  if (uVar13 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar2[5];
      *puVar7 = puVar2[4];
      puVar7[1] = uVar15;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar15 = puVar2[5];
      puVar8[2] = puVar2[4];
      puVar8[3] = uVar15;
      uVar15 = puVar2[5];
      puVar8[4] = puVar2[4];
      puVar8[5] = uVar15;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar3 = DAT_003ae464;
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 2;
    *puVar7 = 0x24;
    iVar6 = func_00100118((int)(puVar7 + 2),puVar3,0x24,2);
  }
  if (iVar6 != 0) {
    puVar5[3] = iVar6;
    puVar5[2] = 2;
  }
  iVar6 = DAT_003ae468;
  puVar5[-0x2e] = puVar5;
  iVar11 = DAT_003ae478;
  *(undefined2 *)(iVar6 + (int)puVar12) = 2;
  local_3c = (uint *)s_cState_Mgr_003ae46c;
  local_40 = iVar11;
  iVar6 = puVar5[3];
  puVar14 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar11 + 8))(&local_40);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_3c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_003ae268;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_003ae268:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar13) {
    uVar13 = iVar6 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar14,local_3c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar15 = puVar2[1];
  uVar10 = puVar2[2];
  uVar16 = puVar2[3];
  uVar17 = puVar2[4];
  uVar18 = puVar2[5];
  *puVar7 = *puVar2;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar10;
  puVar7[1] = uVar16;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar17;
  puVar7[1] = uVar18;
  local_3c = (uint *)s_cState_Attack_003ae47c;
  local_40 = iVar11;
  if ((uint)puVar5[2] < 2) {
    iVar6 = puVar5[3];
  }
  else {
    iVar6 = puVar5[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar11 + 8))(&local_40);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_3c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_003ae31c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_003ae31c:
  if (*(int *)(iVar6 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar14,local_3c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar6 = puVar5[6];
  uVar15 = puVar2[5];
  uVar10 = puVar2[8];
  uVar16 = puVar2[4];
  uVar17 = puVar2[7];
  uVar18 = puVar2[9];
  *(undefined4 *)(iVar6 + 8) = puVar2[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar17;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 8) = uVar10;
  *(undefined4 *)(iVar6 + 0xc) = uVar18;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 8) = uVar16;
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  if (*(short *)((int)local_28 + 0x2a) == 0) {
    func_00669210(puVar5,0);
  }
  else {
    puVar7 = (undefined4 *)func_0010BAB4(100);
    uVar15 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      uVar15 = func_004EE484(puVar7);
    }
    puVar5[10] = uVar15;
    iVar6 = func_0054D964((int)puVar12,0);
    puVar5[9] = iVar6;
    piVar4 = puVar5 + 9;
    if (puVar5[10] == 0 || iVar6 == 0) {
      *(undefined1 *)((int)puVar5 + -0x135) = 1;
    }
    else {
      puVar9 = (undefined2 *)func_0054DDF4((int)puVar12,0);
      puVar5[-0x1b] = puVar9;
      puVar5[-0x1a] = puVar9;
      local_4c[0] = puVar5[-0x50];
      func_0014EB8C(puVar5[10],puVar5[9],puVar9,local_4c,*(undefined2 *)(puVar5 + -0xee),
                    puVar5 + 0xb,0x100);
      *(uint *)(*piVar4 + 0x2c) = *(uint *)(*piVar4 + 0x2c) | 0x8000;
      *(undefined1 *)(puVar5[10] + 0x61) = 0;
      iVar6 = *piVar4;
      *(undefined4 *)(iVar6 + 4) = puVar5[-0xf];
      *(undefined4 *)(iVar6 + 8) = puVar5[-0xe];
      *(undefined4 *)(iVar6 + 0xc) = puVar5[-0xd];
      func_004356B4((int *)*piVar4);
      uVar15 = puVar2[10];
      uVar10 = puVar2[0xb];
      puVar5[0xc] = puVar12;
      puVar5[0xd] = uVar15;
      puVar5[0xe] = uVar10;
      local_44[0x12] = *(undefined4 *)(*piVar4 + 100);
      func_00669210(puVar5,1);
    }
  }
  return puVar12;
}

