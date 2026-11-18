#include "ghidra_types.h"

extern float DAT_002d40c4;
extern float DAT_002d40c8;
extern float DAT_002d40cc;
extern float DAT_002d40d0;
extern undefined4 DAT_002d40d4;

// USA 002D4088 <- EU 002D4064 (Ghidra, non-matching)
// GLOBAL DAT_002d40c4 float
// GLOBAL DAT_002d40c8 float
// GLOBAL DAT_002d40cc float
// GLOBAL DAT_002d40d0 float
// GLOBAL DAT_002d40d4 undefined4

undefined4 func_002D4088(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x20) = 0x1e;
  uVar1 = DAT_002d40d4;
  fVar2 = DAT_002d40c4;
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar2 = DAT_002d40c8;
  }
  fVar3 = fVar2 * DAT_002d40cc;
  *(float *)(param_1 + 0x24) = (fVar2 * DAT_002d40cc - *(float *)(param_1 + 0x10)) * DAT_002d40d0;
  *(float *)(param_1 + 0x28) = fVar3 - *(float *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return (undefined4)param_1;
}

