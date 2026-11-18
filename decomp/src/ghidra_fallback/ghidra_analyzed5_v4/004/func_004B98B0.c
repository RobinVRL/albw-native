#include "ghidra_types.h"

extern int func_004B964C(int param_1);
extern int func_004B9998(int param_1);

// USA 004B98B0 <- EU 004B9888 (Ghidra, non-matching)

undefined4 func_004B98B0(int param_1)

{
  func_004B964C(param_1);
  return func_004B9998(param_1);
}

