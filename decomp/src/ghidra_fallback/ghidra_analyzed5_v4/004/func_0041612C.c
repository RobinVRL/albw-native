#include "ghidra_types.h"

extern int func_00413788(undefined4 *param_1);
extern undefined4 DAT_00416134;

// USA 0041612C <- EU 0041610C (Ghidra, non-matching)
// GLOBAL DAT_00416134 undefined4

undefined4 * func_0041612C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_00413788(param_1);
  *puVar1 = DAT_00416134;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return puVar1;
}

