#include "ghidra_types.h"


// USA 001139F8 <- EU 001139F8 (Ghidra, non-matching)

int func_001139F8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 + 0xec000000U < 0x8000000) {
    iVar1 = param_1 + 0xc000000;
  }
  else if ((param_1 + 0xe1000000U < 0x600000) || (param_1 == 0x1f600000)) {
    iVar1 = param_1 + -0x7000000;
  }
  return iVar1;
}

