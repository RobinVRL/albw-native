#include "ghidra_types.h"

extern float func_0059090C(float fparam_0);
extern float DAT_005692d0;
extern float DAT_005692d4;

// USA 00569264 <- EU 0056923C (Ghidra, non-matching)
// GLOBAL DAT_005692d0 float
// GLOBAL DAT_005692d4 float

float func_00569264(int param_1,float *param_2,int param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_1 + 0xd0);
  fVar3 = DAT_005692d4;
  if ((bVar1 & 3) == 0) {
    fVar2 = *param_2 * DAT_005692d4;
    if (param_3 != 0) {
      fVar2 = func_0059090C(*param_2 * DAT_005692d4);
    }
  }
  else {
    fVar2 = DAT_005692d0;
    if ((bVar1 & 3) == 2) {
      fVar2 = *param_2;
    }
  }
  if ((((uint)bVar1 << 0x1c) >> 0x1e == 0) && (param_3 != 0)) {
    func_0059090C(param_2[1] * fVar3);
  }
  return fVar2;
}

