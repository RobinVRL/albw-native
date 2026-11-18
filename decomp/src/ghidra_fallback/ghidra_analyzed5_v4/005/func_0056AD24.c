#include "ghidra_types.h"


// USA 0056AD24 <- EU 0056ACFC (Ghidra, non-matching)

undefined4 func_0056AD24(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return *(undefined4 *)(iVar1 + 4);
}

