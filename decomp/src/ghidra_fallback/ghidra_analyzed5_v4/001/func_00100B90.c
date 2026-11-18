#include "ghidra_types.h"

extern undefined4 *DAT_00100bbc;
extern undefined4 *DAT_00100bc0;

// USA 00100B90 <- EU 00100B90 (Ghidra, non-matching)
// GLOBAL DAT_00100bbc undefined4 *
// GLOBAL DAT_00100bc0 undefined4 *

void func_00100B90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00100bc0;
  for (puVar2 = DAT_00100bbc; puVar2 < puVar1; puVar2 = puVar2 + 1) {
    (*(code *)*puVar2)();
  }
  return;
}

