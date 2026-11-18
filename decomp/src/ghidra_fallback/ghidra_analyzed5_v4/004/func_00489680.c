#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002313DC(int param_1);
extern undefined4 DAT_004899e0;
extern undefined4 DAT_004899e4;
extern int DAT_004899f0;
extern undefined DAT_004899f4;
extern undefined4 *DAT_00489a00;
extern undefined *DAT_00489a04;
extern char s_Decide_004899f8[];
extern char s_InOut_004899e8[];
extern char s_cState_Decide_00489a34[];
extern char s_cState_OnAnim_00489a14[];
extern char s_cState_OnWait_00489a24[];
extern char s_cState_Wait_00489a08[];

// USA 00489680 <- EU 00489658 (Ghidra, non-matching)
// GLOBAL DAT_004899e0 undefined4
// GLOBAL DAT_004899e4 undefined4
// GLOBAL DAT_004899f0 int
// GLOBAL DAT_004899f4 undefined
// GLOBAL DAT_00489a00 undefined4 *
// GLOBAL DAT_00489a04 undefined *
// GLOBAL s_Decide_004899f8 string
// GLOBAL s_InOut_004899e8 string
// GLOBAL s_cState_Decide_00489a34 string
// GLOBAL s_cState_OnAnim_00489a14 string
// GLOBAL s_cState_OnWait_00489a24 string
// GLOBAL s_cState_Wait_00489a08 string

int func_00489680(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = func_001B6E04(param_1);
  *puVar2 = DAT_004899e0;
  uVar11 = DAT_004899e4;
  *(undefined2 *)(puVar2 + 0xe) = 0;
  *(undefined2 *)((int)puVar2 + 0x3a) = 0xffff;
  puVar2[0xf] = uVar11;
  puVar2[0x10] = 0;
  puVar2 = func_0010A794(puVar2 + 0x11);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = param_4;
  puVar3 = (undefined4 *)func_0010BAB4(0x74);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_00168434(puVar3);
  }
  func_00168100(piVar4,param_2,param_3);
  puVar2[-10] = piVar4;
  puVar2[-0xb] = puVar2[-0xb] | 0x10;
  func_0016773C((int)piVar4,3);
  iVar13 = DAT_004899f0;
  local_24 = s_InOut_004899e8;
  local_28 = DAT_004899f0;
  func_00166C20(piVar4,0,&local_28,0);
  local_24 = &DAT_004899f4;
  local_28 = iVar13;
  func_00166C20(piVar4,1,&local_28,0);
  local_24 = s_Decide_004899f8;
  local_28 = iVar13;
  func_00166C20(piVar4,2,&local_28,0);
  puVar2[-7] = piVar4;
  *(undefined2 *)((int)puVar2 + -0x22) = 0;
  *(undefined2 *)(puVar2 + -9) = 0;
  puVar2[-4] = piVar4;
  *(undefined2 *)((int)puVar2 + -0x16) = 0;
  *(undefined2 *)(puVar2 + -6) = 2;
  func_002313DC((int)(puVar2 + -9));
  *(undefined1 *)((int)puVar2 + 6) = 4;
  puVar2[5] = puVar2 + -0x11;
  iVar5 = func_0010BA78(0x40);
  puVar2[6] = iVar5;
  puVar3 = DAT_00489a00;
  puVar2[7] = iVar5 + (uint)*(byte *)((int)puVar2 + 6) * 8;
  iVar6 = 4;
  puVar7 = (undefined4 *)(iVar5 + -8);
  do {
    uVar11 = puVar3[0x2d];
    iVar6 = iVar6 + -1;
    puVar7[2] = puVar3[0x2c];
    puVar7[3] = uVar11;
    uVar11 = puVar3[0x2d];
    puVar7[4] = puVar3[0x2c];
    puVar7[5] = uVar11;
    puVar7 = puVar7 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)puVar2 + 6);
  uVar10 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar2[8] = puVar7;
  if (uVar10 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar3[5];
      *puVar7 = puVar3[4];
      puVar7[1] = uVar11;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar10 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar11 = puVar3[5];
      puVar8[2] = puVar3[4];
      puVar8[3] = uVar11;
      uVar11 = puVar3[5];
      puVar8[4] = puVar3[4];
      puVar8[5] = uVar11;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 4;
    iVar5 = func_00100118((int)(puVar7 + 2),DAT_00489a04,0x24,4);
  }
  if (iVar5 != 0) {
    puVar2[3] = iVar5;
    puVar2[2] = 4;
  }
  local_24 = s_cState_Wait_00489a08;
  local_28 = iVar13;
  func_0010BEC4((int)puVar2,0,&local_28);
  puVar7 = (undefined4 *)puVar2[6];
  uVar12 = puVar3[1];
  uVar11 = puVar3[2];
  uVar9 = puVar3[3];
  uVar15 = puVar3[4];
  uVar14 = puVar3[5];
  *puVar7 = *puVar3;
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar2[7];
  *puVar7 = uVar11;
  puVar7[1] = uVar9;
  puVar7 = (undefined4 *)puVar2[8];
  *puVar7 = uVar15;
  puVar7[1] = uVar14;
  local_24 = s_cState_OnAnim_00489a14;
  local_28 = iVar13;
  func_0010BEC4((int)puVar2,1,&local_28);
  iVar5 = puVar2[6];
  uVar9 = puVar3[7];
  uVar11 = puVar3[8];
  uVar12 = puVar3[9];
  *(undefined4 *)(iVar5 + 8) = puVar3[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = puVar2[7];
  *(undefined4 *)(iVar5 + 8) = uVar11;
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  iVar5 = puVar2[8];
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  local_24 = s_cState_OnWait_00489a24;
  local_28 = iVar13;
  func_0010BEC4((int)puVar2,2,&local_28);
  iVar5 = puVar2[6];
  uVar11 = puVar3[0xb];
  uVar9 = puVar3[0xc];
  uVar12 = puVar3[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar11;
  iVar5 = puVar2[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar9;
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = puVar2[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar14;
  local_24 = s_cState_Decide_00489a34;
  local_28 = iVar13;
  func_0010BEC4((int)puVar2,3,&local_28);
  iVar13 = puVar2[6];
  uVar11 = puVar3[0x10];
  uVar12 = puVar3[0x11];
  uVar9 = puVar3[0xf];
  *(undefined4 *)(iVar13 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar13 + 0x1c) = uVar9;
  iVar13 = puVar2[7];
  *(undefined4 *)(iVar13 + 0x18) = uVar11;
  *(undefined4 *)(iVar13 + 0x1c) = uVar12;
  iVar13 = puVar2[8];
  *(undefined4 *)(iVar13 + 0x18) = uVar15;
  *(undefined4 *)(iVar13 + 0x1c) = uVar14;
  return (int)(puVar2 + -0x11);
}

