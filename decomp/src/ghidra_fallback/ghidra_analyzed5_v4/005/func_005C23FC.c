#include "ghidra_types.h"

extern undefined4 *DAT_005c23f8;
extern undefined4 *DAT_005c23fc;

// USA 005C23FC <- EU 005C23D4 (Ghidra, non-matching)
// GLOBAL DAT_005c23f8 undefined4 *
// GLOBAL DAT_005c23fc undefined4 *

void func_005C23FC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c23f8;
  *DAT_005c23f8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c23fc;
  *DAT_005c23fc = 0;
  puVar1[1] = 0;
  return;
}

