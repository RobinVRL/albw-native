#include "ghidra_types.h"

extern float DAT_004d01b0;
extern float DAT_004d01b4;

// USA 004D0194 <- EU 004D016C (Ghidra, non-matching)
// GLOBAL DAT_004d01b0 float
// GLOBAL DAT_004d01b4 float

void func_004D0194(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = DAT_004d01b0;
  if ((DAT_004d01b0 <= fVar1) && (fVar2 = fVar1, DAT_004d01b4 < fVar1)) {
    fVar2 = DAT_004d01b4;
  }
  *(char *)(*(int *)(param_1 + 0x150) + 1) = (char)(int)fVar2;
  return;
}

