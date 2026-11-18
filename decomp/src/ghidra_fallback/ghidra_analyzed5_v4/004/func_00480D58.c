#include "ghidra_types.h"

extern int func_003A06F0(int param_1,int param_2);

// USA 00480D58 <- EU 00480D30 (Ghidra, non-matching)

undefined4 func_00480D58(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x11c);
  do {
    uVar1 = uVar1 + 1;
    if (0x31 < (int)uVar1) {
      uVar1 = 0xffffffff;
      break;
    }
  } while ((*(uint *)(param_1 + 0x114 + ((int)uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) == 0);
  *(uint *)(param_1 + 0x11c) = uVar1;
  if (uVar1 != 0xffffffff) {
    return func_003A06F0(*(int *)(param_1 + 0x10c),uVar1);
  }
  return 0;
}

