#include "ghidra_types.h"


// USA 001150CC <- EU 001150CC (Ghidra, non-matching)

undefined4 func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  param_1[1] = param_3;
  param_1[4] = uVar1;
  param_1[3] = uVar2;
  param_1[2] = uVar3;
  *param_1 = uVar4;
  param_1[8] = uVar5;
  param_1[7] = uVar6;
  param_1[6] = uVar7;
  param_1[5] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xb] = uVar10;
  param_1[10] = uVar11;
  param_1[9] = uVar12;
  return (undefined4)param_1;
}

