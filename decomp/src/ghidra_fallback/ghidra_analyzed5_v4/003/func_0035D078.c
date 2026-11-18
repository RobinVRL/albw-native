#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00325664(int param_1);
extern int func_00325AB0(int param_1,uint param_2);
extern int func_003261DC(undefined4 *param_1,uint *param_2);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0066697C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0035d44c;
extern undefined4 DAT_0035d450;
extern undefined4 DAT_0035d454;
extern undefined4 DAT_0035d458;
extern undefined4 DAT_0035d45c;
extern undefined4 *DAT_0035d460;
extern undefined4 DAT_0035d464;
extern undefined4 DAT_0035d468;
extern undefined4 DAT_0035d46c;
extern undefined4 *DAT_0035d470;
extern undefined *DAT_0035d474;
extern int DAT_0035d478;
extern int DAT_0035d488;
extern char s_cState_Appear_0035d4d0[];
extern char s_cState_PushPullMove_0035d48c[];
extern char s_cState_Revert_0035d4a0[];
extern char s_cState_Valley_0035d4c0[];
extern char s_cState_Wait_0035d47c[];
extern char s_cState_Water_0035d4b0[];

// USA 0035D078 <- EU 0035D054 (Ghidra, non-matching)
// GLOBAL DAT_0035d44c int
// GLOBAL DAT_0035d450 undefined4
// GLOBAL DAT_0035d454 undefined4
// GLOBAL DAT_0035d458 undefined4
// GLOBAL DAT_0035d45c undefined4
// GLOBAL DAT_0035d460 undefined4 *
// GLOBAL DAT_0035d464 undefined4
// GLOBAL DAT_0035d468 undefined4
// GLOBAL DAT_0035d46c undefined4
// GLOBAL DAT_0035d470 undefined4 *
// GLOBAL DAT_0035d474 undefined *
// GLOBAL DAT_0035d478 int
// GLOBAL DAT_0035d488 int
// GLOBAL s_cState_Appear_0035d4d0 string
// GLOBAL s_cState_PushPullMove_0035d48c string
// GLOBAL s_cState_Revert_0035d4a0 string
// GLOBAL s_cState_Valley_0035d4c0 string
// GLOBAL s_cState_Wait_0035d47c string
// GLOBAL s_cState_Water_0035d4b0 string

