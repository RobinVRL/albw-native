#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0014a404;
extern undefined4 *DAT_0014a408;

// USA 0014A3D8 <- EU 0014A3D8 (Ghidra, non-matching)
// GLOBAL DAT_0014a404 undefined4
// GLOBAL DAT_0014a408 undefined4 *

undefined4 * func_0014A3D8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0014a408;
  *param_1 = DAT_0014a404;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

