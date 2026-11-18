#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_006563C8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00123b14;
extern int DAT_00123b18;
extern undefined4 *DAT_00123b1c;
extern uint DAT_00123b20;
extern int DAT_00123b24;
extern uint DAT_00123b28;
extern float DAT_00123b34;
extern int DAT_00123b38;
extern undefined *DAT_00123b3c;
extern int DAT_00123b40;
extern uint DAT_00123d98;
extern float DAT_00123d9c;
extern float DAT_00123da0;
extern undefined4 DAT_00123da4;
extern undefined4 DAT_00123da8;
extern float DAT_00123dac;
extern char s_Coppi_00123b2c[];
extern char s_cState_Die_00123d8c[];
extern char s_cState_Reaction_00123b50[];
extern char s_cState_Walk_00123b44[];

// USA 00123768 <- EU 00123768 (Ghidra, non-matching)
// GLOBAL DAT_00123b14 uint *
// GLOBAL DAT_00123b18 int
// GLOBAL DAT_00123b1c undefined4 *
// GLOBAL DAT_00123b20 uint
// GLOBAL DAT_00123b24 int
// GLOBAL DAT_00123b28 uint
// GLOBAL DAT_00123b34 float
// GLOBAL DAT_00123b38 int
// GLOBAL DAT_00123b3c undefined *
// GLOBAL DAT_00123b40 int
// GLOBAL DAT_00123d98 uint
// GLOBAL DAT_00123d9c float
// GLOBAL DAT_00123da0 float
// GLOBAL DAT_00123da4 undefined4
// GLOBAL DAT_00123da8 undefined4
// GLOBAL DAT_00123dac float
// GLOBAL s_Coppi_00123b2c string
// GLOBAL s_cState_Die_00123d8c string
// GLOBAL s_cState_Reaction_00123b50 string
// GLOBAL s_cState_Walk_00123b44 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

