#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00270974;
extern undefined4 *DAT_00270978;

// USA 00270920 <- EU 00270948 (Ghidra, non-matching)
// GLOBAL DAT_00270974 undefined4
// GLOBAL DAT_00270978 undefined4 *

undefined4 * func_00270920(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00270978;
  *param_1 = DAT_00270974;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

