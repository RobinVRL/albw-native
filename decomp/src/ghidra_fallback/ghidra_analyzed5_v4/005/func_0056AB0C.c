#include "ghidra_types.h"

extern uint DAT_0056ab20;

// USA 0056AB0C <- EU 0056AAE4 (Ghidra, non-matching)
// GLOBAL DAT_0056ab20 uint

undefined4 func_0056AB0C(int param_1)

{
  int iVar1;
  
  if (*(ushort *)(param_1 + 0x14) == DAT_0056ab20) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_0056ab20) {
    iVar1 = param_1 + 0x20;
  }
  else if (*(ushort *)(param_1 + 0x2c) == DAT_0056ab20) {
    iVar1 = param_1 + 0x2c;
  }
  else {
    iVar1 = 0;
  }
  return *(undefined4 *)(iVar1 + 4);
}

