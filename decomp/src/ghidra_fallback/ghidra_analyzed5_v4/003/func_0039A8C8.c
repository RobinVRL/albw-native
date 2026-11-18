#include "ghidra_types.h"

extern float DAT_0039a934;
extern float DAT_0039a938;
extern float DAT_0039a93c;
extern float DAT_0039a940;
extern float DAT_0039a944;

// USA 0039A8C8 <- EU 0039A8A4 (Ghidra, non-matching)
// GLOBAL DAT_0039a934 float
// GLOBAL DAT_0039a938 float
// GLOBAL DAT_0039a93c float
// GLOBAL DAT_0039a940 float
// GLOBAL DAT_0039a944 float

void func_0039A8C8(int param_1,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_0039a934;
  fVar2 = *(float *)(param_1 + 0x7c);
  fVar3 = *(float *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x154) == 0) {
    *(float *)(param_1 + 0x7c) = fVar2 + (DAT_0039a93c - fVar2) * fparam_0;
    *(float *)(param_1 + 0x80) = fVar3 + (fVar1 - fVar3) * fparam_0;
    *(float *)(param_1 + 0x84) = fVar1;
    return;
  }
  if (*(int *)(param_1 + 0x154) != 4) {
    *(float *)(param_1 + 0x7c) = fVar2 + (DAT_0039a938 - fVar2) * fparam_0;
    *(float *)(param_1 + 0x80) = fVar3 + (fVar1 - fVar3) * fparam_0;
    *(float *)(param_1 + 0x84) = fVar1;
    return;
  }
  *(float *)(param_1 + 0x7c) = fVar2 + (DAT_0039a940 - fVar2) * fparam_0;
  fVar1 = DAT_0039a944;
  *(float *)(param_1 + 0x80) = fVar3 + (DAT_0039a944 - fVar3) * fparam_0;
  *(float *)(param_1 + 0x84) = fVar1;
  return;
}

