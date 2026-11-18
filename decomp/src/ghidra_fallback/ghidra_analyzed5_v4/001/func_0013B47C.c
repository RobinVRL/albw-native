#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0013b4a8;
extern undefined4 *DAT_0013b4ac;

// USA 0013B47C <- EU 0013B47C (Ghidra, non-matching)
// GLOBAL DAT_0013b4a8 undefined4
// GLOBAL DAT_0013b4ac undefined4 *

undefined4 * func_0013B47C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0013b4ac;
  *param_1 = DAT_0013b4a8;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

