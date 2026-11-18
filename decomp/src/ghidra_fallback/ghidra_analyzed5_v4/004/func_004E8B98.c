#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0037CC14(int param_1,uint param_2);
extern int func_0037D530(int param_1,uint param_2,float *param_3);
extern int func_0037D86C(undefined4 *param_1,uint *param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0066AB60(undefined4 *param_1,undefined1 param_2);
extern int DAT_004e8f78;
extern undefined4 DAT_004e8f7c;
extern undefined4 DAT_004e8f80;
extern int *DAT_004e8f84;
extern undefined4 DAT_004e8f88;
extern undefined4 DAT_004e8f8c;
extern undefined4 *DAT_004e8f90;
extern undefined *DAT_004e8f94;
extern int DAT_004e8f98;
extern int DAT_004e8fa8;
extern undefined4 DAT_004e90bc;
extern char s_cState_Blow_004e8f9c[];
extern char s_cState_Carry_004e8fe8[];
extern char s_cState_Fall_004e8fac[];
extern char s_cState_Shrink_004e8fd8[];
extern char s_cState_Stop_004e8fb8[];
extern char s_cState_WaterFloat_004e8fc4[];

// USA 004E8B98 <- EU 004E8B70 (Ghidra, non-matching)
// GLOBAL DAT_004e8f78 int
// GLOBAL DAT_004e8f7c undefined4
// GLOBAL DAT_004e8f80 undefined4
// GLOBAL DAT_004e8f84 int *
// GLOBAL DAT_004e8f88 undefined4
// GLOBAL DAT_004e8f8c undefined4
// GLOBAL DAT_004e8f90 undefined4 *
// GLOBAL DAT_004e8f94 undefined *
// GLOBAL DAT_004e8f98 int
// GLOBAL DAT_004e8fa8 int
// GLOBAL DAT_004e90bc undefined4
// GLOBAL s_cState_Blow_004e8f9c string
// GLOBAL s_cState_Carry_004e8fe8 string
// GLOBAL s_cState_Fall_004e8fac string
// GLOBAL s_cState_Shrink_004e8fd8 string
// GLOBAL s_cState_Stop_004e8fb8 string
// GLOBAL s_cState_WaterFloat_004e8fc4 string

undefined4 * func_004E8B98(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_28 (*(uint * *)(albw_frame + 0x18))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar3 = func_0037D86C(param_1,param_2);
  iVar4 = DAT_004e8f78;
  *piVar3 = DAT_004e8f78;
  piVar3[0x135] = 0;
  piVar3[200] = iVar4 + 100;
  iVar4 = func_0054D89C((int)piVar3,0);
  piVar3[0x136] = iVar4;
  puVar5 = func_0010A794(piVar3 + 0x137);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  uVar7 = DAT_004e8f7c;
  puVar5[8] = 0;
  uVar12 = DAT_004e8f80;
  puVar5[10] = uVar7;
  puVar5[0xb] = uVar12;
  puVar5[9] = 0;
  puVar11 = puVar5 + -0x137;
  puVar5[0xc] = puVar5[-0x3d];
  uVar6 = func_00111A64((uint *)(*DAT_004e8f84 + 0x660));
  uVar7 = DAT_004e8f88;
  if ((uVar6 & 1) == 0) {
    uVar7 = DAT_004e8f8c;
  }
  puVar5[0xd] = uVar7;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  puVar5[-0x33] = puVar5[-1];
  uVar7 = func_0014E428((int)puVar11,0,0,0,1,0,0);
  puVar5[-2] = uVar7;
  puVar5[-0x34] = uVar7;
  func_0037CC14((int)puVar11,8);
  iVar4 = puVar5[-2];
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar4 + 0x80),puVar5[-0x3d],(float *)(puVar5 + -0x43));
  func_0037D530((int)puVar11,puVar5[-0x3d],(float *)(puVar5 + -0x43));
  *(undefined1 *)((int)puVar5 + 6) = 6;
  puVar5[5] = puVar11;
  iVar4 = func_0010BA78(0x60);
  puVar5[6] = iVar4;
  puVar2 = DAT_004e8f90;
  puVar5[7] = iVar4 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar10 = 6;
  puVar8 = (undefined4 *)(iVar4 + -8);
  do {
    uVar7 = puVar2[0x1b];
    iVar10 = iVar10 + -1;
    puVar8[2] = puVar2[0x1a];
    puVar8[3] = uVar7;
    uVar7 = puVar2[0x1b];
    puVar8[4] = puVar2[0x1a];
    puVar8[5] = uVar7;
    puVar8 = puVar8 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar6 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar6 << 3);
  puVar5[8] = puVar8;
  if (uVar6 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar2[5];
      *puVar8 = puVar2[4];
      puVar8[1] = uVar7;
      puVar9 = puVar8;
    }
    for (iVar4 = (int)uVar6 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar7 = puVar2[5];
      puVar9[2] = puVar2[4];
      puVar9[3] = uVar7;
      uVar7 = puVar2[5];
      puVar9[4] = puVar2[4];
      puVar9[5] = uVar7;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar4 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 6;
    iVar4 = func_00100118((int)(puVar8 + 2),DAT_004e8f94,0x24,6);
  }
  if (iVar4 != 0) {
    puVar5[3] = iVar4;
    puVar5[2] = 6;
  }
  iVar4 = DAT_004e8f98;
  puVar5[-0x62] = puVar5;
  iVar10 = DAT_004e8fa8;
  *(undefined2 *)(iVar4 + (int)puVar11) = 6;
  local_3c = s_cState_Blow_004e8f9c;
  local_40 = iVar10;
  func_0010BEC4((int)puVar5,0,&local_40);
  puVar8 = (undefined4 *)puVar5[6];
  uVar7 = puVar2[2];
  uVar13 = puVar2[1];
  uVar12 = puVar2[3];
  uVar14 = *(undefined8 *)(puVar2 + 4);
  *puVar8 = *puVar2;
  puVar8[1] = uVar13;
  puVar8 = (undefined4 *)puVar5[7];
  *puVar8 = uVar7;
  puVar8[1] = uVar12;
  puVar8 = (undefined4 *)puVar5[8];
  *puVar8 = (int)uVar14;
  puVar8[1] = (int)((ulonglong)uVar14 >> 0x20);
  local_3c = s_cState_Fall_004e8fac;
  local_40 = iVar10;
  func_0010BEC4((int)puVar5,1,&local_40);
  iVar4 = puVar5[6];
  uVar13 = puVar2[7];
  uVar7 = puVar2[8];
  uVar12 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 8) = uVar7;
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = puVar5[8];
  *(int *)(iVar4 + 8) = (int)uVar14;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar14 >> 0x20);
  local_3c = s_cState_Stop_004e8fb8;
  local_40 = iVar10;
  func_0010BEC4((int)puVar5,2,&local_40);
  iVar4 = puVar5[6];
  uVar7 = puVar2[0xb];
  uVar12 = puVar2[0xc];
  uVar13 = puVar2[0xd];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar7;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar12;
  *(undefined4 *)(iVar4 + 0x14) = uVar13;
  iVar4 = puVar5[8];
  *(int *)(iVar4 + 0x10) = (int)uVar14;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
  local_3c = s_cState_WaterFloat_004e8fc4;
  local_40 = iVar10;
  func_0010BEC4((int)puVar5,3,&local_40);
  iVar4 = puVar5[6];
  uVar7 = puVar2[0x10];
  uVar13 = puVar2[0x11];
  uVar12 = puVar2[0xf];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar12;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar7;
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  iVar4 = puVar5[8];
  *(int *)(iVar4 + 0x18) = (int)uVar14;
  *(int *)(iVar4 + 0x1c) = (int)((ulonglong)uVar14 >> 0x20);
  local_3c = s_cState_Shrink_004e8fd8;
  local_40 = iVar10;
  func_0010BEC4((int)puVar5,4,&local_40);
  iVar4 = puVar5[6];
  uVar13 = puVar2[0x13];
  uVar7 = puVar2[0x14];
  uVar12 = puVar2[0x15];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x12];
  *(undefined4 *)(iVar4 + 0x24) = uVar13;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 0x20) = uVar7;
  *(undefined4 *)(iVar4 + 0x24) = uVar12;
  iVar4 = puVar5[8];
  *(int *)(iVar4 + 0x20) = (int)uVar14;
  *(int *)(iVar4 + 0x24) = (int)((ulonglong)uVar14 >> 0x20);
  local_3c = s_cState_Carry_004e8fe8;
  local_40 = iVar10;
  func_0010BEC4((int)puVar5,5,&local_40);
  iVar4 = puVar5[6];
  uVar7 = puVar2[0x18];
  uVar13 = puVar2[0x19];
  uVar12 = puVar2[0x17];
  *(undefined4 *)(iVar4 + 0x28) = puVar2[0x16];
  *(undefined4 *)(iVar4 + 0x2c) = uVar12;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 0x28) = uVar7;
  *(undefined4 *)(iVar4 + 0x2c) = uVar13;
  iVar4 = puVar5[8];
  *(int *)(iVar4 + 0x28) = (int)uVar14;
  *(int *)(iVar4 + 0x2c) = (int)((ulonglong)uVar14 >> 0x20);
  uVar7 = DAT_004e90bc;
  if (*(short *)((int)puVar5 + -0x482) < 0) {
    if (*(short *)((int)local_28 + 0x2a) == 0) {
      puVar5[10] = 0x168;
      puVar5[0xb] = uVar7;
      puVar5[9] = 0;
      func_0066AB60(puVar5,2);
    }
    else {
      puVar5[0xc] = 0;
      func_0066AB60(puVar5,0);
    }
    *(undefined1 *)(puVar5 + 0xe) = 1;
  }
  else {
    func_0066AB60(puVar5,2);
  }
  return puVar11;
}

