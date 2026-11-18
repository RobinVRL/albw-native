#include "ghidra_types.h"

extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_005330BC(int param_1,int *param_2);

// USA 0014E338 <- EU 0014E338 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:8 undefined8

int * func_0014E338(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
                   undefined8 param_6)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = func_005330BC(*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8 + param_4 * 4),param_2);
  piVar2 = func_0014DF18(*(int *)(param_1 + 0x2d0),param_3,param_4,uVar1,(char)param_6,
                         (char)((ulonglong)param_6 >> 0x20));
  if (param_5 != 0) {
    *(int **)(param_1 + 0x34c) = piVar2;
  }
  return piVar2;
}

