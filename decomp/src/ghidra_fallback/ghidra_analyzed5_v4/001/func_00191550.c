#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A464(undefined4 *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00151214(int param_1);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00581D60(int param_1);
extern int func_006597CC(undefined4 *param_1,undefined1 param_2);
extern int iRam001919e4;
extern int iRam001919f4;
extern int *piRam00191c40;
extern undefined4 *puRam001919e0;
extern int DAT_001919b8;
extern uint *DAT_001919bc;
extern undefined4 *DAT_001919c0;
extern undefined4 DAT_001919c4;
extern undefined4 DAT_001919c8;
extern undefined4 DAT_001919cc;
extern float DAT_001919d0;
extern undefined4 DAT_001919d4;
extern undefined4 *DAT_001919d8;
extern undefined4 DAT_001919dc;
extern char s_cState_Break_00191c10[];
extern char s_cState_Fall_00191c20[];
extern char s_cState_Lifted_001919f8[];
extern char s_cState_Melt_00191c04[];
extern char s_cState_Slide_00191a18[];
extern char s_cState_Thrown_00191a08[];
extern char s_cState_Wait_001919e8[];
extern char s_cState_WaterDrop_00191c2c[];

// USA 00191550 <- EU 00191550 (Ghidra, non-matching)
// GLOBAL DAT_001919b8 int
// GLOBAL DAT_001919bc uint *
// GLOBAL DAT_001919c0 undefined4 *
// GLOBAL DAT_001919c4 undefined4
// GLOBAL DAT_001919c8 undefined4
// GLOBAL DAT_001919cc undefined4
// GLOBAL DAT_001919d0 float
// GLOBAL DAT_001919d4 undefined4
// GLOBAL DAT_001919d8 undefined4 *
// GLOBAL DAT_001919dc undefined4
// GLOBAL UNK_001919e0 undefined *
// GLOBAL UNK_001919e4 int
// GLOBAL UNK_001919f4 int
// GLOBAL UNK_00191c40 int *
// GLOBAL s_cState_Break_00191c10 string
// GLOBAL s_cState_Fall_00191c20 string
// GLOBAL s_cState_Lifted_001919f8 string
// GLOBAL s_cState_Melt_00191c04 string
// GLOBAL s_cState_Slide_00191a18 string
// GLOBAL s_cState_Thrown_00191a08 string
// GLOBAL s_cState_Wait_001919e8 string
// GLOBAL s_cState_WaterDrop_00191c2c string

