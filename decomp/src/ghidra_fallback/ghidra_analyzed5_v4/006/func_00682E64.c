#include "ghidra_types.h"


// USA 00682E64 <- EU 00682E3C (Ghidra, non-matching)

undefined4 func_00682E64(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     ((UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0 ||
      (((*(uint *)(param_1 + 0xc) & 1) != 0 && (*(uint *)(param_1 + 0xc) != 0)))))) {
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE +
                     *(int *)(*(int *)(param_1 + 4) + ((int)*(uint *)(param_1 + 0xc) >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00682e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

