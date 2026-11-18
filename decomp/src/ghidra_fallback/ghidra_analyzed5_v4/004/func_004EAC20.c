#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_004eac24;
extern undefined4 *DAT_004eac28;

// USA 004EAC20 <- EU 004EABF8 (Ghidra, non-matching)
// GLOBAL DAT_004eac24 undefined4
// GLOBAL DAT_004eac28 undefined4 *

undefined4 * func_004EAC20(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004eac28;
  *param_1 = DAT_004eac24;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

