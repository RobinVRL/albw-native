#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_004c8ed4;
extern undefined4 *DAT_004c8ed8;

// USA 004C8ED0 <- EU 004C8EA8 (Ghidra, non-matching)
// GLOBAL DAT_004c8ed4 undefined4
// GLOBAL DAT_004c8ed8 undefined4 *

undefined4 * func_004C8ED0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004c8ed8;
  *param_1 = DAT_004c8ed4;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

