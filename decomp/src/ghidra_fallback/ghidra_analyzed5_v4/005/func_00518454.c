#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00518458;
extern undefined4 *DAT_0051845c;

// USA 00518454 <- EU 0051842C (Ghidra, non-matching)
// GLOBAL DAT_00518458 undefined4
// GLOBAL DAT_0051845c undefined4 *

undefined4 * func_00518454(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0051845c;
  *param_1 = DAT_00518458;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

