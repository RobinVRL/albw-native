#include "ghidra_types.h"

extern float DAT_0053eec0;

// USA 0053EE40 <- EU 0053EE18 (Ghidra, non-matching)
// GLOBAL DAT_0053eec0 float

undefined4 func_0053EE40(int param_1,float fparam_0)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x14);
  fVar2 = *(float *)(iVar1 + 0xc);
  if (*(float *)(iVar1 + 8) < fVar2) {
    if (((fVar2 < *(float *)(iVar1 + 0x14)) && (fVar2 < fparam_0)) &&
       (fparam_0 <= *(float *)(iVar1 + 0x14))) {
      return 1;
    }
    if (fparam_0 < DAT_0053eec0) {
      return 0;
    }
  }
  else if (fparam_0 <= fVar2) {
    return 0;
  }
  if (*(float *)(iVar1 + 8) < fparam_0) {
    return 0;
  }
  return 1;
}

