#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0048c1fc;
extern undefined4 *DAT_0048c200;

// USA 0048C1F8 <- EU 0048C1D0 (Ghidra, non-matching)
// GLOBAL DAT_0048c1fc undefined4
// GLOBAL DAT_0048c200 undefined4 *

undefined4 * func_0048C1F8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0048c200;
  *param_1 = DAT_0048c1fc;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

