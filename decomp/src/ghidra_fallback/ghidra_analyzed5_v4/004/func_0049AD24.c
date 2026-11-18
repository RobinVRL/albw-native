#include "ghidra_types.h"

extern undefined4 *DAT_0049ad14;

// USA 0049AD24 <- EU 0049ACFC (Ghidra, non-matching)
// GLOBAL DAT_0049ad14 undefined4 *

undefined4 func_0049AD24(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0049ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*(int *)*DAT_0049ad14 + 0x8c))((int *)*DAT_0049ad14,param_1);
}

