#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00232540(undefined4 *param_1);
extern int DAT_00482b48;
extern int DAT_00482b4c;
extern undefined4 DAT_00482b50;
extern undefined4 DAT_00482b54;
extern int DAT_00482b58;
extern undefined4 DAT_00482b5c;
extern undefined4 DAT_00482b60;

// USA 00482A80 <- EU 00482A58 (Ghidra, non-matching)
// GLOBAL DAT_00482b48 int
// GLOBAL DAT_00482b4c int
// GLOBAL DAT_00482b50 undefined4
// GLOBAL DAT_00482b54 undefined4
// GLOBAL DAT_00482b58 int
// GLOBAL DAT_00482b5c undefined4
// GLOBAL DAT_00482b60 undefined4

int * func_00482A80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  piVar4 = func_00232540(param_1);
  iVar1 = DAT_00482b48;
  *piVar4 = DAT_00482b48;
  iVar2 = DAT_00482b4c;
  *(undefined2 *)(piVar4 + 8) = 0;
  *(undefined2 *)((int)piVar4 + 0x22) = 0xffff;
  piVar4[9] = iVar2;
  piVar4[10] = 0;
  *(undefined2 *)(piVar4 + 0xb) = 0;
  *(undefined2 *)((int)piVar4 + 0x2e) = 0xffff;
  uVar3 = DAT_00482b50;
  piVar4[0xc] = iVar2;
  piVar4[0xd] = 0;
  (**(code **)(iVar1 + 0x38))(piVar4,uVar3,0);
  piVar5 = (int *)piVar4[7];
  func_0016773C((int)piVar5,3);
  iVar1 = DAT_00482b58;
  local_1c = DAT_00482b54;
  local_20 = DAT_00482b58;
  func_00166C20(piVar5,0,&local_20,0);
  local_1c = DAT_00482b5c;
  local_20 = iVar1;
  func_00166C20(piVar5,1,&local_20,0);
  local_1c = DAT_00482b60;
  local_20 = iVar1;
  func_00166C20(piVar5,2,&local_20,0);
  piVar4[0xd] = piVar4[7];
  *(undefined2 *)((int)piVar4 + 0x2e) = 1;
  *(undefined2 *)(piVar4 + 0xb) = 0;
  return piVar4;
}

