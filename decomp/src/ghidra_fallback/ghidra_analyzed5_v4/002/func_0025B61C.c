#include "ghidra_types.h"

extern int func_001DF5C4(int param_1,int param_2,float fparam_0);

// USA 0025B61C <- EU 0025B644 (Ghidra, non-matching)

undefined4 func_0025B61C(int param_1,int param_2,float fparam_0)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001DF5C4(*(int *)(param_1 + 0x10),param_2,fparam_0);
  }
  return 0;
}

