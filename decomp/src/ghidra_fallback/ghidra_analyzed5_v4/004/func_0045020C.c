#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_004502fc;
extern int DAT_00450300;
extern undefined4 DAT_00450304;
extern undefined DAT_00450308;
extern int DAT_0045030c;
extern undefined DAT_00450310;
extern undefined DAT_00450314;

// USA 0045020C <- EU 004501E4 (Ghidra, non-matching)
// GLOBAL DAT_004502fc int
// GLOBAL DAT_00450300 int
// GLOBAL DAT_00450304 undefined4
// GLOBAL DAT_00450308 undefined
// GLOBAL DAT_0045030c int
// GLOBAL DAT_00450310 undefined
// GLOBAL DAT_00450314 undefined

int * func_0045020C(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar3 = func_004B9A10(param_1,0);
  iVar1 = DAT_004502fc;
  iVar4 = DAT_004502fc + -0x54;
  piVar3[0xe] = DAT_004502fc;
  *piVar3 = iVar4;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  iVar4 = DAT_00450300;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  uVar2 = DAT_00450304;
  piVar3[0x1e] = iVar4;
  piVar3[0x1f] = 0;
  (**(code **)(iVar1 + -0x1c))(piVar3,uVar2,0);
  piVar5 = (int *)piVar3[7];
  func_0016773C((int)piVar5,3);
  iVar1 = DAT_0045030c;
  local_1c = &DAT_00450308;
  local_20 = DAT_0045030c;
  func_00166C20(piVar5,0,&local_20,0);
  local_1c = &DAT_00450310;
  local_20 = iVar1;
  func_00166C20(piVar5,1,&local_20,0);
  local_1c = &DAT_00450314;
  local_20 = iVar1;
  func_00166C20(piVar5,2,&local_20,0);
  piVar3[10] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 0;
  piVar3[0xd] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x2e) = 1;
  *(undefined2 *)(piVar3 + 0xb) = 0;
  piVar3[0x1f] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x76) = 2;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  *(undefined1 *)((int)piVar3 + 0xf) = 0x13;
  piVar3[6] = piVar3[6] | 0x40;
  return piVar3;
}

