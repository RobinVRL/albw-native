#include "ghidra_types.h"

extern int func_0066B43C(undefined4 *param_1,undefined1 param_2);
extern float DAT_005086fc;
extern float DAT_00508700;

// USA 00508690 <- EU 00508668 (Ghidra, non-matching)
// GLOBAL DAT_005086fc float
// GLOBAL DAT_00508700 float

undefined4 func_00508690(int param_1,float fparam_0,float fparam_1)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  if (*(uint *)(param_1 + 0x47c) < *(uint *)(param_1 + 0x480)) {
    uVar1 = *(uint *)(param_1 + 0x47c) + 1;
    *(uint *)(param_1 + 0x47c) = uVar1;
    fVar3 = DAT_005086fc;
    if ((*(uint *)(param_1 + 0x480) != 0 && uVar1 != 0) &&
       (fVar3 = DAT_00508700, uVar1 < *(uint *)(param_1 + 0x480))) {
      fVar3 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      fVar3 = fVar3 * *(float *)(param_1 + 0x484);
    }
    iVar2 = param_1 + 0x400;
    fVar3 = *(float *)(param_1 + 0x46c) - fVar3;
    if (DAT_005086fc > fVar3 || fVar3 == DAT_005086fc) {
      iVar2 = *(int *)(param_1 + 0x410);
    }
    else {
      param_1 = *(int *)(param_1 + 0x410);
    }
    if (DAT_005086fc <= fVar3 && fVar3 != DAT_005086fc) {
      *(float *)(param_1 + 0x158) = fVar3;
      return 0;
    }
    *(float *)(iVar2 + 0x158) = DAT_005086fc;
  }
  return func_0066B43C((undefined4 *)(param_1 + 0x510),0);
}

