// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001E0634(int param_1,int param_2,float fparam_0,float fparam_1);

// USA 0025B838 <- EU 0025B860 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0025B838(int param_1,int param_2,float fparam_0,float fparam_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001E0634(*(int *)(param_1 + 0x10),param_2,fparam_0,fparam_1);
  }
  return 0;
}

