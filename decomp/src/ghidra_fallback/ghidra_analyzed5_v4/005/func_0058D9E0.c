#include "ghidra_types.h"


// USA 0058D9E0 <- EU 0058D9B8 (Ghidra, non-matching)

bool func_0058D9E0(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0xf4);
  bVar2 = *(char *)(uVar1 + 0xd) == '\0';
  if (bVar2) {
    uVar1 = (uint)*(byte *)(uVar1 + 0xe);
  }
  return !bVar2 || uVar1 != 0;
}

