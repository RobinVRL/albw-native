#include "ghidra_types.h"


// USA 001E5B2C <- EU 001E5B2C (Ghidra, non-matching)

undefined4 func_001E5B2C(int *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001e5b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x4c))(param_1);
}