int * func_00123768(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  ushort uVar11;
  float *in_r3;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(uint * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  piVar3 = func_004FD464(param_1,param_2,DAT_00123b14);
  iVar8 = DAT_00123b18;
  *piVar3 = DAT_00123b18;
  piVar3[200] = iVar8 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar7 = DAT_00123b1c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar12 = DAT_00123b20;
  uVar14 = puVar7[1];
  uVar23 = (ulonglong)DAT_00123b20;
  puVar4[9] = *puVar7;
  puVar4[10] = uVar14;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(undefined1 *)((int)puVar4 + 0x2d) = 0;
  *(undefined1 *)((int)puVar4 + 0x2e) = 0;
  *(undefined1 *)((int)puVar4 + 0x2f) = 0;
  puVar4[0xc] = 0;
  piVar3 = puVar4 + -0x22f;
  objStack_50[3] = (uint)(puVar4 + -0x2f);
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = uVar12;
  puVar4[0x11] = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  puVar4[0x13] = 0;
  bVar18 = *(short *)((int)puVar4 + -0x88e) == 0;
  *(bool *)(puVar4 + 0xb) = bVar18;
  if (!bVar18) {
    puVar5 = (undefined2 *)func_0054DDF4((int)piVar3,1);
    func_004F88A0(piVar3,puVar5);
  }
  func_004FB344((int)piVar3,8);
  iVar8 = DAT_00123b24;
  uVar12 = 0;
  do {
    func_004FACA4((int)piVar3,uVar12,(int *)(iVar8 + uVar12 * 8));
    uVar14 = (undefined4)uVar23;
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 8);
  func_004FB468((int)piVar3);
  uVar12 = DAT_00123b28;
  if (*(char *)(objStack_50[3] + 0xe8) == '\0') {
    func_004FB30C((int)piVar3,1);
    objStack_50[1] = (uint)s_Coppi_00123b2c;
    objStack_50[0] = uVar12;
    func_004FAC70((int)piVar3,0,(int *)objStack_50);
    func_004FB408((int)piVar3);
    func_004FAB60((int)piVar3,0,0);
    func_004FB070((int)piVar3,DAT_00123b34);
  }
  func_004F5BD8((int)piVar3,(uint *)0x0,(int **)0x0,in_r3);
  puVar4[5] = piVar3;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  iVar6 = func_0010BA78(0x30);
  iVar8 = DAT_00123b38;
  puVar4[6] = iVar6;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 3;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar17 = *(undefined4 *)(iVar8 + 0x40);
    iVar9 = iVar9 + -1;
    puVar7[2] = *(undefined4 *)(iVar8 + 0x3c);
    puVar7[3] = uVar17;
    uVar17 = *(undefined4 *)(iVar8 + 0x40);
    puVar7[4] = *(undefined4 *)(iVar8 + 0x3c);
    puVar7[5] = uVar17;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar7;
  if (uVar13 != 0) {
    puVar10 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = *(undefined4 *)(iVar8 + 0x18);
      *puVar7 = *(undefined4 *)(iVar8 + 0x14);
      puVar7[1] = uVar17;
      puVar10 = puVar7;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar17 = *(undefined4 *)(iVar8 + 0x18);
      puVar10[2] = *(undefined4 *)(iVar8 + 0x14);
      puVar10[3] = uVar17;
      uVar17 = *(undefined4 *)(iVar8 + 0x18);
      puVar10[4] = *(undefined4 *)(iVar8 + 0x14);
      puVar10[5] = uVar17;
      puVar10 = puVar10 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 3;
    iVar8 = func_00100118((int)(puVar7 + 2),DAT_00123b3c,0x24,3);
  }
  if (iVar8 != 0) {
    puVar4[3] = iVar8;
    puVar4[2] = 3;
  }
  iVar8 = DAT_00123b40;
  puVar4[-0x15a] = puVar4;
  *(undefined2 *)(iVar8 + (int)piVar3) = 3;
  local_3c = (uint *)s_cState_Walk_00123b44;
  local_40 = uVar12;
  iVar8 = puVar4[3];
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(uVar12 + 8))(&local_40);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_3c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00123a5c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00123a5c:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar13) {
    uVar13 = iVar8 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar16,local_3c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  puVar7 = (undefined4 *)puVar4[6];
  uVar17 = *(undefined4 *)(DAT_00123b38 + 0x18);
  uVar19 = *(undefined4 *)(DAT_00123b38 + 8);
  uVar20 = *(undefined4 *)(DAT_00123b38 + 0xc);
  uVar21 = *(undefined4 *)(DAT_00123b38 + 0x10);
  uVar22 = *(undefined4 *)(DAT_00123b38 + 0x14);
  *puVar7 = *(undefined4 *)(DAT_00123b38 + 4);
  puVar7[1] = uVar19;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar20;
  puVar7[1] = uVar21;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar22;
  puVar7[1] = uVar17;
  local_3c = (uint *)s_cState_Reaction_00123b50;
  local_40 = uVar12;
  if ((uint)puVar4[2] < 2) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(uVar12 + 8))(&local_40);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_3c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00123b6c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00123b6c:
  if (*(int *)(iVar8 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar16,local_3c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  iVar8 = DAT_00123b38;
  iVar6 = puVar4[6];
  uVar17 = *(undefined4 *)(DAT_00123b38 + 0x14);
  uVar19 = *(undefined4 *)(DAT_00123b38 + 0x18);
  uVar20 = *(undefined4 *)(DAT_00123b38 + 0x20);
  uVar21 = *(undefined4 *)(DAT_00123b38 + 0x24);
  uVar22 = *(undefined4 *)(DAT_00123b38 + 0x28);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(DAT_00123b38 + 0x1c);
  *(undefined4 *)(iVar6 + 0xc) = uVar20;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 8) = uVar21;
  *(undefined4 *)(iVar6 + 0xc) = uVar22;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 8) = uVar17;
  *(undefined4 *)(iVar6 + 0xc) = uVar19;
  local_3c = (uint *)s_cState_Die_00123d8c;
  local_40 = uVar12;
  uVar13 = puVar4[2];
  if (uVar13 < 3) {
    uVar15 = puVar4[3];
    uVar2 = uVar13;
  }
  else {
    uVar15 = uVar12;
    uVar2 = puVar4[3];
  }
  if (2 < uVar13) {
    uVar15 = uVar2 + 0x48;
  }
  puVar16 = *(uint **)(uVar15 + 4);
  (**(code **)(uVar12 + 8))(&local_40);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_3c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00123c38;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00123c38:
  if (*(int *)(uVar15 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(uVar15 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar16,local_3c,uVar12);
  *(undefined1 *)((int)puVar16 + uVar12) = 0;
  iVar6 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar8 + 0x14);
  uVar19 = *(undefined4 *)(iVar8 + 0x34);
  uVar20 = *(undefined4 *)(iVar8 + 0x30);
  uVar22 = *(undefined4 *)(iVar8 + 0x38);
  uVar21 = *(undefined4 *)(iVar8 + 0x18);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(iVar6 + 0x14) = uVar20;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar19;
  *(undefined4 *)(iVar8 + 0x14) = uVar22;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar17;
  *(undefined4 *)(iVar8 + 0x14) = uVar21;
  func_006563C8(puVar4,0);
  uVar12 = DAT_00123d98;
  puVar4[-200] = puVar4[-200] | 0x8000;
  uVar11 = (ushort)uVar12;
  func_002B1FB4((int)piVar3,-1,uVar11);
  func_002B1440((int)piVar3,-1,uVar11,0);
  objStack_50[2] = uVar12;
  objStack_50[0] = 0x16;
  objStack_50[1] = 0;
  func_004FBA18((int)piVar3,4,5,-1,0x16,0,uVar11,DAT_00123da0,DAT_00123d9c);
  local_34 = DAT_00123da4;
  local_30 = DAT_00123da8;
  local_38 = uVar14;
  func_004F8864((int)piVar3,&local_38,0,DAT_00123dac);
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  *(undefined4 *)(objStack_50[3] + 0xfc) = uVar14;
  puVar4[0x11] = 0;
  func_002AF5FC((int)piVar3,7,-1);
  *(undefined1 *)((int)puVar4 + -0x13f) = 6;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_002AED68((int)piVar3,7);
  return piVar3;
}

