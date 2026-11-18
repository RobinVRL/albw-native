#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);

// USA 002569EC <- EU 00256A14 (Ghidra, non-matching)

undefined4 func_002569EC(int param_1,int param_2,float fparam_0)

{
  return func_0010C7F8(*(int *)(param_1 + 0x18) + 0x28,param_2,fparam_0);
}

