#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_002dfcac;
extern undefined4 *DAT_002dfcb0;

// USA 002DFC88 <- EU 002DFC64 (Ghidra, non-matching)
// GLOBAL DAT_002dfcac undefined4
// GLOBAL DAT_002dfcb0 undefined4 *

undefined4 func_002DFC88(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_002dfcb0;
  *param_1 = DAT_002dfcac;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

