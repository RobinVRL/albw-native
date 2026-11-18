#include "ghidra_types.h"

extern undefined4 DAT_00495d8c;

// USA 00495DA4 <- EU 00495D7C (Ghidra, non-matching)
// GLOBAL DAT_00495d8c undefined4

undefined4 func_00495DA4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00495d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x44))(param_1);
}

