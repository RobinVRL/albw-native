#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_00254ECC(int param_1,undefined4 param_2);
extern int func_00254EFC(undefined4 *param_1,int *param_2,int *param_3);
extern int func_0034BA3C(int param_1,int *param_2,int *param_3);
extern int func_0034C200(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);
extern int func_0034C698(undefined4 *param_1,uint param_2);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00473fac;
extern undefined4 *DAT_00473fb0;
extern undefined *DAT_00473fb4;
extern int DAT_00473fc4;
extern undefined4 DAT_00474024;
extern int DAT_00474028;
extern int *DAT_00474070;
extern char s_L_Arrow_00_00474058[];
extern char s_L_GameOver_00_00474038[];
extern char s_L_Rupee_00_0047402c[];
extern char s_SE_S_DIE_COUNT_00474048[];
extern char s_T_Name_00_00474064[];
extern char s_cState_DieCount_00473ff0[];
extern char s_cState_DieFinish_00474000[];
extern char s_cState_KeyWait_00474014[];
extern char s_cState_RupeeCount_00473fc8[];
extern char s_cState_RupeeFinish_00473fdc[];
extern char s_cState_Wait_00473fb8[];

// USA 00473AD4 <- EU 00473AAC (Ghidra, non-matching)
// GLOBAL DAT_00473fac int
// GLOBAL DAT_00473fb0 undefined4 *
// GLOBAL DAT_00473fb4 undefined *
// GLOBAL DAT_00473fc4 int
// GLOBAL DAT_00474024 undefined4
// GLOBAL DAT_00474028 int
// GLOBAL DAT_00474070 int *
// GLOBAL s_L_Arrow_00_00474058 string
// GLOBAL s_L_GameOver_00_00474038 string
// GLOBAL s_L_Rupee_00_0047402c string
// GLOBAL s_SE_S_DIE_COUNT_00474048 string
// GLOBAL s_T_Name_00_00474064 string
// GLOBAL s_cState_DieCount_00473ff0 string
// GLOBAL s_cState_DieFinish_00474000 string
// GLOBAL s_cState_KeyWait_00474014 string
// GLOBAL s_cState_RupeeCount_00473fc8 string
// GLOBAL s_cState_RupeeFinish_00473fdc string
// GLOBAL s_cState_Wait_00473fb8 string

