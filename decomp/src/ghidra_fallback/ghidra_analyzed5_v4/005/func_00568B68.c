#include "ghidra_types.h"

extern float DAT_00568b98;
extern float DAT_00568b9c;
extern undefined4 DAT_00568ba0;

// USA 00568B68 <- EU 00568B40 (Ghidra, non-matching)
// GLOBAL DAT_00568b98 float
// GLOBAL DAT_00568b9c float
// GLOBAL DAT_00568ba0 undefined4

float func_00568B68(int param_1)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = *(byte *)(param_1 + 0x47);
  if ((bVar1 & 3) == 0) {
    fVar2 = *(float *)(param_1 + 0x3c) * DAT_00568b9c;
  }
  else {
    fVar2 = DAT_00568b98;
    if ((bVar1 & 3) == 2) {
      fVar2 = -*(float *)(param_1 + 0x3c);
    }
  }
  if (((uint)bVar1 << 0x1c) >> 0x1e == 0) {
    return fVar2;
  }
  return fVar2;
}

