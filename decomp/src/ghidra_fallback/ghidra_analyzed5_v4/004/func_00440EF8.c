#include "ghidra_types.h"


// USA 00440EF8 <- EU 00440ED8 (Ghidra, non-matching)

void func_00440EF8(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x90) != '\x03') {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x8a) = 0xff;
  }
  return;
}

