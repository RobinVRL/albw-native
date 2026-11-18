#include "ghidra_types.h"

extern int DAT_003e189c;
extern float DAT_003e18a0;
extern int DAT_003e18a4;
extern float DAT_003e18a8;

// USA 003E183C <- EU 003E181C (Ghidra, non-matching)
// GLOBAL DAT_003e189c int
// GLOBAL DAT_003e18a0 float
// GLOBAL DAT_003e18a4 int
// GLOBAL DAT_003e18a8 float

float * func_003E183C(float *param_1,float *param_2,float fparam_0)

{
  uint uVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  for (fVar4 = ABS(fparam_0); DAT_003e189c <= (int)ALBW_AS_U32(fVar4); fVar4 = fVar4 - DAT_003e18a0) {
  }
  uVar5 = VectorFloatToUnsigned(fVar4,3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_003e18a8 <= fparam_0) << 0x1d;
  pfVar2 = (float *)(DAT_003e18a4 + (uVar5 & 0xff) * 0x10);
  fVar6 = (float)VectorUnsignedToFloat(uVar5 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar7 = pfVar2[1];
  fVar8 = pfVar2[3];
  fVar3 = *pfVar2 + (fVar4 - fVar6) * pfVar2[2];
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar3 = -fVar3;
  }
  *param_1 = fVar3;
  *param_2 = fVar7 + (fVar4 - fVar6) * fVar8;
  return param_1;
}

