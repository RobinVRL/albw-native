#include "ghidra_types.h"


// USA 00325144 <- EU 00325120 (Ghidra, non-matching)

undefined4 func_00325144(int *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00325128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x4c))(param_1);
}

