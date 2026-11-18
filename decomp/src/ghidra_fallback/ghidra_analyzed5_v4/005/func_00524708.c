#include "ghidra_types.h"


// USA 00524708 <- EU 005246E0 (Ghidra, non-matching)

uint func_00524708(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x22);
  if (((*(char *)(param_1 + 0x3f) == '\0') &&
      (uVar2 = (uint)(short)(*(ushort *)(param_1 + 0x22) - 1), -1 < (int)uVar2)) &&
     (*(short *)(*(int *)(param_1 + 8) + uVar2 * 2) == 10)) {
    uVar1 = uVar2 - 1;
    if (-1 < (int)uVar1) {
      do {
        if (*(short *)(*(int *)(param_1 + 8) + uVar1 * 2) != 10) break;
        uVar2 = (uint)(short)uVar1;
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    uVar1 = uVar2 & 0xffff;
  }
  return uVar1;
}

