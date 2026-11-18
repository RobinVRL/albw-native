#include "ghidra_types.h"

extern undefined4 DAT_001fe510;

// USA 001FE4E0 <- EU 001FE4E0 (Ghidra, non-matching)
// GLOBAL DAT_001fe510 undefined4

undefined4 func_001FE4E0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001fe510;
  *(undefined4 *)(param_1 + 0x6c) = DAT_001fe510;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  return (undefined4)param_1;
}

