#include "ghidra_types.h"

extern float DAT_004a0620;

// USA 004A05A0 <- EU 004A0578 (Ghidra, non-matching)
// GLOBAL DAT_004a0620 float

void * func_004A05A0(int param_1,int param_2,float fparam_0,float fparam_1,float fparam_2,
                    float fparam_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_004a0620;
  switch(*(undefined1 *)(param_1 + 0x14)) {
  case 0:
  case 3:
  case 4:
  case 5:
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)(param_2 + 8);
    if (DAT_004a0620 < fVar2) {
      *(float *)(param_1 + 4) = DAT_004a0620;
    }
    else {
      *(float *)(param_1 + 4) = fVar2;
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0xc) = fVar2;
    break;
  case 1:
  case 2:
    fVar2 = *(float *)(param_2 + 8);
    fVar3 = *(float *)(param_2 + 4);
    if (DAT_004a0620 < fVar2) {
      *(float *)(param_1 + 4) = DAT_004a0620;
    }
    else {
      *(float *)(param_1 + 4) = fVar2;
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0xc) = fVar2;
    break;
  default:
    return (void *)param_1;
  }
  if (fVar1 < fVar3) {
    *(float *)(param_1 + 8) = fVar1;
    *(float *)(param_1 + 0x10) = fVar3;
    return (void *)param_1;
  }
  *(float *)(param_1 + 8) = fVar3;
  *(float *)(param_1 + 0x10) = fVar1;
  return (void *)param_1;
}

