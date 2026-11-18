#include "ghidra_types.h"

extern int func_0065E110(undefined4 *param_1,undefined1 param_2);

// USA 0021CD84 <- EU 0021CD84 (Ghidra, non-matching)

undefined4 func_0021CD84(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 4;
    }
    else {
      uVar1 = 1;
    }
    return func_0065E110((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  return 0;
}

