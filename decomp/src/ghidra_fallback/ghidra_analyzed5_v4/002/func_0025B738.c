#include "ghidra_types.h"

extern int func_001DF8F8(int param_1,int *param_2);

// USA 0025B738 <- EU 0025B760 [EDITED REGION: check by hand] (Ghidra, non-matching)

undefined4 func_0025B738(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001DF8F8(*(int *)(param_1 + 0x10),param_2);
  }
  return 0;
}

