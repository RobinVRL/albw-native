#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0066226C(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002a9818;
extern int DAT_002a981c;
extern uint DAT_002a9820;
extern undefined4 DAT_002a9824;
extern int DAT_002a9828;
extern int DAT_002a9838;
extern int DAT_002a983c;
extern undefined *DAT_002a9840;
extern int DAT_002a9844;
extern char s_cState_Move_002a9848[];
extern char s_cState_Return_002a9854[];
extern char s_end_head_002a982c[];

// USA 002A94DC <- EU 002A94B8 (Ghidra, non-matching)
// GLOBAL DAT_002a9818 uint *
// GLOBAL DAT_002a981c int
// GLOBAL DAT_002a9820 uint
// GLOBAL DAT_002a9824 undefined4
// GLOBAL DAT_002a9828 int
// GLOBAL DAT_002a9838 int
// GLOBAL DAT_002a983c int
// GLOBAL DAT_002a9840 undefined *
// GLOBAL DAT_002a9844 int
// GLOBAL s_cState_Move_002a9848 string
// GLOBAL s_cState_Return_002a9854 string
// GLOBAL s_end_head_002a982c string

undefined4 * func_002A94DC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float *in_r3;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fparam_0;
  ulonglong uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_002a9818);
  iVar13 = DAT_002a981c;
  *piVar3 = DAT_002a981c;
  piVar3[200] = iVar13 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  uVar12 = DAT_002a9820;
  uVar18 = (ulonglong)DAT_002a9820;
  puVar4[7] = 0;
  uVar16 = DAT_002a9824;
  puVar4[8] = 0;
  puVar4[9] = uVar12;
  puVar4[10] = uVar16;
  puVar4[0xb] = uVar12;
  puVar4[0xc] = 0;
  puVar5 = puVar4 + -0x22f;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = uVar16;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = uVar16;
  *(undefined1 *)(puVar4 + 0x14) = 0;
  *(undefined1 *)((int)puVar4 + 0x51) = 0;
  func_004FB344((int)puVar5,2);
  iVar13 = DAT_002a9828;
  uVar12 = 0;
  do {
    func_004FACA4((int)puVar5,uVar12,(int *)(iVar13 + uVar12 * 8));
    fparam_0 = ALBW_AS_F32(uVar18);
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 2);
  func_004FB468((int)puVar5);
  func_004FB30C((int)puVar5,1);
  iVar13 = DAT_002a9838;
  local_34 = (uint *)s_end_head_002a982c;
  local_38 = DAT_002a9838;
  func_004FAC70((int)puVar5,0,&local_38);
  func_004FB408((int)puVar5);
  func_004FB4C4((int)puVar5,fparam_0);
  func_004F5BD8((int)puVar5,(uint *)0x0,(int **)0x0,in_r3);
  puVar4[-200] = puVar4[-200] | 0x800;
  puVar4[5] = puVar5;
  *(undefined1 *)((int)puVar4 + 6) = 2;
  iVar6 = func_0010BA78(0x20);
  iVar2 = DAT_002a983c;
  puVar4[6] = iVar6;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar7 = 2;
  puVar8 = (undefined4 *)(iVar6 + -8);
  do {
    uVar16 = *(undefined4 *)(iVar2 + 0x30);
    iVar7 = iVar7 + -1;
    puVar8[2] = *(undefined4 *)(iVar2 + 0x2c);
    puVar8[3] = uVar16;
    uVar16 = *(undefined4 *)(iVar2 + 0x30);
    puVar8[4] = *(undefined4 *)(iVar2 + 0x2c);
    puVar8[5] = uVar16;
    puVar8 = puVar8 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar12 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar4[8] = puVar8;
  if (uVar12 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = *(undefined4 *)(iVar2 + 0x18);
      *puVar8 = *(undefined4 *)(iVar2 + 0x14);
      puVar8[1] = uVar16;
      puVar9 = puVar8;
    }
    for (iVar6 = (int)uVar12 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar16 = *(undefined4 *)(iVar2 + 0x18);
      puVar9[2] = *(undefined4 *)(iVar2 + 0x14);
      puVar9[3] = uVar16;
      uVar16 = *(undefined4 *)(iVar2 + 0x18);
      puVar9[4] = *(undefined4 *)(iVar2 + 0x14);
      puVar9[5] = uVar16;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar6 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 2;
    iVar6 = func_00100118((int)(puVar8 + 2),DAT_002a9840,0x24,2);
  }
  if (iVar6 != 0) {
    puVar4[3] = iVar6;
    puVar4[2] = 2;
  }
  iVar6 = DAT_002a9844;
  puVar4[-0x15a] = puVar4;
  *(undefined2 *)(iVar6 + (int)puVar5) = 2;
  local_34 = (uint *)s_cState_Move_002a9848;
  local_38 = iVar13;
  iVar6 = puVar4[3];
  puVar15 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar13 + 8))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_002a975c;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_002a975c:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar12) {
    uVar12 = iVar6 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  puVar8 = (undefined4 *)puVar4[6];
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  uVar14 = *(undefined4 *)(iVar2 + 0x10);
  uVar16 = *(undefined4 *)(iVar2 + 4);
  uVar11 = *(undefined4 *)(iVar2 + 0x14);
  uVar17 = *(undefined4 *)(iVar2 + 0x18);
  puVar8[1] = *(undefined4 *)(iVar2 + 8);
  *puVar8 = uVar16;
  puVar8 = (undefined4 *)puVar4[7];
  *puVar8 = uVar10;
  puVar8[1] = uVar14;
  puVar8 = (undefined4 *)puVar4[8];
  *puVar8 = uVar11;
  puVar8[1] = uVar17;
  local_34 = (uint *)s_cState_Return_002a9854;
  local_38 = iVar13;
  if ((uint)puVar4[2] < 2) {
    iVar6 = puVar4[3];
  }
  else {
    iVar6 = puVar4[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar13 + 8))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_002a9870;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_002a9870:
  if (*(int *)(iVar6 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  iVar13 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar2 + 0x20);
  uVar10 = *(undefined4 *)(iVar2 + 0x24);
  uVar11 = *(undefined4 *)(iVar2 + 0x28);
  uVar14 = *(undefined4 *)(iVar2 + 0x18);
  uVar17 = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar13 + 0xc) = uVar16;
  iVar13 = puVar4[7];
  *(undefined4 *)(iVar13 + 8) = uVar10;
  *(undefined4 *)(iVar13 + 0xc) = uVar11;
  iVar13 = puVar4[8];
  *(undefined4 *)(iVar13 + 8) = uVar17;
  *(undefined4 *)(iVar13 + 0xc) = uVar14;
  func_0066226C(puVar4,0);
  return puVar5;
}

