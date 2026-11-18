#include "ghidra_types.h"

extern int func_0065D774(undefined4 *param_1,undefined1 param_2);

// USA 00210F14 <- EU 00210F14 (Ghidra, non-matching)

undefined4 func_00210F14(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 0xd;
    }
    else {
      uVar1 = 2;
    }
    return func_0065D774((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  return 0;
}

