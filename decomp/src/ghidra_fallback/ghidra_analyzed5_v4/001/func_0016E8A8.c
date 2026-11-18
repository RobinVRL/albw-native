#include "ghidra_types.h"

extern int *DAT_0016e8f0;
extern int *DAT_0016e8f4;

// USA 0016E8A8 <- EU 0016E8A8 (Ghidra, non-matching)
// GLOBAL DAT_0016e8f0 int *
// GLOBAL DAT_0016e8f4 int *

void func_0016E8A8(int param_1)

{
  uint *puVar1;
  
  if ((int)*(char *)(*DAT_0016e8f0 + 0x18) - 9U < 0xd) {
    puVar1 = (uint *)(*(int *)(*DAT_0016e8f4 + 0x40) + 0x15c +
                     (uint)(*(ushort *)(param_1 + 0x5a) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (*(ushort *)(param_1 + 0x5a) & 0x1f);
  }
  return;
}

