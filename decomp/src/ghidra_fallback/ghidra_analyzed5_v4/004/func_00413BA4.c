#include "ghidra_types.h"

extern float DAT_00413bf8;
extern float DAT_00413bfc;
extern float DAT_00413c00;
extern float DAT_00413c04;
extern int DAT_00413c08;

// USA 00413BA4 <- EU 00413B84 (Ghidra, non-matching)
// GLOBAL DAT_00413bf8 float
// GLOBAL DAT_00413bfc float
// GLOBAL DAT_00413c00 float
// GLOBAL DAT_00413c04 float
// GLOBAL DAT_00413c08 int

float func_00413BA4(byte *param_1,float fparam_0)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_00413bf8;
  if ((fparam_0 <= DAT_00413bf8) && (fVar2 = fparam_0, fparam_0 < DAT_00413bfc)) {
    fVar2 = DAT_00413bfc;
  }
  fVar1 = *(float *)(*(int *)(DAT_00413c08 + (uint)*param_1 * 4) +
                    (int)(DAT_00413c00 + fVar2 * DAT_00413c00 * DAT_00413c04) * 4);
  fVar2 = DAT_00413bf8;
  if ((fVar1 <= DAT_00413bf8) && (fVar2 = fVar1, fVar1 < DAT_00413bfc)) {
    fVar2 = DAT_00413bfc;
  }
  return fVar2;
}

