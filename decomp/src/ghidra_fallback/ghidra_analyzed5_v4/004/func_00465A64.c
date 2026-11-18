#include "ghidra_types.h"

extern int func_00466004(int param_1,int *param_2,undefined4 param_3,uint param_4);

// USA 00465A64 <- EU 00465A3C (Ghidra, non-matching)

void func_00465A64(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  func_00466004(param_1,param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 299) = 0;
  return;
}

