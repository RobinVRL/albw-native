#include "ghidra_types.h"

extern uint DAT_0056adfc;

// USA 0056ADE8 <- EU 0056ADC0 (Ghidra, non-matching)
// GLOBAL DAT_0056adfc uint

undefined4 func_0056ADE8(int param_1)

{
  int iVar1;
  
  if (*(ushort *)(param_1 + 0x14) == DAT_0056adfc) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_0056adfc) {
    iVar1 = param_1 + 0x20;
  }
  else if (*(ushort *)(param_1 + 0x2c) == DAT_0056adfc) {
    iVar1 = param_1 + 0x2c;
  }
  else {
    iVar1 = 0;
  }
  return *(undefined4 *)(iVar1 + 4);
}

