#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003C30DC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4, float fparam_0,float fparam_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065D8B8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002143ac;
extern int DAT_002143b0;
extern float DAT_002143b4;
extern float DAT_002143b8;
extern undefined4 DAT_002143bc;
extern undefined4 DAT_002143c0;
extern undefined4 DAT_002143c4;
extern undefined4 *DAT_002143c8;
extern int DAT_002143cc;
extern undefined4 DAT_002143d0;
extern int DAT_002143d4;
extern int *DAT_002143d8;
extern undefined *DAT_002143dc;
extern int DAT_002143e0;
extern int DAT_002143f0;
extern undefined4 DAT_00214724;
extern float DAT_00214728;
extern float DAT_0021472c;
extern undefined4 *DAT_00214730;
extern char s_cState_Appear_00214400[];
extern char s_cState_Die_00214718[];
extern char s_cState_Disappear_00214410[];
extern char s_cState_Fall_002146ec[];
extern char s_cState_Hide_002143f4[];
extern char s_cState_Idle_002143e4[];
extern char s_cState_Move_002146cc[];
extern char s_cState_Reaction_00214708[];
extern char s_cState_RunAway_002146f8[];
extern char s_cState_SandUpStop_002146d8[];

// USA 00213FC0 <- EU 00213FC0 (Ghidra, non-matching)
// GLOBAL DAT_002143ac uint *
// GLOBAL DAT_002143b0 int
// GLOBAL DAT_002143b4 float
// GLOBAL DAT_002143b8 float
// GLOBAL DAT_002143bc undefined4
// GLOBAL DAT_002143c0 undefined4
// GLOBAL DAT_002143c4 undefined4
// GLOBAL DAT_002143c8 undefined4 *
// GLOBAL DAT_002143cc int
// GLOBAL DAT_002143d0 undefined4
// GLOBAL DAT_002143d4 int
// GLOBAL DAT_002143d8 int *
// GLOBAL DAT_002143dc undefined *
// GLOBAL DAT_002143e0 int
// GLOBAL DAT_002143f0 int
// GLOBAL DAT_00214724 undefined4
// GLOBAL DAT_00214728 float
// GLOBAL DAT_0021472c float
// GLOBAL DAT_00214730 undefined4 *
// GLOBAL s_cState_Appear_00214400 string
// GLOBAL s_cState_Die_00214718 string
// GLOBAL s_cState_Disappear_00214410 string
// GLOBAL s_cState_Fall_002146ec string
// GLOBAL s_cState_Hide_002143f4 string
// GLOBAL s_cState_Idle_002143e4 string
// GLOBAL s_cState_Move_002146cc string
// GLOBAL s_cState_Reaction_00214708 string
// GLOBAL s_cState_RunAway_002146f8 string
// GLOBAL s_cState_SandUpStop_002146d8 string

