#include "ghidra_types.h"


// USA 0058DEB8 <- EU 0058DE90 (Ghidra, non-matching)

undefined4 func_0058DEB8(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  if (uVar1 != 0) {
    bVar2 = *(char *)(uVar1 + 0xd) == '\0';
    if (bVar2) {
      uVar1 = (uint)*(byte *)(uVar1 + 0xe);
    }
    if ((!bVar2 || uVar1 != 0) && (*(ushort *)(param_1 + 0x74) < 2)) {
      return 1;
    }
  }
  return 0;
}

