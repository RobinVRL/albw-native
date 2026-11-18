#include "ghidra_types.h"

extern int *DAT_0052120c;

// GLOBAL DAT_0052120c int *
// USA 005211F4 <- EU 00521194 (Ghidra, function missing from the decomp table)

undefined4 func_005211F4(int param_1,float fparam_0,float fparam_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = *(float **)(*DAT_0052120c + 0x1c);
  fVar3 = pfVar2[1] - (*(float *)(param_1 + 0x3d4) + fparam_1);
  if (((fVar3 <= *(float *)(param_1 + 0x3b0)) || (*(float *)(param_1 + 0x3b4) <= fVar3)) ||
     (fVar3 = *pfVar2 - *(float *)(param_1 + 0x3d0), fVar4 = pfVar2[2] - *(float *)(param_1 + 0x3d8)
     , fparam_0 * fparam_0 <= fVar3 * fVar3 + fVar4 * fVar4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

