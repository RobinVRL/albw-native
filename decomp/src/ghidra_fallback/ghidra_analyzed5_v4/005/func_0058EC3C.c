#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EC3C <- EU 0058EC14 (Ghidra, non-matching)

undefined4 func_0058EC3C(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

