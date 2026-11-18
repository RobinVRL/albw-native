#include "ghidra_types.h"

extern float DAT_00490670;
extern float DAT_00490674;
extern float DAT_00490678;
extern int DAT_0049067c;

// USA 00490628 <- EU 00490600 (Ghidra, non-matching)
// GLOBAL DAT_00490670 float
// GLOBAL DAT_00490674 float
// GLOBAL DAT_00490678 float
// GLOBAL DAT_0049067c int

float func_00490628(float fparam_0)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (int)(short)(int)(DAT_00490670 * fparam_0);
  fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (DAT_00490674 + (fparam_0 - fVar4 * DAT_00490674)) * DAT_00490678;
  uVar3 = VectorFloatToUnsigned(fVar4,3);
  pfVar2 = (float *)(DAT_0049067c + (uVar3 & 0xffff) * 8);
  fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
  return ABS(ALBW_AS_F32(((int)ALBW_AS_U32((*pfVar2 + (fVar4 - fVar5) * pfVar2[1])) + iVar1 * 0x800000)));
}

