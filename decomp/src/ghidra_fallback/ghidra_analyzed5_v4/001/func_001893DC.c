#include "ghidra_types.h"

extern undefined4 DAT_001893f4;
extern undefined4 DAT_001893f8;

// USA 001893DC <- EU 001893DC (Ghidra, non-matching)
// GLOBAL DAT_001893f4 undefined4
// GLOBAL DAT_001893f8 undefined4

undefined4 func_001893DC(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001893f4;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001893f4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = DAT_001893f8;
  return (undefined4)param_1;
}

