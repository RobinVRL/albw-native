#include "ghidra_types.h"

extern float DAT_00568b00;
extern float DAT_00568b04;
extern float DAT_00568b08;

// USA 00568AA4 <- EU 00568A7C (Ghidra, non-matching)
// GLOBAL DAT_00568b00 float
// GLOBAL DAT_00568b04 float
// GLOBAL DAT_00568b08 float

void func_00568AA4(float *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = DAT_00568b00;
  *param_1 = DAT_00568b00;
  param_1[1] = fVar4;
  param_1[2] = fVar4;
  param_1[3] = fVar4;
  bVar2 = *(byte *)(param_2 + 0x47);
  if ((bVar2 & 3) == 0) {
    fVar3 = *(float *)(param_2 + 0x3c) * DAT_00568b04;
  }
  else {
    fVar3 = fVar4;
    if ((bVar2 & 3) == 2) {
      fVar3 = -*(float *)(param_2 + 0x3c);
    }
  }
  uVar1 = ((uint)bVar2 << 0x1c) >> 0x1e;
  if (uVar1 == 0) {
    fVar4 = *(float *)(param_2 + 0x40) * DAT_00568b08;
  }
  else if (uVar1 == 2) {
    fVar4 = *(float *)(param_2 + 0x40);
  }
  *param_1 = fVar3;
  param_1[1] = fVar4;
  param_1[2] = fVar3 + *(float *)(param_2 + 0x3c);
  param_1[3] = fVar4 - *(float *)(param_2 + 0x40);
  return;
}

