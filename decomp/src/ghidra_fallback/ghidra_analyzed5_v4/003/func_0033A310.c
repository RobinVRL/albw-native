#include "ghidra_types.h"

extern int func_00324A1C(int param_1);
extern int func_004BFD14(int param_1);

// USA 0033A310 <- EU 0033A2EC (Ghidra, non-matching)

undefined4 func_0033A310(int param_1)

{
  if (*(char *)(param_1 + 0x989) != '\0') {
    return func_004BFD14(param_1);
  }
  return func_00324A1C(param_1);
}

