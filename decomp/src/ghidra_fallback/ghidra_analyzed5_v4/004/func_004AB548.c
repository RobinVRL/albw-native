#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_004ab54c;
extern undefined4 *DAT_004ab550;

// USA 004AB548 <- EU 004AB520 (Ghidra, non-matching)
// GLOBAL DAT_004ab54c undefined4
// GLOBAL DAT_004ab550 undefined4 *

undefined4 * func_004AB548(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004ab550;
  *param_1 = DAT_004ab54c;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

