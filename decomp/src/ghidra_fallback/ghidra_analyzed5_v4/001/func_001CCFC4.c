#include "ghidra_types.h"

extern undefined4 DAT_001ccfe8;
extern int DAT_001ccfec;
extern undefined4 DAT_001ccff0;

// USA 001CCFC4 <- EU 001CCFC4 (Ghidra, non-matching)
// GLOBAL DAT_001ccfe8 undefined4
// GLOBAL DAT_001ccfec int
// GLOBAL DAT_001ccff0 undefined4

undefined4 func_001CCFC4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_001ccfec;
  uVar1 = DAT_001ccfe8;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001ccfe8;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = DAT_001ccff0;
  *(undefined2 *)(iVar2 + param_1) = 0;
  return (undefined4)param_1;
}

