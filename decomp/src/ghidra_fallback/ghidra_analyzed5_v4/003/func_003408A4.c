#include "ghidra_types.h"


// USA 003408A4 <- EU 00340880 (Ghidra, non-matching)

void func_003408A4(int param_1,undefined4 param_2,float fparam_0)

{
  *(undefined4 *)(param_1 + 0x4f8) = param_2;
  *(float *)(param_1 + 0x4f4) = fparam_0;
  return;
}

