// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"


// USA 00255D20 <- EU 00255D48 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_00255D20(int param_1,short param_2)

{
  *(short *)(*(int *)(param_1 + 0x10) + 0x50e) =
       param_2 + *(short *)(*(int *)(param_1 + 0x10) + 0x50e);
  return 1;
}

