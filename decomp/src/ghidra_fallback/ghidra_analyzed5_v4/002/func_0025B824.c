// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001E05E8(int param_1,float fparam_0);

// USA 0025B824 <- EU 0025B84C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0025B824(int param_1,float fparam_0)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001E05E8(*(int *)(param_1 + 0x10),fparam_0);
  }
  return 0;
}

