#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_006665A0(undefined4 *param_1,undefined1 param_2);
extern int DAT_0035b714;
extern undefined4 DAT_0035b718;
extern uint DAT_0035b728;
extern uint DAT_0035b73c;
extern int DAT_0035b740;
extern undefined4 *DAT_0035b744;
extern undefined *DAT_0035b748;
extern int DAT_0035b74c;
extern char s_JewelRockCandle_0035b72c[];
extern char s_cState_FadeOut_0035bac4[];
extern char s_cState_Fire_0035bab8[];
extern char s_cState_Hide_0035b750[];
extern char s_cState_Ignition_0035baa8[];
extern char s_ignition_0035b71c[];

// USA 0035B338 <- EU 0035B314 (Ghidra, non-matching)
// GLOBAL DAT_0035b714 int
// GLOBAL DAT_0035b718 undefined4
// GLOBAL DAT_0035b728 uint
// GLOBAL DAT_0035b73c uint
// GLOBAL DAT_0035b740 int
// GLOBAL DAT_0035b744 undefined4 *
// GLOBAL DAT_0035b748 undefined *
// GLOBAL DAT_0035b74c int
// GLOBAL s_JewelRockCandle_0035b72c string
// GLOBAL s_cState_FadeOut_0035bac4 string
// GLOBAL s_cState_Fire_0035bab8 string
// GLOBAL s_cState_Hide_0035b750 string
// GLOBAL s_cState_Ignition_0035baa8 string
// GLOBAL s_ignition_0035b71c string

/* WARNING: Variable defined which should be unmapped: objStack_a0 */

