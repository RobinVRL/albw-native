#include "ghidra_types.h"

extern int func_0010C180(uint *param_1);

// USA 003DD438 <- EU 003DD418 (Ghidra, non-matching)

int func_003DD438(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x18);
  func_0010C180(puVar1);
  if (*puVar1 != 0) {
    software_interrupt(0x23);
    *puVar1 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x10);
  func_0010C180(puVar1);
  if (*puVar1 != 0) {
    software_interrupt(0x23);
    *puVar1 = 0;
  }
  return param_1;
}

