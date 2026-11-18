#include "ghidra_types.h"

extern float fRam00588020;
extern float fRam00588024;
extern float fRam00588028;

// USA 00588004 <- EU 00587FDC (Ghidra, non-matching)
// GLOBAL UNK_00588020 float
// GLOBAL UNK_00588024 float
// GLOBAL UNK_00588028 float

void func_00588004(undefined4 param_1,int param_2,float fparam_0,float fparam_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0xc) != 0) {
    fVar1 = *(float *)(*(int *)(param_2 + 0xc) + 0x1c) + fVar1;
  }
  fVar1 = fVar1 * fRam00588020;
  fVar2 = fRam00588024;
  if ((fRam00588024 <= fVar1) && (fVar2 = fVar1, fRam00588028 < fVar1)) {
    fVar2 = fRam00588028;
  }
  return;
}

