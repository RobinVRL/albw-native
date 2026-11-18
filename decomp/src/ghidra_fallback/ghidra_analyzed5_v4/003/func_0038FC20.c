#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00667F14(undefined4 *param_1,undefined1 param_2);
extern int DAT_0039002c;
extern undefined4 DAT_00390030;
extern undefined4 *DAT_00390034;
extern undefined *DAT_00390038;
extern int DAT_0039003c;
extern int DAT_0039004c;
extern char s_cState_Finish_00390050[];
extern char s_cState_Rupee_00390060[];
extern char s_cState_Wait_00390040[];

// USA 0038FC20 <- EU 0038FBFC (Ghidra, non-matching)
// GLOBAL DAT_0039002c int
// GLOBAL DAT_00390030 undefined4
// GLOBAL DAT_00390034 undefined4 *
// GLOBAL DAT_00390038 undefined *
// GLOBAL DAT_0039003c int
// GLOBAL DAT_0039004c int
// GLOBAL s_cState_Finish_00390050 string
// GLOBAL s_cState_Rupee_00390060 string
// GLOBAL s_cState_Wait_00390040 string

undefined4 * func_0038FC20(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 * *)(albw_frame + 0x8))
  piVar4 = func_00150E40(param_1,param_2);
  iVar7 = DAT_0039002c;
  *piVar4 = DAT_0039002c;
  piVar4[200] = iVar7 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[10] = 0;
  sVar2 = (short)param_2[10];
  puVar12 = puVar5 + -0x103;
  if (sVar2 == 0) {
    uVar6 = 300;
  }
  else {
    if (sVar2 != 1) {
      if (sVar2 == 2) {
        puVar5[10] = DAT_00390030;
      }
      goto LAB_0038fc74;
    }
    uVar6 = 1000;
  }
  puVar5[10] = uVar6;
LAB_0038fc74:
  puVar5[5] = puVar12;
  *(undefined1 *)((int)puVar5 + 6) = 3;
  iVar7 = func_0010BA78(0x30);
  puVar3 = DAT_00390034;
  puVar5[6] = iVar7;
  puVar5[7] = iVar7 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar8 = 3;
  puVar9 = (undefined4 *)(iVar7 + -8);
  do {
    uVar6 = puVar3[0xf];
    iVar8 = iVar8 + -1;
    puVar9[2] = puVar3[0xe];
    puVar9[3] = uVar6;
    uVar6 = puVar3[0xf];
    puVar9[4] = puVar3[0xe];
    puVar9[5] = uVar6;
    puVar9 = puVar9 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar13 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar5[8] = puVar9;
  if (uVar13 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = puVar3[5];
      *puVar9 = puVar3[4];
      puVar9[1] = uVar6;
      puVar10 = puVar9;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar6 = puVar3[5];
      puVar10[2] = puVar3[4];
      puVar10[3] = uVar6;
      uVar6 = puVar3[5];
      puVar10[4] = puVar3[4];
      puVar10[5] = uVar6;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar7 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 3;
    iVar7 = func_00100118((int)(puVar9 + 2),DAT_00390038,0x24,3);
  }
  if (iVar7 != 0) {
    puVar5[2] = 3;
    puVar5[3] = iVar7;
  }
  iVar7 = DAT_0039003c;
  puVar5[-0x2e] = puVar5;
  iVar8 = DAT_0039004c;
  *(undefined2 *)(iVar7 + (int)puVar12) = 3;
  local_2c = (uint *)s_cState_Wait_00390040;
  local_30 = iVar8;
  iVar7 = puVar5[3];
  puVar14 = *(uint **)(iVar7 + 4);
  local_28 = puVar5;
  (**(code **)(iVar8 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0038fe04;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0038fe04:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar13) {
    uVar13 = iVar7 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  puVar9 = (undefined4 *)puVar5[6];
  uVar6 = puVar3[2];
  uVar11 = puVar3[3];
  uVar15 = puVar3[4];
  uVar17 = puVar3[1];
  uVar16 = puVar3[5];
  *puVar9 = *puVar3;
  puVar9[1] = uVar17;
  puVar9 = (undefined4 *)puVar5[7];
  *puVar9 = uVar6;
  puVar9[1] = uVar11;
  puVar9 = (undefined4 *)puVar5[8];
  *puVar9 = uVar15;
  puVar9[1] = uVar16;
  local_2c = (uint *)s_cState_Finish_00390050;
  local_30 = iVar8;
  if ((uint)puVar5[2] < 2) {
    iVar7 = puVar5[3];
  }
  else {
    iVar7 = puVar5[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0038fecc;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0038fecc:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar7 = puVar5[6];
  uVar17 = puVar3[7];
  uVar6 = puVar3[8];
  uVar15 = puVar3[9];
  uVar11 = puVar3[4];
  uVar16 = puVar3[5];
  *(undefined4 *)(iVar7 + 8) = puVar3[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 8) = uVar6;
  *(undefined4 *)(iVar7 + 0xc) = uVar15;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 8) = uVar11;
  *(undefined4 *)(iVar7 + 0xc) = uVar16;
  local_2c = (uint *)s_cState_Rupee_00390060;
  local_30 = iVar8;
  if ((uint)puVar5[2] < 3) {
    iVar7 = puVar5[3];
  }
  else {
    iVar7 = puVar5[3] + 0x48;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0038ff9c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0038ff9c:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar7 = puVar5[6];
  uVar6 = puVar3[0xb];
  uVar11 = puVar3[0xc];
  uVar15 = puVar3[4];
  uVar16 = puVar3[0xd];
  uVar17 = puVar3[5];
  *(undefined4 *)(iVar7 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar6;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar11;
  *(undefined4 *)(iVar7 + 0x14) = uVar16;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar15;
  *(undefined4 *)(iVar7 + 0x14) = uVar17;
  func_00667F14(local_28,0);
  puVar5[-0x4b] = puVar5[-0x4b] | 2;
  return puVar12;
}

