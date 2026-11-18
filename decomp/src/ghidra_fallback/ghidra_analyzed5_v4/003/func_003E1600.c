#include "ghidra_types.h"


// USA 003E1600 <- EU 003E15E0 (Ghidra, non-matching)

void func_003E1600(int param_1,short param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xffbf | param_2 << 6;
  return;
}

