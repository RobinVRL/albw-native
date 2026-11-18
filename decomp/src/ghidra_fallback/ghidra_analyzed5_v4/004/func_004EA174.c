#include "ghidra_types.h"

extern int func_002568B4(int param_1,undefined4 param_2,int param_3,undefined4 param_4);

// USA 004EA174 <- EU 004EA14C (Ghidra, non-matching)

undefined4 func_004EA174(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  return func_002568B4(*(int *)(param_1 + 0x34),param_2,param_3,param_4);
}

