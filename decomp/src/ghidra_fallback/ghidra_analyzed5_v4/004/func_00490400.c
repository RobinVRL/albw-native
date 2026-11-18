#include "ghidra_types.h"

extern int func_00489CB0(int *param_1,int param_2,int param_3);

// USA 00490400 <- EU 004903D8 (Ghidra, non-matching)

undefined4 func_00490400(int param_1,int param_2,int param_3)

{
  return func_00489CB0(*(int **)(param_1 + 0x50),param_2,param_3);
}

