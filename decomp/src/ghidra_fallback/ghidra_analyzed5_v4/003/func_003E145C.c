#include "ghidra_types.h"


// USA 003E145C <- EU 003E143C (Ghidra, non-matching)

void func_003E145C(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       param_2 & 3 | *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xfffc;
  return;
}

