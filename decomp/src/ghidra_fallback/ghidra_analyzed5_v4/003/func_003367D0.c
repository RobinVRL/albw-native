#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_00336920(int param_1);

// USA 003367D0 <- EU 003367AC (Ghidra, non-matching)

undefined4 func_003367D0(int param_1,int param_2)

{
  func_00336920(param_1);
  return func_0014E138(param_1,param_2);
}

