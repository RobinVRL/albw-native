#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004D01E0(int param_1,int param_2,int param_3);
extern int func_004D1E9C(undefined4 *param_1,uint *param_2);
extern int func_00584CC8(int param_1,int *param_2);
extern int func_00662DE0(undefined4 *param_1,undefined1 param_2);
extern int DAT_002c4838;
extern undefined4 DAT_002c483c;
extern undefined4 *DAT_002c4840;
extern undefined *DAT_002c4844;
extern int DAT_002c4848;
extern int DAT_002c4858;
extern char s_cState_ChangeSky_002c485c[];
extern char s_cState_Hold_002c4870[];
extern char s_cState_Wait_002c484c[];
extern char s_m_Demo_u_Castle_vr_002c4948[];

// USA 002C44E8 <- EU 002C44C4 (Ghidra, non-matching)
// GLOBAL DAT_002c4838 int
// GLOBAL DAT_002c483c undefined4
// GLOBAL DAT_002c4840 undefined4 *
// GLOBAL DAT_002c4844 undefined *
// GLOBAL DAT_002c4848 int
// GLOBAL DAT_002c4858 int
// GLOBAL s_cState_ChangeSky_002c485c string
// GLOBAL s_cState_Hold_002c4870 string
// GLOBAL s_cState_Wait_002c484c string
// GLOBAL s_m_Demo_u_Castle_vr_002c4948 string

undefined4 * func_002C44E8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 * *)(albw_frame + 0x8))
  piVar4 = func_004D1E9C(param_1,param_2);
  iVar6 = DAT_002c4838;
  *piVar4 = DAT_002c4838;
  piVar4[200] = iVar6 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x15a);
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  uVar13 = DAT_002c483c;
  puVar5[0xb] = 1;
  puVar5[10] = 0;
  puVar5[0xc] = uVar13;
  puVar10 = puVar5 + -0x15a;
  *(undefined1 *)((int)puVar5 + 6) = 3;
  puVar5[5] = puVar10;
  iVar6 = func_0010BA78(0x30);
  puVar5[6] = iVar6;
  puVar2 = DAT_002c4840;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar9 = 3;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar13 = puVar2[0xf];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar2[0xe];
    puVar7[3] = uVar13;
    uVar13 = puVar2[0xf];
    puVar7[4] = puVar2[0xe];
    puVar7[5] = uVar13;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar11 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar5[8] = puVar7;
  if (uVar11 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar7 = puVar2[4];
      puVar7[1] = uVar13;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar11 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar13 = puVar2[5];
      puVar8[2] = puVar2[4];
      puVar8[3] = uVar13;
      uVar13 = puVar2[5];
      puVar8[4] = puVar2[4];
      puVar8[5] = uVar13;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar3 = DAT_002c4844;
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 3;
    *puVar7 = 0x24;
    iVar6 = func_00100118((int)(puVar7 + 2),puVar3,0x24,3);
  }
  if (iVar6 != 0) {
    puVar5[2] = 3;
    puVar5[3] = iVar6;
  }
  iVar6 = DAT_002c4848;
  puVar5[-0x85] = puVar5;
  iVar9 = DAT_002c4858;
  *(undefined2 *)(iVar6 + (int)puVar10) = 3;
  local_2c = (uint *)s_cState_Wait_002c484c;
  local_30 = iVar9;
  iVar6 = puVar5[3];
  puVar12 = *(uint **)(iVar6 + 4);
  local_28 = puVar5;
  (**(code **)(iVar9 + 8))(&local_30);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_2c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_002c46ac;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_002c46ac:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar11) {
    uVar11 = iVar6 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar13 = puVar2[4];
  uVar14 = puVar2[2];
  uVar16 = puVar2[1];
  uVar15 = puVar2[3];
  uVar17 = puVar2[5];
  *puVar7 = *puVar2;
  puVar7[1] = uVar16;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar14;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar13;
  puVar7[1] = uVar17;
  local_2c = (uint *)s_cState_ChangeSky_002c485c;
  local_30 = iVar9;
  if ((uint)puVar5[2] < 2) {
    iVar6 = puVar5[3];
  }
  else {
    iVar6 = puVar5[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_2c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_002c4778;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_002c4778:
  if (*(int *)(iVar6 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  iVar6 = puVar5[6];
  uVar13 = puVar2[4];
  uVar14 = puVar2[5];
  uVar15 = puVar2[8];
  uVar16 = puVar2[7];
  uVar17 = puVar2[9];
  *(undefined4 *)(iVar6 + 8) = puVar2[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 8) = uVar15;
  *(undefined4 *)(iVar6 + 0xc) = uVar17;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 8) = uVar13;
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  local_2c = (uint *)s_cState_Hold_002c4870;
  local_30 = iVar9;
  if ((uint)puVar5[2] < 3) {
    iVar6 = puVar5[3];
  }
  else {
    iVar6 = puVar5[3] + 0x48;
  }
  puVar12 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_2c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_002c4888;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_002c4888:
  if (*(int *)(iVar6 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  iVar6 = puVar5[6];
  uVar13 = puVar2[0xb];
  uVar15 = puVar2[0xc];
  uVar14 = puVar2[0xd];
  uVar16 = puVar2[5];
  uVar17 = puVar2[4];
  *(undefined4 *)(iVar6 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar13;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar15;
  *(undefined4 *)(iVar6 + 0x14) = uVar14;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar17;
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  puVar5[-0xa2] = puVar5[-0xa2] | 2;
  local_2c = (uint *)s_m_Demo_u_Castle_vr_002c4948;
  local_30 = iVar9;
  iVar6 = func_00584CC8(puVar5[-0xe],&local_30);
  puVar5[9] = iVar6;
  func_004D01E0(puVar5[-0xe],1,iVar6);
  func_00662DE0(local_28,0);
  return puVar10;
}

