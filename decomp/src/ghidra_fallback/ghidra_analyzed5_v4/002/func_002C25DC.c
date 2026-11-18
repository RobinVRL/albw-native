#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_002c25e4;
extern undefined4 *DAT_002c25e8;

// USA 002C25DC <- EU 002C25B8 (Ghidra, non-matching)
// GLOBAL DAT_002c25e4 undefined4
// GLOBAL DAT_002c25e8 undefined4 *

undefined4 * func_002C25DC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_002c25e8;
  *param_1 = DAT_002c25e4;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

