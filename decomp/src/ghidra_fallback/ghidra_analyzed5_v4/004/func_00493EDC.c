#include "ghidra_types.h"

extern int func_0010E2A4(undefined4 param_1,undefined4 param_2);
extern undefined4 *DAT_0058fa74;

// USA 00493EDC <- EU 00493EB4 (Ghidra, non-matching)
// GLOBAL DAT_0058fa74 undefined4 *

void func_0058FA5C(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = func_0010E2A4(*DAT_0058fa74,param_1);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0058fa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
    return;
  }
  return;
}

