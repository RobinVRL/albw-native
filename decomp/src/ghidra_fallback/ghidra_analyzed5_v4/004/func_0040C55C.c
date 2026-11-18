#include "ghidra_types.h"

extern undefined4 DAT_0040c558;
extern undefined4 DAT_0040c55c;
extern undefined4 DAT_0040c560;

// USA 0040C55C <- EU 0040C53C (Ghidra, non-matching)
// GLOBAL DAT_0040c558 undefined4
// GLOBAL DAT_0040c55c undefined4
// GLOBAL DAT_0040c560 undefined4

undefined4 * func_0040C55C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0040c558;
  param_1[0x23] = DAT_0040c55c;
  uVar2 = DAT_0040c560;
  *param_1 = uVar1;
  param_1[0x10] = uVar2;
  return param_1;
}

