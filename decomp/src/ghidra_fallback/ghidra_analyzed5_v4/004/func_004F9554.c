#include "ghidra_types.h"


// USA 004F9554 <- EU 004F952C (Ghidra, non-matching)

void * func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4)

{
  if (param_1 == 0) {
    return (void *)0x0;
  }
  *(ushort *)(param_1 + 0x28) = (param_2 & 0x3f) << 5 | param_3 & 0x1f;
  if (param_4 != 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffffe0ff;
  }
  return (void *)param_1;
}

