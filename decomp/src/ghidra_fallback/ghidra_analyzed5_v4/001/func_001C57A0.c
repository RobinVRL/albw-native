#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_001C51C8(int param_1,uint param_2,undefined4 param_3);
extern int func_001C52B0(int param_1,uint param_2,undefined4 param_3);
extern int func_001E6AF8(int param_1);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0065BCBC(undefined4 *param_1,undefined1 param_2);
extern int DAT_001c5b9c;
extern undefined4 *DAT_001c5ba0;
extern undefined4 DAT_001c5ba4;
extern undefined4 DAT_001c5ba8;
extern int DAT_001c5bac;
extern uint DAT_001c5bb0;
extern int DAT_001c5bb4;
extern undefined *DAT_001c5bb8;
extern int DAT_001c5bbc;
extern int DAT_001c5bd0;
extern undefined4 *DAT_001c5ff4;
extern int *DAT_001c6014;
extern char s_cState_After_001c6004[];
extern char s_cState_Before_001c5bc0[];
extern char s_cState_Change_001c5fe4[];
extern char s_cState_Save_001c5ff8[];

// USA 001C57A0 <- EU 001C57A0 (Ghidra, non-matching)
// GLOBAL DAT_001c5b9c int
// GLOBAL DAT_001c5ba0 undefined4 *
// GLOBAL DAT_001c5ba4 undefined4
// GLOBAL DAT_001c5ba8 undefined4
// GLOBAL DAT_001c5bac int
// GLOBAL DAT_001c5bb0 uint
// GLOBAL DAT_001c5bb4 int
// GLOBAL DAT_001c5bb8 undefined *
// GLOBAL DAT_001c5bbc int
// GLOBAL DAT_001c5bd0 int
// GLOBAL DAT_001c5ff4 undefined4 *
// GLOBAL DAT_001c6014 int *
// GLOBAL s_cState_After_001c6004 string
// GLOBAL s_cState_Before_001c5bc0 string
// GLOBAL s_cState_Change_001c5fe4 string
// GLOBAL s_cState_Save_001c5ff8 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 * func_001C57A0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint *puVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(uint * *)(albw_frame + 0x14))
  #define local_34 ((uint *)(albw_frame + 0x1c))
  piVar5 = (int *)func_001E6CEC(param_1,param_2,0x10);
  iVar7 = DAT_001c5b9c;
  *piVar5 = DAT_001c5b9c;
  piVar5[200] = iVar7 + 0x98;
  puVar6 = func_0010A794(piVar5 + 0x1e2);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar15 = puVar6 + -0x1e2;
  puVar6[0xc] = 0;
  iVar7 = func_0054D964((int)puVar15,0);
  puVar6[0xd] = iVar7;
  puVar6[0xe] = 0;
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_004EDC9C(puVar8);
  }
  puVar8 = DAT_001c5ba0;
  puVar6[0xf] = puVar9;
  uVar10 = DAT_001c5ba8;
  uVar13 = puVar8[1];
  puVar6[0x12] = *puVar8;
  puVar6[0x13] = uVar13;
  puVar6[0x10] = DAT_001c5ba4;
  puVar6[0x11] = puVar15;
  objStack_50[3] = (uint)(puVar6 + -0xe2);
  puVar6[0x14] = uVar10;
  puVar6[0x15] = 0;
  *(undefined1 *)(puVar6 + 0x16) = 0xff;
  *(undefined1 *)((int)puVar6 + 0x59) = 0xff;
  *(undefined1 *)((int)puVar6 + 0x5a) = 0;
  *(undefined1 *)((int)puVar6 + 0x5b) = 0;
  iVar7 = func_001E6AF8((int)puVar15);
  if (iVar7 == 0) {
    if (*(short *)((int)puVar6 + -0x756) == 1) {
      func_00588C14((int)puVar15,0,1);
    }
    puVar6[0x15] = (int)*(short *)(puVar6 + -0x1d6);
    func_003249E0((int)puVar15,0);
    puVar6[9] = *(undefined4 *)(puVar6[-0x12e] + 0x1c8);
    objStack_50[0] = 1;
    objStack_50[1] = 0;
    objStack_50[2] = 0;
    uVar10 = func_0014E428((int)puVar15,1,0,0,1,0,0);
    puVar6[10] = uVar10;
    uVar10 = func_0014E904((int)puVar15,5,1);
    iVar7 = DAT_001c5bac;
    uVar16 = 0;
    puVar6[0xb] = uVar10;
    do {
      func_00169688((uint *)puVar6[0xb],uVar16,(int *)(iVar7 + uVar16 * 8),puVar6[9]);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 5);
    func_0016A02C(puVar6[0xb],-1,(int *)0xffffffff,0);
    func_001C52B0((int)puVar15,0,0);
    uVar20 = (ulonglong)DAT_001c5bb0;
    *(uint *)(*(int *)(puVar6[0xb] + 0x14) + 0x10) = DAT_001c5bb0;
    uVar10 = func_0014E904((int)puVar15,2,0);
    iVar7 = DAT_001c5bb4;
    uVar16 = 0;
    puVar6[0xc] = uVar10;
    do {
      func_00169608((uint *)puVar6[0xc],uVar16,(int *)(iVar7 + uVar16 * 8),puVar6[9]);
      uVar10 = (undefined4)uVar20;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 2);
    func_0016A02C(puVar6[0xc],-1,(int *)0xffffffff,0);
    func_001C51C8((int)puVar15,0,0);
    *(undefined4 *)(*(int *)(puVar6[0xc] + 0x14) + 0x10) = uVar10;
    objStack_50[0] = 0xa4;
    *(undefined2 *)(puVar6[0xd] + 0x28) = 0xa4;
    *(undefined4 *)(puVar6[0xf] + 0x18) = puVar6[0xd];
    local_34[0] = puVar6[-0x12f];
    func_004EDAD0(puVar6[0xf],local_34);
    *(undefined2 *)(puVar6[0xf] + 0x2c) = *(undefined2 *)(puVar6 + -0x1cd);
    func_00324964((int)puVar15);
    *(undefined1 *)((int)puVar6 + 6) = 4;
    puVar6[5] = puVar15;
    iVar7 = func_0010BA78(0x40);
    puVar6[6] = iVar7;
    puVar6[7] = iVar7 + (uint)*(byte *)((int)puVar6 + 6) * 8;
    iVar12 = 4;
    puVar9 = (undefined4 *)(iVar7 + -8);
    do {
      uVar10 = puVar8[0x15];
      iVar12 = iVar12 + -1;
      puVar9[2] = puVar8[0x14];
      puVar9[3] = uVar10;
      uVar10 = puVar8[0x15];
      puVar9[4] = puVar8[0x14];
      puVar9[5] = uVar10;
      puVar9 = puVar9 + 4;
    } while (iVar12 != 0);
    bVar1 = *(byte *)((int)puVar6 + 6);
    uVar16 = (uint)bVar1;
    puVar9 = (undefined4 *)func_0010BA78(uVar16 << 3);
    puVar6[8] = puVar9;
    if (uVar16 != 0) {
      puVar11 = puVar9 + -2;
      if ((bVar1 & 1) != 0) {
        uVar10 = puVar8[7];
        *puVar9 = puVar8[6];
        puVar9[1] = uVar10;
        puVar11 = puVar9;
      }
      for (iVar7 = (int)uVar16 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        uVar10 = puVar8[7];
        puVar11[2] = puVar8[6];
        puVar11[3] = uVar10;
        uVar10 = puVar8[7];
        puVar11[4] = puVar8[6];
        puVar11[5] = uVar10;
        puVar11 = puVar11 + 4;
      }
    }
    puVar9 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
    puVar3 = DAT_001c5bb8;
    iVar7 = 0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar9[1] = 4;
      *puVar9 = 0x24;
      iVar7 = func_00100118((int)(puVar9 + 2),puVar3,0x24,4);
    }
    if (iVar7 != 0) {
      puVar6[3] = iVar7;
      puVar6[2] = 4;
    }
    iVar7 = DAT_001c5bbc;
    puVar6[-0x10d] = puVar6;
    iVar12 = DAT_001c5bd0;
    *(undefined2 *)(iVar7 + (int)puVar15) = 4;
    local_3c = (uint *)s_cState_Before_001c5bc0;
    local_40 = iVar12;
    iVar7 = puVar6[3];
    puVar18 = *(uint **)(iVar7 + 4);
    (**(code **)(iVar12 + 8))(&local_40);
    uVar16 = 0;
    do {
      if (*(char *)((int)local_3c + uVar16) == '\0') {
        if ((int)uVar16 < 0x40001) goto LAB_001c5be0;
        break;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 0x40001);
    uVar16 = 0;
LAB_001c5be0:
    iVar7 = *(int *)(iVar7 + 8);
    if (iVar7 <= (int)uVar16) {
      uVar16 = iVar7 - 1;
    }
    (**(code **)(local_40 + 8))(&local_40);
    func_0010E3C4(puVar18,local_3c,uVar16);
    puVar9 = DAT_001c5ba0;
    *(undefined1 *)((int)puVar18 + uVar16) = 0;
    puVar8 = (undefined4 *)puVar6[6];
    uVar17 = puVar9[3];
    uVar10 = puVar9[6];
    uVar13 = puVar9[4];
    uVar19 = puVar9[5];
    uVar14 = puVar9[7];
    *puVar8 = puVar9[2];
    puVar8[1] = uVar17;
    puVar9 = (undefined4 *)puVar6[7];
    *puVar9 = uVar13;
    puVar9[1] = uVar19;
    puVar9 = (undefined4 *)puVar6[8];
    *puVar9 = uVar10;
    puVar9[1] = uVar14;
    local_3c = (uint *)s_cState_Change_001c5fe4;
    local_40 = iVar12;
    if ((uint)puVar6[2] < 2) {
      iVar7 = puVar6[3];
    }
    else {
      iVar7 = puVar6[3] + 0x24;
    }
    puVar18 = *(uint **)(iVar7 + 4);
    (**(code **)(iVar12 + 8))(&local_40);
    uVar16 = 0;
    do {
      if (*(char *)((int)local_3c + uVar16) == '\0') {
        if ((int)uVar16 < 0x40001) goto LAB_001c5cac;
        break;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 0x40001);
    uVar16 = 0;
LAB_001c5cac:
    if (*(int *)(iVar7 + 8) <= (int)uVar16) {
      uVar16 = *(int *)(iVar7 + 8) - 1;
    }
    (**(code **)(local_40 + 8))(&local_40);
    func_0010E3C4(puVar18,local_3c,uVar16);
    *(undefined1 *)((int)puVar18 + uVar16) = 0;
    iVar7 = puVar6[6];
    uVar10 = *DAT_001c5ff4;
    uVar13 = DAT_001c5ff4[1];
    uVar14 = DAT_001c5ff4[3];
    uVar17 = DAT_001c5ff4[4];
    uVar19 = DAT_001c5ff4[5];
    *(undefined4 *)(iVar7 + 8) = DAT_001c5ff4[2];
    *(undefined4 *)(iVar7 + 0xc) = uVar14;
    iVar7 = puVar6[7];
    *(undefined4 *)(iVar7 + 8) = uVar17;
    *(undefined4 *)(iVar7 + 0xc) = uVar19;
    iVar7 = puVar6[8];
    *(undefined4 *)(iVar7 + 8) = uVar10;
    *(undefined4 *)(iVar7 + 0xc) = uVar13;
    local_3c = (uint *)s_cState_Save_001c5ff8;
    local_40 = iVar12;
    if ((uint)puVar6[2] < 3) {
      iVar7 = puVar6[3];
    }
    else {
      iVar7 = puVar6[3] + 0x48;
    }
    puVar18 = *(uint **)(iVar7 + 4);
    (**(code **)(iVar12 + 8))(&local_40);
    uVar16 = 0;
    do {
      if (*(char *)((int)local_3c + uVar16) == '\0') {
        if ((int)uVar16 < 0x40001) goto LAB_001c5d70;
        break;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 0x40001);
    uVar16 = 0;
LAB_001c5d70:
    if (*(int *)(iVar7 + 8) <= (int)uVar16) {
      uVar16 = *(int *)(iVar7 + 8) - 1;
    }
    (**(code **)(local_40 + 8))(&local_40);
    func_0010E3C4(puVar18,local_3c,uVar16);
    *(undefined1 *)((int)puVar18 + uVar16) = 0;
    puVar9 = DAT_001c5ba0;
    iVar7 = puVar6[6];
    uVar10 = DAT_001c5ba0[0xe];
    uVar13 = DAT_001c5ba0[6];
    uVar14 = DAT_001c5ba0[0xd];
    uVar19 = DAT_001c5ba0[0xf];
    uVar17 = DAT_001c5ba0[7];
    *(undefined4 *)(iVar7 + 0x10) = DAT_001c5ba0[0xc];
    *(undefined4 *)(iVar7 + 0x14) = uVar14;
    iVar7 = puVar6[7];
    *(undefined4 *)(iVar7 + 0x10) = uVar10;
    *(undefined4 *)(iVar7 + 0x14) = uVar19;
    iVar7 = puVar6[8];
    *(undefined4 *)(iVar7 + 0x10) = uVar13;
    *(undefined4 *)(iVar7 + 0x14) = uVar17;
    local_3c = (uint *)s_cState_After_001c6004;
    local_40 = iVar12;
    uVar16 = puVar6[2];
    if (uVar16 < 4) {
      iVar7 = puVar6[3];
      uVar2 = uVar16;
    }
    else {
      iVar7 = iVar12;
      uVar2 = puVar6[3];
    }
    if (3 < uVar16) {
      iVar7 = uVar2 + 0x6c;
    }
    puVar18 = *(uint **)(iVar7 + 4);
    (**(code **)(iVar12 + 8))(&local_40);
    uVar16 = 0;
    do {
      if (*(char *)((int)local_3c + uVar16) == '\0') {
        if ((int)uVar16 < 0x40001) goto LAB_001c5e48;
        break;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 0x40001);
    uVar16 = 0;
LAB_001c5e48:
    if (*(int *)(iVar7 + 8) <= (int)uVar16) {
      uVar16 = *(int *)(iVar7 + 8) - 1;
    }
    (**(code **)(local_40 + 8))(&local_40);
    func_0010E3C4(puVar18,local_3c,uVar16);
    *(undefined1 *)((int)puVar18 + uVar16) = 0;
    uVar14 = puVar9[0x12];
    uVar19 = puVar9[0x13];
    iVar7 = puVar6[6];
    uVar17 = puVar9[0x11];
    uVar10 = puVar9[6];
    uVar13 = puVar9[7];
    *(undefined4 *)(iVar7 + 0x18) = puVar9[0x10];
    *(undefined4 *)(iVar7 + 0x1c) = uVar17;
    iVar7 = puVar6[7];
    *(undefined4 *)(iVar7 + 0x18) = uVar14;
    *(undefined4 *)(iVar7 + 0x1c) = uVar19;
    iVar7 = puVar6[8];
    *(undefined4 *)(iVar7 + 0x18) = uVar10;
    *(undefined4 *)(iVar7 + 0x1c) = uVar13;
    bVar4 = func_00588BF0((int)puVar15,0);
    if (bVar4) {
      func_0065BCBC(puVar6,3);
    }
    else {
      func_0065BCBC(puVar6,0);
    }
    puVar8 = (undefined4 *)func_0010BAB4(0x48);
    puVar9 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar9 = func_0034CAA0(puVar8);
    }
    puVar6[0xe] = puVar9;
    objStack_50[0] = puVar6[-0xee];
    objStack_50[1] = puVar6[-0xed];
    objStack_50[2] = puVar6[-0xec];
    iVar7 = puVar6[10];
    *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar7 + 0x80),puVar6[-0xe8],(float *)objStack_50);
    func_004CEAF0(puVar6[10]);
    func_00168E9C((int *)puVar6[0xb],puVar6[10],(int *)0x0);
    func_00168E9C((int *)puVar6[0xc],puVar6[10],(int *)0x0);
    objStack_50[1] = (uint)ALBW_AS_U32((ALBW_AS_F32(objStack_50[1]) + *(float *)(objStack_50[3] + 0x3d8)));
    piVar5 = (int *)puVar6[-0xdf];
    piVar5[1] = objStack_50[0];
    piVar5[2] = objStack_50[1];
    piVar5[3] = objStack_50[2];
    func_004356B4(piVar5);
    piVar5 = (int *)puVar6[0xd];
    piVar5[1] = objStack_50[0];
    piVar5[2] = objStack_50[1];
    piVar5[3] = objStack_50[2];
    func_004356B4(piVar5);
    func_004A879C(*DAT_001c6014,puVar6[0xf],2);
  }
  return puVar15;
}

