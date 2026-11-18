#include "ghidra_types.h"


// USA 002E01F0 <- EU 002E01CC (Ghidra, non-matching)

undefined4 func_002E01F0(int *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x002e01d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x4c))(param_1);
}

