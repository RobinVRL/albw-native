#include "ghidra_types.h"


// USA 003E147C <- EU 003E145C (Ghidra, non-matching)

void func_003E147C(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       (param_2 & 3) << 2 | *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xfff3;
  return;
}

