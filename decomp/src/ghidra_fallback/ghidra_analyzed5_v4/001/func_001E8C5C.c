#include "ghidra_types.h"


// USA 001E8C5C <- EU 001E8C5C (Ghidra, non-matching)

undefined4 func_001E8C5C(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001e8c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(**(int **)(*(int *)(param_1 + 0x1c8) + 0xe34) + 0x30))(*(int **)(*(int *)(param_1 + 0x1c8) + 0xe34));
}

