#include "ghidra_types.h"

extern float DAT_00546274;
extern float DAT_00546278;
extern float DAT_0054627c;
extern float DAT_00546280;

// USA 00546264 <- EU 0054623C (Ghidra, non-matching)
// GLOBAL DAT_00546274 float
// GLOBAL DAT_00546278 float
// GLOBAL DAT_0054627c float
// GLOBAL DAT_00546280 float

float func_00546264(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_00546274;
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar1 = DAT_00546278;
  }
  fVar1 = fVar1 * DAT_0054627c;
  fVar2 = *(float *)(param_1 + 0x10);
  if (fVar1 < *(float *)(param_1 + 0x10)) {
    fVar2 = fVar1;
  }
  return (DAT_00546280 / fVar1) * fVar2;
}

