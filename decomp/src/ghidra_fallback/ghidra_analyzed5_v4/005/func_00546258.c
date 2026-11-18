#include "ghidra_types.h"

extern float DAT_00546274;
extern float DAT_00546278;
extern float DAT_0054627c;
extern float DAT_00546280;

// USA 00546258 <- EU 00546230 (Ghidra, non-matching)
// GLOBAL DAT_00546274 float
// GLOBAL DAT_00546278 float
// GLOBAL DAT_0054627c float
// GLOBAL DAT_00546280 float

float func_00546258(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x5f8);
  fVar2 = DAT_00546274;
  if (*(char *)(iVar1 + 0x38) == '\0') {
    fVar2 = DAT_00546278;
  }
  fVar2 = fVar2 * DAT_0054627c;
  fVar3 = *(float *)(iVar1 + 0x10);
  if (fVar2 < fVar3) {
    fVar3 = fVar2;
  }
  return (DAT_00546280 / fVar2) * fVar3;
}

