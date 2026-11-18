#include "ghidra_types.h"

extern int func_006644B8(undefined4 *param_1,undefined1 param_2);

// USA 002FBE44 <- EU 002FBE20 (Ghidra, non-matching)

undefined4 func_002FBE44(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 6;
    }
    else {
      uVar1 = 4;
    }
    return func_006644B8((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  return 0;
}

