#include "ghidra_types.h"

extern int func_001DF7A4(int param_1,float fparam_0);

// USA 0025B66C <- EU 0025B694 (Ghidra, non-matching)

undefined4 func_0025B66C(int param_1,float fparam_0)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001DF7A4(*(int *)(param_1 + 0x10),fparam_0);
  }
  return 0;
}

