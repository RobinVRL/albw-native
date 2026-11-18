#include "ghidra_types.h"

extern int func_004ECF6C(int param_1);

// USA 001E692C <- EU 001E692C (Ghidra, non-matching)

void * func_001E692C(int param_1)

{
  func_004ECF6C(param_1);
  return (void *)param_1;
}

