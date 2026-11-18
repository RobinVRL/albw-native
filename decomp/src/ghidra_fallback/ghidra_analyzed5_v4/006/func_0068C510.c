#include "ghidra_types.h"

extern undefined4 *DAT_0068c50c;
extern undefined4 DAT_0068c510;

// USA 0068C510 <- EU 0068C4E8 (Ghidra, non-matching)
// GLOBAL DAT_0068c50c undefined4 *
// GLOBAL DAT_0068c510 undefined4

undefined4 * func_0068C510(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0068c50c;
  param_1[1] = 0;
  uVar2 = puVar1[1];
  param_1[2] = *puVar1;
  param_1[3] = uVar2;
  *param_1 = DAT_0068c510;
  return param_1;
}

