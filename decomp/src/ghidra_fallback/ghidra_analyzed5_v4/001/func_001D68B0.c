#include "ghidra_types.h"

extern undefined4 DAT_001d68c8;
extern undefined4 DAT_001d68cc;

// USA 001D68B0 <- EU 001D68B0 (Ghidra, non-matching)
// GLOBAL DAT_001d68c8 undefined4
// GLOBAL DAT_001d68cc undefined4

undefined4 func_001D68B0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_001d68cc;
  uVar1 = DAT_001d68c8;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001d68c8;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return (undefined4)param_1;
}

