#include "ghidra_types.h"


// USA 0058D7CC <- EU 0058D7A4 (Ghidra, non-matching)

undefined4 func_0058D7CC(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  if (*(short *)(param_1 + 0x58) == 3) {
    uVar1 = *(uint *)(param_1 + 0x54);
    if (uVar1 == 0) {
      return 0;
    }
    bVar2 = *(char *)(uVar1 + 0xd) == '\x03';
    if (bVar2) {
      uVar1 = (uint)*(byte *)(uVar1 + 0xe);
    }
    if (!bVar2 || uVar1 != 3) {
      return 0;
    }
  }
  return 1;
}

