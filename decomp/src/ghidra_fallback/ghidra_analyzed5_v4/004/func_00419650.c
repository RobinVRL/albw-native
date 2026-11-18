#include "ghidra_types.h"

extern int func_00417C84(undefined4 *param_1);
extern undefined4 DAT_00419644;

// USA 00419650 <- EU 00419630 (Ghidra, non-matching)
// GLOBAL DAT_00419644 undefined4

undefined4 * func_00419650(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00417C84(param_1);
  *puVar1 = DAT_00419644;
  return puVar1;
}

