#include "ghidra_types.h"


// USA 00547404 <- EU 005473DC (Ghidra, non-matching)

bool func_00547404(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0x28);
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

