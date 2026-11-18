#include "ghidra_types.h"

extern float DAT_004be0e0;
extern float DAT_004be0e4;
extern float DAT_004be0e8;

// USA 004BDFFC <- EU 004BDFD4 (Ghidra, non-matching)
// GLOBAL DAT_004be0e0 float
// GLOBAL DAT_004be0e4 float
// GLOBAL DAT_004be0e8 float

float func_004BDFFC(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (fparam_0 <= fparam_1) {
    return DAT_004be0e0;
  }
  if (fparam_2 <= fparam_0) {
    return DAT_004be0e4;
  }
  fVar3 = fparam_2 - fparam_1;
  fVar2 = fparam_0 - fparam_1;
  if (fVar3 < fparam_3 + fparam_4) {
    return DAT_004be0e4;
  }
  fVar4 = DAT_004be0e4 / ((fVar3 * DAT_004be0e8 - fparam_3) - fparam_4);
  fVar1 = DAT_004be0e0;
  if (fparam_3 != DAT_004be0e0) {
    if (fVar2 <= fparam_3) {
      fVar1 = (fVar4 * fVar2 * fVar2) / fparam_3;
      goto joined_r0x004be0d4;
    }
    fVar1 = fVar4 * fparam_3;
  }
  if (fVar2 <= fVar3 - fparam_4) {
    fVar1 = fVar1 + fVar4 * DAT_004be0e8 * (fVar2 - fparam_3);
  }
  else {
    fVar1 = fVar1 + fVar4 * DAT_004be0e8 * ((fVar3 - fparam_3) - fparam_4);
    if ((fparam_4 != DAT_004be0e0) && (fVar1 = fVar1 + fVar4 * fparam_4, fVar2 < fVar3)) {
      fVar1 = fVar1 - (fVar4 * (fVar3 - fVar2) * (fVar3 - fVar2)) / fparam_4;
    }
  }
joined_r0x004be0d4:
  if (0x3f800000 < (int)ALBW_AS_U32(fVar1)) {
    return DAT_004be0e4;
  }
  return fVar1;
}

