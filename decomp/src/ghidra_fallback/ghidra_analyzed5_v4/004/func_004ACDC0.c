#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_004acdc4;
extern undefined4 *DAT_004acdc8;

// USA 004ACDC0 <- EU 004ACD98 (Ghidra, non-matching)
// GLOBAL DAT_004acdc4 undefined4
// GLOBAL DAT_004acdc8 undefined4 *

undefined4 * func_004ACDC0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004acdc8;
  *param_1 = DAT_004acdc4;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

