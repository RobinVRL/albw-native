#include "ghidra_types.h"

extern int func_00168260(int param_1,uint param_2);

// USA 00231444 <- EU 00231444 (Ghidra, non-matching)

undefined4 func_00231444(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (-1 < *(short *)(param_1 + 2))) {
    return func_00168260(*(int *)(param_1 + 8),(int)*(short *)(param_1 + 2));
  }
  return 0;
}

