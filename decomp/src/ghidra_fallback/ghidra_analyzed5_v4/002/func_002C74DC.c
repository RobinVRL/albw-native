#include "ghidra_types.h"

extern int func_006632F0(undefined4 *param_1,undefined1 param_2);

// USA 002C74DC <- EU 002C74B8 (Ghidra, non-matching)

undefined4 func_002C74DC(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x46a) == '\0') {
    if (0 < *(short *)(param_1 + 0x460)) {
      *(short *)(param_1 + 0x460) = *(short *)(param_1 + 0x460) + -1;
      return 0;
    }
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  return func_006632F0((undefined4 *)(param_1 + 0x40c),uVar1);
}

