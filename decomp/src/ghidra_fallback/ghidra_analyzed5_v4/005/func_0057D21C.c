#include "ghidra_types.h"


// USA 0057D21C <- EU 0057D1F4 (Ghidra, non-matching)

undefined4 func_0057D21C(int param_1)

{
  if ((char)(*(int **)(param_1 + 0x50))[0x13] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0057d214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(**(int **)(param_1 + 0x50) + 0x24))(*(int **)(param_1 + 0x50));
  }
  return 0;
}

