#include "ghidra_types.h"

extern float DAT_004906ec;
extern float DAT_004906f0;
extern int DAT_004906f4;
extern float DAT_004906f8;

// USA 004906A8 <- EU 00490680 (Ghidra, non-matching)
// GLOBAL DAT_004906ec float
// GLOBAL DAT_004906f0 float
// GLOBAL DAT_004906f4 int
// GLOBAL DAT_004906f8 float

float func_004906A8(float fparam_0)

{
  float *pfVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)VectorSignedToFloat(((uint)((int)ALBW_AS_U32(fparam_0) << 1) >> 0x18) - 0x7f,
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (ALBW_AS_F32(((uint)ALBW_AS_U32(fparam_0) & 0x3fffffff | 0x3f800000)) - DAT_004906ec) * DAT_004906f0;
  uVar2 = VectorFloatToUnsigned(fVar3,3);
  pfVar1 = (float *)(DAT_004906f4 + (uVar2 & 0xffff) * 8);
  fVar5 = (float)VectorUnsignedToFloat(uVar2 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
  return *pfVar1 + (fVar3 - fVar5) * pfVar1[1] + fVar4 * DAT_004906f8;
}

