#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00328180;
extern undefined4 *DAT_00328184;

// USA 00328178 <- EU 00328154 (Ghidra, non-matching)
// GLOBAL DAT_00328180 undefined4
// GLOBAL DAT_00328184 undefined4 *

undefined4 * func_00328178(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00328184;
  *param_1 = DAT_00328180;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

