#include "ghidra_types.h"

extern int func_00562978(byte *param_1,uint *param_2);

// USA 00562930 <- EU 00562908 (Ghidra, non-matching)

uint * func_00562930(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1 + 0x164) != '\0') {
      param_2 = func_00562978((byte *)(param_1 + uVar1 * 0x2c + 4),param_2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  return param_2;
}

