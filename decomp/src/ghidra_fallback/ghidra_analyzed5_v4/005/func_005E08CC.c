#include "ghidra_types.h"

extern undefined4 *DAT_005e08c8;
extern undefined4 *DAT_005e08cc;

// USA 005E08CC <- EU 005E08A4 (Ghidra, non-matching)
// GLOBAL DAT_005e08c8 undefined4 *
// GLOBAL DAT_005e08cc undefined4 *

void func_005E08CC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e08c8;
  *DAT_005e08c8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e08cc;
  *DAT_005e08cc = 0;
  puVar1[1] = 0;
  return;
}

