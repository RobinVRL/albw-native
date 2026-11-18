#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00504594;
extern undefined4 *DAT_00504598;

// USA 00504574 <- EU 0050454C (Ghidra, non-matching)
// GLOBAL DAT_00504594 undefined4
// GLOBAL DAT_00504598 undefined4 *

undefined4 * func_00504574(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00504598;
  *param_1 = DAT_00504594;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

