#include "ghidra_types.h"

extern undefined4 *DAT_002164e0;

// GLOBAL DAT_002164e0 undefined4 *
// USA 002164B0 <- EU 002164B0 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_002164B0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_002164e0;
  uVar2 = DAT_002164e0[1];
  uVar3 = DAT_002164e0[2];
  *param_1 = *DAT_002164e0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  param_1[3] = *puVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}

