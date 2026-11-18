#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern void func_003AC504(int param_1);

// USA 003AC4E4 <- EU 003AC4C0 (Ghidra, non-matching)

undefined4 func_003AC4E4(int param_1,int param_2)

{
  func_003AC504(param_1);
  return func_0014E138(param_1,param_2);
}

