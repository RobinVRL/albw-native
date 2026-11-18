#include "ghidra_types.h"

extern float DAT_004ff044;
extern undefined4 DAT_004ff048;
extern undefined4 DAT_004ff04c;

// USA 004FF008 <- EU 004FEFE0 (Ghidra, non-matching)
// GLOBAL DAT_004ff044 float
// GLOBAL DAT_004ff048 undefined4
// GLOBAL DAT_004ff04c undefined4

void func_004FF008(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar4;
  
  uVar2 = DAT_004ff04c;
  fVar1 = DAT_004ff044;
  iVar3 = (int)*(short *)(param_1 + 0x32);
  if (iVar3 < 1) {
    *(undefined4 *)(param_1 + 0x8f8) = 2;
    *(undefined4 *)(param_1 + 0x8fc) = uVar2;
    *(undefined4 *)(param_1 + 0x8f4) = 0;
    return;
  }
  if (iVar3 == 0) {
    in_s0 = DAT_004ff048;
  }
  *(int *)(param_1 + 0x8f8) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x8fc) = in_s0;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8fc) = fVar1 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  return;
}

