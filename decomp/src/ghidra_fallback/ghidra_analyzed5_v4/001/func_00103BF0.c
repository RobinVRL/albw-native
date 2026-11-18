#include "ghidra_types.h"


// USA 00103BF0 <- EU 00103BF0 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_00103BF0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  return;
}

