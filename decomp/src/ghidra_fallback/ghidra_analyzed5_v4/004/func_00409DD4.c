#include "ghidra_types.h"

extern int func_00408BC8(undefined4 *param_1);
extern undefined4 DAT_00409dc0;

// USA 00409DD4 <- EU 00409DB4 (Ghidra, non-matching)
// GLOBAL DAT_00409dc0 undefined4

undefined4 * func_00409DD4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00409dc0;
  puVar1 = func_00408BC8(param_1);
  return puVar1;
}

