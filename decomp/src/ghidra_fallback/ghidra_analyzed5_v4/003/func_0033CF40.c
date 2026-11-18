#include "ghidra_types.h"

extern undefined4 DAT_0033cf50;

// USA 0033CF40 <- EU 0033CF1C (Ghidra, non-matching)
// GLOBAL DAT_0033cf50 undefined4

undefined4 func_0033CF40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0033cf50;
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
  *(undefined4 *)(param_1 + 0x478) = 600;
  *(undefined4 *)(param_1 + 0x47c) = uVar1;
  *(undefined4 *)(param_1 + 0x474) = 0;
  return 1;
}

