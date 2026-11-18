#include "ghidra_types.h"


// USA 002973C4 <- EU 002973EC (Ghidra, non-matching)

undefined4 func_002973C4(int param_1,uint param_2)

{
  if (param_2 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00297408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0xe8 + param_2 * 0x10))();
  }
  return 0;
}

