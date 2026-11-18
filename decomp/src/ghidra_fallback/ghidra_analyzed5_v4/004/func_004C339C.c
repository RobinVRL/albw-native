#include "ghidra_types.h"

extern int func_001E4AE4(int param_1,undefined4 param_2);
extern float func_004C2328(int param_1,undefined4 param_2);

// USA 004C339C <- EU 004C3378 (Ghidra, function missing from the decomp table)

bool func_004C339C(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = func_001E4AE4(param_1,param_2);
  if (bVar1) {
    func_004C2328(param_1,1);
  }
  return bVar1;
}

