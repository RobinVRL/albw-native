#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_002c30bc;
extern undefined4 *DAT_002c30c0;

// USA 002C30B4 <- EU 002C3090 (Ghidra, non-matching)
// GLOBAL DAT_002c30bc undefined4
// GLOBAL DAT_002c30c0 undefined4 *

undefined4 * func_002C30B4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_002c30c0;
  *param_1 = DAT_002c30bc;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

