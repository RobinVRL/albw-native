#include "ghidra_types.h"

extern uint DAT_0056acf8;

// USA 0056ACF4 <- EU 0056ACCC (Ghidra, non-matching)
// GLOBAL DAT_0056acf8 uint

undefined4 func_0056ACF4(int param_1)

{
  int iVar1;
  
  if (*(ushort *)(param_1 + 0x14) == DAT_0056acf8) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_0056acf8) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return *(undefined4 *)(iVar1 + 4);
}

