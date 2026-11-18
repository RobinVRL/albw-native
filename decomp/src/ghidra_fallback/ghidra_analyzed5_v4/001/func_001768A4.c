#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00325150(int *param_1);
extern int func_00325664(int param_1);
extern int func_00325AB0(int param_1,uint param_2);
extern int func_003261DC(undefined4 *param_1,uint *param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00658EE0(undefined4 *param_1,undefined1 param_2);
extern int DAT_00176c74;
extern undefined4 DAT_00176c78;
extern undefined4 DAT_00176c7c;
extern undefined4 DAT_00176c80;
extern undefined4 DAT_00176c84;
extern undefined4 DAT_00176c88;
extern int *DAT_00176c8c;
extern undefined4 DAT_00176c90;
extern undefined DAT_00176c94;
extern uint DAT_00176c9c;
extern uint DAT_00176ca0;
extern undefined4 *DAT_00176ca4;
extern undefined *DAT_00176ca8;
extern int DAT_00176cac;
extern char s_cState_Close_00176cb0[];
extern char s_cState_Move_00176f70[];
extern char s_cState_Open_00176f7c[];

// USA 001768A4 <- EU 001768A4 (Ghidra, non-matching)
// GLOBAL DAT_00176c74 int
// GLOBAL DAT_00176c78 undefined4
// GLOBAL DAT_00176c7c undefined4
// GLOBAL DAT_00176c80 undefined4
// GLOBAL DAT_00176c84 undefined4
// GLOBAL DAT_00176c88 undefined4
// GLOBAL DAT_00176c8c int *
// GLOBAL DAT_00176c90 undefined4
// GLOBAL DAT_00176c94 undefined
// GLOBAL DAT_00176c9c uint
// GLOBAL DAT_00176ca0 uint
// GLOBAL DAT_00176ca4 undefined4 *
// GLOBAL DAT_00176ca8 undefined *
// GLOBAL DAT_00176cac int
// GLOBAL s_cState_Close_00176cb0 string
// GLOBAL s_cState_Move_00176f70 string
// GLOBAL s_cState_Open_00176f7c string

/* WARNING: Variable defined which should be unmapped: objStack_b0 */

int * func_001768A4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_b0 ((uint *)(albw_frame + 0x0))
  #define local_a0 (*(uint *)(albw_frame + 0x10))
  #define local_9c (*(uint * *)(albw_frame + 0x14))
  #define local_98 ((uint *)(albw_frame + 0x18))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(uint *)(albw_frame + 0x38))
  #define local_44 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x70))
  piVar3 = (int *)func_003261DC(param_1,param_2);
  iVar5 = DAT_00176c74;
  *piVar3 = DAT_00176c74;
  piVar3[200] = iVar5 + 0x90;
  puVar4 = func_0010A794(piVar3 + 0x13c);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar15 = DAT_00176c7c;
  puVar4[9] = DAT_00176c78;
  puVar4[10] = puVar4 + -0x13c;
  puVar4[0xb] = uVar15;
  puVar4[0xc] = uVar15;
  puVar4[0xd] = uVar15;
  puVar4[0xe] = 0xffffffff;
  piVar3 = puVar4 + -0x13c;
  objStack_b0[1] = 0;
  objStack_b0[0] = 1;
  objStack_b0[2] = 0;
  iVar5 = func_0014E428((int)piVar3,1,0,0,1,0,0);
  uVar16 = DAT_00176c80;
  piVar12 = puVar4 + 0xf;
  uVar20 = CONCAT44(DAT_00176c80,uVar15);
  *piVar12 = iVar5;
  puVar4[0x10] = 0;
  puVar6 = puVar4 + 0x11;
  *puVar6 = uVar15;
  puVar4[0x12] = uVar15;
  puVar4[0x13] = uVar15;
  uVar17 = DAT_00176c84;
  puVar4[0x14] = uVar15;
  puVar4[0x15] = uVar15;
  puVar4[0x16] = uVar15;
  *(bool *)(puVar4 + 0x17) = *(short *)((int)param_2 + 0x32) != 0;
  puVar4[-0xb] = uVar16;
  puVar4[-10] = uVar17;
  iVar5 = puVar4[0xf];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar5 + 0x80),puVar4[-0x42],(float *)(puVar4 + -0x48));
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar14 = (uint *)0x0;
  }
  else {
    puVar14 = func_0016A2FC(puVar7,1,DAT_00176c88,1);
  }
  puVar4[0x10] = puVar14;
  func_00169688(puVar14,0,DAT_00176c8c,*(int *)(puVar4[-0x88] + 0x1c8));
  func_0016A02C(puVar4[0x10],-1,(int *)0xffffffff,0);
  local_90 = &local_8c;
  local_84 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_98[1] = 3;
  local_44 = 10;
  local_40 = 0;
  local_8c = 0;
  local_98[0] = 1;
  local_88 = (undefined4)uVar20;
  local_80 = DAT_00176c90;
  local_78 = (uint)((int)param_2 + 0x32) | 0xff;
  local_7c = local_84;
  func_0016898C(puVar4[0x10],local_98);
  (**(code **)(*(int *)puVar4[0xf] + 0x10))((int *)puVar4[0xf],0x24);
  func_00325AB0((int)piVar3,0);
  func_00325664((int)piVar3);
  uVar13 = DAT_00176c9c;
  *(undefined2 *)(*(int *)(puVar4[-0x17] + 0x18) + 0x28) = 0xa4;
  objStack_b0[1] = (uint)&DAT_00176c94;
  objStack_b0[0] = uVar13;
  uVar8 = func_00564A78(*piVar12,(int *)objStack_b0);
  if (uVar8 != DAT_00176ca0) {
    puVar4[0xe] = uVar8;
    puVar14 = (uint *)(*(int *)(*(int *)(puVar4[0xf] + 0x24) + 0xc) + uVar8 * 0x40);
    *puVar14 = *puVar14 | 0x10;
    *(undefined4 **)(*piVar12 + 0x16c) = puVar4 + 9;
  }
  puVar4[5] = piVar3;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  iVar5 = func_0010BA78(0x30);
  puVar7 = DAT_00176ca4;
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar11 = 3;
  puVar9 = (undefined4 *)(iVar5 + -8);
  do {
    uVar15 = puVar7[0xf];
    iVar11 = iVar11 + -1;
    puVar9[2] = puVar7[0xe];
    puVar9[3] = uVar15;
    uVar15 = puVar7[0xf];
    puVar9[4] = puVar7[0xe];
    puVar9[5] = uVar15;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar8 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar4[8] = puVar9;
  if (uVar8 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar7[5];
      *puVar9 = puVar7[4];
      puVar9[1] = uVar15;
      puVar10 = puVar9;
    }
    for (iVar5 = (int)uVar8 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar15 = puVar7[5];
      puVar10[2] = puVar7[4];
      puVar10[3] = uVar15;
      uVar15 = puVar7[5];
      puVar10[4] = puVar7[4];
      puVar10[5] = uVar15;
      puVar10 = puVar10 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 3;
    iVar5 = func_00100118((int)(puVar7 + 2),DAT_00176ca8,0x24,3);
  }
  if (iVar5 != 0) {
    puVar4[2] = 3;
    puVar4[3] = iVar5;
  }
  iVar5 = DAT_00176cac;
  puVar4[-0x67] = puVar4;
  *(undefined2 *)(iVar5 + (int)piVar3) = 3;
  local_9c = (uint *)s_cState_Close_00176cb0;
  local_a0 = uVar13;
  iVar5 = puVar4[3];
  puVar14 = *(uint **)(iVar5 + 4);
  (**(code **)(uVar13 + 8))(&local_a0);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_9c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_00176ccc;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_00176ccc:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar8) {
    uVar8 = iVar5 - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar14,local_9c,uVar8);
  *(undefined1 *)((int)puVar14 + uVar8) = 0;
  puVar7 = (undefined4 *)puVar4[6];
  uVar15 = DAT_00176ca4[1];
  uVar16 = DAT_00176ca4[2];
  uVar17 = DAT_00176ca4[3];
  uVar18 = DAT_00176ca4[4];
  uVar19 = DAT_00176ca4[5];
  *puVar7 = *DAT_00176ca4;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar16;
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar18;
  puVar7[1] = uVar19;
  local_9c = (uint *)s_cState_Move_00176f70;
  local_a0 = uVar13;
  if ((uint)puVar4[2] < 2) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar5 + 4);
  (**(code **)(uVar13 + 8))(&local_a0);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_9c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_00176d84;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_00176d84:
  if (*(int *)(iVar5 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar14,local_9c,uVar8);
  *(undefined1 *)((int)puVar14 + uVar8) = 0;
  puVar7 = DAT_00176ca4;
  iVar5 = puVar4[6];
  uVar15 = DAT_00176ca4[4];
  uVar16 = DAT_00176ca4[5];
  uVar17 = DAT_00176ca4[7];
  uVar18 = DAT_00176ca4[8];
  uVar19 = DAT_00176ca4[9];
  *(undefined4 *)(iVar5 + 8) = DAT_00176ca4[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar18;
  *(undefined4 *)(iVar5 + 0xc) = uVar19;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  local_9c = (uint *)s_cState_Open_00176f7c;
  local_a0 = uVar13;
  if ((uint)puVar4[2] < 3) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x48;
  }
  puVar14 = *(uint **)(iVar5 + 4);
  (**(code **)(uVar13 + 8))(&local_a0);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_9c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00176e50;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00176e50:
  if (*(int *)(iVar5 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar14,local_9c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar5 = puVar4[6];
  uVar17 = puVar7[0xb];
  uVar15 = puVar7[4];
  piVar12 = (int *)puVar7[5];
  uVar16 = puVar7[0xc];
  uVar18 = puVar7[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar7[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar16;
  *(undefined4 *)(iVar5 + 0x14) = uVar18;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(int **)(iVar5 + 0x14) = piVar12;
  if ((*(char *)(puVar4 + 0x17) == '\0') || (bVar2 = func_00588BF0((int)piVar3,0), !bVar2)) {
    func_00658EE0(puVar4,0);
    uVar15 = extraout_r1_00;
  }
  else {
    func_00658EE0(puVar4,2);
    uVar15 = extraout_r1;
  }
  func_00169A80((int *)puVar4[0x10],uVar15,uVar16,piVar12);
  func_00168E9C((int *)puVar4[0x10],puVar4[0xf],(int *)0x0);
  func_004CEAF0(puVar4[0xf]);
  puVar4[0x14] = *puVar6;
  puVar4[0x15] = puVar4[0x12];
  puVar4[0x16] = puVar4[0x13];
  *puVar6 = puVar4[0xb];
  puVar4[0x12] = puVar4[0xc];
  puVar4[0x13] = puVar4[0xd];
  func_00325150(piVar3);
  return piVar3;
}

