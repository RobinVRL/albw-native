#include "ghidra_types.h"

extern undefined4 DAT_00495c90;

// USA 00495CA8 <- EU 00495C80 (Ghidra, non-matching)
// GLOBAL DAT_00495c90 undefined4

undefined4 func_00495CA8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00495c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x44))(param_1);
}

