#include "ghidra_types.h"

extern undefined4 DAT_001ccfbc;
extern undefined4 DAT_001ccfc0;

// USA 001CCFA4 <- EU 001CCFA4 (Ghidra, non-matching)
// GLOBAL DAT_001ccfbc undefined4
// GLOBAL DAT_001ccfc0 undefined4

undefined4 func_001CCFA4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_001ccfc0;
  uVar1 = DAT_001ccfbc;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001ccfbc;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return (undefined4)param_1;
}

