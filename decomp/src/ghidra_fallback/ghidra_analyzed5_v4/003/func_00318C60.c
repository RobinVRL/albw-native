#include "ghidra_types.h"

extern int func_004ECF6C(int param_1);

// USA 00318C60 <- EU 00318C3C (Ghidra, non-matching)

void * func_00318C60(int param_1)

{
  func_004ECF6C(param_1);
  return (void *)param_1;
}

