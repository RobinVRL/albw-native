#include "ghidra_types.h"


// USA 001E8C44 <- EU 001E8C44 (Ghidra, non-matching)

undefined4 func_001E8C44(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x001e8c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(**(int **)(*(int *)(param_1 + 0x1c8) + 0xe34) + 0x20))(*(int **)(*(int *)(param_1 + 0x1c8) + 0xe34));
}

