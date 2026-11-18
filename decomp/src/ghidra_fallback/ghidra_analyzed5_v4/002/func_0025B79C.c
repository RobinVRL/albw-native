// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001DFF3C(int param_1,int param_2,int param_3);

// USA 0025B79C <- EU 0025B7C4 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0025B79C(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001DFF3C(*(int *)(param_1 + 0x10),param_2,param_3);
  }
  return 0;
}

