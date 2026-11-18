#include "ghidra_types.h"

extern float DAT_002d40c4;
extern float DAT_002d40c8;
extern float DAT_002d40cc;
extern float DAT_002d40d0;
extern undefined4 DAT_002d40d4;

// USA 002D4080 <- EU 002D405C (Ghidra, non-matching)
// GLOBAL DAT_002d40c4 float
// GLOBAL DAT_002d40c8 float
// GLOBAL DAT_002d40cc float
// GLOBAL DAT_002d40d0 float
// GLOBAL DAT_002d40d4 undefined4

void func_002D4080(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_1 + 0x5f8);
  *(undefined4 *)(iVar2 + 0x20) = 0x1e;
  uVar1 = DAT_002d40d4;
  fVar3 = DAT_002d40c4;
  if (*(char *)(iVar2 + 0x38) == '\0') {
    fVar3 = DAT_002d40c8;
  }
  fVar4 = fVar3 * DAT_002d40cc;
  *(float *)(iVar2 + 0x24) = (fVar3 * DAT_002d40cc - *(float *)(iVar2 + 0x10)) * DAT_002d40d0;
  *(float *)(iVar2 + 0x28) = fVar4 - *(float *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x2c) = uVar1;
  *(undefined4 *)(iVar2 + 0x34) = uVar1;
  *(undefined4 *)(iVar2 + 0x30) = uVar1;
  return;
}

