#include "ghidra_types.h"


// USA 003E15B0 <- EU 003E1590 (Ghidra, non-matching)

void func_003E15B0(int param_1,short param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xffef | param_2 << 4;
  return;
}

