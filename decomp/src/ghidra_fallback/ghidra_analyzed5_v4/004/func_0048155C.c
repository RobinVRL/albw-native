#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_004815bc;
extern undefined4 DAT_004815c0;
extern int DAT_004815c4;
extern int DAT_004815c8;

// USA 0048155C <- EU 00481534 (Ghidra, non-matching)
// GLOBAL DAT_004815bc int
// GLOBAL DAT_004815c0 undefined4
// GLOBAL DAT_004815c4 int
// GLOBAL DAT_004815c8 int

int * func_0048155C(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = func_004B9A10(param_1,0);
  iVar1 = DAT_004815bc;
  piVar2[0xe] = DAT_004815bc + 0x54;
  *piVar2 = iVar1;
  (**(code **)(iVar1 + 0x38))(piVar2,DAT_004815c0,0);
  piVar3 = (int *)piVar2[7];
  func_0016773C((int)piVar3,2);
  func_00166C20(piVar3,0,(int *)(DAT_004815c4 + param_2 * 8),0);
  func_00166C20(piVar3,1,(int *)(DAT_004815c8 + param_2 * 8),0);
  *(undefined1 *)((int)piVar2 + 0xf) = 0x4a;
  return piVar2;
}

