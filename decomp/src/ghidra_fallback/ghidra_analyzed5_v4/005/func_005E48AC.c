#include "ghidra_types.h"

extern undefined4 *DAT_005e48a8;
extern undefined4 *DAT_005e48ac;

// USA 005E48AC <- EU 005E4884 (Ghidra, non-matching)
// GLOBAL DAT_005e48a8 undefined4 *
// GLOBAL DAT_005e48ac undefined4 *

void func_005E48AC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e48a8;
  *DAT_005e48a8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e48ac;
  *DAT_005e48ac = 0;
  puVar1[1] = 0;
  return;
}

