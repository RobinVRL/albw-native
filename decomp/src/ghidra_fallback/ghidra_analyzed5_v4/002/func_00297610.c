#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);

// USA 00297610 <- EU 00297638 (Ghidra, non-matching)

undefined4 func_00297610(int param_1,int param_2,float fparam_0)

{
  return func_0010C7F8(param_1 + 0x74,param_2,fparam_0);
}

