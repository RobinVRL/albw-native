#include "ghidra_types.h"


// USA 003EE644 <- EU 003EE624 (Ghidra, non-matching)

void func_003EE644(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x138) + 0x300);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * fVar1;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar1;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * fVar1;
  return;
}

