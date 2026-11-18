#include "ghidra_types.h"

extern int func_004ECF6C(int param_1);

// USA 004ECE94 <- EU 004ECE6C (Ghidra, non-matching)

int func_004ECE94(int param_1)

{
  func_004ECF6C(param_1);
  return param_1;
}

