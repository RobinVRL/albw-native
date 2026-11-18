#include "ghidra_types.h"


// USA 004D08B8 <- EU 004D0890 (Ghidra, non-matching)

void func_004D08B8(int param_1,float fparam_0)

{
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x40000000;
  *(float *)(param_1 + 0x74) = fparam_0;
  *(float *)(param_1 + 0x78) = fparam_0;
  *(float *)(param_1 + 0x7c) = fparam_0;
  return;
}

