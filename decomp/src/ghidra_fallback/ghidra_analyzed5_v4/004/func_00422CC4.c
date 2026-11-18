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
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00232540(undefined4 *param_1);
extern int func_0031B220(int param_1,int *param_2,int *param_3);
extern int func_0031BFA0(undefined4 *param_1);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern undefined4 DAT_00423080;
extern undefined4 DAT_00423084;
extern int DAT_00423094;
extern undefined DAT_00423098;
extern undefined DAT_004230a0;
extern undefined4 *DAT_004230b0;
extern int DAT_004230b4;
extern int DAT_004230b8;
extern undefined *DAT_004230bc;
extern char s_TouchOnOff_00423088[];
extern char s__L_Item_00_004230a3[];
extern char s_cState_Drag_004230d8[];
extern char s_cState_Drop_004230e4[];
extern char s_cState_End_004230f0[];
extern char s_cState_Idle_004230c0[];
extern char s_cState_Pick_004230cc[];
extern undefined4 _DAT_004230a0;

// USA 00422CC4 <- EU 00422CA4 (Ghidra, non-matching)
// GLOBAL DAT_00423080 undefined4
// GLOBAL DAT_00423084 undefined4
// GLOBAL DAT_00423094 int
// GLOBAL DAT_00423098 undefined
// GLOBAL DAT_004230a0 undefined
// GLOBAL DAT_004230b0 undefined4 *
// GLOBAL DAT_004230b4 int
// GLOBAL DAT_004230b8 int
// GLOBAL DAT_004230bc undefined *
// GLOBAL s_TouchOnOff_00423088 string
// GLOBAL s_cState_Drag_004230d8 string
// GLOBAL s_cState_Drop_004230e4 string
// GLOBAL s_cState_End_004230f0 string
// GLOBAL s_cState_Idle_004230c0 string
// GLOBAL s_cState_Pick_004230cc string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int func_00422CC4(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  float fparam_0;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = func_00232540(param_1);
  *puVar2 = DAT_00423080;
  puVar2 = func_0010A794(puVar2 + 8);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  iVar3 = func_0031BFA0(puVar2 + 9);
  *(undefined2 *)(iVar3 + 0x50) = 0;
  uVar10 = DAT_00423084;
  *(undefined2 *)(iVar3 + 0x52) = 0xffff;
  *(undefined4 *)(iVar3 + 0x54) = uVar10;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(undefined2 *)(iVar3 + 0x5c) = 0;
  *(undefined2 *)(iVar3 + 0x5e) = 0xffff;
  *(undefined4 *)(iVar3 + 0x60) = uVar10;
  *(undefined4 *)(iVar3 + 100) = 0;
  *(undefined1 *)(iVar3 + 0x70) = 0xff;
  puVar2 = (undefined4 *)func_0010BAB4(0x74);
  piVar4 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar4 = func_00168434(puVar2);
  }
  func_00168100(piVar4,param_2,param_3);
  *(int **)(iVar3 + -0x28) = piVar4;
  *(uint *)(iVar3 + -0x2c) = *(uint *)(iVar3 + -0x2c) | 0x10;
  func_0016773C((int)piVar4,2);
  iVar8 = DAT_00423094;
  local_24 = s_TouchOnOff_00423088;
  local_28 = DAT_00423094;
  func_00166C20(piVar4,0,&local_28,0);
  local_24 = &DAT_00423098;
  local_28 = iVar8;
  func_00166C20(piVar4,1,&local_28,0);
  *(int **)(iVar3 + 0x58) = piVar4;
  *(undefined2 *)(iVar3 + 0x52) = 1;
  fparam_0 = ALBW_AS_F32(_DAT_004230a0);
  *(undefined2 *)(iVar3 + 0x50) = 0;
  func_002317C0((undefined2 *)(iVar3 + 0x50),fparam_0);
  local_24 = s__L_Item_00_004230a3 + 1;
  local_28 = iVar8;
  func_0031B220(iVar3,piVar4,&local_28);
  *(undefined1 *)(iVar3 + -0x1e) = 5;
  *(int *)(iVar3 + -0x10) = iVar3 + -0x44;
  iVar5 = func_0010BA78(0x50);
  *(int *)(iVar3 + -0xc) = iVar5;
  puVar2 = DAT_004230b0;
  *(uint *)(iVar3 + -8) = iVar5 + (uint)*(byte *)(iVar3 + -0x1e) * 8;
  iVar7 = 5;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar10 = DAT_004230b0[1];
    iVar7 = iVar7 + -1;
    puVar6[2] = *DAT_004230b0;
    puVar6[3] = uVar10;
    uVar10 = puVar2[1];
    puVar6[4] = *puVar2;
    puVar6[5] = uVar10;
    puVar6 = puVar6 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)(iVar3 + -0x1e);
  uVar9 = (uint)bVar1;
  puVar2 = (undefined4 *)func_0010BA78(uVar9 << 3);
  iVar5 = DAT_004230b4;
  *(undefined4 **)(iVar3 + -4) = puVar2;
  if (uVar9 != 0) {
    puVar6 = puVar2 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar5 + 0x74);
      *puVar2 = *(undefined4 *)(iVar5 + 0x70);
      puVar2[1] = uVar10;
      puVar6 = puVar2;
    }
    for (iVar7 = (int)uVar9 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar10 = *(undefined4 *)(DAT_004230b8 + 0x174);
      puVar6[2] = *(undefined4 *)(DAT_004230b8 + 0x170);
      puVar6[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar5 + 0x74);
      puVar6[4] = *(undefined4 *)(iVar5 + 0x70);
      puVar6[5] = uVar10;
      puVar6 = puVar6 + 4;
    }
  }
  puVar2 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar7 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x24;
    puVar2[1] = 5;
    iVar7 = func_00100118((int)(puVar2 + 2),DAT_004230bc,0x24,5);
  }
  if (iVar7 != 0) {
    *(int *)(iVar3 + -0x18) = iVar7;
    *(undefined4 *)(iVar3 + -0x1c) = 5;
  }
  local_24 = s_cState_Idle_004230c0;
  local_28 = iVar8;
  func_0010BEC4(iVar3 + -0x24,0,&local_28);
  puVar2 = *(undefined4 **)(iVar3 + -0xc);
  uVar10 = *(undefined4 *)(iVar5 + 0x68);
  uVar14 = *(undefined4 *)(iVar5 + 0x6c);
  uVar12 = *(undefined4 *)(DAT_004230b8 + 0x164);
  uVar11 = *(undefined4 *)(iVar5 + 0x70);
  uVar13 = *(undefined4 *)(iVar5 + 0x74);
  *puVar2 = *(undefined4 *)(DAT_004230b8 + 0x160);
  puVar2[1] = uVar12;
  puVar2 = *(undefined4 **)(iVar3 + -8);
  *puVar2 = uVar10;
  puVar2[1] = uVar14;
  puVar2 = *(undefined4 **)(iVar3 + -4);
  *puVar2 = uVar11;
  puVar2[1] = uVar13;
  local_24 = s_cState_Pick_004230cc;
  local_28 = iVar8;
  func_0010BEC4(iVar3 + -0x24,1,&local_28);
  iVar7 = *(int *)(iVar3 + -0xc);
  uVar10 = *(undefined4 *)(iVar5 + 0x74);
  uVar11 = *(undefined4 *)(iVar5 + 0x70);
  uVar12 = *(undefined4 *)(iVar5 + 0x80);
  uVar14 = *(undefined4 *)(iVar5 + 0x84);
  uVar13 = *(undefined4 *)(iVar5 + 0x7c);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar5 + 0x78);
  *(undefined4 *)(iVar7 + 0xc) = uVar13;
  iVar7 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar7 + 8) = uVar12;
  *(undefined4 *)(iVar7 + 0xc) = uVar14;
  iVar7 = *(int *)(iVar3 + -4);
  *(undefined4 *)(iVar7 + 8) = uVar11;
  *(undefined4 *)(iVar7 + 0xc) = uVar10;
  local_24 = s_cState_Drag_004230d8;
  local_28 = iVar8;
  func_0010BEC4(iVar3 + -0x24,2,&local_28);
  iVar7 = *(int *)(iVar3 + -0xc);
  uVar14 = *(undefined4 *)(iVar5 + 0x8c);
  uVar11 = *(undefined4 *)(iVar5 + 0x70);
  uVar13 = *(undefined4 *)(iVar5 + 0x74);
  uVar10 = *(undefined4 *)(iVar5 + 0x90);
  uVar12 = *(undefined4 *)(iVar5 + 0x94);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar5 + 0x88);
  *(undefined4 *)(iVar7 + 0x14) = uVar14;
  iVar7 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar7 + 0x10) = uVar10;
  *(undefined4 *)(iVar7 + 0x14) = uVar12;
  iVar7 = *(int *)(iVar3 + -4);
  *(undefined4 *)(iVar7 + 0x10) = uVar11;
  *(undefined4 *)(iVar7 + 0x14) = uVar13;
  local_24 = s_cState_Drop_004230e4;
  local_28 = iVar8;
  func_0010BEC4(iVar3 + -0x24,3,&local_28);
  iVar7 = *(int *)(iVar3 + -0xc);
  uVar12 = *(undefined4 *)(iVar5 + 0x9c);
  uVar10 = *(undefined4 *)(iVar5 + 0xa0);
  uVar13 = *(undefined4 *)(iVar5 + 0xa4);
  uVar11 = *(undefined4 *)(iVar5 + 0x70);
  uVar14 = *(undefined4 *)(iVar5 + 0x74);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar5 + 0x98);
  *(undefined4 *)(iVar7 + 0x1c) = uVar12;
  iVar7 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar7 + 0x18) = uVar10;
  *(undefined4 *)(iVar7 + 0x1c) = uVar13;
  iVar7 = *(int *)(iVar3 + -4);
  *(undefined4 *)(iVar7 + 0x18) = uVar11;
  *(undefined4 *)(iVar7 + 0x1c) = uVar14;
  local_24 = s_cState_End_004230f0;
  local_28 = iVar8;
  func_0010BEC4(iVar3 + -0x24,4,&local_28);
  iVar8 = *(int *)(iVar3 + -0xc);
  uVar10 = *(undefined4 *)(iVar5 + 0xac);
  uVar12 = *(undefined4 *)(iVar5 + 0xb0);
  uVar11 = *(undefined4 *)(iVar5 + 0xb4);
  uVar14 = *(undefined4 *)(iVar5 + 0x70);
  uVar13 = *(undefined4 *)(iVar5 + 0x74);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar5 + 0xa8);
  *(undefined4 *)(iVar8 + 0x24) = uVar10;
  iVar8 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar8 + 0x20) = uVar12;
  *(undefined4 *)(iVar8 + 0x24) = uVar11;
  iVar8 = *(int *)(iVar3 + -4);
  *(undefined4 *)(iVar8 + 0x20) = uVar14;
  *(undefined4 *)(iVar8 + 0x24) = uVar13;
  func_0066BF2C((undefined4 *)(iVar3 + -0x24),'\0');
  return iVar3 + -0x44;
}

