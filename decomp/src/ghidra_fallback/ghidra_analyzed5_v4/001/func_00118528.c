#include "ghidra_types.h"

extern undefined4 *DAT_00118548;

// USA 00118528 <- EU 00118528 (Ghidra, non-matching)
// GLOBAL DAT_00118548 undefined4 *

undefined2 * func_00118528(undefined2 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00118548;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *(undefined4 *)(param_1 + 2) = *puVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  return param_1;
}

