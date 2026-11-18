#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00475B28(undefined4 *param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00472de4;
extern int DAT_00472de8;
extern int DAT_00472e04;
extern undefined DAT_00472e18;
extern undefined DAT_00472e20;
extern char s_B_Decide_00_00472e28[];
extern char s_Decide_00472e10[];
extern char s_Gm_ItemSelectBaloonB_00472dec[];
extern char s_InOut_00472e08[];

// USA 00472C94 <- EU 00472C6C (Ghidra, non-matching)
// GLOBAL DAT_00472de4 int
// GLOBAL DAT_00472de8 int
// GLOBAL DAT_00472e04 int
// GLOBAL DAT_00472e18 undefined
// GLOBAL DAT_00472e20 undefined
// GLOBAL s_B_Decide_00_00472e28 string
// GLOBAL s_Decide_00472e10 string
// GLOBAL s_Gm_ItemSelectBaloonB_00472dec string
// GLOBAL s_InOut_00472e08 string

int * func_00472C94(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar1 = func_004B9A10(param_1,0);
  iVar2 = DAT_00472de4;
  *piVar1 = DAT_00472de4;
  piVar1[0xe] = iVar2 + 0x54;
  piVar1 = func_00475B28(piVar1 + 0x1d);
  piVar3 = piVar1 + -0x1d;
  *(undefined2 *)(piVar1 + 0x11) = 0;
  iVar2 = DAT_00472de8;
  *(undefined2 *)((int)piVar1 + 0x46) = 0xffff;
  piVar1[0x12] = iVar2;
  piVar1[0x13] = 0;
  *(undefined2 *)(piVar1 + 0x14) = 0;
  *(undefined2 *)((int)piVar1 + 0x52) = 0xffff;
  piVar1[0x15] = iVar2;
  iVar2 = DAT_00472e04;
  piVar1[0x16] = 0;
  piVar1[0x17] = 0;
  local_1c = s_Gm_ItemSelectBaloonB_00472dec;
  local_20 = iVar2;
  (**(code **)(*piVar3 + 0x38))(piVar3,&local_20,0);
  piVar4 = (int *)piVar1[-0x16];
  func_0016773C((int)piVar4,4);
  local_1c = s_InOut_00472e08;
  local_20 = iVar2;
  func_00166C20(piVar4,0,&local_20,0);
  local_1c = s_Decide_00472e10;
  local_20 = iVar2;
  func_00166C20(piVar4,1,&local_20,0);
  local_1c = &DAT_00472e18;
  local_20 = iVar2;
  func_00166C20(piVar4,2,&local_20,0);
  local_1c = &DAT_00472e20;
  local_20 = iVar2;
  func_00166C20(piVar4,3,&local_20,0);
  piVar1[-0x13] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + -0x52) = 0;
  *(undefined2 *)(piVar1 + -0x15) = 0;
  piVar1[-0x10] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + -0x46) = 0;
  *(undefined2 *)(piVar1 + -0x12) = 2;
  piVar1[0x13] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x46) = 1;
  *(undefined2 *)(piVar1 + 0x11) = 0;
  local_1c = s_B_Decide_00_00472e28;
  local_20 = iVar2;
  iVar2 = func_005229AC(piVar4,&local_20);
  piVar1[0x17] = iVar2;
  func_004B948C((int)piVar3,(int)piVar1);
  *(undefined1 *)((int)piVar1 + -0x65) = 0x47;
  return piVar3;
}

