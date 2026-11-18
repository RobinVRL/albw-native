#include "ghidra_types.h"

extern float DAT_0040e35c;
extern float DAT_0040e360;
extern float DAT_0040e364;
extern float DAT_0040e368;
extern float DAT_0040e36c;

// USA 0040E318 <- EU 0040E2F8 (Ghidra, non-matching)
// GLOBAL DAT_0040e35c float
// GLOBAL DAT_0040e360 float
// GLOBAL DAT_0040e364 float
// GLOBAL DAT_0040e368 float
// GLOBAL DAT_0040e36c float

undefined4 func_0040E318(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = DAT_0040e35c;
  if ((param_2 != 0x7f) && (fVar1 = DAT_0040e360, param_2 != 0x7e)) {
    if (param_2 < 0x32) {
      fVar1 = (float)VectorSignedToFloat(param_2 * 2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar1 = fVar1 * DAT_0040e368 * DAT_0040e364;
    }
    else {
      fVar1 = (float)VectorSignedToFloat(0x7e - param_2,(byte)(in_fpscr >> 0x15) & 3);
      fVar1 = (DAT_0040e36c / fVar1) * DAT_0040e364;
    }
  }
  *(float *)(param_1 + 0xc) = fVar1;
  return (undefined4)param_1;
}

