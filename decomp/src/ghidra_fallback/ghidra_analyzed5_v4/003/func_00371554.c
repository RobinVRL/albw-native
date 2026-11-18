#include "ghidra_types.h"

extern undefined4 DAT_0037155c;
extern undefined4 DAT_00371560;

// USA 00371554 <- EU 00371530 (Ghidra, non-matching)
// GLOBAL DAT_0037155c undefined4
// GLOBAL DAT_00371560 undefined4

undefined4 func_00371554(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0037155c;
  *param_1 = 0;
  uVar2 = DAT_00371560;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return (undefined4)param_1;
}

