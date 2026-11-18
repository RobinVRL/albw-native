#include "ghidra_types.h"

extern int func_00658228(undefined4 *param_1,undefined1 param_2);

// USA 00159B70 <- EU 00159B74 (Ghidra, non-matching)

undefined4 func_00159B70(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 7;
    }
    else {
      uVar1 = 4;
    }
    return func_00658228((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  return 0;
}

