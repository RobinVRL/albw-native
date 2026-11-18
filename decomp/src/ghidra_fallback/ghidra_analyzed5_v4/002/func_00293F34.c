#include "ghidra_types.h"

extern int func_00296D70(int param_1,uint param_2,int param_3,int param_4,int param_5);

// USA 00293F34 <- EU 00293F5C (Ghidra, non-matching)

undefined4 func_00293F34(int param_1)

{
  return func_00296D70(*(int *)(param_1 + 0x4c),0x10,-1,0xf,1);
}

