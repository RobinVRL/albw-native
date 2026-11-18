#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_00420550;

// USA 00420500 <- EU 004204E0 (Ghidra, non-matching)
// GLOBAL DAT_00420550 undefined *

void func_00420500(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  iVar1 = func_00100118((int)(param_1 + 7),DAT_00420550,4,2);
  iVar1 = func_00100118(iVar1 + 8,DAT_00420550,4,2);
  *(int **)(iVar1 + -0x1c) = (int *)(iVar1 + -0x24) + *(int *)(iVar1 + -0x24) * 8 + 0x11;
  *(uint *)(iVar1 + -0xc) = param_4 >> 2;
  *(undefined4 *)(iVar1 + -0x14) = param_3;
  return;
}

