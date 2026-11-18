#include "ghidra_types.h"


// USA 00259CC4 <- EU 00259CEC (Ghidra, non-matching)

void func_00259CC4(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  }
  else if (param_2 < 0x40) {
    puVar1 = (uint *)(param_1 + 0x58);
    if ((int)param_2 < 0x40) {
      if (0x1f < (int)param_2) {
        param_2 = param_2 - 0x20;
        *puVar1 = *(uint *)(param_1 + 0x5c);
      }
    }
    else {
      param_2 = param_2 - 0x40;
      *puVar1 = *(uint *)(param_1 + 0x60);
    }
    *puVar1 = *puVar1 | 1 << (param_2 & 0xff);
    return;
  }
  return;
}

