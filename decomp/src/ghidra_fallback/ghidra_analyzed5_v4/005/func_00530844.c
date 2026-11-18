#include "ghidra_types.h"


// USA 00530844 <- EU 0053081C (Ghidra, non-matching)

void func_00530844(int param_1)

{
  float in_s0;
  
                    /* WARNING: Could not recover jumptable at 0x00530830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0x1c8) + 0xe34) + 0x24))(*(int **)(*(int *)(param_1 + 0x1c8) + 0xe34));
  return;
}

