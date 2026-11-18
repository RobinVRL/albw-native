#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern int func_00668BBC(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_003a3fb4;
extern undefined4 *DAT_003a3fb8;
extern undefined *DAT_003a3fbc;
extern int DAT_003a3fcc;
extern char s_cState_Attack_003a3fd0[];
extern char s_cState_Wait_003a3fc0[];

// USA 003A3CF4 <- EU 003A3CD0 (Ghidra, non-matching)
// GLOBAL DAT_003a3fb4 undefined4
// GLOBAL DAT_003a3fb8 undefined4 *
// GLOBAL DAT_003a3fbc undefined *
// GLOBAL DAT_003a3fcc int
// GLOBAL s_cState_Attack_003a3fd0 string
// GLOBAL s_cState_Wait_003a3fc0 string

undefined4 * func_003A3CF4(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  puVar2 = func_003ABA3C(param_1,param_2);
  *puVar2 = DAT_003a3fb4;
  puVar3 = func_0010A794(puVar2 + 4);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  *(undefined1 *)((int)puVar3 + 0x2d) = 0;
  *(undefined1 *)((int)puVar3 + 6) = 2;
  puVar3[5] = puVar3 + -4;
  iVar4 = func_0010BA78(0x20);
  puVar3[6] = iVar4;
  puVar2 = DAT_003a3fb8;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 2;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar13 = puVar2[0xd];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0xc];
    puVar5[3] = uVar13;
    uVar13 = puVar2[0xd];
    puVar5[4] = puVar2[0xc];
    puVar5[5] = uVar13;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar9 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar9 << 3);
  puVar3[8] = puVar5;
  if (uVar9 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar13;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar9 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar13 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar13;
      uVar13 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar13;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 2;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_003a3fbc,0x24,2);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 2;
  }
  iVar4 = DAT_003a3fcc;
  local_2c = (uint *)s_cState_Wait_003a3fc0;
  local_30 = DAT_003a3fcc;
  iVar7 = puVar3[3];
  puVar12 = *(uint **)(iVar7 + 4);
  (**(code **)(DAT_003a3fcc + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_003a3e80;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_003a3e80:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar9) {
    uVar9 = iVar7 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar9);
  *(undefined1 *)((int)puVar12 + uVar9) = 0;
  puVar5 = (undefined4 *)puVar3[6];
  uVar13 = puVar2[1];
  uVar8 = puVar2[2];
  uVar10 = puVar2[3];
  uVar11 = puVar2[4];
  uVar14 = puVar2[5];
  *puVar5 = *puVar2;
  puVar5[1] = uVar13;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar8;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar11;
  puVar5[1] = uVar14;
  local_2c = (uint *)s_cState_Attack_003a3fd0;
  local_30 = iVar4;
  if ((uint)puVar3[2] < 2) {
    iVar7 = puVar3[3];
  }
  else {
    iVar7 = puVar3[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_003a3f30;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_003a3f30:
  if (*(int *)(iVar7 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar9);
  *(undefined1 *)((int)puVar12 + uVar9) = 0;
  iVar4 = puVar3[6];
  uVar14 = puVar2[7];
  uVar13 = puVar2[10];
  uVar10 = puVar2[0xb];
  uVar8 = puVar2[8];
  uVar11 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar8;
  *(undefined4 *)(iVar4 + 0xc) = uVar11;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 8) = uVar13;
  *(undefined4 *)(iVar4 + 0xc) = uVar10;
  func_00668BBC(puVar3,0);
  return puVar3 + -4;
}

