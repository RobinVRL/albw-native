#include "ghidra_types.h"

extern int *DAT_00182e4c;

// USA 00182E1C <- EU 00182E1C (Ghidra, non-matching)
// GLOBAL DAT_00182e4c int *

undefined4 func_00182E1C(int *param_1)

{
  if (*(char *)(*DAT_00182e4c + 0x70) != '\x04') {
                    /* WARNING: Could not recover jumptable at 0x00182e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_1 + 0xac))(param_1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00182e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
}

