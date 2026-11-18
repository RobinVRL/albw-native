#include "ghidra_types.h"

extern float DAT_0040e520;
extern float DAT_0040e524;
extern float DAT_0040e528;
extern float DAT_0040e52c;
extern float DAT_0040e530;

// USA 0040E4DC <- EU 0040E4BC (Ghidra, non-matching)
// GLOBAL DAT_0040e520 float
// GLOBAL DAT_0040e524 float
// GLOBAL DAT_0040e528 float
// GLOBAL DAT_0040e52c float
// GLOBAL DAT_0040e530 float

undefined4 func_0040E4DC(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = DAT_0040e520;
  if ((param_2 != 0x7f) && (fVar1 = DAT_0040e524, param_2 != 0x7e)) {
    if (param_2 < 0x32) {
      fVar1 = (float)VectorSignedToFloat(param_2 * 2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar1 = fVar1 * DAT_0040e52c * DAT_0040e528;
    }
    else {
      fVar1 = (float)VectorSignedToFloat(0x7e - param_2,(byte)(in_fpscr >> 0x15) & 3);
      fVar1 = (DAT_0040e530 / fVar1) * DAT_0040e528;
    }
  }
  *(float *)(param_1 + 8) = fVar1;
  return (undefined4)param_1;
}

