#include "ghidra_types.h"

extern int func_00321794(int param_1,uint param_2,undefined4 param_3);

// USA 004EBA2C <- EU 004EBA04 (Ghidra, non-matching)

undefined4 func_004EBA2C(int param_1,uint param_2,undefined4 param_3)

{
  return func_00321794(*(int *)(param_1 + 0x54),param_2,param_3);
}

