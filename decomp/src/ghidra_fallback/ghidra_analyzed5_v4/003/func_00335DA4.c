#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00325664(int param_1);
extern int func_00325AB0(int param_1,uint param_2);
extern int func_003261DC(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern int func_006658F8(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033627c;
extern undefined4 *DAT_00336280;
extern undefined4 DAT_00336284;
extern undefined4 DAT_00336288;
extern int DAT_00336294;
extern float DAT_00336298;
extern undefined4 DAT_0033629c;
extern undefined4 DAT_003362a0;
extern float DAT_003362a4;
extern int *DAT_003362a8;
extern undefined4 DAT_003362ac;
extern undefined4 DAT_003362b0;
extern undefined4 DAT_003362b4;
extern undefined4 *DAT_003362b8;
extern int *DAT_003362bc;
extern int *DAT_003362c0;
extern undefined *DAT_003362c4;
extern int DAT_003362c8;
extern char s_Gimos_0033628c[];
extern char s_cState_Appear_003364f8[];
extern char s_cState_Move_003362d8[];
extern char s_cState_Revert_003364d8[];
extern char s_cState_Slope_00336508[];
extern char s_cState_Valley_003364e8[];
extern char s_cState_Wait_003362cc[];

// USA 00335DA4 <- EU 00335D80 (Ghidra, non-matching)
// GLOBAL DAT_0033627c int
// GLOBAL DAT_00336280 undefined4 *
// GLOBAL DAT_00336284 undefined4
// GLOBAL DAT_00336288 undefined4
// GLOBAL DAT_00336294 int
// GLOBAL DAT_00336298 float
// GLOBAL DAT_0033629c undefined4
// GLOBAL DAT_003362a0 undefined4
// GLOBAL DAT_003362a4 float
// GLOBAL DAT_003362a8 int *
// GLOBAL DAT_003362ac undefined4
// GLOBAL DAT_003362b0 undefined4
// GLOBAL DAT_003362b4 undefined4
// GLOBAL DAT_003362b8 undefined4 *
// GLOBAL DAT_003362bc int *
// GLOBAL DAT_003362c0 int *
// GLOBAL DAT_003362c4 undefined *
// GLOBAL DAT_003362c8 int
// GLOBAL s_Gimos_0033628c string
// GLOBAL s_cState_Appear_003364f8 string
// GLOBAL s_cState_Move_003362d8 string
// GLOBAL s_cState_Revert_003364d8 string
// GLOBAL s_cState_Slope_00336508 string
// GLOBAL s_cState_Valley_003364e8 string
// GLOBAL s_cState_Wait_003362cc string

undefined4 * func_00335DA4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c4 ((uint *)(albw_frame + 0xc))
  #define local_bc (*(undefined4 * *)(albw_frame + 0x14))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_b0 (*(float *)(albw_frame + 0x20))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_a8 (*(float *)(albw_frame + 0x28))
  #define local_a4 (*(uint *)(albw_frame + 0x2c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x60))
  #define local_6c (*(undefined1 *)(albw_frame + 0x64))
  #define local_60 (*(int *)(albw_frame + 0x70))
  #define local_5c (*(char * *)(albw_frame + 0x74))
  #define local_4c ((uint *)(albw_frame + 0x84))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xa4))
  #define local_28 (*(uint * *)(albw_frame + 0xa8))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar2 = (int *)func_003261DC(param_1,param_2);
  iVar3 = DAT_0033627c;
  piVar2[200] = DAT_0033627c + 0x90;
  *piVar2 = iVar3;
  piVar2[0x13c] = 0;
  piVar2[0x13d] = 0;
  iVar3 = func_0054D89C((int)piVar2,0);
  piVar2[0x13e] = iVar3;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  piVar2[0x13f] = (int)puVar5;
  iVar3 = func_0054D964((int)piVar2,1);
  piVar2[0x140] = iVar3;
  puVar6 = func_0010A794(piVar2 + 0x141);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *(undefined2 *)(puVar6 + 10) = 0;
  puVar4 = DAT_00336280;
  *(undefined1 *)((int)puVar6 + 0x2a) = 0;
  *(undefined1 *)((int)puVar6 + 0x2b) = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  *(undefined1 *)((int)puVar6 + 0x2d) = 0;
  uVar11 = puVar4[1];
  puVar6[0xe] = *puVar4;
  puVar6[0xf] = uVar11;
  uVar11 = DAT_00336284;
  puVar6[0xc] = DAT_00336284;
  puVar6[0xd] = puVar6 + -0x141;
  puVar13 = puVar6 + -0x141;
  uVar9 = puVar4[2];
  uVar12 = puVar4[3];
  puVar6[0x10] = uVar11;
  puVar6[0x11] = puVar13;
  puVar6[0x12] = uVar9;
  puVar6[0x13] = uVar12;
  uVar9 = puVar4[4];
  uVar12 = puVar4[5];
  puVar6[0x14] = uVar11;
  puVar6[0x15] = puVar13;
  puVar6[0x16] = uVar9;
  puVar6[0x17] = uVar12;
  uVar11 = func_0014E428((int)puVar13,1,0,0,1,0,0);
  puVar6[-5] = uVar11;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar5 = func_0016A2FC(puVar7,1,DAT_00336288,1);
  }
  puVar6[-4] = puVar5;
  iVar3 = DAT_00336294;
  local_5c = s_Gimos_0033628c;
  local_60 = DAT_00336294;
  func_00169608((uint *)puVar6[-4],0,&local_60,*(int *)(puVar6[-0x8d] + 0x1c8));
  uVar16 = 0x335f1c;
  func_0016A02C(puVar6[-4],-1,(int *)0xffffffff,0);
  local_c4[1] = 3;
  local_bc = &local_b8;
  local_70 = 10;
  local_6c = 0;
  local_c4[0] = 1;
  local_b8 = 0;
  local_a4 = uVar16 | 0xff;
  local_b4 = DAT_0033629c;
  fStack_b0 = DAT_00336298;
  uStack_ac = DAT_003362a0;
  fStack_a8 = DAT_00336298;
  fVar17 = DAT_00336298;
  func_0016898C(puVar6[-4],local_c4);
  iVar8 = *(int *)(puVar6[-4] + 0x14);
  if (*(float *)(iVar8 + 8) != fVar17) {
    *(float *)(iVar8 + 8) = fVar17;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  func_00168E9C((int *)puVar6[-4],puVar6[-5],(int *)0x0);
  func_00325AB0((int)puVar13,0);
  func_00325664((int)puVar13);
  *(undefined2 *)(puVar6[-0x1b] + 0x28) = 0xa4;
  uVar11 = puVar6[-0x4d];
  fVar18 = ALBW_AS_F32(puVar6[-0x4c]);
  uVar9 = puVar6[-0x4b];
  fVar17 = func_0054DE3C(puVar13,0,1);
  iVar8 = puVar6[-1];
  fVar17 = fVar17 * DAT_003362a4;
  *(undefined4 *)(iVar8 + 4) = uVar11;
  *(float *)(iVar8 + 8) = fVar18 + fVar17;
  *(undefined4 *)(iVar8 + 0xc) = uVar9;
  *(undefined2 *)(puVar6[-1] + 0x28) = 0xa4;
  func_004356B4((int *)puVar6[-1]);
  piVar2 = puVar6 + -2;
  *(undefined4 *)(puVar6[-2] + 0x18) = puVar6[-1];
  func_004ED9C8(puVar6[-2]);
  local_4c[0] = puVar6[-0x8e];
  func_004EDAD0(*piVar2,local_4c);
  *(short *)(*piVar2 + 0x2c) = (short)local_28[0x14];
  func_004A7F00(*DAT_003362a8,*piVar2,2);
  puVar5 = DAT_003362b8;
  uVar11 = DAT_003362b0;
  puVar6[-0x17] = DAT_003362ac;
  puVar6[-0x15] = uVar11;
  uVar11 = DAT_003362b4;
  puVar6[-0x14] = *puVar5;
  puVar6[-0x10] = uVar11;
  puVar6[-0x46] = puVar6 + 0x10;
  puVar6[-0xd] = puVar6 + 0x14;
  iVar8 = func_00588BE4((int)puVar13);
  if ((iVar8 == *DAT_003362bc) && (*DAT_003362c0 != 0)) {
    uVar11 = func_00581D60(*DAT_003362c0);
    puVar6[9] = uVar11;
  }
  *(byte *)((int)puVar6 + -0x16d) = *(byte *)((int)puVar6 + -0x16d) | 1;
  *(undefined1 *)((int)puVar6 + 6) = 6;
  puVar6[5] = puVar13;
  iVar8 = func_0010BA78(0x60);
  puVar6[6] = iVar8;
  puVar6[7] = iVar8 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar10 = 6;
  puVar5 = (undefined4 *)(iVar8 + -8);
  do {
    uVar11 = puVar4[0x23];
    iVar10 = iVar10 + -1;
    puVar5[2] = puVar4[0x22];
    puVar5[3] = uVar11;
    uVar11 = puVar4[0x23];
    puVar5[4] = puVar4[0x22];
    puVar5[5] = uVar11;
    puVar5 = puVar5 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar16 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar6[8] = puVar5;
  if (uVar16 != 0) {
    puVar7 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar4[0x11];
      *puVar5 = puVar4[0x10];
      puVar5[1] = uVar11;
      puVar7 = puVar5;
    }
    for (iVar8 = (int)uVar16 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar11 = puVar4[0x11];
      puVar7[2] = puVar4[0x10];
      puVar7[3] = uVar11;
      uVar11 = puVar4[0x11];
      puVar7[4] = puVar4[0x10];
      puVar7[5] = uVar11;
      puVar7 = puVar7 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar8 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 6;
    iVar8 = func_00100118((int)(puVar5 + 2),DAT_003362c4,0x24,6);
  }
  if (iVar8 != 0) {
    puVar6[3] = iVar8;
    puVar6[2] = 6;
  }
  iVar8 = DAT_003362c8;
  puVar6[-0x6c] = puVar6;
  *(undefined2 *)(iVar8 + (int)puVar13) = 6;
  local_5c = s_cState_Wait_003362cc;
  local_60 = iVar3;
  func_0010BEC4((int)puVar6,0,&local_60);
  puVar5 = (undefined4 *)puVar6[6];
  uVar12 = puVar4[8];
  uVar15 = puVar4[9];
  uVar9 = puVar4[6];
  uVar11 = puVar4[10];
  uVar14 = puVar4[0xb];
  puVar5[1] = puVar4[7];
  *puVar5 = uVar9;
  puVar5 = (undefined4 *)puVar6[7];
  *puVar5 = uVar12;
  puVar5[1] = uVar15;
  puVar5 = (undefined4 *)puVar6[8];
  *puVar5 = uVar11;
  puVar5[1] = uVar14;
  local_5c = s_cState_Move_003362d8;
  local_60 = iVar3;
  func_0010BEC4((int)puVar6,1,&local_60);
  iVar8 = puVar6[6];
  uVar9 = puVar4[0xd];
  uVar11 = puVar4[0xe];
  uVar12 = puVar4[0xf];
  uVar19 = *(undefined8 *)(puVar4 + 0x10);
  *(undefined4 *)(iVar8 + 8) = puVar4[0xc];
  *(undefined4 *)(iVar8 + 0xc) = uVar9;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 8) = (int)uVar19;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  local_5c = s_cState_Revert_003364d8;
  local_60 = iVar3;
  func_0010BEC4((int)puVar6,2,&local_60);
  iVar8 = puVar6[6];
  uVar11 = puVar4[0x14];
  uVar9 = puVar4[0x15];
  uVar12 = puVar4[0x13];
  *(undefined4 *)(iVar8 + 0x10) = puVar4[0x12];
  *(undefined4 *)(iVar8 + 0x14) = uVar12;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar11;
  *(undefined4 *)(iVar8 + 0x14) = uVar9;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x10) = (int)uVar19;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  local_5c = s_cState_Valley_003364e8;
  local_60 = iVar3;
  func_0010BEC4((int)puVar6,3,&local_60);
  iVar8 = puVar6[6];
  uVar9 = puVar4[0x17];
  uVar11 = puVar4[0x18];
  uVar12 = puVar4[0x19];
  *(undefined4 *)(iVar8 + 0x18) = puVar4[0x16];
  *(undefined4 *)(iVar8 + 0x1c) = uVar9;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar11;
  *(undefined4 *)(iVar8 + 0x1c) = uVar12;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x18) = (int)uVar19;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar19 >> 0x20);
  local_5c = s_cState_Appear_003364f8;
  local_60 = iVar3;
  func_0010BEC4((int)puVar6,4,&local_60);
  iVar8 = puVar6[6];
  uVar11 = puVar4[0x1c];
  uVar12 = puVar4[0x1d];
  uVar9 = puVar4[0x1b];
  *(undefined4 *)(iVar8 + 0x20) = puVar4[0x1a];
  *(undefined4 *)(iVar8 + 0x24) = uVar9;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar11;
  *(undefined4 *)(iVar8 + 0x24) = uVar12;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x20) = (int)uVar19;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar19 >> 0x20);
  local_5c = s_cState_Slope_00336508;
  local_60 = iVar3;
  func_0010BEC4((int)puVar6,5,&local_60);
  iVar3 = puVar6[6];
  uVar11 = puVar4[0x20];
  uVar12 = puVar4[0x21];
  uVar9 = puVar4[0x1f];
  *(undefined4 *)(iVar3 + 0x28) = puVar4[0x1e];
  *(undefined4 *)(iVar3 + 0x2c) = uVar9;
  iVar3 = puVar6[7];
  *(undefined4 *)(iVar3 + 0x28) = uVar11;
  *(undefined4 *)(iVar3 + 0x2c) = uVar12;
  iVar3 = puVar6[8];
  *(int *)(iVar3 + 0x28) = (int)uVar19;
  *(int *)(iVar3 + 0x2c) = (int)((ulonglong)uVar19 >> 0x20);
  func_006658F8(puVar6,0);
  iVar3 = puVar6[-5];
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar3 + 0x80),0,puVar6[-0x47],0);
  iVar3 = puVar6[-5];
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar3 + 0x8c) = puVar6[-0x4d];
  *(undefined4 *)(iVar3 + 0x9c) = puVar6[-0x4c];
  *(undefined4 *)(iVar3 + 0xac) = puVar6[-0x4b];
  func_004CEAF0(puVar6[-5]);
  func_001512B4(puVar6[-3],(float *)(puVar6 + -0x4d));
  return puVar13;
}

