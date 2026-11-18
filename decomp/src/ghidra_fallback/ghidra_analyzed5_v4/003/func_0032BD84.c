#include "ghidra_types.h"

extern float DAT_0032bde8;
extern float DAT_0032bdec;
extern float DAT_0032bdf0;
extern float DAT_0032bdf4;
extern float DAT_0032bdf8;

// USA 0032BD84 <- EU 0032BD60 (Ghidra, non-matching)
// GLOBAL DAT_0032bde8 float
// GLOBAL DAT_0032bdec float
// GLOBAL DAT_0032bdf0 float
// GLOBAL DAT_0032bdf4 float
// GLOBAL DAT_0032bdf8 float

void func_0032BD84(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = DAT_0032bdf4;
  fVar1 = DAT_0032bde8;
  fVar2 = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0xc);
  fVar3 = DAT_0032bde8;
  if ((DAT_0032bde8 < fVar2) && (fVar3 = DAT_0032bdec, fVar2 < DAT_0032bdf0)) {
    fVar3 = (DAT_0032bdec * (fVar2 - DAT_0032bde8)) / DAT_0032bdf0 + DAT_0032bde8;
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0xa88) + 0x74) - DAT_0032bde8;
  *(float *)(param_1 + 0x564) = DAT_0032bde8;
  fVar4 = fVar3 * (fVar2 / fVar4) * DAT_0032bdf8;
  *(float *)(param_1 + 0x568) = fVar1;
  *(float *)(param_1 + 0x56c) = fVar4;
  return;
}

