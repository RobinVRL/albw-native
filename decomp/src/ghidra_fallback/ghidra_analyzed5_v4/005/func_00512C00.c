#include "ghidra_types.h"


// USA 00512C00 <- EU 00512BD8 (Ghidra, non-matching)

undefined4 func_00512C00(int *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00512be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x4c))(param_1);
}

