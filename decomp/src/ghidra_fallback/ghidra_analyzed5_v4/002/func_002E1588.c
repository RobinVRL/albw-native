#include "ghidra_types.h"

extern undefined4 DAT_002e159c;
extern undefined4 DAT_002e15a0;
extern undefined4 DAT_002e15a4;

// USA 002E1588 <- EU 002E1564 (Ghidra, non-matching)
// GLOBAL DAT_002e159c undefined4
// GLOBAL DAT_002e15a0 undefined4
// GLOBAL DAT_002e15a4 undefined4

undefined4 func_002E1588(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002e159c;
  *param_1 = DAT_002e159c;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  uVar1 = DAT_002e15a0;
  param_1[3] = DAT_002e15a0;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  uVar1 = DAT_002e15a4;
  param_1[7] = 0;
  param_1[6] = uVar1;
  param_1[8] = uVar1;
  return (undefined4)param_1;
}

