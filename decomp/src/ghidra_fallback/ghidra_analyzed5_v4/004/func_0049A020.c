#include "ghidra_types.h"

extern int func_00490B60(int param_1);

// USA 0049A020 <- EU 00499FF8 (Ghidra, non-matching)

undefined4 func_0049A020(int param_1)

{
  return func_00490B60(param_1 + 0x110);
}