undefined4 * func_00191550(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define pcStack_2c (*(char * *)(albw_frame + 0x4))
  piVar2 = (int *)func_001E4B08(param_1,param_2,0);
  iVar5 = DAT_001919b8;
  *piVar2 = DAT_001919b8;
  piVar2[200] = iVar5 + 0x78;
  piVar2[0x13d] = 0;
  puVar3 = func_0010A794(piVar2 + 0x13e);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar4 = (undefined4 *)func_0054D964((int)(puVar3 + -0x13e),0);
  if (((*DAT_001919bc & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001919bc), iVar5 != 0)) {
    *DAT_001919c0 = DAT_001919c4;
  }
  if ((puVar4 == (undefined4 *)0x0) ||
     (iVar5 = (**(code **)*puVar4)(puVar4,DAT_001919c0), iVar5 == 0)) {
    puVar4 = (undefined4 *)0x0;
  }
  puVar3[9] = puVar4;
  iVar5 = func_004EE484(puVar3 + 10);
  iVar11 = iVar5 + -0x520;
  iVar6 = func_0054D89C(iVar11,0);
  *(int *)(iVar5 + 100) = iVar6;
  *(undefined1 *)(iVar5 + 0x68) = 0;
  uVar10 = DAT_001919cc;
  uVar9 = DAT_001919c8;
  *(undefined1 *)(iVar5 + 0x69) = 0;
  *(undefined4 *)(iVar5 + 0x6c) = uVar10;
  *(undefined4 *)(iVar5 + 0x70) = uVar9;
  fVar17 = func_0054DE3C(iVar11,0,1);
  puVar3 = DAT_001919d8;
  *(float *)(iVar5 + 0x74) = DAT_001919d0 - fVar17;
  *(undefined4 *)(iVar5 + 0x78) = 0xffffffff;
  uVar9 = DAT_001919d4;
  *(undefined4 *)(iVar5 + 0x80) = 0xffff;
  *(undefined4 *)(iVar5 + 0x84) = uVar9;
  *(undefined4 *)(iVar5 + 0x7c) = 0;
  *(undefined4 *)(iVar5 + 0x8c) = 0xffff;
  *(undefined4 *)(iVar5 + 0x90) = uVar9;
  *(undefined4 *)(iVar5 + 0x88) = 0;
  uVar12 = param_2[5];
  uVar15 = param_2[6];
  *(uint *)(iVar5 + 0x94) = param_2[4];
  *(uint *)(iVar5 + 0x98) = uVar12;
  *(uint *)(iVar5 + 0x9c) = uVar15;
  *(int *)(iVar5 + 0xa8) = iVar5 + -0x144;
  *(int *)(iVar5 + 0xa0) = iVar11;
  *(int *)(iVar5 + 0xa4) = iVar5 + 0x94;
  *(undefined1 *)(iVar5 + 0xac) = 0;
  *(undefined1 *)(iVar5 + 0xad) = 1;
  *(undefined1 *)(iVar5 + 0xae) = 0;
  *(undefined1 *)(iVar5 + 0xaf) = 0;
  *(undefined1 *)(iVar5 + 0xb0) = 1;
  uVar9 = *puVar3;
  uVar10 = puVar3[1];
  *(int *)(iVar5 + 0xb8) = iVar5 + -0x520;
  *(undefined4 *)(iVar5 + 0xbc) = uVar9;
  *(undefined4 *)(iVar5 + 0xc0) = uVar10;
  uVar9 = DAT_001919dc;
  *(undefined4 *)(iVar5 + 0xb4) = DAT_001919dc;
  uVar10 = puVar3[2];
  uVar16 = puVar3[3];
  *(undefined4 *)(iVar5 + 0xc4) = uVar9;
  *(int *)(iVar5 + 200) = iVar5 + -0x520;
  *(undefined4 *)(iVar5 + 0xcc) = uVar10;
  *(undefined4 *)(iVar5 + 0xd0) = uVar16;
  puVar7 = func_0010A464((undefined4 *)(iVar5 + 0xd4));
  puVar13 = puVar7 + -0x17d;
  puVar7[-0x82] = puVar7 + -8;
  uVar9 = func_0014E428((int)puVar13,0,0,0,1,0,0);
  puVar7[-0x40] = uVar9;
  puVar7[-0x5f] = uVar9;
  func_00151148(puVar7[-0x1c],0);
  func_00151214((int)puVar13);
  fVar17 = ALBW_AS_F32(puVar7[-0x88]);
  fVar18 = ALBW_AS_F32(puVar7[-0x18]);
  iVar5 = puVar7[-0x36];
  uVar9 = puVar7[-0x87];
  *(undefined4 *)(iVar5 + 4) = puVar7[-0x89];
  *(float *)(iVar5 + 8) = fVar17 + fVar18;
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  func_004356B4((int *)puVar7[-0x36]);
  *(undefined1 *)((int)puVar7 + -0xf6) = 8;
  puVar14 = puVar7 + -0x3f;
  puVar7[-0x3a] = puVar13;
  iVar5 = func_0010BA78(0x80);
  puVar7[-0x39] = iVar5;
  puVar7[-0x38] = iVar5 + (uint)*(byte *)((int)puVar7 + -0xf6) * 8;
  iVar6 = 8;
  puVar4 = (undefined4 *)(iVar5 + -8);
  do {
    uVar9 = puVar3[0x27];
    iVar6 = iVar6 + -1;
    puVar4[2] = puVar3[0x26];
    puVar4[3] = uVar9;
    uVar9 = puVar3[0x27];
    puVar4[4] = puVar3[0x26];
    puVar4[5] = uVar9;
    puVar4 = puVar4 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)puVar7 + -0xf6);
  uVar12 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar7[-0x37] = puVar4;
  if (uVar12 != 0) {
    puVar8 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar3[9];
      *puVar4 = puVar3[8];
      puVar4[1] = uVar9;
      puVar8 = puVar4;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar9 = puVar3[9];
      puVar8[2] = puVar3[8];
      puVar8[3] = uVar9;
      uVar9 = puVar3[9];
      puVar8[4] = puVar3[8];
      puVar8[5] = uVar9;
      puVar8 = puVar8 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  iVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 8;
    iVar5 = func_00100118((int)(puVar4 + 2),puRam001919e0,0x24,8);
  }
  if (iVar5 != 0) {
    puVar7[-0x3c] = iVar5;
    puVar7[-0x3d] = 8;
  }
  iVar5 = iRam001919e4;
  puVar7[-0xa8] = puVar14;
  iVar6 = iRam001919f4;
  *(undefined2 *)(iVar5 + (int)puVar13) = 8;
  pcStack_2c = s_cState_Wait_001919e8;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar14,0,&iStack_30);
  puVar4 = (undefined4 *)puVar7[-0x39];
  uVar9 = puVar3[6];
  uVar16 = puVar3[5];
  uVar10 = puVar3[7];
  uVar19 = *(undefined8 *)(puVar3 + 8);
  *puVar4 = puVar3[4];
  puVar4[1] = uVar16;
  puVar4 = (undefined4 *)puVar7[-0x38];
  *puVar4 = uVar9;
  puVar4[1] = uVar10;
  puVar4 = (undefined4 *)puVar7[-0x37];
  *puVar4 = (int)uVar19;
  puVar4[1] = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_2c = s_cState_Lifted_001919f8;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar14,1,&iStack_30);
  iVar5 = puVar7[-0x39];
  uVar9 = puVar3[0xb];
  uVar10 = puVar3[0xc];
  uVar16 = puVar3[0xd];
  *(undefined4 *)(iVar5 + 8) = puVar3[10];
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = puVar7[-0x38];
  *(undefined4 *)(iVar5 + 8) = uVar10;
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = puVar7[-0x37];
  *(int *)(iVar5 + 8) = (int)uVar19;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_2c = s_cState_Thrown_00191a08;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar14,2,&iStack_30);
  iVar5 = puVar7[-0x39];
  uVar9 = puVar3[0xf];
  uVar10 = puVar3[0x10];
  uVar16 = puVar3[0x11];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[0xe];
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = puVar7[-0x38];
  *(undefined4 *)(iVar5 + 0x10) = uVar10;
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = puVar7[-0x37];
  *(int *)(iVar5 + 0x10) = (int)uVar19;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_2c = s_cState_Slide_00191a18;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar14,3,&iStack_30);
  iVar5 = puVar7[-0x39];
  uVar9 = puVar3[0x13];
  uVar16 = puVar3[0x14];
  uVar10 = puVar3[0x15];
  *(undefined4 *)(iVar5 + 0x18) = puVar3[0x12];
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = puVar7[-0x38];
  *(undefined4 *)(iVar5 + 0x18) = uVar16;
  *(undefined4 *)(iVar5 + 0x1c) = uVar10;
  iVar5 = puVar7[-0x37];
  *(int *)(iVar5 + 0x18) = (int)uVar19;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_2c = s_cState_Melt_00191c04;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar14,4,&iStack_30);
  iVar5 = puVar7[-0x39];
  uVar16 = puVar3[0x17];
  uVar9 = puVar3[0x19];
  uVar10 = puVar3[0x18];
  *(undefined4 *)(iVar5 + 0x20) = puVar3[0x16];
  *(undefined4 *)(iVar5 + 0x24) = uVar16;
  iVar5 = puVar7[-0x38];
  *(undefined4 *)(iVar5 + 0x20) = uVar10;
  *(undefined4 *)(iVar5 + 0x24) = uVar9;
  iVar5 = puVar7[-0x37];
  *(int *)(iVar5 + 0x20) = (int)uVar19;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_2c = s_cState_Break_00191c10;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar14,5,&iStack_30);
  iVar5 = puVar7[-0x39];
  uVar9 = puVar3[0x1b];
  uVar10 = puVar3[0x1c];
  uVar16 = puVar3[0x1d];
  *(undefined4 *)(iVar5 + 0x28) = puVar3[0x1a];
  *(undefined4 *)(iVar5 + 0x2c) = uVar9;
  iVar5 = puVar7[-0x38];
  *(undefined4 *)(iVar5 + 0x28) = uVar10;
  *(undefined4 *)(iVar5 + 0x2c) = uVar16;
  iVar5 = puVar7[-0x37];
  *(int *)(iVar5 + 0x28) = (int)uVar19;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_2c = s_cState_Fall_00191c20;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar14,6,&iStack_30);
  iVar5 = puVar7[-0x39];
  uVar9 = puVar3[0x1f];
  uVar10 = puVar3[0x20];
  uVar16 = puVar3[0x21];
  *(undefined4 *)(iVar5 + 0x30) = puVar3[0x1e];
  *(undefined4 *)(iVar5 + 0x34) = uVar9;
  iVar5 = puVar7[-0x38];
  *(undefined4 *)(iVar5 + 0x30) = uVar10;
  *(undefined4 *)(iVar5 + 0x34) = uVar16;
  iVar5 = puVar7[-0x37];
  *(int *)(iVar5 + 0x30) = (int)uVar19;
  *(int *)(iVar5 + 0x34) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_2c = s_cState_WaterDrop_00191c2c;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar14,7,&iStack_30);
  iVar5 = puVar7[-0x39];
  uVar16 = puVar3[0x23];
  uVar9 = puVar3[0x24];
  uVar10 = puVar3[0x25];
  *(undefined4 *)(iVar5 + 0x38) = puVar3[0x22];
  *(undefined4 *)(iVar5 + 0x3c) = uVar16;
  iVar5 = puVar7[-0x38];
  *(undefined4 *)(iVar5 + 0x38) = uVar9;
  *(undefined4 *)(iVar5 + 0x3c) = uVar10;
  iVar5 = puVar7[-0x37];
  *(int *)(iVar5 + 0x38) = (int)uVar19;
  *(int *)(iVar5 + 0x3c) = (int)((ulonglong)uVar19 >> 0x20);
  if (*(short *)((int)param_2 + 0x2e) == 2) {
    func_006597CC(puVar14,4);
  }
  else if (*(short *)((int)param_2 + 0x2e) == 1) {
    func_006597CC(puVar14,5);
  }
  else {
    func_006597CC(puVar14,0);
  }
  uVar9 = func_00581D60(*piRam00191c40);
  puVar7[-0x17] = uVar9;
  return puVar13;
}

