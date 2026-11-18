#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0019B04C(uint param_1);
extern int func_0035E368(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005330BC(int param_1,int *param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00666C04(undefined4 *param_1,undefined1 param_2);
extern int DAT_0035e84c;
extern undefined4 DAT_0035e850;
extern undefined4 *DAT_0035e854;
extern undefined4 DAT_0035e858;
extern uint *DAT_0035e85c;
extern int DAT_0035e86c;
extern undefined4 DAT_0035e870;
extern float DAT_0035e874;
extern int *DAT_0035e878;
extern undefined *DAT_0035e87c;
extern char s_Jewel_Tail_0035e860[];
extern char s_cState_Erase_0035e88c[];
extern char s_cState_Move_0035e880[];

// USA 0035E484 <- EU 0035E460 (Ghidra, non-matching)
// GLOBAL DAT_0035e84c int
// GLOBAL DAT_0035e850 undefined4
// GLOBAL DAT_0035e854 undefined4 *
// GLOBAL DAT_0035e858 undefined4
// GLOBAL DAT_0035e85c uint *
// GLOBAL DAT_0035e86c int
// GLOBAL DAT_0035e870 undefined4
// GLOBAL DAT_0035e874 float
// GLOBAL DAT_0035e878 int *
// GLOBAL DAT_0035e87c undefined *
// GLOBAL s_Jewel_Tail_0035e860 string
// GLOBAL s_cState_Erase_0035e88c string
// GLOBAL s_cState_Move_0035e880 string

undefined4 * func_0035E484(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar2 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0035e84c;
  *piVar2 = DAT_0035e84c;
  piVar2[200] = iVar4 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x103);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar13 = puVar3 + -0x103;
  puVar3[9] = 0;
  iVar4 = func_0054D964((int)puVar13,0);
  puVar3[10] = iVar4;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  uVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar6 = func_004EE484(puVar5);
  }
  puVar3[0xb] = uVar6;
  iVar4 = func_0054D89C((int)puVar13,0);
  puVar3[0xc] = iVar4;
  puVar5 = DAT_0035e854;
  uVar6 = DAT_0035e850;
  puVar3[0xd] = 0x40000000;
  puVar3[0xe] = uVar6;
  uVar10 = *puVar5;
  puVar3[0x12] = puVar5[1];
  uVar15 = DAT_0035e858;
  puVar3[0x11] = uVar10;
  puVar3[0xf] = uVar15;
  puVar3[0x10] = puVar13;
  iVar7 = func_0019B04C(*DAT_0035e85c);
  iVar4 = DAT_0035e86c;
  local_34 = (uint *)s_Jewel_Tail_0035e860;
  local_38 = DAT_0035e86c;
  uVar8 = func_005330BC(*(int *)(iVar7 + 0x1c8),&local_38);
  piVar2 = func_0014DF18(iVar7,0,0,uVar8,0,0);
  puVar3[9] = piVar2;
  puVar3[-0x30] = piVar2;
  iVar7 = func_0054DDF4((int)puVar13,0);
  puVar3[-0x1b] = iVar7;
  puVar3[-0x1a] = iVar7;
  *(uint *)(puVar3[10] + 0x2c) = *(uint *)(puVar3[10] + 0x2c) | 8;
  local_3c = puVar3[-0x50];
  func_0014EB8C(puVar3[0xb],puVar3[10],(undefined2 *)puVar3[-0x1b],&local_3c,(short)param_2[0x14],
                puVar3 + 0xf,(short)DAT_0035e870);
  iVar7 = puVar3[0xb];
  func_004D80A4((float *)(iVar7 + 0x24),puVar3[-9],DAT_0035e874);
  *(undefined4 *)(iVar7 + 0x28) = uVar6;
  func_0035E368((int)puVar13);
  iVar7 = func_0052FBA0(*DAT_0035e878 + 0x3dbbc,param_2[0x13]);
  if (iVar7 != 0) {
    puVar3[0xe] = *(undefined4 *)(iVar7 + 0x3d4);
  }
  puVar3[5] = puVar13;
  *(undefined1 *)((int)puVar3 + 6) = 2;
  iVar7 = func_0010BA78(0x20);
  puVar5 = DAT_0035e854;
  puVar3[6] = iVar7;
  puVar3[7] = iVar7 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar11 = 2;
  puVar9 = (undefined4 *)(iVar7 + -8);
  do {
    uVar6 = puVar5[0xf];
    iVar11 = iVar11 + -1;
    puVar9[2] = puVar5[0xe];
    puVar9[3] = uVar6;
    uVar6 = puVar5[0xf];
    puVar9[4] = puVar5[0xe];
    puVar9[5] = uVar6;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar8 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar3[8] = puVar9;
  if (uVar8 != 0) {
    puVar12 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = puVar5[0xd];
      *puVar9 = puVar5[0xc];
      puVar9[1] = uVar6;
      puVar12 = puVar9;
    }
    for (iVar7 = (int)uVar8 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar6 = puVar5[0xd];
      puVar12[2] = puVar5[0xc];
      puVar12[3] = uVar6;
      uVar6 = puVar5[0xd];
      puVar12[4] = puVar5[0xc];
      puVar12[5] = uVar6;
      puVar12 = puVar12 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar7 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 2;
    iVar7 = func_00100118((int)(puVar9 + 2),DAT_0035e87c,0x24,2);
  }
  if (iVar7 != 0) {
    puVar3[2] = 2;
    puVar3[3] = iVar7;
  }
  puVar3[-0x2e] = puVar3;
  *(undefined2 *)((int)puVar3 + -0xb2) = 2;
  local_34 = (uint *)s_cState_Move_0035e880;
  local_38 = iVar4;
  iVar7 = puVar3[3];
  puVar14 = *(uint **)(iVar7 + 4);
  puVar9 = puVar3;
  (**(code **)(iVar4 + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_0035e798;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_0035e798:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar8) {
    uVar8 = iVar7 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar14,local_34,uVar8);
  *(undefined1 *)((int)puVar14 + uVar8) = 0;
  puVar12 = (undefined4 *)puVar3[6];
  uVar6 = puVar5[3];
  uVar15 = puVar5[4];
  uVar10 = puVar5[5];
  uVar16 = puVar5[6];
  uVar17 = puVar5[7];
  *puVar12 = puVar5[2];
  puVar12[1] = uVar6;
  puVar12 = (undefined4 *)puVar3[7];
  *puVar12 = uVar15;
  puVar12[1] = uVar10;
  puVar12 = (undefined4 *)puVar3[8];
  *puVar12 = uVar16;
  puVar12[1] = uVar17;
  local_34 = (uint *)s_cState_Erase_0035e88c;
  local_38 = iVar4;
  if ((uint)puVar3[2] < 2) {
    iVar7 = puVar3[3];
  }
  else {
    iVar7 = puVar3[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_0035e8a8;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_0035e8a8:
  if (*(int *)(iVar7 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar14,local_34,uVar8);
  *(undefined1 *)((int)puVar14 + uVar8) = 0;
  iVar4 = puVar3[6];
  uVar10 = puVar5[9];
  uVar6 = puVar5[10];
  uVar17 = puVar5[0xb];
  uVar15 = puVar5[0xc];
  uVar16 = puVar5[0xd];
  *(undefined4 *)(iVar4 + 8) = puVar5[8];
  *(undefined4 *)(iVar4 + 0xc) = uVar10;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar6;
  *(undefined4 *)(iVar4 + 0xc) = uVar17;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 8) = uVar15;
  *(undefined4 *)(iVar4 + 0xc) = uVar16;
  func_00666C04(puVar9,0);
  return puVar13;
}

