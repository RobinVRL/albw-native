#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_004ed480;
extern undefined4 *DAT_004ed484;

// USA 004ED47C <- EU 004ED454 (Ghidra, non-matching)
// GLOBAL DAT_004ed480 undefined4
// GLOBAL DAT_004ed484 undefined4 *

undefined4 * func_004ED47C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004ed484;
  *param_1 = DAT_004ed480;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

