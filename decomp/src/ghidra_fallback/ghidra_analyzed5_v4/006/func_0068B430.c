#include "ghidra_types.h"

extern undefined4 *DAT_0068b42c;
extern undefined4 DAT_0068b430;

// USA 0068B430 <- EU 0068B408 (Ghidra, non-matching)
// GLOBAL DAT_0068b42c undefined4 *
// GLOBAL DAT_0068b430 undefined4

undefined4 * func_0068B430(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0068b42c;
  param_1[1] = 0;
  uVar2 = puVar1[1];
  param_1[2] = *puVar1;
  param_1[3] = uVar2;
  *param_1 = DAT_0068b430;
  return param_1;
}

