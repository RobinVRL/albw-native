#include "ghidra_types.h"

extern float DAT_0039d4d8;
extern float DAT_0039d4dc;

// USA 0039D478 <- EU 0039D454 (Ghidra, non-matching)
// GLOBAL DAT_0039d4d8 float
// GLOBAL DAT_0039d4dc float

undefined4 func_0039D478(int param_1,float fparam_0)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  fVar4 = DAT_0039d4d8;
  uVar1 = *(uint *)(param_1 + 0x4f0);
  uVar2 = *(uint *)(param_1 + 0x4f4);
  if (uVar1 < uVar2) {
    uVar1 = uVar1 + 1;
    *(uint *)(param_1 + 0x4f0) = uVar1;
  }
  if (uVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x4f0);
  }
  fVar3 = DAT_0039d4dc;
  if ((uVar2 != 0 && uVar1 != 0) && (fVar3 = fVar4, uVar1 < uVar2)) {
    fVar3 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * *(float *)(param_1 + 0x4f8);
  }
  fVar4 = fVar4 - fVar3;
  if (*(char *)(param_1 + 0x410) == '\0' || *(char *)(param_1 + 0x410) == '\x03') {
    *(float *)(*(int *)(param_1 + 0x4d4) + 0x158) = fVar4;
    *(bool *)(param_1 + 0x508) = 0x3f7fffff < (int)ALBW_AS_U32(fVar4);
  }
  return (undefined4)param_1;
}

