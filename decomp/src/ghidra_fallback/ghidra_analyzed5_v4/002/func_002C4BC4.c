#include "ghidra_types.h"

extern int func_00662F24(undefined4 *param_1,undefined1 param_2);

// USA 002C4BC4 <- EU 002C4BA0 (Ghidra, non-matching)

undefined4 func_002C4BC4(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 3;
    }
    else {
      uVar1 = 1;
    }
    return func_00662F24((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  return 0;
}

