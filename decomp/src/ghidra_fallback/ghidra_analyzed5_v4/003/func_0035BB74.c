#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_0035BCBC(int param_1);

// USA 0035BB74 <- EU 0035BB50 (Ghidra, non-matching)

undefined4 func_0035BB74(int param_1,int param_2)

{
  func_0035BCBC(param_1);
  return func_0014E138(param_1,param_2);
}

