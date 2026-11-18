#include "ghidra_types.h"

extern int func_003EF02C(int param_1);

// USA 003EE6B0 <- EU 003EE690 (Ghidra, non-matching)

undefined4 func_003EE6B0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x138) + 0x300);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * fVar1;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar1;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * fVar1;
  return func_003EF02C(param_1);
}

