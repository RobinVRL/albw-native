#include "ghidra_types.h"


// USA 001E8C74 <- EU 001E8C74 (Ghidra, non-matching)

undefined4 func_001E8C74(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001e8c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(**(int **)(*(int *)(param_1 + 0x1c8) + 0xe34) + 0x2c))(*(int **)(*(int *)(param_1 + 0x1c8) + 0xe34));
}

