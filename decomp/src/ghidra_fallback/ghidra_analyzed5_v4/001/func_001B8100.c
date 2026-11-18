#include "ghidra_types.h"

extern int func_0049116C(undefined4 *param_1);

// USA 001B8100 <- EU 001B8100 (Ghidra, non-matching)

int func_001B8100(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0049116C((undefined4 *)(param_1 + 0x50));
  return (int)(puVar1 + -0x14);
}

