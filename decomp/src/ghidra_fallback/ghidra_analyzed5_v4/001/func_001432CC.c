#include "ghidra_types.h"

extern int func_0014362C(int param_1);
extern int func_0014E138(int param_1,int param_2);

// USA 001432CC <- EU 001432CC (Ghidra, non-matching)

undefined4 func_001432CC(int param_1,int param_2)

{
  func_0014362C(param_1);
  return func_0014E138(param_1,param_2);
}

