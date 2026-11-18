#include "ghidra_types.h"

extern float DAT_00554948;
extern int DAT_0055494c;
extern int *DAT_00554950;

// USA 005548EC <- EU 005548C4 (Ghidra, non-matching)
// GLOBAL DAT_00554948 float
// GLOBAL DAT_0055494c int
// GLOBAL DAT_00554950 int *

float func_005548EC(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_00554948;
  if ((-1 < *(short *)(DAT_0055494c + param_1)) && (*(short *)(DAT_0055494c + param_1) < 1)) {
    fVar1 = *(float *)(param_1 + 0x2c8);
  }
  fVar2 = DAT_00554948;
  if (*(char *)(param_1 + 0x133) != '\0') {
    fVar2 = *(float *)(*DAT_00554950 + 0x80);
  }
  if ((param_2 != 0) && (-1 < *(int *)(param_1 + 0x110))) {
    fVar3 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 / *(float *)(param_1 + 0x120);
    if ((int)ALBW_AS_U32(fVar3) < 0x3f800001) {
      return *(float *)(param_1 + 0x114) + fVar1 + (fVar2 - *(float *)(param_1 + 0x114)) * fVar3;
    }
  }
  return fVar2 + fVar1;
}

