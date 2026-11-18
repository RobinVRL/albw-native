// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00255710(int param_1,undefined4 param_2);

// USA 00255A00 <- EU 00255A28 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_00255A00(int param_1)

{
  return func_00255710(*(int *)(param_1 + 0x10) + 0x40c,9);
}

