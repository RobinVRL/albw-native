#include "ghidra_types.h"

extern int *DAT_001e3300;

// USA 001E3294 <- EU 001E3294 (Ghidra, non-matching)
// GLOBAL DAT_001e3300 int *

void func_001E3294(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(param_1 + 0x74) = 0;
  if (*(char *)(*DAT_001e3300 + 0x18) == '\a' || *(char *)(*DAT_001e3300 + 0x18) == '%') {
    *(undefined1 *)(param_1 + 0x74) = 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  puVar2 = puVar1 + *(int *)(param_1 + 0x34);
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x40))((int *)*puVar1);
  }
  return;
}

