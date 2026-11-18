#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_001C2080(int param_1);

// USA 001C1E54 <- EU 001C1E54 (Ghidra, non-matching)

undefined4 func_001C1E54(int param_1,int param_2)

{
  func_001C2080(param_1);
  return func_0014E138(param_1,param_2);
}