undefined4 * func_00213FC0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fparam_1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  float fVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_004FD464(param_1,param_2,DAT_002143ac);
  iVar8 = DAT_002143b0;
  *piVar3 = DAT_002143b0;
  piVar3[200] = iVar8 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  fVar17 = DAT_002143b4;
  uVar18 = (ulonglong)(uint)ALBW_AS_U32(DAT_002143b4);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar5 = func_003C30DC(puVar4 + 9,puVar4 + -0x22f,puVar4 + -0x13b,1,DAT_002143b8,fVar17);
  puVar4 = DAT_002143c8;
  uVar9 = DAT_002143c0;
  *puVar5 = DAT_002143bc;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x21] = uVar9;
  puVar5[0x22] = 0;
  puVar13 = puVar5 + -0x238;
  puVar5[0x23] = 0;
  puVar5[0x24] = uVar9;
  puVar5[0x25] = DAT_002143c4;
  iVar8 = DAT_002143cc;
  puVar5[0x26] = param_2[8];
  uVar9 = puVar4[1];
  uVar11 = puVar4[2];
  puVar5[0x27] = *puVar4;
  puVar5[0x28] = uVar9;
  puVar5[0x29] = uVar11;
  puVar5[0x30] = 0;
  puVar5[0x32] = 0;
  uVar9 = *(undefined4 *)(iVar8 + 8);
  pfVar12 = (float *)(puVar5 + 0x35);
  *pfVar12 = *(float *)(iVar8 + 4);
  puVar5[0x36] = uVar9;
  puVar5[0x33] = DAT_002143d0;
  puVar5[0x34] = puVar13;
  puVar5[0x37] = 10;
  *(undefined1 *)(puVar5 + 0x38) = 0;
  *(undefined1 *)((int)puVar5 + 0xe1) = 0;
  puVar5[-0x13d] = puVar5 + 0x33;
  func_004FB344((int)puVar13,8);
  iVar6 = DAT_002143d4;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar13,uVar14,(int *)(iVar6 + uVar14 * 8));
    fVar17 = ALBW_AS_F32(uVar18);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 8);
  func_004FB468((int)puVar13);
  func_004FB30C((int)puVar13,1);
  func_004FAC70((int)puVar13,0,DAT_002143d8);
  func_004FB408((int)puVar13);
  puVar5[0x2d] = puVar5[-0x11f];
  puVar5[0x2e] = puVar5[-0x11e];
  puVar5[0x2f] = puVar5[-0x11d];
  func_004F5BD8((int)puVar13,(uint *)0x0,(int **)0x0,pfVar12);
  *(undefined1 *)((int)puVar5 + -0x1e) = 10;
  puVar15 = puVar5 + -9;
  puVar5[-4] = puVar13;
  iVar6 = func_0010BA78(0xa0);
  puVar5[-3] = iVar6;
  puVar5[-2] = iVar6 + (uint)*(byte *)((int)puVar5 + -0x1e) * 8;
  iVar10 = 10;
  puVar4 = (undefined4 *)(iVar6 + -8);
  do {
    uVar9 = *(undefined4 *)(iVar8 + 0xc0);
    iVar10 = iVar10 + -1;
    puVar4[2] = *(undefined4 *)(iVar8 + 0xbc);
    puVar4[3] = uVar9;
    uVar9 = *(undefined4 *)(iVar8 + 0xc0);
    puVar4[4] = *(undefined4 *)(iVar8 + 0xbc);
    puVar4[5] = uVar9;
    puVar4 = puVar4 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x1e);
  uVar14 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar5[-1] = puVar4;
  if (uVar14 != 0) {
    puVar7 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = *(undefined4 *)(iVar8 + 0x20);
      *puVar4 = *(undefined4 *)(iVar8 + 0x1c);
      puVar4[1] = uVar9;
      puVar7 = puVar4;
    }
    for (iVar6 = (int)uVar14 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar9 = *(undefined4 *)(iVar8 + 0x20);
      puVar7[2] = *(undefined4 *)(iVar8 + 0x1c);
      puVar7[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar8 + 0x20);
      puVar7[4] = *(undefined4 *)(iVar8 + 0x1c);
      puVar7[5] = uVar9;
      puVar7 = puVar7 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  iVar6 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 10;
    iVar6 = func_00100118((int)(puVar4 + 2),DAT_002143dc,0x24,10);
  }
  if (iVar6 != 0) {
    puVar5[-6] = iVar6;
    puVar5[-7] = 10;
  }
  iVar6 = DAT_002143e0;
  puVar5[-0x163] = puVar15;
  iVar10 = DAT_002143f0;
  *(undefined2 *)(iVar6 + (int)puVar13) = 10;
  local_3c = s_cState_Idle_002143e4;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,0,&local_40);
  puVar4 = (undefined4 *)puVar5[-3];
  uVar11 = *(undefined4 *)(iVar8 + 0x14);
  uVar16 = *(undefined4 *)(iVar8 + 0xc);
  uVar9 = *(undefined4 *)(iVar8 + 0x18);
  uVar19 = *(undefined4 *)(iVar8 + 0x1c);
  uVar20 = *(undefined4 *)(iVar8 + 0x20);
  puVar4[1] = *(undefined4 *)(iVar8 + 0x10);
  *puVar4 = uVar16;
  puVar4 = (undefined4 *)puVar5[-2];
  puVar4[1] = uVar9;
  *puVar4 = uVar11;
  puVar4 = (undefined4 *)puVar5[-1];
  *puVar4 = uVar19;
  puVar4[1] = uVar20;
  local_3c = s_cState_Hide_002143f4;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,1,&local_40);
  iVar6 = puVar5[-3];
  uVar16 = *(undefined4 *)(iVar8 + 0x28);
  uVar9 = *(undefined4 *)(iVar8 + 0x2c);
  uVar11 = *(undefined4 *)(iVar8 + 0x30);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar8 + 0x24);
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 8) = uVar9;
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 8) = uVar19;
  *(undefined4 *)(iVar6 + 0xc) = uVar20;
  local_3c = s_cState_Appear_00214400;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,2,&local_40);
  iVar6 = puVar5[-3];
  uVar9 = *(undefined4 *)(iVar8 + 0x38);
  uVar11 = *(undefined4 *)(iVar8 + 0x3c);
  uVar16 = *(undefined4 *)(iVar8 + 0x40);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar8 + 0x34);
  *(undefined4 *)(iVar6 + 0x14) = uVar9;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x10) = uVar11;
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x10) = uVar19;
  *(undefined4 *)(iVar6 + 0x14) = uVar20;
  local_3c = s_cState_Disappear_00214410;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,3,&local_40);
  iVar6 = puVar5[-3];
  uVar9 = *(undefined4 *)(iVar8 + 0x48);
  uVar11 = *(undefined4 *)(iVar8 + 0x4c);
  uVar16 = *(undefined4 *)(iVar8 + 0x50);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar8 + 0x44);
  *(undefined4 *)(iVar6 + 0x1c) = uVar9;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x18) = uVar11;
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x18) = uVar19;
  *(undefined4 *)(iVar6 + 0x1c) = uVar20;
  local_3c = s_cState_Move_002146cc;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,4,&local_40);
  iVar6 = puVar5[-3];
  uVar16 = *(undefined4 *)(iVar8 + 0x58);
  uVar9 = *(undefined4 *)(iVar8 + 0x5c);
  uVar11 = *(undefined4 *)(iVar8 + 0x60);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(iVar6 + 0x24) = uVar16;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x20) = uVar9;
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x20) = uVar19;
  *(undefined4 *)(iVar6 + 0x24) = uVar20;
  local_3c = s_cState_SandUpStop_002146d8;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,5,&local_40);
  iVar6 = puVar5[-3];
  uVar9 = *(undefined4 *)(iVar8 + 0x68);
  uVar11 = *(undefined4 *)(iVar8 + 0x6c);
  uVar16 = *(undefined4 *)(iVar8 + 0x70);
  uVar19 = *(undefined4 *)(iVar8 + 0x74);
  uVar20 = *(undefined4 *)(iVar8 + 0x78);
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar8 + 100);
  *(undefined4 *)(iVar6 + 0x2c) = uVar9;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x28) = uVar11;
  *(undefined4 *)(iVar6 + 0x2c) = uVar16;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x28) = uVar19;
  *(undefined4 *)(iVar6 + 0x2c) = uVar20;
  local_3c = s_cState_Fall_002146ec;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,6,&local_40);
  iVar6 = puVar5[-3];
  uVar9 = *(undefined4 *)(iVar8 + 0x80);
  uVar16 = *(undefined4 *)(iVar8 + 0x84);
  uVar11 = *(undefined4 *)(iVar8 + 0x88);
  uVar19 = *(undefined4 *)(iVar8 + 0x1c);
  uVar20 = *(undefined4 *)(iVar8 + 0x20);
  *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar8 + 0x7c);
  *(undefined4 *)(iVar6 + 0x34) = uVar9;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x30) = uVar16;
  *(undefined4 *)(iVar6 + 0x34) = uVar11;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x30) = uVar19;
  *(undefined4 *)(iVar6 + 0x34) = uVar20;
  local_3c = s_cState_RunAway_002146f8;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,7,&local_40);
  iVar6 = puVar5[-3];
  uVar9 = *(undefined4 *)(iVar8 + 0x90);
  uVar11 = *(undefined4 *)(iVar8 + 0x94);
  uVar16 = *(undefined4 *)(iVar8 + 0x98);
  *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar8 + 0x8c);
  *(undefined4 *)(iVar6 + 0x3c) = uVar9;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x38) = uVar11;
  *(undefined4 *)(iVar6 + 0x3c) = uVar16;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x38) = uVar19;
  *(undefined4 *)(iVar6 + 0x3c) = uVar20;
  local_3c = s_cState_Reaction_00214708;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,8,&local_40);
  iVar6 = puVar5[-3];
  uVar9 = *(undefined4 *)(iVar8 + 0xa0);
  uVar11 = *(undefined4 *)(iVar8 + 0xa4);
  uVar16 = *(undefined4 *)(iVar8 + 0xa8);
  *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar8 + 0x9c);
  *(undefined4 *)(iVar6 + 0x44) = uVar9;
  iVar6 = puVar5[-2];
  *(undefined4 *)(iVar6 + 0x40) = uVar11;
  *(undefined4 *)(iVar6 + 0x44) = uVar16;
  iVar6 = puVar5[-1];
  *(undefined4 *)(iVar6 + 0x40) = uVar19;
  *(undefined4 *)(iVar6 + 0x44) = uVar20;
  local_3c = s_cState_Die_00214718;
  local_40 = iVar10;
  func_0010BEC4((int)puVar15,9,&local_40);
  iVar6 = puVar5[-3];
  uVar9 = *(undefined4 *)(iVar8 + 0xb0);
  uVar11 = *(undefined4 *)(iVar8 + 0xb4);
  uVar16 = *(undefined4 *)(iVar8 + 0xb8);
  *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar8 + 0xac);
  *(undefined4 *)(iVar6 + 0x4c) = uVar9;
  iVar8 = puVar5[-2];
  *(undefined4 *)(iVar8 + 0x48) = uVar11;
  *(undefined4 *)(iVar8 + 0x4c) = uVar16;
  iVar8 = puVar5[-1];
  *(undefined4 *)(iVar8 + 0x48) = uVar19;
  *(undefined4 *)(iVar8 + 0x4c) = uVar20;
  if (*(short *)((int)puVar5 + -0x8aa) == 0) {
    func_0065D8B8(puVar15,1);
  }
  else {
    bVar2 = func_00588BF0((int)puVar13,0);
    if (bVar2) {
      *(undefined1 *)((int)puVar5 + -0x609) = 1;
    }
    else {
      func_0065D8B8(puVar15,0);
    }
  }
  fparam_1 = DAT_00214728;
  puVar5[-0xd1] = puVar5[-0xd1] | 0x8000;
  func_004FBA18((int)puVar13,2,0xff,0,0x1e,0,(ushort)DAT_00214724,DAT_0021472c,fparam_1);
  *(undefined1 *)((int)puVar5 + -0x163) = 7;
  *(undefined1 *)((int)puVar5 + -0x162) = 0;
  puVar4 = DAT_00214730;
  *(undefined1 *)((int)puVar5 + -0x161) = 0;
  func_004F8864((int)puVar13,puVar4,0,fVar17);
  puVar4 = DAT_00214730;
  *(undefined1 *)((int)puVar5 + 0x76) = 1;
  puVar5[0xd] = 0x3c;
  puVar5[0x1b] = ALBW_AS_U32(fVar17);
  uVar9 = *puVar4;
  uVar11 = puVar4[1];
  puVar5[0x1a] = puVar4[2];
  puVar5[0x18] = uVar9;
  puVar5[0x19] = uVar11;
  return puVar13;
}

