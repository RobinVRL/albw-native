#include "ghidra_types.h"

extern int DAT_00115190;
extern float DAT_001151c8;

// USA 00115194 <- EU 00115194 (Ghidra, non-matching)
// GLOBAL DAT_00115190 int
// GLOBAL DAT_001151c8 float

float func_00115194(uint param_1)

{
  float *pfVar1;
  uint in_fpscr;
  float fVar2;
  
  fVar2 = (float)VectorUnsignedToFloat(param_1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  pfVar1 = (float *)(DAT_00115190 + (param_1 >> 0x18) * 0x10);
  return (*pfVar1 + pfVar1[1] * fVar2 * DAT_001151c8) /
         (pfVar1[2] + pfVar1[3] * fVar2 * DAT_001151c8);
}

