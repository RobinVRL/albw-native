#include "ghidra_types.h"

extern float DAT_00553064;
extern float DAT_00553068;

// USA 00553058 <- EU 00553030 (Ghidra, non-matching)
// GLOBAL DAT_00553064 float
// GLOBAL DAT_00553068 float

float func_00553058(int param_1)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = *(byte *)(param_1 + 0x324);
  if (((bVar1 & 1) == 0) || ((fVar2 = DAT_00553064, (bVar1 & 2) != 0 && ((bVar1 & 4) == 0)))) {
    fVar2 = *(float *)(param_1 + 0x15c);
  }
  return fVar2 * DAT_00553068;
}

