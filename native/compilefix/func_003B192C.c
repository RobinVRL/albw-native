/* USA 003B192C <- EU 003B1908 (stage-2 Ghidra text) with a dropped indirect-call argument restored
 * (CLASS indirect call dropped arg, BOOT_LOG 129): vtable +0x138 (state change) takes (this, state, 1); at
 * the site Ghidra printed as (param_1,1) the ARM sets r2 = 1; mov r1, r2 (scratchpad vsite.py check). */
#include "ghidra_types.h"

extern float DAT_003b1970;

// USA 003B192C <- EU 003B1908 (Ghidra, non-matching)
// GLOBAL DAT_003b1970 float

undefined4 func_003B192C(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1[0x12] + 0x8dc) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_003b1970) {
      if (*(float *)(iVar1 + 8) <= DAT_003b1970) goto LAB_003b195c;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_003b195c:
                    /* WARNING: Could not recover jumptable at 0x003b196c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x138))(param_1,1,1);
    }
  }
  return 0;
}

