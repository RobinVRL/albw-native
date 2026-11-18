#include "ghidra_types.h"


// USA 00166150 <- EU 00166154 (Ghidra, non-matching)

void func_00166150(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))();
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0xfa) = *(undefined1 *)(param_1 + 0xfb);
  return;
}

