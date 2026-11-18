#include "ghidra_types.h"

extern undefined4 DAT_001e5da4;

// USA 001E5D38 <- EU 001E5D38 (Ghidra, non-matching)
// GLOBAL DAT_001e5da4 undefined4

undefined4 func_001E5D38(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x490);
  uVar2 = *(undefined4 *)(param_1 + 0x494);
  fVar3 = *(float *)(param_1 + 0x498);
  *(undefined4 *)(param_1 + 0x478) = uVar1;
  *(undefined4 *)(param_1 + 0x47c) = uVar2;
  *(float *)(param_1 + 0x480) = fVar3;
  *(undefined4 *)(param_1 + 0x484) = uVar1;
  *(undefined4 *)(param_1 + 0x488) = uVar2;
  *(float *)(param_1 + 0x48c) = fVar3;
  *(undefined4 *)(param_1 + 0x490) = uVar1;
  *(undefined4 *)(param_1 + 0x494) = uVar2;
  *(float *)(param_1 + 0x498) = fVar3;
  *(undefined4 *)(param_1 + 0x49c) = uVar1;
  *(undefined4 *)(param_1 + 0x4a0) = uVar2;
  *(float *)(param_1 + 0x4a4) = fVar3 + *(float *)(param_1 + 0x4a4);
  uVar1 = DAT_001e5da4;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001e5da4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  return 1;
}

