#include "ghidra_types.h"

extern undefined4 DAT_001fe6c0;
extern undefined4 *DAT_001fe6c4;

// USA 001FE680 <- EU 001FE680 (Ghidra, non-matching)
// GLOBAL DAT_001fe6c0 undefined4
// GLOBAL DAT_001fe6c4 undefined4 *

undefined4 func_001FE680(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_001fe6c4;
  *param_1 = DAT_001fe6c0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  param_1[1] = *puVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  param_1[4] = *puVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return (undefined4)param_1;
}

