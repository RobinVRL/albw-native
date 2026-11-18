#include "ghidra_types.h"

extern float fRam003c23e4;
extern undefined4 uRam003c23e0;

// USA 003C23B8 <- EU 003C2394 (Ghidra, non-matching)
// GLOBAL UNK_003c23e0 undefined4
// GLOBAL UNK_003c23e4 float

undefined4 func_003C23B8(int param_1,int param_2)

{
  uint in_fpscr;
  undefined4 in_s0;
  float fVar1;
  
  if (*(uint *)(param_1 + 0x30) < 2) {
    *(int *)(param_1 + 0x40) = param_2;
    if (param_2 == 0) {
      in_s0 = uRam003c23e0;
    }
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x44) = in_s0;
    }
    else {
      fVar1 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x44) = fRam003c23e4 / fVar1;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return (undefined4)param_1;
}

