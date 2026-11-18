#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_004ae7ec;
extern undefined4 *DAT_004ae7f0;

// USA 004AE7E8 <- EU 004AE7C0 (Ghidra, non-matching)
// GLOBAL DAT_004ae7ec undefined4
// GLOBAL DAT_004ae7f0 undefined4 *

undefined4 * func_004AE7E8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004ae7f0;
  *param_1 = DAT_004ae7ec;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

