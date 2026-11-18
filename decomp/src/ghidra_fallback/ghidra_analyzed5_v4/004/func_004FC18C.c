#include "ghidra_types.h"

extern undefined4 DAT_004fc19c;
extern float DAT_004fc1a0;

// USA 004FC18C <- EU 004FC164 (Ghidra, non-matching)
// GLOBAL DAT_004fc19c undefined4
// GLOBAL DAT_004fc1a0 float

void func_004FC18C(int param_1,int param_2)

{
  uint in_fpscr;
  undefined4 in_s0;
  float fVar1;
  
  if (param_2 == 0) {
    in_s0 = DAT_004fc19c;
  }
  *(int *)(param_1 + 0x6d4) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x6d8) = in_s0;
  }
  else {
    fVar1 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x6d8) = DAT_004fc1a0 / fVar1;
  }
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  return;
}

