#include "ghidra_types.h"

extern int func_0010E2A4(undefined4 param_1,undefined4 param_2);
extern int func_0048FBB4(undefined4 *param_1);
extern undefined4 *DAT_0058fa74;

// USA 0058FA4C <- EU 0058FA24 (Ghidra, non-matching)
// GLOBAL DAT_0058fa74 undefined4 *

undefined4 func_0058FA4C(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = func_0048FBB4(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  piVar2 = func_0010E2A4(*DAT_0058fa74,puVar1);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0058fa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar2 + 0x1c))(piVar2,puVar1);
  }
  return 0;
}

