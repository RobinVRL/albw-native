#include "ghidra_types.h"

extern float DAT_00413b04;
extern float DAT_00413b08;
extern float DAT_00413b0c;
extern int DAT_00413b10;

// USA 00413ADC <- EU 00413ABC (Ghidra, non-matching)
// GLOBAL DAT_00413b04 float
// GLOBAL DAT_00413b08 float
// GLOBAL DAT_00413b0c float
// GLOBAL DAT_00413b10 int

float func_00413ADC(float fparam_0)

{
  float fVar1;
  
  fVar1 = DAT_00413b04;
  if ((fparam_0 <= DAT_00413b04) && (fVar1 = fparam_0, fparam_0 < DAT_00413b08)) {
    fVar1 = DAT_00413b08;
  }
  return *(float *)(DAT_00413b10 + ((int)(fVar1 * DAT_00413b0c) + 0x388) * 4);
}

