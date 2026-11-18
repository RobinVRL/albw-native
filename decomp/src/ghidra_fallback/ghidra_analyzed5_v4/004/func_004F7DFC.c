#include "ghidra_types.h"

extern undefined4 DAT_004f7df0;
extern undefined4 *DAT_004f7df4;

// USA 004F7DFC <- EU 004F7DD4 (Ghidra, non-matching)
// GLOBAL DAT_004f7df0 undefined4
// GLOBAL DAT_004f7df4 undefined4 *

undefined4 func_004F7DFC(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_004f7df4;
  *param_1 = DAT_004f7df0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  param_1[1] = *puVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (undefined4)param_1;
}

