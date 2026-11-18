// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001DFFC4(int param_1,float fparam_0,float fparam_1);

// USA 0025B7C4 <- EU 0025B7EC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0025B7C4(int param_1)

{
  float in_s0;
  float in_s1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001DFFC4(*(int *)(param_1 + 0x10),in_s0,in_s1);
  }
  return 0;
}

