#include "ghidra_types.h"

extern int func_001E0098(int param_1,int *param_2,int param_3,int *param_4);

// USA 001E0628 <- EU 001E0628 (Ghidra, non-matching)

bool func_001E0628(int param_1,int *param_2,int param_3,int *param_4)

{
  bool bVar1;
  
  *(undefined1 *)(param_1 + 0x110) = 1;
  bVar1 = func_001E0098(param_1,param_2,param_3,param_4);
  return bVar1;
}

