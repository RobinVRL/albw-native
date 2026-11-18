// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001DF950(int param_1,undefined1 param_2,undefined4 param_3,int *param_4);

// USA 0025B74C <- EU 0025B774 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0025B74C(int param_1,undefined1 param_2,undefined4 param_3,int *param_4)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return func_001DF950(*(int *)(param_1 + 0x10),param_2,param_3,param_4);
  }
  return 0;
}