undefined4 * func_0035B338(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define local_90 (*(uint *)(albw_frame + 0x10))
  #define local_8c (*(uint * *)(albw_frame + 0x14))
  #define aiStack_88 ((int *)(albw_frame + 0x18))
  piVar4 = func_00150E40(param_1,param_2);
  iVar10 = DAT_0035b714;
  *piVar4 = DAT_0035b714;
  piVar4[200] = iVar10 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar16 = puVar5 + -0x103;
  objStack_a0[1] = 0;
  objStack_a0[0] = 1;
  objStack_a0[2] = 0;
  uVar6 = func_0014E428((int)puVar16,1,0,0,1,0,0);
  puVar5[9] = uVar6;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0016A2FC(puVar7,1,DAT_0035b718,1);
  }
  puVar5[10] = puVar8;
  uVar18 = DAT_0035b728;
  piVar4 = puVar5 + 10;
  objStack_a0[1] = (uint)s_ignition_0035b71c;
  objStack_a0[0] = DAT_0035b728;
  func_00169608((uint *)puVar5[10],0,(int *)objStack_a0,*(int *)(puVar5[-0x4f] + 0x1c8));
  func_00133870(*piVar4,0,puVar5[9]);
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  puVar9 = (uint *)func_002C11E8(aiStack_88,0,10,0);
  func_0016898C(*piVar4,puVar9);
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0016A2FC(puVar7,1,DAT_0035b718,1);
  }
  puVar5[0xb] = puVar8;
  piVar4 = puVar5 + 0xb;
  objStack_a0[1] = (uint)s_JewelRockCandle_0035b72c;
  objStack_a0[0] = uVar18;
  func_00169608((uint *)puVar5[0xb],0,(int *)objStack_a0,*(int *)(puVar5[-0x4f] + 0x1c8));
  func_00133870(*piVar4,0,puVar5[9]);
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  puVar9 = (uint *)func_002C11E8(aiStack_88,0,10,0);
  func_0016898C(*piVar4,puVar9);
  uVar21 = (ulonglong)DAT_0035b73c;
  *(uint *)(*(int *)(*piVar4 + 0x14) + 0x10) = DAT_0035b73c;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0016A2FC(puVar7,3,DAT_0035b718,1);
  }
  iVar10 = DAT_0035b740;
  piVar4 = puVar5 + 0xc;
  uVar17 = 0;
  puVar5[0xc] = puVar8;
  do {
    func_00169608((uint *)puVar5[0xc],uVar17,(int *)(iVar10 + uVar17 * 8),
                  *(int *)(puVar5[-0x4f] + 0x1c8));
    func_00133870(*piVar4,uVar17,puVar5[9]);
    uVar6 = (undefined4)uVar21;
    uVar17 = uVar17 + 1;
  } while (uVar17 < 3);
  func_0016A02C(puVar5[0xc],-1,(int *)0xffffffff,0);
  puVar9 = (uint *)func_002C11E8(aiStack_88,0,10,0);
  func_0016898C(*piVar4,puVar9);
  *(undefined4 *)(*(int *)(*piVar4 + 0x14) + 0x10) = uVar6;
  *(undefined1 *)((int)puVar5 + 6) = 4;
  puVar5[5] = puVar16;
  iVar10 = func_0010BA78(0x40);
  puVar5[6] = iVar10;
  puVar8 = DAT_0035b744;
  puVar5[7] = iVar10 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar12 = 4;
  puVar7 = (undefined4 *)(iVar10 + -8);
  do {
    uVar6 = puVar8[0x15];
    iVar12 = iVar12 + -1;
    puVar7[2] = puVar8[0x14];
    puVar7[3] = uVar6;
    uVar6 = puVar8[0x15];
    puVar7[4] = puVar8[0x14];
    puVar7[5] = uVar6;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar17 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar5[8] = puVar7;
  if (uVar17 != 0) {
    puVar11 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = puVar8[0xb];
      *puVar7 = puVar8[10];
      puVar7[1] = uVar6;
      puVar11 = puVar7;
    }
    for (iVar10 = (int)uVar17 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar6 = puVar8[0xb];
      puVar11[2] = puVar8[10];
      puVar11[3] = uVar6;
      uVar6 = puVar8[0xb];
      puVar11[4] = puVar8[10];
      puVar11[5] = uVar6;
      puVar11 = puVar11 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar3 = DAT_0035b748;
  iVar10 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 4;
    *puVar8 = 0x24;
    iVar10 = func_00100118((int)(puVar8 + 2),puVar3,0x24,4);
  }
  if (iVar10 != 0) {
    puVar5[3] = iVar10;
    puVar5[2] = 4;
  }
  iVar10 = DAT_0035b74c;
  puVar5[-0x2e] = puVar5;
  *(undefined2 *)(iVar10 + (int)puVar16) = 4;
  local_8c = (uint *)s_cState_Hide_0035b750;
  local_90 = uVar18;
  iVar10 = puVar5[3];
  puVar9 = *(uint **)(iVar10 + 4);
  (**(code **)(uVar18 + 8))(&local_90);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_8c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_0035b768;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_0035b768:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar17) {
    uVar17 = iVar10 - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar9,local_8c,uVar17);
  *(undefined1 *)((int)puVar9 + uVar17) = 0;
  puVar8 = (undefined4 *)puVar5[6];
  uVar20 = DAT_0035b744[1];
  uVar13 = DAT_0035b744[2];
  uVar14 = DAT_0035b744[3];
  uVar15 = DAT_0035b744[4];
  uVar6 = DAT_0035b744[5];
  *puVar8 = *DAT_0035b744;
  puVar8[1] = uVar20;
  puVar8 = (undefined4 *)puVar5[7];
  *puVar8 = uVar13;
  puVar8[1] = uVar14;
  puVar8 = (undefined4 *)puVar5[8];
  puVar8[1] = uVar6;
  *puVar8 = uVar15;
  local_8c = (uint *)s_cState_Ignition_0035baa8;
  local_90 = uVar18;
  if ((uint)puVar5[2] < 2) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x24;
  }
  puVar9 = *(uint **)(iVar10 + 4);
  (**(code **)(uVar18 + 8))(&local_90);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_8c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_0035b830;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_0035b830:
  if (*(int *)(iVar10 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar9,local_8c,uVar17);
  puVar8 = DAT_0035b744;
  *(undefined1 *)((int)puVar9 + uVar17) = 0;
  iVar10 = puVar5[6];
  uVar15 = puVar8[7];
  uVar20 = puVar8[8];
  uVar13 = puVar8[10];
  uVar14 = puVar8[9];
  uVar6 = puVar8[0xb];
  *(undefined4 *)(iVar10 + 8) = puVar8[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar15;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 8) = uVar20;
  *(undefined4 *)(iVar10 + 0xc) = uVar14;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 8) = uVar13;
  *(undefined4 *)(iVar10 + 0xc) = uVar6;
  local_8c = (uint *)s_cState_Fire_0035bab8;
  local_90 = uVar18;
  if ((uint)puVar5[2] < 3) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x48;
  }
  puVar9 = *(uint **)(iVar10 + 4);
  (**(code **)(uVar18 + 8))(&local_90);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_8c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_0035b904;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_0035b904:
  if (*(int *)(iVar10 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar9,local_8c,uVar17);
  *(undefined1 *)((int)puVar9 + uVar17) = 0;
  puVar8 = DAT_0035b744;
  iVar10 = puVar5[6];
  uVar6 = DAT_0035b744[10];
  uVar13 = DAT_0035b744[0xb];
  uVar14 = DAT_0035b744[0xd];
  uVar15 = DAT_0035b744[0xe];
  uVar20 = DAT_0035b744[0xf];
  *(undefined4 *)(iVar10 + 0x10) = DAT_0035b744[0xc];
  *(undefined4 *)(iVar10 + 0x14) = uVar14;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar15;
  *(undefined4 *)(iVar10 + 0x14) = uVar20;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar6;
  *(undefined4 *)(iVar10 + 0x14) = uVar13;
  local_8c = (uint *)s_cState_FadeOut_0035bac4;
  local_90 = uVar18;
  uVar17 = puVar5[2];
  if (uVar17 < 4) {
    uVar19 = puVar5[3];
    uVar2 = uVar17;
  }
  else {
    uVar19 = uVar18;
    uVar2 = puVar5[3];
  }
  if (3 < uVar17) {
    uVar19 = uVar2 + 0x6c;
  }
  puVar9 = *(uint **)(uVar19 + 4);
  (**(code **)(uVar18 + 8))(&local_90);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_8c + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_0035b9cc;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_0035b9cc:
  if (*(int *)(uVar19 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(uVar19 + 8) - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar9,local_8c,uVar18);
  *(undefined1 *)((int)puVar9 + uVar18) = 0;
  uVar13 = puVar8[0x13];
  iVar10 = puVar5[6];
  uVar6 = puVar8[0x11];
  uVar14 = puVar8[0x12];
  uVar15 = puVar8[10];
  uVar20 = puVar8[0xb];
  *(undefined4 *)(iVar10 + 0x18) = puVar8[0x10];
  *(undefined4 *)(iVar10 + 0x1c) = uVar6;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x18) = uVar14;
  *(undefined4 *)(iVar10 + 0x1c) = uVar13;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x18) = uVar15;
  *(undefined4 *)(iVar10 + 0x1c) = uVar20;
  func_006665A0(puVar5,0);
  iVar10 = puVar5[9];
  *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar10 + 0x80),0,puVar5[-9],0);
  iVar10 = puVar5[9];
  *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar10 + 0x8c) = puVar5[-0xf];
  *(undefined4 *)(iVar10 + 0x9c) = puVar5[-0xe];
  *(undefined4 *)(iVar10 + 0xac) = puVar5[-0xd];
  func_004CEAF0(puVar5[9]);
  return puVar16;
}

