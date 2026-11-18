#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065C454(undefined4 *param_1,undefined1 param_2);
extern int DAT_001cf78c;
extern undefined4 DAT_001cf790;
extern uint DAT_001cf794;
extern int DAT_001cf798;
extern undefined4 DAT_001cf79c;
extern int *DAT_001cf7a0;
extern undefined4 *DAT_001cf7a4;
extern undefined *DAT_001cf7a8;
extern int DAT_001cf7ac;
extern int DAT_001cf7bc;
extern undefined4 *DAT_001cfa30;
extern char s_cState_Break_001cfa34[];
extern char s_cState_Crack_001cf7c0[];
extern char s_cState_Erase_001cfa44[];
extern char s_cState_Wait_001cf7b0[];

// USA 001CF3D4 <- EU 001CF3D4 (Ghidra, non-matching)
// GLOBAL DAT_001cf78c int
// GLOBAL DAT_001cf790 undefined4
// GLOBAL DAT_001cf794 uint
// GLOBAL DAT_001cf798 int
// GLOBAL DAT_001cf79c undefined4
// GLOBAL DAT_001cf7a0 int *
// GLOBAL DAT_001cf7a4 undefined4 *
// GLOBAL DAT_001cf7a8 undefined *
// GLOBAL DAT_001cf7ac int
// GLOBAL DAT_001cf7bc int
// GLOBAL DAT_001cfa30 undefined4 *
// GLOBAL s_cState_Break_001cfa34 string
// GLOBAL s_cState_Crack_001cf7c0 string
// GLOBAL s_cState_Erase_001cfa44 string
// GLOBAL s_cState_Wait_001cf7b0 string

/* WARNING: Variable defined which should be unmapped: objStack_48 */

