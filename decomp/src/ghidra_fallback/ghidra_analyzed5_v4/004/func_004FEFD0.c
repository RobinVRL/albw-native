#include "ghidra_types.h"

extern int func_0066AF2C(undefined4 *param_1,undefined1 param_2);

// USA 004FEFD0 <- EU 004FEFA8 (Ghidra, non-matching)

undefined4 func_004FEFD0(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 6;
    }
    else {
      uVar1 = 4;
    }
    return func_0066AF2C((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  return 0;
}

