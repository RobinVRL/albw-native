#include "ghidra_types.h"

extern float DAT_00189020;
extern float DAT_00189024;
extern float DAT_00189028;
extern float DAT_0018902c;
extern float DAT_00189030;
extern float DAT_00189034;
extern float DAT_00189038;
extern float DAT_0018903c;

// USA 00188F3C <- EU 00188F3C (Ghidra, non-matching)
// GLOBAL DAT_00189020 float
// GLOBAL DAT_00189024 float
// GLOBAL DAT_00189028 float
// GLOBAL DAT_0018902c float
// GLOBAL DAT_00189030 float
// GLOBAL DAT_00189034 float
// GLOBAL DAT_00189038 float
// GLOBAL DAT_0018903c float

void * func_00188F3C(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = DAT_00189030;
  fVar3 = DAT_00189028;
  fVar4 = DAT_00189020;
  cVar1 = *(char *)(param_1 + 0x500);
  if (cVar1 == '\x01') {
    fVar3 = (DAT_00189038 *
            ((*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x564)) - DAT_00189020)) /
            DAT_00189034 + DAT_00189020;
    *(float *)(param_1 + 0x568) = fVar3;
    if ((fVar3 < fVar4) || (fVar4 = fVar3, fVar3 <= fVar2)) goto LAB_00188ff0;
  }
  else {
    if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\0') {
      return (void *)param_1;
    }
    fVar2 = *(float *)(param_1 + 0x3e0);
    if (fVar2 <= DAT_00189024) {
      fVar5 = *(float *)(param_1 + 0x568) - -fVar2 * DAT_0018903c;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x568) + fVar2 * DAT_0018902c;
    }
    *(float *)(param_1 + 0x568) = fVar5;
    if ((fVar5 < fVar4) || (fVar4 = fVar5, fVar2 = fVar3, fVar5 <= fVar3)) goto LAB_00188ff0;
  }
  fVar4 = fVar2;
LAB_00188ff0:
  *(float *)(param_1 + 0x568) = fVar4;
  return (void *)param_1;
}

