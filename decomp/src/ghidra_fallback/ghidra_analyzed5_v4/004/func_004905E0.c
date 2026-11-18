#include "ghidra_types.h"

extern float DAT_004905f8;
extern int DAT_004905fc;

// USA 004905E0 <- EU 004905B8 (Ghidra, non-matching)
// GLOBAL DAT_004905f8 float
// GLOBAL DAT_004905fc int

int func_004905E0(float fparam_0)

{
  int *piVar1;
  uint in_fpscr;
  int iVar2;
  float fVar3;
  
  iVar2 = (int)(fparam_0 * DAT_004905f8);
  piVar1 = (int *)(DAT_004905fc + iVar2 * 8);
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  iVar2 = VectorFloatToUnsigned(ALBW_AS_F32(piVar1[1]) * (fparam_0 * DAT_004905f8 - fVar3),3);
  return iVar2 + *piVar1;
}

