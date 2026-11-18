#include "ghidra_types.h"

extern int func_00691F30(uint param_1,uint param_2);
extern float DAT_005239ac;
extern float DAT_005239b0;

// USA 00523958 <- EU 00523930 (Ghidra, non-matching)
// GLOBAL DAT_005239ac float
// GLOBAL DAT_005239b0 float

float func_00523958(int param_1)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  fVar2 = DAT_005239ac;
  if (*(char *)(param_1 + 0x70) != '\t') {
    if (*(uint *)(param_1 + 0x2c0) != 0xffffffff || *(uint *)(param_1 + 0x2c4) != 0xffffffff) {
      fVar1 = ALBW_AS_F32(func_00691F30(*(uint *)(param_1 + 0x2c0),*(uint *)(param_1 + 0x2c4)));
      fVar3 = (float)VectorUnsignedToFloat
                               (*(undefined4 *)(param_1 + 0x2c8),(byte)(in_fpscr >> 0x15) & 3);
      fVar3 = fVar3 / fVar1;
      if ((fVar2 <= fVar3) && (fVar2 = fVar3, DAT_005239b0 < fVar3)) {
        fVar2 = DAT_005239b0;
      }
    }
  }
  return fVar2;
}

