#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_004D0C80(int param_1);

// USA 004D0C60 <- EU 004D0C38 (Ghidra, non-matching)

undefined4 func_004D0C60(int param_1,int param_2)

{
  func_004D0C80(param_1);
  return func_0014E138(param_1,param_2);
}

