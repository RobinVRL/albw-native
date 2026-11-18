#include "ghidra_types.h"

extern undefined4 DAT_002538c4;
extern undefined4 DAT_002538c8;

// USA 00253884 <- EU 002538AC (Ghidra, non-matching)
// GLOBAL DAT_002538c4 undefined4
// GLOBAL DAT_002538c8 undefined4

undefined4 func_00253884(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002538c4;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002538c4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = DAT_002538c8;
  return (undefined4)param_1;
}

