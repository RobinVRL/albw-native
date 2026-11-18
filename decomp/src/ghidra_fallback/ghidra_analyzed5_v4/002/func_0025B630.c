#include "ghidra_types.h"

extern int func_001DF6DC(int param_1,float fparam_0,float fparam_1);

// USA 0025B630 <- EU 0025B658 (Ghidra, non-matching)

undefined4 func_0025B630(int param_1,float fparam_0,float fparam_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001DF6DC(*(int *)(param_1 + 0x10),fparam_0,fparam_1);
  }
  return 0;
}

