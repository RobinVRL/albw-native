#include "ghidra_types.h"


// USA 0058D768 <- EU 0058D740 (Ghidra, non-matching)

bool func_0058D768(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0xd8);
  bVar2 = false;
  if (uVar1 != 0) {
    bVar2 = *(char *)(uVar1 + 0xd) == '\0';
    if (bVar2) {
      uVar1 = (uint)*(byte *)(uVar1 + 0xe);
    }
    bVar2 = !bVar2 || uVar1 != 0;
  }
  return bVar2;
}

