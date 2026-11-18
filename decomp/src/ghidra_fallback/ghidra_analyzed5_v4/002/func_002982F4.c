// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float DAT_00298368;
extern float DAT_0029836c;

// USA 002982F4 <- EU 002982D0 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00298368 float
// GLOBAL DAT_0029836c float

void func_002982F4(int param_1)

{
  float fVar1;
  float fVar2;
  uint in_fpscr;
  float fVar3;
  
  if (*(char *)(param_1 + 0x40c) != '\0') {
    return;
  }
  *(int *)(param_1 + 0x454) = (int)*(short *)(param_1 + 0x5e);
  *(undefined1 *)(param_1 + 0x40c) = 1;
  *(undefined1 *)(param_1 + 0x451) = 1;
  *(undefined1 *)(param_1 + 0x452) = 0;
  fVar2 = DAT_0029836c;
  fVar1 = DAT_00298368;
  fVar3 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * DAT_0029836c;
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar3 = fVar3 - DAT_00298368;
  }
  *(float *)(param_1 + 0x458) = fVar3;
  fVar3 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x24),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * fVar2;
  if (*(int *)(param_1 + 0x24) < 0) {
    fVar3 = fVar3 - fVar1;
  }
  *(float *)(param_1 + 0x45c) = fVar3;
  fVar3 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x28),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * fVar2;
  if (*(int *)(param_1 + 0x28) < 0) {
    fVar3 = fVar3 - fVar1;
  }
  *(float *)(param_1 + 0x460) = fVar3;
  return;
}

