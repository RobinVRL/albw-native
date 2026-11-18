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
extern int func_00232540(undefined4 *param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_0066C0CC(undefined4 *param_1,char param_2);
extern undefined4 DAT_00425744;
extern undefined4 DAT_00425748;
extern undefined4 DAT_0042574c;
extern undefined DAT_00425750;
extern int DAT_00425760;
extern undefined DAT_00425764;
extern undefined4 *DAT_0042576c;
extern int DAT_00425770;
extern undefined4 *DAT_00425774;
extern undefined *DAT_00425778;
extern int DAT_0042578c;
extern char s__TouchOnOff_00425753[];
extern char s_cState_Demo_004258b0[];
extern char s_cState_Idle_0042579c[];
extern char s_cState_Invalid_0042577c[];
extern char s_cState_Move_004257b4[];
extern char s_cState_Open_00425790[];
extern char s_cState_Push_004257a8[];
extern char s_cState_Reset_004258a0[];
extern char s_cf_00425753[];
extern undefined4 _DAT_00425750;

// USA 00425388 <- EU 00425368 (Ghidra, non-matching)
// GLOBAL DAT_00425744 undefined4
// GLOBAL DAT_00425748 undefined4
// GLOBAL DAT_0042574c undefined4
// GLOBAL DAT_00425750 undefined
// GLOBAL DAT_00425760 int
// GLOBAL DAT_00425764 undefined
// GLOBAL DAT_0042576c undefined4 *
// GLOBAL DAT_00425770 int
// GLOBAL DAT_00425774 undefined4 *
// GLOBAL DAT_00425778 undefined *
// GLOBAL DAT_0042578c int
// GLOBAL s_cf_00425753 string
// GLOBAL s_cState_Demo_004258b0 string
// GLOBAL s_cState_Idle_0042579c string
// GLOBAL s_cState_Invalid_0042577c string
// GLOBAL s_cState_Move_004257b4 string
// GLOBAL s_cState_Open_00425790 string
// GLOBAL s_cState_Push_004257a8 string
// GLOBAL s_cState_Reset_004258a0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_00425388(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = func_00232540(param_1);
  *puVar2 = DAT_00425744;
  puVar2 = func_0010A794(puVar2 + 8);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = param_4;
  *(undefined2 *)(puVar2 + 10) = 0;
  uVar12 = DAT_00425748;
  *(undefined2 *)((int)puVar2 + 0x2a) = 0xffff;
  puVar2[0xb] = uVar12;
  uVar13 = DAT_0042574c;
  puVar2[0xc] = 0;
  uVar14 = _DAT_00425750;
  puVar8 = puVar2 + -8;
  puVar2[0x12] = uVar12;
  puVar2[0x13] = uVar13;
  puVar2[0x14] = uVar12;
  puVar2[0x15] = uVar14;
  *(undefined1 *)(puVar2 + 0x16) = 0;
  *(undefined1 *)((int)puVar2 + 0x59) = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar3 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = func_00168434(puVar3);
  }
  func_00168100(piVar9,param_2,param_3);
  puVar2[-1] = piVar9;
  puVar2[-2] = puVar2[-2] | 0x10;
  func_0016773C((int)piVar9,2);
  iVar10 = DAT_00425760;
  local_24 = s__TouchOnOff_00425753 + 1;
  local_28 = DAT_00425760;
  func_00166C20(piVar9,0,&local_28,0);
  local_24 = &DAT_00425764;
  local_28 = iVar10;
  func_00166C20(piVar9,1,&local_28,0);
  puVar4 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = func_002C0294(puVar4);
  }
  puVar2[-3] = puVar3;
  func_002C00D4(puVar3,puVar8,(int *)puVar2[-1]);
  puVar2[5] = puVar8;
  *(undefined1 *)((int)puVar2 + 6) = 7;
  iVar5 = func_0010BA78(0x70);
  puVar3 = DAT_0042576c;
  puVar2[6] = iVar5;
  puVar2[7] = iVar5 + (uint)*(byte *)((int)puVar2 + 6) * 8;
  iVar7 = 7;
  puVar4 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = puVar3[1];
    puVar4[2] = *puVar3;
    puVar4[3] = uVar12;
    iVar7 = iVar7 + -1;
    uVar12 = puVar3[1];
    puVar4[4] = *puVar3;
    puVar4[5] = uVar12;
    puVar4 = puVar4 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar2 + 6);
  uVar11 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar11 << 3);
  iVar5 = DAT_00425770;
  puVar2[8] = puVar3;
  if (uVar11 != 0) {
    puVar4 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar5 + 0xcc);
      *puVar3 = *(undefined4 *)(iVar5 + 200);
      puVar3[1] = uVar12;
      puVar4 = puVar3;
    }
    for (iVar7 = (int)uVar11 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar12 = DAT_00425774[1];
      puVar4[2] = *DAT_00425774;
      puVar4[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar5 + 0xcc);
      puVar4[4] = *(undefined4 *)(iVar5 + 200);
      puVar4[5] = uVar12;
      puVar4 = puVar4 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar7 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 7;
    iVar7 = func_00100118((int)(puVar3 + 2),DAT_00425778,0x24,7);
  }
  if (iVar7 != 0) {
    puVar2[3] = iVar7;
    puVar2[2] = 7;
  }
  local_24 = s_cState_Invalid_0042577c;
  local_28 = iVar10;
  func_0010BEC4((int)puVar2,0,&local_28);
  puVar3 = (undefined4 *)puVar2[6];
  uVar13 = *(undefined4 *)(iVar5 + 0xc0);
  uVar14 = *(undefined4 *)(iVar5 + 0xc4);
  uVar15 = *(undefined4 *)(DAT_0042578c + 0x1bc);
  uVar12 = *(undefined4 *)(iVar5 + 200);
  uVar16 = *(undefined4 *)(iVar5 + 0xcc);
  *puVar3 = *(undefined4 *)(DAT_0042578c + 0x1b8);
  puVar3[1] = uVar15;
  puVar3 = (undefined4 *)puVar2[7];
  *puVar3 = uVar13;
  puVar3[1] = uVar14;
  puVar3 = (undefined4 *)puVar2[8];
  *puVar3 = uVar12;
  puVar3[1] = uVar16;
  local_24 = s_cState_Open_00425790;
  local_28 = iVar10;
  func_0010BEC4((int)puVar2,1,&local_28);
  iVar7 = puVar2[6];
  uVar13 = *(undefined4 *)(iVar5 + 0xd4);
  uVar14 = *(undefined4 *)(iVar5 + 0xd8);
  uVar16 = *(undefined4 *)(iVar5 + 0xdc);
  uVar12 = *(undefined4 *)(iVar5 + 0xcc);
  uVar15 = *(undefined4 *)(iVar5 + 200);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar5 + 0xd0);
  *(undefined4 *)(iVar7 + 0xc) = uVar13;
  iVar7 = puVar2[7];
  *(undefined4 *)(iVar7 + 8) = uVar14;
  *(undefined4 *)(iVar7 + 0xc) = uVar16;
  iVar7 = puVar2[8];
  *(undefined4 *)(iVar7 + 8) = uVar15;
  *(undefined4 *)(iVar7 + 0xc) = uVar12;
  local_24 = s_cState_Idle_0042579c;
  local_28 = iVar10;
  func_0010BEC4((int)puVar2,2,&local_28);
  iVar7 = puVar2[6];
  uVar13 = *(undefined4 *)(iVar5 + 0xe4);
  uVar16 = *(undefined4 *)(iVar5 + 0xe8);
  uVar12 = *(undefined4 *)(iVar5 + 0xcc);
  uVar14 = *(undefined4 *)(iVar5 + 0xec);
  uVar15 = *(undefined4 *)(iVar5 + 200);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar5 + 0xe0);
  *(undefined4 *)(iVar7 + 0x14) = uVar13;
  iVar7 = puVar2[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar16;
  *(undefined4 *)(iVar7 + 0x14) = uVar14;
  iVar7 = puVar2[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar15;
  *(undefined4 *)(iVar7 + 0x14) = uVar12;
  local_24 = s_cState_Push_004257a8;
  local_28 = iVar10;
  func_0010BEC4((int)puVar2,3,&local_28);
  iVar7 = puVar2[6];
  uVar12 = *(undefined4 *)(iVar5 + 0xf4);
  uVar15 = *(undefined4 *)(DAT_0042578c + 0x1f8);
  uVar13 = *(undefined4 *)(DAT_0042578c + 0x1fc);
  uVar16 = *(undefined4 *)(iVar5 + 200);
  uVar14 = *(undefined4 *)(iVar5 + 0xcc);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar5 + 0xf0);
  *(undefined4 *)(iVar7 + 0x1c) = uVar12;
  iVar7 = puVar2[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar15;
  *(undefined4 *)(iVar7 + 0x1c) = uVar13;
  iVar7 = puVar2[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar16;
  *(undefined4 *)(iVar7 + 0x1c) = uVar14;
  local_24 = s_cState_Move_004257b4;
  local_28 = iVar10;
  func_0010BEC4((int)puVar2,4,&local_28);
  iVar7 = DAT_0042578c;
  iVar6 = puVar2[6];
  uVar12 = *(undefined4 *)(DAT_0042578c + 0x208);
  uVar13 = *(undefined4 *)(DAT_0042578c + 0x204);
  uVar14 = *(undefined4 *)(DAT_0042578c + 0x20c);
  uVar15 = *(undefined4 *)(DAT_0042578c + 0x210);
  uVar16 = *(undefined4 *)(DAT_0042578c + 0x214);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(DAT_0042578c + 0x200);
  *(undefined4 *)(iVar6 + 0x24) = uVar13;
  iVar6 = puVar2[7];
  *(undefined4 *)(iVar6 + 0x20) = uVar12;
  *(undefined4 *)(iVar6 + 0x24) = uVar14;
  iVar6 = puVar2[8];
  *(undefined4 *)(iVar6 + 0x20) = uVar15;
  *(undefined4 *)(iVar6 + 0x24) = uVar16;
  local_24 = s_cState_Reset_004258a0;
  local_28 = iVar10;
  func_0010BEC4((int)puVar2,5,&local_28);
  iVar6 = puVar2[6];
  uVar12 = *(undefined4 *)(iVar5 + 0xcc);
  uVar13 = *(undefined4 *)(iVar7 + 0x21c);
  uVar14 = *(undefined4 *)(iVar5 + 200);
  uVar16 = *(undefined4 *)(iVar7 + 0x220);
  uVar15 = *(undefined4 *)(iVar7 + 0x224);
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar7 + 0x218);
  *(undefined4 *)(iVar6 + 0x2c) = uVar13;
  iVar5 = puVar2[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar16;
  *(undefined4 *)(iVar5 + 0x2c) = uVar15;
  iVar5 = puVar2[8];
  *(undefined4 *)(iVar5 + 0x28) = uVar14;
  *(undefined4 *)(iVar5 + 0x2c) = uVar12;
  local_24 = s_cState_Demo_004258b0;
  local_28 = iVar10;
  func_0010BEC4((int)puVar2,6,&local_28);
  iVar10 = puVar2[6];
  uVar12 = *(undefined4 *)(iVar7 + 0x22c);
  uVar16 = *(undefined4 *)(iVar7 + 0x230);
  uVar13 = *(undefined4 *)(iVar7 + 0x234);
  uVar15 = *(undefined4 *)(iVar7 + 0x238);
  uVar14 = *(undefined4 *)(iVar7 + 0x23c);
  *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(iVar7 + 0x228);
  *(undefined4 *)(iVar10 + 0x34) = uVar12;
  iVar10 = puVar2[7];
  *(undefined4 *)(iVar10 + 0x30) = uVar16;
  *(undefined4 *)(iVar10 + 0x34) = uVar13;
  iVar10 = puVar2[8];
  *(undefined4 *)(iVar10 + 0x30) = uVar15;
  *(undefined4 *)(iVar10 + 0x34) = uVar14;
  func_0066C0CC(puVar2,'\0');
  return puVar8;
}

