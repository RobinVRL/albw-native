#include "ghidra_types.h"

extern int func_002D4080(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);

// USA 003615E8 <- EU 003615C4 (Ghidra, non-matching)

undefined4 func_003615E8(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  return func_002D4080(*(int *)(param_1 + 0x10),fparam_0,fparam_1,fparam_2,fparam_3);
}

