#include "ghidra_types.h"


// USA 001062F0 <- EU 001062F0 (Ghidra, non-matching)

undefined4 func_001062F0(undefined *UNRECOVERED_JUMPTABLE,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001062f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (*(code *)UNRECOVERED_JUMPTABLE)(*param_2);
}

