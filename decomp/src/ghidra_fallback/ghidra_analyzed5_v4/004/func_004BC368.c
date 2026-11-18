#include "ghidra_types.h"

extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004BBA60(int param_1,uint param_2);
extern int func_004BBC2C(int param_1,int param_2);
extern int func_004BC28C(int param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int DAT_004bc498;
extern int *DAT_004bc49c;
extern int DAT_004bc4a0;
extern int DAT_004bc4a4;

// USA 004BC368 <- EU 004BC340 (Ghidra, non-matching)
// GLOBAL DAT_004bc498 int
// GLOBAL DAT_004bc49c int *
// GLOBAL DAT_004bc4a0 int
// GLOBAL DAT_004bc4a4 int

int * func_004BC368(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = func_00150E40(param_1,param_2);
  piVar1 = DAT_004bc49c;
  iVar4 = DAT_004bc498 + 0x54;
  *piVar2 = DAT_004bc498;
  piVar2[0x103] = 0;
  piVar2[200] = iVar4;
  piVar2[0x105] = 0;
  piVar2[0x108] = 0;
  iVar4 = piVar1[5];
  piVar2[0x109] = piVar1[4];
  piVar2[0x10a] = iVar4;
  piVar2[0x107] = DAT_004bc4a0;
  piVar2[0x10c] = 0;
  iVar4 = piVar1[7];
  piVar2[0x10d] = piVar1[6];
  piVar2[0x10e] = iVar4;
  piVar2[0x10b] = DAT_004bc4a4;
  piVar2[0x10f] = 0;
  piVar2[0x110] = 0;
  piVar2[0x111] = 0;
  *(undefined1 *)(piVar2 + 0x112) = 0;
  *(undefined1 *)((int)piVar2 + 0x449) = 0;
  *(undefined1 *)((int)piVar2 + 0x44a) = 0;
  *(undefined1 *)((int)piVar2 + 1099) = 0;
  *(undefined1 *)(piVar2 + 0x113) = 0;
  *(undefined1 *)((int)piVar2 + 0x44d) = 0;
  *(undefined1 *)((int)piVar2 + 0x44e) = 0;
  *(undefined1 *)((int)piVar2 + 0x44f) = 0;
  iVar4 = func_0014E428((int)piVar2,0,0,0,1,0,0);
  piVar2[0x10f] = iVar4;
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar4 + 0x80),piVar2[0xfa],(float *)(piVar2 + 0xf4));
  iVar4 = piVar2[0x10f];
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(uint *)(iVar4 + 0x74) = param_2[4];
  *(uint *)(iVar4 + 0x78) = param_2[5];
  uVar3 = param_2[6];
  *(uint *)(iVar4 + 0x7c) = uVar3;
  func_004BBA60((int)piVar2,uVar3);
  func_004BC28C((int)piVar2);
  func_004BBC2C((int)piVar2,(int)param_2);
  iVar4 = *piVar1;
  iVar5 = piVar1[1];
  piVar2[0x108] = (int)piVar2;
  piVar2[0x109] = iVar4;
  piVar2[0x10a] = iVar5;
  piVar2[0xfb] = (int)(piVar2 + 0x107);
  func_004CEAF0(piVar2[0x10f]);
  return piVar2;
}

