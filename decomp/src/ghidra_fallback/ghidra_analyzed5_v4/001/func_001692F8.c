#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 001692F8 <- EU 001692F8 (Ghidra, non-matching)

void func_001692F8(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    func_0010E3C4(*(uint **)(param_1 + 0x2c),(uint *)param_2[2],uVar1 * 0x18);
    if (uVar1 <= *(uint *)(param_1 + 0x28)) {
      *(uint *)(param_1 + 0x24) = uVar1;
    }
    *(uint *)(param_1 + 0x78) = param_2[0x15];
    *(char *)(param_1 + 0x7c) = (char)param_2[0x16];
  }
  return;
}

