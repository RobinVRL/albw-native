#include "ghidra_types.h"

extern int DAT_001ff624;

// USA 001FF5FC <- EU 001FF5FC (Ghidra, non-matching)
// GLOBAL DAT_001ff624 int

undefined4 func_001FF5FC(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 8) < DAT_001ff624) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
  }
  return 1;
}

