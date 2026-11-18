#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern int func_00669354(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_003afa0c;
extern undefined4 *DAT_003afa10;
extern undefined *DAT_003afa14;
extern int DAT_003afa24;
extern undefined *DAT_003afa38;
extern char s_cState_Attack_003afa28[];
extern char s_cState_Wait_003afa18[];

// USA 003AF6EC <- EU 003AF6C8 (Ghidra, non-matching)
// GLOBAL DAT_003afa0c undefined4
// GLOBAL DAT_003afa10 undefined4 *
// GLOBAL DAT_003afa14 undefined *
// GLOBAL DAT_003afa24 int
// GLOBAL DAT_003afa38 undefined *
// GLOBAL s_cState_Attack_003afa28 string
// GLOBAL s_cState_Wait_003afa18 string

undefined4 * func_003AF6EC(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  puVar2 = func_003ABA3C(param_1,param_2);
  *puVar2 = DAT_003afa0c;
  puVar3 = func_0010A794(puVar2 + 4);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined1 *)(puVar3 + 10) = 0;
  *(undefined1 *)((int)puVar3 + 0x29) = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  *(undefined1 *)((int)puVar3 + 6) = 2;
  puVar3[5] = puVar3 + -4;
  iVar4 = func_0010BA78(0x20);
  puVar3[6] = iVar4;
  puVar2 = DAT_003afa10;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 2;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar10 = puVar2[0xd];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0xc];
    puVar5[3] = uVar10;
    uVar10 = puVar2[0xd];
    puVar5[4] = puVar2[0xc];
    puVar5[5] = uVar10;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar8 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar3[8] = puVar5;
  if (uVar8 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar10;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar10 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar10;
      uVar10 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar10;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 2;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_003afa14,0x24,2);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 2;
  }
  iVar4 = DAT_003afa24;
  local_2c = (uint *)s_cState_Wait_003afa18;
  local_30 = DAT_003afa24;
  iVar7 = puVar3[3];
  puVar9 = *(uint **)(iVar7 + 4);
  (**(code **)(DAT_003afa24 + 8))(&local_30);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_2c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_003af884;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_003af884:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar8) {
    uVar8 = iVar7 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar9,local_2c,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  puVar5 = (undefined4 *)puVar3[6];
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar13 = puVar2[4];
  uVar14 = puVar2[5];
  *puVar5 = *puVar2;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar11;
  puVar5[1] = uVar12;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar13;
  puVar5[1] = uVar14;
  local_2c = (uint *)s_cState_Attack_003afa28;
  local_30 = iVar4;
  if ((uint)puVar3[2] < 2) {
    iVar7 = puVar3[3];
  }
  else {
    iVar7 = puVar3[3] + 0x24;
  }
  puVar9 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_2c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_003af940;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_003af940:
  if (*(int *)(iVar7 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar9,local_2c,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  iVar4 = puVar3[6];
  uVar13 = puVar2[7];
  uVar10 = puVar2[10];
  uVar12 = puVar2[0xb];
  uVar11 = puVar2[8];
  uVar14 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar11;
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 8) = uVar10;
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  func_00669354(puVar3,0);
  iVar4 = func_0010CEE0(0xc,(int *)0x0,4);
  if ((iVar4 != 0) && (iVar4 = func_00100118(iVar4,DAT_003afa38,4,3), iVar4 != 0)) {
    puVar3[0xe] = 0;
    puVar3[0xb] = iVar4;
    puVar3[0xc] = 3;
    puVar3[0xd] = 0;
  }
  return puVar3 + -4;
}

