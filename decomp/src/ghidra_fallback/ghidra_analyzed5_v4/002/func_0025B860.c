#include "ghidra_types.h"

extern int func_001E0634(int param_1,int param_2,float fparam_0,float fparam_1);

// USA 0025B860 <- EU 0025B860 (Ghidra, function missing from the decomp table)

undefined4 func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001E0634(*(int *)(param_1 + 0x10),param_2,fparam_0,fparam_1);
  }
  return 0;
}

