#include "ghidra_types.h"


// USA 0028F240 <- EU 0028F268 (Ghidra, non-matching)

bool func_0028F240(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x14) + 0x42);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0xc1) = 1;
  return sVar1 == 0x4d || sVar1 == 0x4e;
}

