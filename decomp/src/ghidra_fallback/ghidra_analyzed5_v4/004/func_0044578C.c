#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_0044586c;
extern int DAT_00445870;
extern undefined4 DAT_00445874;
extern undefined DAT_00445878;
extern int DAT_00445880;
extern undefined DAT_00445884;
extern undefined DAT_00445888;

// USA 0044578C <- EU 00445764 (Ghidra, non-matching)
// GLOBAL DAT_0044586c int
// GLOBAL DAT_00445870 int
// GLOBAL DAT_00445874 undefined4
// GLOBAL DAT_00445878 undefined
// GLOBAL DAT_00445880 int
// GLOBAL DAT_00445884 undefined
// GLOBAL DAT_00445888 undefined

int * func_0044578C(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar3 = func_004B9A10(param_1,3);
  iVar1 = DAT_0044586c;
  iVar4 = DAT_0044586c + -0x54;
  piVar3[0xe] = DAT_0044586c;
  *piVar3 = iVar4;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  iVar4 = DAT_00445870;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  uVar2 = DAT_00445874;
  piVar3[0x1e] = iVar4;
  piVar3[0x1f] = 0;
  (**(code **)(iVar1 + -0x1c))(piVar3,uVar2,0);
  piVar5 = (int *)piVar3[7];
  func_0016773C((int)piVar5,3);
  iVar1 = DAT_00445880;
  local_1c = &DAT_00445878;
  local_20 = DAT_00445880;
  func_00166C20(piVar5,0,&local_20,0);
  local_1c = &DAT_00445884;
  local_20 = iVar1;
  func_00166C20(piVar5,1,&local_20,0);
  local_1c = &DAT_00445888;
  local_20 = iVar1;
  func_00166C20(piVar5,2,&local_20,0);
  piVar3[0x1f] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x76) = 0;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  piVar3[10] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x22) = 1;
  *(undefined2 *)(piVar3 + 8) = 0;
  piVar3[0xd] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x2e) = 2;
  *(undefined2 *)(piVar3 + 0xb) = 0;
  *(undefined1 *)((int)piVar3 + 0xf) = 0;
  return piVar3;
}

