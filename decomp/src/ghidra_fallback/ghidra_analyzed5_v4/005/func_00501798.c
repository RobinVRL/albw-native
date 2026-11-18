#include "ghidra_types.h"

extern int func_0066B2F8(undefined4 *param_1,undefined1 param_2);

// USA 00501798 <- EU 00501770 (Ghidra, non-matching)

undefined4 func_00501798(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
    return func_0066B2F8((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  return 0;
}

