#include "ghidra_types.h"

extern int DAT_00581f80;
extern int DAT_00581f84;
extern float DAT_00581f88;

// USA 00581F68 <- EU 00581F40 (Ghidra, non-matching)
// GLOBAL DAT_00581f80 int
// GLOBAL DAT_00581f84 int
// GLOBAL DAT_00581f88 float

float func_00581F68(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  fVar2 = DAT_00581f88;
  if (((iVar1 != 0) && (-1 < *(short *)(DAT_00581f80 + iVar1))) &&
     (iVar1 = iVar1 + *(short *)(DAT_00581f80 + iVar1) * DAT_00581f84 * 4, iVar1 != -0x183c)) {
    fVar2 = *(float *)(iVar1 + 0x1844);
  }
  return fVar2;
}

