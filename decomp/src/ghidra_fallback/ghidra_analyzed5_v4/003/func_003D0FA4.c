#include "ghidra_types.h"

extern int func_003D0E10(int *param_1);
extern int DAT_003d0fa0;

// USA 003D0FA4 <- EU 003D0F80 (Ghidra, non-matching)
// GLOBAL DAT_003d0fa0 int

int * func_003D0FA4(int *param_1)

{
  *param_1 = DAT_003d0fa0;
  func_003D0E10(param_1);
  return param_1;
}

