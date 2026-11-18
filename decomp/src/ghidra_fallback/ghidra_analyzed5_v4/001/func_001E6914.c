#include "ghidra_types.h"

extern int func_004ECF6C(int param_1);

// USA 001E6914 <- EU 001E6914 (Ghidra, non-matching)

int func_001E6914(int param_1)

{
  func_004ECF6C(param_1);
  func_004ECF6C(param_1);
  return param_1;
}

