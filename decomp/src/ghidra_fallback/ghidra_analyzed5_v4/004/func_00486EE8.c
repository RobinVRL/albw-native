#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_00486fe0;
extern int DAT_00486fe4;
extern int DAT_00486ff4;
extern undefined DAT_00486ff8;
extern undefined DAT_00486ffc;
extern undefined DAT_00487000;
extern char s_Mn_TitleB_00486fe8[];

// USA 00486EE8 <- EU 00486EC0 (Ghidra, non-matching)
// GLOBAL DAT_00486fe0 int
// GLOBAL DAT_00486fe4 int
// GLOBAL DAT_00486ff4 int
// GLOBAL DAT_00486ff8 undefined
// GLOBAL DAT_00486ffc undefined
// GLOBAL DAT_00487000 undefined
// GLOBAL s_Mn_TitleB_00486fe8 string

int * func_00486EE8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_004B9A10(param_1,0);
  iVar2 = DAT_00486fe4;
  iVar1 = DAT_00486fe0;
  piVar3[0xe] = DAT_00486fe0 + 0x54;
  *piVar3 = iVar1;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  piVar3[0x1e] = iVar2;
  piVar3[0x1f] = 0;
  *(undefined2 *)(piVar3 + 0x20) = 0;
  *(undefined2 *)((int)piVar3 + 0x82) = 0xffff;
  iVar1 = DAT_00486ff4;
  piVar3[0x21] = iVar2;
  piVar3[0x22] = 0;
  local_1c = s_Mn_TitleB_00486fe8;
  local_20 = iVar1;
  (**(code **)(*piVar3 + 0x38))(piVar3,&local_20,0);
  piVar4 = (int *)piVar3[7];
  func_0016773C((int)piVar4,3);
  local_1c = &DAT_00486ff8;
  local_20 = iVar1;
  func_00166C20(piVar4,0,&local_20,0);
  local_1c = &DAT_00486ffc;
  local_20 = iVar1;
  func_00166C20(piVar4,1,&local_20,0);
  local_1c = &DAT_00487000;
  local_20 = iVar1;
  func_00166C20(piVar4,2,&local_20,0);
  piVar3[10] = (int)piVar4;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 1;
  piVar3[0x1f] = (int)piVar4;
  *(undefined2 *)((int)piVar3 + 0x76) = 0;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  piVar3[0x22] = (int)piVar4;
  *(undefined2 *)((int)piVar3 + 0x82) = 2;
  *(undefined2 *)(piVar3 + 0x20) = 0;
  return piVar3;
}

