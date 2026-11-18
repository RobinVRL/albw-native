#include "ghidra_types.h"

extern int func_00409C60(int param_1,int *param_2);

// USA 0049A8EC <- EU 0049A8C4 (Ghidra, non-matching)

undefined4 func_0049A8EC(int param_1,int *param_2)

{
  func_00409C60(param_1 + 8,param_2);
  return 1;
}

