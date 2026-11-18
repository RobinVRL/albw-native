#include "ghidra_types.h"

extern undefined4 *DAT_00106340;
extern undefined4 DAT_00106344;

// USA 00106320 <- EU 00106320 (Ghidra, non-matching)
// GLOBAL DAT_00106340 undefined4 *
// GLOBAL DAT_00106344 undefined4

undefined4 func_00106320(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*(int *)*DAT_00106340 + 0xc))((int *)*DAT_00106340,param_1,0);
}

