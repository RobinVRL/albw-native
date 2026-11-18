#include "ghidra_types.h"

extern int func_0014F794(int param_1);

// USA 00324A18 <- EU 003249F4 (Ghidra, non-matching)

undefined4 func_00324A18(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0014F794(param_1);
  *(char *)(param_1 + 0x471) = (char)uVar1;
  return uVar1;
}

