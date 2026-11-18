#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_0033479C(int param_1);

// USA 00334754 <- EU 00334730 (Ghidra, non-matching)

undefined4 func_00334754(int param_1,int param_2)

{
  func_0033479C(param_1);
  return func_0014E138(param_1,param_2);
}

