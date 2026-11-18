#include "ghidra_types.h"

extern int func_00410E8C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_004091d0;

// USA 004091D8 <- EU 004091B8 (Ghidra, non-matching)
// GLOBAL DAT_004091d0 undefined4

undefined4 * func_004091D8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00410E8C(param_1,0);
  *puVar1 = DAT_004091d0;
  return puVar1;
}

