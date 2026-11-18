// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00255710(int param_1,undefined4 param_2);

// USA 00255A10 <- EU 00255A38 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_00255A10(int param_1)

{
  return func_00255710(param_1,9);
}