undefined4 * func_0035D078(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  short *psVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_28 (*(uint * *)(albw_frame + 0x18))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = (int *)func_003261DC(param_1,param_2);
  iVar5 = DAT_0035d44c;
  *piVar4 = DAT_0035d44c;
  piVar4[0x13c] = 0;
  piVar4[200] = iVar5 + 0x90;
  iVar5 = func_0054D89C((int)piVar4,0);
  piVar4[0x13d] = iVar5;
  puVar6 = func_0010A794(piVar4 + 0x13e);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  *(undefined2 *)(puVar6 + 9) = 0;
  uVar7 = DAT_0035d454;
  uVar10 = DAT_0035d450;
  puVar6[10] = DAT_0035d450;
  puVar6[0xb] = uVar10;
  puVar6[0xc] = uVar10;
  puVar2 = DAT_0035d460;
  uVar10 = DAT_0035d458;
  puVar6[0xe] = uVar7;
  puVar6[0xf] = uVar10;
  puVar6[0xd] = 0;
  uVar10 = puVar2[1];
  puVar6[0x12] = *puVar2;
  puVar6[0x13] = uVar10;
  uVar10 = DAT_0035d45c;
  puVar6[0x10] = DAT_0035d464;
  puVar6[0x11] = puVar6 + -0x13e;
  puVar12 = puVar6 + -0x13e;
  *(byte *)((int)puVar6 + -0x161) = *(byte *)((int)puVar6 + -0x161) | 1;
  uVar7 = func_0014E428((int)puVar12,1,0,0,1,0,0);
  puVar6[-2] = uVar7;
  func_00325AB0((int)puVar12,0);
  func_00325664((int)puVar12);
  uVar15 = DAT_0035d46c;
  uVar7 = DAT_0035d468;
  *(undefined2 *)(*(int *)(puVar6[-0x19] + 0x18) + 0x28) = 100;
  puVar8 = DAT_0035d470;
  puVar6[-0x14] = uVar7;
  puVar6[-0x12] = uVar15;
  puVar6[-0x11] = *puVar8;
  puVar6[-0xd] = uVar10;
  *(undefined1 *)((int)puVar6 + 6) = 6;
  puVar6[5] = puVar12;
  iVar5 = func_0010BA78(0x60);
  puVar6[6] = iVar5;
  puVar6[7] = iVar5 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar11 = 6;
  puVar8 = (undefined4 *)(iVar5 + -8);
  do {
    uVar10 = puVar2[0x1d];
    iVar11 = iVar11 + -1;
    puVar8[2] = puVar2[0x1c];
    puVar8[3] = uVar10;
    uVar10 = puVar2[0x1d];
    puVar8[4] = puVar2[0x1c];
    puVar8[5] = uVar10;
    puVar8 = puVar8 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar14 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar6[8] = puVar8;
  if (uVar14 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar2[7];
      *puVar8 = puVar2[6];
      puVar8[1] = uVar10;
      puVar9 = puVar8;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar10 = puVar2[7];
      puVar9[2] = puVar2[6];
      puVar9[3] = uVar10;
      uVar10 = puVar2[7];
      puVar9[4] = puVar2[6];
      puVar9[5] = uVar10;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar5 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 6;
    iVar5 = func_00100118((int)(puVar8 + 2),DAT_0035d474,0x24,6);
  }
  if (iVar5 != 0) {
    puVar6[3] = iVar5;
    puVar6[2] = 6;
  }
  iVar5 = DAT_0035d478;
  puVar6[-0x69] = puVar6;
  iVar11 = DAT_0035d488;
  *(undefined2 *)(iVar5 + (int)puVar12) = 6;
  local_3c = s_cState_Wait_0035d47c;
  local_40 = iVar11;
  func_0010BEC4((int)puVar6,0,&local_40);
  puVar8 = (undefined4 *)puVar6[6];
  uVar10 = puVar2[4];
  uVar7 = puVar2[3];
  uVar17 = puVar2[6];
  uVar15 = puVar2[5];
  uVar16 = puVar2[7];
  *puVar8 = puVar2[2];
  puVar8[1] = uVar7;
  puVar8 = (undefined4 *)puVar6[7];
  *puVar8 = uVar10;
  puVar8[1] = uVar15;
  puVar8 = (undefined4 *)puVar6[8];
  *puVar8 = uVar17;
  puVar8[1] = uVar16;
  local_3c = s_cState_PushPullMove_0035d48c;
  local_40 = iVar11;
  func_0010BEC4((int)puVar6,1,&local_40);
  iVar5 = puVar6[6];
  uVar10 = puVar2[9];
  uVar7 = puVar2[10];
  uVar15 = puVar2[0xb];
  *(undefined4 *)(iVar5 + 8) = puVar2[8];
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 8) = uVar7;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = puVar6[8];
  *(undefined4 *)(iVar5 + 8) = uVar17;
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  local_3c = s_cState_Revert_0035d4a0;
  local_40 = iVar11;
  func_0010BEC4((int)puVar6,2,&local_40);
  iVar5 = puVar6[6];
  uVar10 = puVar2[0xe];
  uVar15 = puVar2[0xf];
  uVar7 = puVar2[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[0xc];
  *(undefined4 *)(iVar5 + 0x14) = uVar7;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar10;
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  iVar5 = puVar6[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar17;
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  local_3c = s_cState_Water_0035d4b0;
  local_40 = iVar11;
  func_0010BEC4((int)puVar6,3,&local_40);
  iVar5 = puVar6[6];
  uVar10 = puVar2[0x11];
  uVar7 = puVar2[0x12];
  uVar15 = puVar2[0x13];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0x10];
  *(undefined4 *)(iVar5 + 0x1c) = uVar10;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar7;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = puVar6[8];
  *(undefined4 *)(iVar5 + 0x18) = uVar17;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  local_3c = s_cState_Valley_0035d4c0;
  local_40 = iVar11;
  func_0010BEC4((int)puVar6,4,&local_40);
  iVar5 = puVar6[6];
  uVar10 = puVar2[0x15];
  uVar7 = puVar2[0x16];
  uVar15 = puVar2[0x17];
  *(undefined4 *)(iVar5 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar5 + 0x24) = uVar10;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar7;
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  iVar5 = puVar6[8];
  *(undefined4 *)(iVar5 + 0x20) = uVar17;
  *(undefined4 *)(iVar5 + 0x24) = uVar16;
  local_3c = s_cState_Appear_0035d4d0;
  local_40 = iVar11;
  func_0010BEC4((int)puVar6,5,&local_40);
  iVar5 = puVar6[6];
  uVar10 = puVar2[0x19];
  uVar15 = puVar2[0x1a];
  uVar7 = puVar2[0x1b];
  *(undefined4 *)(iVar5 + 0x28) = puVar2[0x18];
  *(undefined4 *)(iVar5 + 0x2c) = uVar10;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar15;
  *(undefined4 *)(iVar5 + 0x2c) = uVar7;
  iVar5 = puVar6[8];
  *(undefined4 *)(iVar5 + 0x28) = uVar17;
  *(undefined4 *)(iVar5 + 0x2c) = uVar16;
  func_0066697C(puVar6,0);
  iVar5 = puVar6[-2];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar5 + 0x80),0,puVar6[-0x44],0);
  iVar5 = puVar6[-2];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar5 + 0x8c) = puVar6[-0x4a];
  *(undefined4 *)(iVar5 + 0x9c) = puVar6[-0x49];
  *(undefined4 *)(iVar5 + 0xac) = puVar6[-0x48];
  func_004CEAF0(puVar6[-2]);
  if ((*(short *)((int)puVar6 + -0x4c2) != 0) &&
     (((psVar13 = (short *)((int)local_28 + 0x2a), *(short *)((int)local_28 + 0x2a) == 0 &&
       (bVar3 = func_00588BF0((int)puVar12,0), bVar3)) ||
      ((*psVar13 != 0 && (bVar3 = func_00588BF0((int)puVar12,0), !bVar3)))))) {
    *(undefined1 *)((int)puVar6 + -0x221) = 1;
  }
  func_001512B4(puVar6[-1],(float *)(puVar6 + -0x4a));
  return puVar12;
}

