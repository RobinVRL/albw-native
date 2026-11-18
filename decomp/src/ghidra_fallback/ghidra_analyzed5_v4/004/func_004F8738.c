#include "ghidra_types.h"

extern undefined4 *DAT_004f8740;
extern undefined4 DAT_004f8744;
extern undefined4 DAT_004f8748;

// USA 004F8738 <- EU 004F8710 (Ghidra, non-matching)
// GLOBAL DAT_004f8740 undefined4 *
// GLOBAL DAT_004f8744 undefined4
// GLOBAL DAT_004f8748 undefined4

undefined4 func_004F8738(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_004f8748;
  uVar1 = DAT_004f8744;
  uVar3 = DAT_004f8740[1];
  uVar4 = DAT_004f8740[2];
  *param_1 = *DAT_004f8740;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = 0;
  return (undefined4)param_1;
}