undefined4 * func_001CF3D4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(uint * *)(albw_frame + 0x1c))
  piVar4 = func_00150E40(param_1,param_2);
  iVar9 = DAT_001cf78c;
  *piVar4 = DAT_001cf78c;
  piVar4[200] = iVar9 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  uVar15 = DAT_001cf794;
  uVar6 = DAT_001cf790;
  uVar20 = (ulonglong)DAT_001cf794;
  puVar5[0xd] = 0;
  puVar5[0xe] = uVar6;
  puVar5[0xf] = uVar15;
  puVar14 = puVar5 + -0x103;
  objStack_48[0] = 1;
  objStack_48[1] = 0;
  objStack_48[2] = 0;
  uVar6 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar5[9] = uVar6;
  uVar6 = func_0014E904((int)puVar14,2,1);
  puVar5[10] = uVar6;
  iVar9 = DAT_001cf798;
  uVar15 = 0;
  iVar17 = *(int *)(puVar5[-0x4f] + 0x1c8);
  do {
    func_00169688((uint *)puVar5[10],uVar15,(int *)(iVar9 + uVar15 * 8),iVar17);
    uVar19 = (uint)uVar20;
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 2);
  func_0016A02C(puVar5[10],-1,(int *)0xffffffff,0);
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar8 = (uint *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0016A2FC(puVar7,1,DAT_001cf79c,1);
  }
  piVar4 = DAT_001cf7a0;
  puVar5[0xb] = puVar8;
  func_00169608(puVar8,0,piVar4,iVar17);
  func_0016A02C(puVar5[0xb],-1,(int *)0xffffffff,0);
  objStack_48[0] = uVar19;
  objStack_48[1] = uVar19;
  objStack_48[2] = uVar19;
  func_00115C54((float *)(puVar5 + -0xf),(float *)(puVar5 + -0x101),(float *)objStack_48);
  iVar9 = puVar5[9];
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar9 + 0x80),puVar5[-9],(float *)(puVar5 + -0xf));
  func_004CEAF0(puVar5[9]);
  *(undefined1 *)((int)puVar5 + 6) = 4;
  puVar5[5] = puVar14;
  iVar9 = func_0010BA78(0x40);
  puVar5[6] = iVar9;
  puVar7 = DAT_001cf7a4;
  puVar5[7] = iVar9 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar17 = 4;
  puVar10 = (undefined4 *)(iVar9 + -8);
  do {
    uVar6 = puVar7[0x13];
    iVar17 = iVar17 + -1;
    puVar10[2] = puVar7[0x12];
    puVar10[3] = uVar6;
    uVar6 = puVar7[0x13];
    puVar10[4] = puVar7[0x12];
    puVar10[5] = uVar6;
    puVar10 = puVar10 + 4;
  } while (iVar17 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar15 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar5[8] = puVar10;
  if (uVar15 != 0) {
    puVar11 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = puVar7[5];
      *puVar10 = puVar7[4];
      puVar10[1] = uVar6;
      puVar11 = puVar10;
    }
    for (iVar9 = (int)uVar15 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar6 = puVar7[5];
      puVar11[2] = puVar7[4];
      puVar11[3] = uVar6;
      uVar6 = puVar7[5];
      puVar11[4] = puVar7[4];
      puVar11[5] = uVar6;
      puVar11 = puVar11 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar2 = DAT_001cf7a8;
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 4;
    *puVar7 = 0x24;
    iVar9 = func_00100118((int)(puVar7 + 2),puVar2,0x24,4);
  }
  if (iVar9 != 0) {
    puVar5[3] = iVar9;
    puVar5[2] = 4;
  }
  iVar9 = DAT_001cf7ac;
  puVar5[-0x2e] = puVar5;
  iVar17 = DAT_001cf7bc;
  *(undefined2 *)(iVar9 + (int)puVar14) = 4;
  local_34 = (uint *)s_cState_Wait_001cf7b0;
  local_38 = iVar17;
  iVar9 = puVar5[3];
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar17 + 8))(&local_38);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_34 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001cf6d0;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001cf6d0:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar15) {
    uVar15 = iVar9 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar8,local_34,uVar15);
  puVar7 = DAT_001cf7a4;
  *(undefined1 *)((int)puVar8 + uVar15) = 0;
  puVar10 = (undefined4 *)puVar5[6];
  uVar18 = puVar7[1];
  uVar6 = puVar7[2];
  uVar13 = puVar7[3];
  uVar16 = puVar7[4];
  uVar12 = puVar7[5];
  *puVar10 = *puVar7;
  puVar10[1] = uVar18;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar6;
  puVar7[1] = uVar13;
  puVar7 = (undefined4 *)puVar5[8];
  puVar7[1] = uVar12;
  *puVar7 = uVar16;
  local_34 = (uint *)s_cState_Crack_001cf7c0;
  local_38 = iVar17;
  if ((uint)puVar5[2] < 2) {
    iVar9 = puVar5[3];
  }
  else {
    iVar9 = puVar5[3] + 0x24;
  }
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar17 + 8))(&local_38);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_34 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001cf7dc;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001cf7dc:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar8,local_34,uVar15);
  *(undefined1 *)((int)puVar8 + uVar15) = 0;
  iVar9 = puVar5[6];
  uVar6 = *DAT_001cfa30;
  uVar12 = DAT_001cfa30[1];
  uVar13 = DAT_001cfa30[3];
  uVar16 = DAT_001cfa30[4];
  uVar18 = DAT_001cfa30[5];
  *(undefined4 *)(iVar9 + 8) = DAT_001cfa30[2];
  *(undefined4 *)(iVar9 + 0xc) = uVar13;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 8) = uVar16;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  iVar9 = puVar5[8];
  *(undefined4 *)(iVar9 + 8) = uVar6;
  *(undefined4 *)(iVar9 + 0xc) = uVar12;
  local_34 = (uint *)s_cState_Break_001cfa34;
  local_38 = iVar17;
  if ((uint)puVar5[2] < 3) {
    iVar9 = puVar5[3];
  }
  else {
    iVar9 = puVar5[3] + 0x48;
  }
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar17 + 8))(&local_38);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_34 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001cf8a0;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001cf8a0:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar8,local_34,uVar15);
  *(undefined1 *)((int)puVar8 + uVar15) = 0;
  puVar7 = DAT_001cf7a4;
  iVar9 = puVar5[6];
  uVar6 = DAT_001cf7a4[0xb];
  uVar12 = DAT_001cf7a4[0xc];
  uVar18 = DAT_001cf7a4[0xd];
  uVar13 = DAT_001cf7a4[4];
  uVar16 = DAT_001cf7a4[5];
  *(undefined4 *)(iVar9 + 0x10) = DAT_001cf7a4[10];
  *(undefined4 *)(iVar9 + 0x14) = uVar6;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar12;
  *(undefined4 *)(iVar9 + 0x14) = uVar18;
  iVar9 = puVar5[8];
  *(undefined4 *)(iVar9 + 0x10) = uVar13;
  *(undefined4 *)(iVar9 + 0x14) = uVar16;
  local_34 = (uint *)s_cState_Erase_001cfa44;
  local_38 = iVar17;
  uVar15 = puVar5[2];
  if (uVar15 < 4) {
    iVar9 = puVar5[3];
    uVar19 = uVar15;
  }
  else {
    iVar9 = iVar17;
    uVar19 = puVar5[3];
  }
  if (3 < uVar15) {
    iVar9 = uVar19 + 0x6c;
  }
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar17 + 8))(&local_38);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_34 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001cf974;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001cf974:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar8,local_34,uVar15);
  *(undefined1 *)((int)puVar8 + uVar15) = 0;
  iVar9 = puVar5[6];
  uVar6 = puVar7[4];
  uVar12 = puVar7[5];
  uVar13 = puVar7[0x10];
  uVar16 = puVar7[0x11];
  uVar18 = puVar7[0xf];
  *(undefined4 *)(iVar9 + 0x18) = puVar7[0xe];
  *(undefined4 *)(iVar9 + 0x1c) = uVar18;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar13;
  *(undefined4 *)(iVar9 + 0x1c) = uVar16;
  iVar9 = puVar5[8];
  *(undefined4 *)(iVar9 + 0x18) = uVar6;
  *(undefined4 *)(iVar9 + 0x1c) = uVar12;
  bVar3 = func_00588BF0((int)puVar14,0);
  if (bVar3) {
    func_0065C454(puVar5,3);
  }
  else {
    func_0065C454(puVar5,0);
  }
  puVar5[-0x4b] = puVar5[-0x4b] | 4;
  return puVar14;
}

