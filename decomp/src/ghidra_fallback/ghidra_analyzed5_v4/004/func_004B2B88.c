#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_004b2ba8;
extern undefined4 *DAT_004b2bac;

// USA 004B2B88 <- EU 004B2B60 (Ghidra, non-matching)
// GLOBAL DAT_004b2ba8 undefined4
// GLOBAL DAT_004b2bac undefined4 *

undefined4 func_004B2B88(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004b2bac;
  *param_1 = DAT_004b2ba8;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

