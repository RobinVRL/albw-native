#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);

// USA 004A261C <- EU 004A25F4 (Ghidra, non-matching)

int * func_004A261C(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = func_0010CEE0(param_2 << 3,param_3,4);
  param_1[2] = iVar1;
  param_1[1] = 0;
  return param_1;
}

