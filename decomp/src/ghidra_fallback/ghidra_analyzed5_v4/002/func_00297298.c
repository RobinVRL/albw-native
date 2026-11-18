#include "ghidra_types.h"

extern int func_00296D70(int param_1,uint param_2,int param_3,int param_4,int param_5);

// USA 00297298 <- EU 002972C0 (Ghidra, non-matching)

undefined4 func_00297298(int param_1,int param_2)

{
  return func_00296D70(*(int *)(param_1 + 0x4c),0x10000,-1,param_2,1);
}

