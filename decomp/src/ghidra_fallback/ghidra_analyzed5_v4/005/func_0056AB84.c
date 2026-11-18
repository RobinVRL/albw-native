#include "ghidra_types.h"

extern uint DAT_0056ab98;

// USA 0056AB84 <- EU 0056AB5C (Ghidra, non-matching)
// GLOBAL DAT_0056ab98 uint

undefined4 func_0056AB84(int param_1)

{
  int iVar1;
  
  if (*(ushort *)(param_1 + 0x14) == DAT_0056ab98) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_0056ab98) {
    iVar1 = param_1 + 0x20;
  }
  else if (*(ushort *)(param_1 + 0x2c) == DAT_0056ab98) {
    iVar1 = param_1 + 0x2c;
  }
  else {
    iVar1 = 0;
  }
  return *(undefined4 *)(iVar1 + 4);
}

