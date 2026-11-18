// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001DFF84(int param_1,uint param_2);

// USA 0025B7B0 <- EU 0025B7D8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0025B7B0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001DFF84(*(int *)(param_1 + 0x10),param_2);
  }
  return 0;
}

