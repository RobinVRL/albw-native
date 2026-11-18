#include "ghidra_types.h"

extern int func_0010E2A4(undefined4 param_1,undefined4 param_2);
extern undefined4 *DAT_0058fa20;

// USA 00490970 <- EU 00490948 (Ghidra, non-matching)
// GLOBAL DAT_0058fa20 undefined4 *

void func_0058FA08(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = func_0010E2A4(*DAT_0058fa20,param_1);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0058fa18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
    return;
  }
  return;
}

