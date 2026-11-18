#include "ghidra_types.h"

extern undefined4 DAT_0033cf88;

// USA 0033CF78 <- EU 0033CF54 (Ghidra, non-matching)
// GLOBAL DAT_0033cf88 undefined4

undefined4 func_0033CF78(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0033cf88;
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x478) = 0x1e;
  *(undefined4 *)(param_1 + 0x47c) = uVar1;
  *(undefined4 *)(param_1 + 0x474) = 0;
  return 1;
}

