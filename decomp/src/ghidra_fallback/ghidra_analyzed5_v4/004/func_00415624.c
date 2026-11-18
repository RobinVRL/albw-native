#include "ghidra_types.h"


// USA 00415624 <- EU 00415604 (Ghidra, non-matching)

undefined4 func_00415624(int param_1)

{
  if (*(int *)(param_1 + 0x1e8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041561c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(param_1 + 0x1e8))(*(undefined4 *)(param_1 + 0x1ec));
  }
  return 0;
}