int * func_00473AD4(undefined4 *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar10 = &local_30;
  piVar2 = func_004B9A10(param_1,1);
  iVar6 = DAT_00473fac;
  *piVar2 = DAT_00473fac;
  piVar2[0xe] = iVar6 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x1d);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  piVar2 = puVar3 + -0x1d;
  puVar3[8] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x5c);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0034C698(puVar4,5);
  }
  puVar3[9] = puVar5;
  puVar4 = (undefined4 *)func_0010BAB4(0x5c);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0034C698(puVar4,5);
  }
  puVar3[10] = puVar5;
  puVar3[0xb] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x78);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0017A520(puVar4,0x400,(int *)0x0,0);
  }
  puVar3[0xc] = puVar5;
  puVar3[0xd] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  *(undefined1 *)((int)puVar3 + 0x39) = 0;
  puVar3[5] = piVar2;
  *(undefined1 *)((int)puVar3 + 6) = 6;
  iVar6 = func_0010BA78(0x60);
  puVar5 = DAT_00473fb0;
  puVar3[6] = iVar6;
  puVar3[7] = iVar6 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar9 = 6;
  puVar4 = (undefined4 *)(iVar6 + -8);
  do {
    uVar13 = puVar5[1];
    puVar4[2] = *puVar5;
    puVar4[3] = uVar13;
    iVar9 = iVar9 + -1;
    uVar13 = puVar5[1];
    puVar4[4] = *puVar5;
    puVar4[5] = uVar13;
    puVar4 = puVar4 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar11 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar3[8] = puVar4;
  if (uVar11 != 0) {
    puVar7 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar5[5];
      *puVar4 = puVar5[4];
      puVar4[1] = uVar13;
      puVar7 = puVar4;
    }
    for (iVar6 = (int)uVar11 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar13 = puVar5[5];
      puVar7[2] = puVar5[4];
      puVar7[3] = uVar13;
      uVar13 = puVar5[5];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar6 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 6;
    iVar6 = func_00100118((int)(puVar4 + 2),DAT_00473fb4,0x24,6);
  }
  if (iVar6 != 0) {
    puVar3[3] = iVar6;
    puVar3[2] = 6;
  }
  iVar6 = DAT_00473fc4;
  local_2c = s_cState_Wait_00473fb8;
  local_30 = DAT_00473fc4;
  func_0010BEC4((int)puVar3,0,&local_30);
  puVar4 = (undefined4 *)puVar3[6];
  uVar17 = puVar5[4];
  uVar16 = puVar5[5];
  uVar13 = puVar5[1];
  uVar14 = puVar5[2];
  uVar15 = puVar5[3];
  *puVar4 = *puVar5;
  puVar4[1] = uVar13;
  puVar4 = (undefined4 *)puVar3[7];
  *puVar4 = uVar14;
  puVar4[1] = uVar15;
  puVar4 = (undefined4 *)puVar3[8];
  *puVar4 = uVar17;
  puVar4[1] = uVar16;
  local_2c = s_cState_RupeeCount_00473fc8;
  local_30 = iVar6;
  func_0010BEC4((int)puVar3,1,&local_30);
  iVar9 = puVar3[6];
  uVar13 = puVar5[8];
  uVar15 = puVar5[9];
  uVar14 = puVar5[7];
  *(undefined4 *)(iVar9 + 8) = puVar5[6];
  *(undefined4 *)(iVar9 + 0xc) = uVar14;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 8) = uVar13;
  *(undefined4 *)(iVar9 + 0xc) = uVar15;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 8) = uVar17;
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  local_2c = s_cState_RupeeFinish_00473fdc;
  local_30 = iVar6;
  func_0010BEC4((int)puVar3,2,&local_30);
  iVar9 = puVar3[6];
  uVar14 = puVar5[1];
  uVar13 = puVar5[10];
  uVar15 = puVar5[0xb];
  *(undefined4 *)(iVar9 + 0x10) = *puVar5;
  *(undefined4 *)(iVar9 + 0x14) = uVar14;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar13;
  *(undefined4 *)(iVar9 + 0x14) = uVar15;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x10) = uVar17;
  *(undefined4 *)(iVar9 + 0x14) = uVar16;
  local_2c = s_cState_DieCount_00473ff0;
  local_30 = iVar6;
  func_0010BEC4((int)puVar3,3,&local_30);
  iVar9 = puVar3[6];
  uVar13 = puVar5[0xd];
  uVar14 = puVar5[0xe];
  uVar15 = puVar5[0xf];
  *(undefined4 *)(iVar9 + 0x18) = puVar5[0xc];
  *(undefined4 *)(iVar9 + 0x1c) = uVar13;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar14;
  *(undefined4 *)(iVar9 + 0x1c) = uVar15;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x18) = uVar17;
  *(undefined4 *)(iVar9 + 0x1c) = uVar16;
  local_2c = s_cState_DieFinish_00474000;
  local_30 = iVar6;
  func_0010BEC4((int)puVar3,4,&local_30);
  iVar9 = puVar3[6];
  uVar13 = puVar5[0x10];
  uVar15 = puVar5[0x11];
  uVar14 = puVar5[1];
  *(undefined4 *)(iVar9 + 0x20) = *puVar5;
  *(undefined4 *)(iVar9 + 0x24) = uVar14;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x20) = uVar13;
  *(undefined4 *)(iVar9 + 0x24) = uVar15;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x20) = uVar17;
  *(undefined4 *)(iVar9 + 0x24) = uVar16;
  local_2c = s_cState_KeyWait_00474014;
  local_30 = iVar6;
  func_0010BEC4((int)puVar3,5,&local_30);
  iVar9 = puVar3[6];
  uVar15 = puVar5[0x13];
  uVar13 = puVar5[0x15];
  uVar14 = puVar5[0x14];
  *(undefined4 *)(iVar9 + 0x28) = puVar5[0x12];
  *(undefined4 *)(iVar9 + 0x2c) = uVar15;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x28) = uVar14;
  *(undefined4 *)(iVar9 + 0x2c) = uVar13;
  uVar13 = DAT_00474024;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x28) = uVar17;
  *(undefined4 *)(iVar9 + 0x2c) = uVar16;
  (**(code **)(*piVar2 + 0x38))(piVar2,uVar13,0);
  piVar12 = (int *)puVar3[-0x16];
  func_0016773C((int)piVar12,4);
  iVar9 = DAT_00474028;
  uVar11 = 0;
  do {
    func_00166C20(piVar12,uVar11,(int *)(iVar9 + uVar11 * 8),0);
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 4);
  uVar13 = 0;
  puVar3[-0x13] = puVar3[-0x16];
  *(undefined2 *)((int)puVar3 + -0x52) = 0;
  *(undefined2 *)(puVar3 + -0x15) = 0;
  func_002313DC((int)(puVar3 + -0x15));
  local_2c = s_L_Rupee_00_0047402c;
  local_30 = iVar6;
  func_0034BA3C(puVar3[9],piVar12,&local_30);
  local_2c = s_L_GameOver_00_00474038;
  local_30 = iVar6;
  func_0034BA3C(puVar3[10],piVar12,&local_30);
  local_2c = s_SE_S_DIE_COUNT_00474048;
  local_30 = iVar6;
  func_0034C200(puVar3[10],&local_30,piVar10,uVar13);
  puVar4 = (undefined4 *)func_0010BAB4(0x44);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    local_2c = s_L_Arrow_00_00474058;
    local_30 = iVar6;
    puVar5 = func_00254EFC(puVar4,piVar12,&local_30);
  }
  puVar3[0xb] = puVar5;
  func_00254ECC((int)puVar5,0x1b);
  local_2c = s_T_Name_00_00474064;
  local_30 = iVar6;
  piVar12 = (int *)func_005229AC(piVar12,&local_30);
  piVar10 = DAT_00474070;
  if (piVar12 != (int *)0x0) {
    piVar8 = (int *)(**(code **)(*piVar12 + 8))(piVar12);
    do {
      if (piVar8 == piVar10) goto LAB_00473f80;
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)0x0);
  }
  piVar12 = (int *)0x0;
LAB_00473f80:
  puVar3[0xd] = piVar12;
  func_004B948C((int)piVar2,puVar3[0xb]);
  func_004B9958((int)piVar2,2);
  return piVar2;
}

