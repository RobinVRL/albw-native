#include "ghidra_types.h"

extern int func_0048A08C(int *param_1,int param_2);

// USA 00490438 <- EU 00490410 (Ghidra, non-matching)

undefined4 func_00490438(int param_1,int param_2)

{
  return func_0048A08C(*(int **)(param_1 + 0x50),param_2);
}

