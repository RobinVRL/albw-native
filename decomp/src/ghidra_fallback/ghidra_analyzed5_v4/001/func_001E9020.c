#include "ghidra_types.h"


// USA 001E9020 <- EU 001E9020 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x001e905c) */

undefined4 func_001E9020(int param_1,int param_2)

{
  if ((*(float *)(param_2 + 8) <= *(float *)(param_1 + 8)) &&
     (*(float *)(param_1 + 8) != *(float *)(param_2 + 8))) {
    return 1;
  }
  return 0xffffffff;
}

