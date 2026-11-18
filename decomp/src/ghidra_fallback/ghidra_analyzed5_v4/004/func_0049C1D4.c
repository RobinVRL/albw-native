#include "ghidra_types.h"

extern undefined4 *DAT_0049c1d8;
extern undefined4 *DAT_0049c1dc;

// USA 0049C1D4 <- EU 0049C1AC (Ghidra, non-matching)
// GLOBAL DAT_0049c1d8 undefined4 *
// GLOBAL DAT_0049c1dc undefined4 *

undefined4 * func_0049C1D4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0049c1d8;
  *param_1 = *DAT_0049c1d8;
  param_1[1] = *puVar1;
  param_1[2] = *puVar1;
  param_1[3] = *DAT_0049c1dc;
  return param_1;
}

