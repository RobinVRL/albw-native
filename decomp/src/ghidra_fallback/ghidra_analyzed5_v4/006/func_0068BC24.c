#include "ghidra_types.h"


// USA 0068BC24 <- EU 0068BBFC (Ghidra, non-matching)

void func_0068BC24(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     ((UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0 ||
      (((*(uint *)(param_1 + 0xc) & 1) != 0 && (*(uint *)(param_1 + 0xc) != 0)))))) {
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE +
                     *(int *)(*(int *)(param_1 + 4) + ((int)*(uint *)(param_1 + 0xc) >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x0068bc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

