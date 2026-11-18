#include "ghidra_types.h"

extern int func_00410E8C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00408ea0;

// USA 00408EA8 <- EU 00408E88 (Ghidra, non-matching)
// GLOBAL DAT_00408ea0 undefined4

undefined4 * func_00408EA8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00410E8C(param_1,1);
  *puVar1 = DAT_00408ea0;
  return puVar1;
}

