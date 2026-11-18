#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00172378;
extern undefined4 *DAT_0017237c;

// USA 0017234C <- EU 0017234C (Ghidra, non-matching)
// GLOBAL DAT_00172378 undefined4
// GLOBAL DAT_0017237c undefined4 *

undefined4 * func_0017234C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0017237c;
  *param_1 = DAT_00172378;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

