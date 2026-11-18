#include "ghidra_types.h"

extern undefined4 DAT_001520a4;
extern undefined4 DAT_001520a8;
extern undefined4 DAT_001520ac;

// USA 00152078 <- EU 00152078 (Ghidra, non-matching)
// GLOBAL DAT_001520a4 undefined4
// GLOBAL DAT_001520a8 undefined4
// GLOBAL DAT_001520ac undefined4

undefined4 func_00152078(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_001520a8;
  uVar1 = DAT_001520a4;
  *param_1 = DAT_001520a4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = DAT_001520ac;
  return (undefined4)param_1;
}

