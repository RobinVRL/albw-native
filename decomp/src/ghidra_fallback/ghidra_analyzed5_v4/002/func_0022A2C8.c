#include "ghidra_types.h"

extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);

// USA 0022A2C8 <- EU 0022A2C8 (Ghidra, non-matching)

undefined4 func_0022A2C8(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 0x14;
    }
    else {
      uVar1 = 5;
    }
    return func_0065E8B8((undefined4 *)(param_1 + 0x8fc),uVar1);
  }
  return 0;
}

