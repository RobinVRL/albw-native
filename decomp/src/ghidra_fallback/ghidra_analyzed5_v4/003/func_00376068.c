#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006674F4(undefined4 *param_1,undefined1 param_2);
extern int DAT_003763ec;
extern undefined4 DAT_003763f0;
extern undefined4 *DAT_003763f4;
extern undefined *DAT_003763f8;
extern int DAT_003763fc;
extern int DAT_00376414;
extern char s_cState_ThrowWait_00376400[];
extern char s_cState_Throw_00376418[];
extern char s_cState_Wait_00376428[];

// USA 00376068 <- EU 00376044 (Ghidra, non-matching)
// GLOBAL DAT_003763ec int
// GLOBAL DAT_003763f0 undefined4
// GLOBAL DAT_003763f4 undefined4 *
// GLOBAL DAT_003763f8 undefined *
// GLOBAL DAT_003763fc int
// GLOBAL DAT_00376414 int
// GLOBAL s_cState_ThrowWait_00376400 string
// GLOBAL s_cState_Throw_00376418 string
// GLOBAL s_cState_Wait_00376428 string

undefined4 * func_00376068(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar5 = func_00150E40(param_1,param_2);
  iVar8 = DAT_003763ec;
  *piVar5 = DAT_003763ec;
  piVar5[200] = iVar8 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar13 = puVar6 + -0x103;
  uVar7 = func_0014E428((int)puVar13,0,0,0,1,0,0);
  puVar6[9] = uVar7;
  iVar8 = func_0054D89C((int)puVar13,0);
  uVar7 = DAT_003763f0;
  puVar6[10] = iVar8;
  puVar6[0xb] = uVar7;
  if (puVar6[9] == 0) {
    *(undefined1 *)((int)puVar6 + -0x135) = 1;
    return puVar13;
  }
  puVar6[5] = puVar13;
  *(undefined1 *)((int)puVar6 + 6) = 3;
  iVar8 = func_0010BA78(0x30);
  puVar2 = DAT_003763f4;
  puVar6[6] = iVar8;
  puVar6[7] = iVar8 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar10 = 3;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar7 = puVar2[0xf];
    iVar10 = iVar10 + -1;
    puVar9[2] = puVar2[0xe];
    puVar9[3] = uVar7;
    uVar7 = puVar2[0xf];
    puVar9[4] = puVar2[0xe];
    puVar9[5] = uVar7;
    puVar9 = puVar9 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar15 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[8] = puVar9;
  if (uVar15 != 0) {
    puVar12 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar2[5];
      *puVar9 = puVar2[4];
      puVar9[1] = uVar7;
      puVar12 = puVar9;
    }
    for (iVar8 = (int)uVar15 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar7 = puVar2[5];
      puVar12[2] = puVar2[4];
      puVar12[3] = uVar7;
      uVar7 = puVar2[5];
      puVar12[4] = puVar2[4];
      puVar12[5] = uVar7;
      puVar12 = puVar12 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar3 = DAT_003763f8;
  iVar8 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 3;
    *puVar9 = 0x24;
    iVar8 = func_00100118((int)(puVar9 + 2),puVar3,0x24,3);
  }
  if (iVar8 != 0) {
    puVar6[2] = 3;
    puVar6[3] = iVar8;
  }
  iVar8 = DAT_003763fc;
  puVar6[-0x2e] = puVar6;
  iVar10 = DAT_00376414;
  *(undefined2 *)(iVar8 + (int)puVar13) = 3;
  local_2c = (uint *)s_cState_ThrowWait_00376400;
  local_30 = iVar10;
  iVar8 = puVar6[3];
  puVar17 = *(uint **)(iVar8 + 4);
  puVar9 = puVar6;
  (**(code **)(iVar10 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00376278;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00376278:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar15) {
    uVar15 = iVar8 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  puVar12 = (undefined4 *)puVar6[6];
  uVar14 = puVar2[1];
  uVar7 = puVar2[2];
  uVar16 = puVar2[3];
  uVar11 = puVar2[4];
  uVar18 = puVar2[5];
  *puVar12 = *puVar2;
  puVar12[1] = uVar14;
  puVar12 = (undefined4 *)puVar6[7];
  *puVar12 = uVar7;
  puVar12[1] = uVar16;
  puVar12 = (undefined4 *)puVar6[8];
  *puVar12 = uVar11;
  puVar12[1] = uVar18;
  local_2c = (uint *)s_cState_Throw_00376418;
  local_30 = iVar10;
  if ((uint)puVar6[2] < 2) {
    iVar8 = puVar6[3];
  }
  else {
    iVar8 = puVar6[3] + 0x24;
  }
  puVar17 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00376338;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00376338:
  if (*(int *)(iVar8 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  iVar8 = puVar6[6];
  uVar7 = puVar2[4];
  uVar11 = puVar2[5];
  uVar14 = puVar2[7];
  uVar16 = puVar2[8];
  uVar18 = puVar2[9];
  *(undefined4 *)(iVar8 + 8) = puVar2[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 8) = uVar16;
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  iVar8 = puVar6[8];
  *(undefined4 *)(iVar8 + 8) = uVar7;
  *(undefined4 *)(iVar8 + 0xc) = uVar11;
  local_2c = (uint *)s_cState_Wait_00376428;
  local_30 = iVar10;
  if ((uint)puVar6[2] < 3) {
    iVar8 = puVar6[3];
  }
  else {
    iVar8 = puVar6[3] + 0x48;
  }
  puVar17 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00376440;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00376440:
  if (*(int *)(iVar8 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  iVar8 = puVar6[6];
  uVar18 = puVar2[0xb];
  uVar7 = puVar2[0xc];
  uVar14 = puVar2[0xd];
  uVar11 = puVar2[4];
  uVar16 = puVar2[5];
  *(undefined4 *)(iVar8 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar7;
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar8 = puVar6[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar11;
  *(undefined4 *)(iVar8 + 0x14) = uVar16;
  iVar8 = puVar6[9];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar8 + 0x80),puVar6[-9],(float *)(puVar6 + -0xf));
  (**(code **)(*(int *)puVar6[9] + 0x10))((int *)puVar6[9],0x24);
  bVar4 = func_00588BF0((int)puVar13,0);
  if (bVar4) {
    *(undefined1 *)((int)puVar6 + -0x135) = 1;
  }
  else {
    func_006674F4(puVar9,0);
  }
  return puVar13;
}

