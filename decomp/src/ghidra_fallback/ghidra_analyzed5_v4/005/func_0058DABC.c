#include "ghidra_types.h"


// USA 0058DABC <- EU 0058DA94 (Ghidra, non-matching)

undefined4 func_0058DABC(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  if ((*(short *)(param_1 + 0x58) == 4 || *(short *)(param_1 + 0x58) == 5) &&
     (uVar1 = *(uint *)(param_1 + 0x54), uVar1 != 0)) {
    bVar2 = *(char *)(uVar1 + 0xd) == '\0';
    if (bVar2) {
      uVar1 = (uint)*(byte *)(uVar1 + 0xe);
    }
    if (!bVar2 || uVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

