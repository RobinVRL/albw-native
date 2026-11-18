#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004ECF6C(int param_1);
extern int func_00521028(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065B8F0(undefined4 *param_1,undefined1 param_2);
extern int DAT_001c1da8;
extern undefined4 *DAT_001c1dac;
extern undefined *DAT_001c1db0;
extern int DAT_001c1db4;
extern int DAT_001c1dc4;
extern char s_cState_Light_001c1dc8[];
extern char s_cState_Wait_001c1db8[];

// USA 001C1A04 <- EU 001C1A04 (Ghidra, non-matching)
// GLOBAL DAT_001c1da8 int
// GLOBAL DAT_001c1dac undefined4 *
// GLOBAL DAT_001c1db0 undefined *
// GLOBAL DAT_001c1db4 int
// GLOBAL DAT_001c1dc4 int
// GLOBAL s_cState_Light_001c1dc8 string
// GLOBAL s_cState_Wait_001c1db8 string

undefined4 * func_001C1A04(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(uint * *)(albw_frame + 0xc))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x10))
  #define local_44 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2c (*(undefined4 * *)(albw_frame + 0x34))
  piVar4 = func_00150E40(param_1,param_2);
  iVar6 = DAT_001c1da8;
  *piVar4 = DAT_001c1da8;
  piVar4[200] = iVar6 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar12 = puVar5 + -0x103;
  *(undefined1 *)((int)puVar5 + 6) = 2;
  puVar5[5] = puVar12;
  iVar6 = func_0010BA78(0x20);
  puVar5[6] = iVar6;
  puVar2 = DAT_001c1dac;
  iVar9 = 2;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar17 = puVar2[0xb];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar2[10];
    puVar7[3] = uVar17;
    uVar17 = puVar2[0xb];
    puVar7[4] = puVar2[10];
    puVar7[5] = uVar17;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar14 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar5[8] = puVar7;
  if (uVar14 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar2[5];
      *puVar7 = puVar2[4];
      puVar7[1] = uVar17;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar14 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar17 = puVar2[5];
      puVar8[2] = puVar2[4];
      puVar8[3] = uVar17;
      uVar17 = puVar2[5];
      puVar8[4] = puVar2[4];
      puVar8[5] = uVar17;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 2;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_001c1db0,0x24,2);
  }
  if (iVar6 != 0) {
    puVar5[2] = 2;
    puVar5[3] = iVar6;
  }
  iVar6 = DAT_001c1db4;
  puVar5[-0x2e] = puVar5;
  iVar9 = DAT_001c1dc4;
  *(undefined2 *)(iVar6 + (int)puVar12) = 2;
  local_54 = (uint *)s_cState_Wait_001c1db8;
  local_58 = iVar9;
  iVar6 = puVar5[3];
  puVar16 = *(uint **)(iVar6 + 4);
  local_2c = puVar5;
  (**(code **)(iVar9 + 8))(&local_58);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_54 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001c1bd0;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001c1bd0:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar14) {
    uVar14 = iVar6 - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar16,local_54,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar17 = puVar2[1];
  uVar10 = puVar2[2];
  uVar13 = puVar2[3];
  uVar11 = puVar2[4];
  uVar15 = puVar2[5];
  *puVar7 = *puVar2;
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar10;
  puVar7[1] = uVar13;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar11;
  puVar7[1] = uVar15;
  local_54 = (uint *)s_cState_Light_001c1dc8;
  local_58 = iVar9;
  if ((uint)puVar5[2] < 2) {
    iVar6 = puVar5[3];
  }
  else {
    iVar6 = puVar5[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar9 + 8))(&local_58);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_54 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001c1c88;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001c1c88:
  if (*(int *)(iVar6 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar16,local_54,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar6 = puVar5[6];
  uVar17 = puVar2[9];
  uVar13 = puVar2[8];
  uVar10 = puVar2[4];
  uVar15 = puVar2[7];
  uVar11 = puVar2[5];
  *(undefined4 *)(iVar6 + 8) = puVar2[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 8) = uVar13;
  *(undefined4 *)(iVar6 + 0xc) = uVar17;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 8) = uVar10;
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  bVar3 = func_00588BF0((int)puVar12,0);
  if (bVar3) {
    func_0065B8F0(local_2c,1);
  }
  else {
    func_0065B8F0(local_2c,0);
  }
  piVar4 = (int *)func_00521028((int)puVar12);
  (**(code **)(*piVar4 + 8))(piVar4);
  func_003529A0(auStack_50,piVar4[1],puVar5 + -0x3b);
  local_44 = puVar5 + -0xf;
  if (*(short *)(puVar5 + -0xf8) == 0) {
    local_38 = 0;
  }
  else if (*(short *)(puVar5 + -0xf8) == 1) {
    local_38 = 1;
  }
  func_002C41BC(puVar5 + -0x3b,auStack_50,0);
  func_004ECF6C((int)puVar12);
  return puVar12;
}

