#include "ghidra_types.h"

extern int func_001DF86C(int param_1,float fparam_0);

// USA 0025B694 <- EU 0025B6BC (Ghidra, non-matching)

undefined4 func_0025B694(int param_1,float fparam_0)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001DF86C(*(int *)(param_1 + 0x10),fparam_0);
  }
  return 0;
}

