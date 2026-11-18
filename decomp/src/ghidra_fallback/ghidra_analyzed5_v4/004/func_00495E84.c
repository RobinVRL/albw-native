#include "ghidra_types.h"

extern undefined4 DAT_00495e70;
extern undefined4 DAT_00495e74;

// USA 00495E84 <- EU 00495E5C (Ghidra, non-matching)
// GLOBAL DAT_00495e70 undefined4
// GLOBAL DAT_00495e74 undefined4

undefined4 func_00495E84(int *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00495e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x44))(param_1,param_2,DAT_00495e74,DAT_00495e70);
}

