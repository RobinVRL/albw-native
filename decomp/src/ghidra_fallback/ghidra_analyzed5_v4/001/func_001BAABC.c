#include "ghidra_types.h"

extern undefined4 DAT_001baaec;
extern undefined4 DAT_001baaf0;

// USA 001BAABC <- EU 001BAABC (Ghidra, non-matching)
// GLOBAL DAT_001baaec undefined4
// GLOBAL DAT_001baaf0 undefined4

undefined4 * func_001BAABC(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_001baaf0;
  uVar1 = DAT_001baaec;
  param_1[2] = DAT_001baaec;
  param_1[1] = uVar2;
  *param_1 = 0;
  param_1[4] = uVar1;
  param_1[3] = uVar2;
  param_1[6] = uVar1;
  param_1[7] = 0;
  param_1[5] = uVar2;
  return param_1;
}

