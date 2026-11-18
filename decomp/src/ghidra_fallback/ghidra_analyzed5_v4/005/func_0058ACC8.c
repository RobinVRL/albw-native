#include "ghidra_types.h"

extern float DAT_0058ad54;

// USA 0058ACC8 <- EU 0058ACA0 (Ghidra, non-matching)
// GLOBAL DAT_0058ad54 float

longlong func_0058ACC8(int param_1,float fparam_0)

{
  int iVar1;
  uint in_r1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x410);
  if (iVar1 != 0) {
    in_r1 = *(uint *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x14);
    fVar2 = *(float *)(iVar1 + 0xc);
    if (*(float *)(iVar1 + 8) < fVar2) {
      if (((fVar2 < *(float *)(iVar1 + 0x14)) && (fVar2 < fparam_0)) &&
         (fparam_0 <= *(float *)(iVar1 + 0x14))) goto LAB_0058ace4;
      if (fparam_0 < DAT_0058ad54) goto LAB_0058acec;
    }
    else if (fparam_0 <= fVar2) goto LAB_0058acec;
    if (*(float *)(iVar1 + 8) < fparam_0) {
LAB_0058acec:
      return (ulonglong)in_r1 << 0x20;
    }
  }
LAB_0058ace4:
  return CONCAT44(in_r1,1);
}

