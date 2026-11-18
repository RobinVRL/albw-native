#include "ghidra_types.h"

extern undefined4 DAT_001157f8;

// USA 001158E0 <- EU 001158E0 (Ghidra, non-matching)
// GLOBAL DAT_001157f8 undefined4

undefined4 func_001158E0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = DAT_001157f8;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[8];
  uVar8 = param_2[9];
  uVar9 = param_2[10];
  *param_1 = *param_2;
  param_1[4] = uVar2;
  param_1[8] = uVar3;
  param_1[3] = uVar1;
  param_1[1] = uVar4;
  param_1[5] = uVar5;
  param_1[9] = uVar6;
  param_1[7] = uVar1;
  param_1[2] = uVar7;
  param_1[6] = uVar8;
  param_1[10] = uVar9;
  param_1[0xb] = uVar1;
  return (undefined4)param_1;
}

