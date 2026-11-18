#include "ghidra_types.h"

extern undefined4 DAT_00408bb4;

// USA 00408BC8 <- EU 00408BA8 (Ghidra, non-matching)
// GLOBAL DAT_00408bb4 undefined4

undefined4 * func_00408BC8(undefined4 *param_1)

{
  *param_1 = DAT_00408bb4;
  return param_1;
}

