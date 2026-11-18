#include "ghidra_types.h"

extern undefined4 DAT_00496044;
extern undefined4 DAT_00496048;

// USA 00496040 <- EU 00496018 (Ghidra, non-matching)
// GLOBAL DAT_00496044 undefined4
// GLOBAL DAT_00496048 undefined4

undefined4 * func_00496040(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00496048;
  *param_1 = DAT_00496044;
  param_1[0x42] = uVar1;
  return param_1;
}

