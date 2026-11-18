#include "ghidra_types.h"


// USA 00489CD8 <- EU 00489CB0 (Ghidra, non-matching)

undefined4 func_00489CD8(int param_1,int param_2)

{
  if ((char)(*(int **)(param_1 + 0x50))[0x13] != '\0' && param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00489cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(**(int **)(param_1 + 0x50) + 0x4c))(*(int **)(param_1 + 0x50));
  }
  return 0;
}

