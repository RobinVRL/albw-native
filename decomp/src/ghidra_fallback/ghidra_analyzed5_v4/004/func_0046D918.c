#include "ghidra_types.h"

extern int func_001B6D40(int param_1);
extern int func_004B964C(int param_1);

// USA 0046D918 <- EU 0046D8F0 (Ghidra, non-matching)

undefined4 func_0046D918(int param_1)

{
  func_001B6D40(param_1);
  return func_004B964C(param_1);
}

