#include "ghidra_types.h"


// USA 001215C0 <- EU 001215C0 (Ghidra, non-matching)

void func_001215C0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0xdc);
  fVar1 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1bc);
  fVar2 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x1c0);
  fVar3 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x1c4);
  *(float *)(param_1 + 0xe4) = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x1d4);
  return;
}

