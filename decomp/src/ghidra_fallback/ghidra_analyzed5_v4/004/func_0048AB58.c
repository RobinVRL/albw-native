#include "ghidra_types.h"


// USA 0048AB58 <- EU 0048AB30 (Ghidra, non-matching)

undefined4 func_0048AB58(int param_1)

{
  *(undefined1 *)(param_1 + 0x154) = 1;
                    /* WARNING: Could not recover jumptable at 0x0048ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(**(int **)(param_1 + 0x118) + 0x1c))(*(int **)(param_1 + 0x118));
}

