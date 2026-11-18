#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0016671c;
extern undefined4 *DAT_00166720;

// USA 001666EC <- EU 001666F0 (Ghidra, non-matching)
// GLOBAL DAT_0016671c undefined4
// GLOBAL DAT_00166720 undefined4 *

undefined4 * func_001666EC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00166720;
  *param_1 = DAT_0016671c;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

