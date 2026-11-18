#include "ghidra_types.h"

extern float DAT_0013dc58;
extern float DAT_0013dc5c;
extern float DAT_0013dc60;
extern float DAT_0013dc64;

// USA 0013DC0C <- EU 0013DC0C (Ghidra, non-matching)
// GLOBAL DAT_0013dc58 float
// GLOBAL DAT_0013dc5c float
// GLOBAL DAT_0013dc60 float
// GLOBAL DAT_0013dc64 float

void func_0013DC0C(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (DAT_0013dc64 *
          ((*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x594)) - DAT_0013dc5c)) /
          DAT_0013dc60 + DAT_0013dc58;
  fVar1 = DAT_0013dc58;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar2)) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x59c) = fVar2;
  *(float *)(param_1 + 0x59c) = fVar1;
  return;
}

