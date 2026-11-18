#include "ghidra_types.h"

extern int func_00611B78(int param_1);

// USA 001E6CA4 <- EU 001E6CA4 (Ghidra, non-matching)

int func_001E6CA4(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x9f9) < 3) {
    iVar1 = func_00611B78(param_1);
    return iVar1;
  }
  return param_1;
}

