#include "ghidra_types.h"

extern undefined4 DAT_002615d0;
extern undefined4 DAT_002615d4;
extern undefined4 *DAT_002615d8;

// USA 00261574 <- EU 0026159C (Ghidra, non-matching)
// GLOBAL DAT_002615d0 undefined4
// GLOBAL DAT_002615d4 undefined4
// GLOBAL DAT_002615d8 undefined4 *

undefined4 * func_00261574(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = DAT_002615d8;
  *param_1 = DAT_002615d0;
  uVar1 = DAT_002615d4;
  param_1[1] = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  param_1[4] = *puVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar1;
  return param_1;
}

