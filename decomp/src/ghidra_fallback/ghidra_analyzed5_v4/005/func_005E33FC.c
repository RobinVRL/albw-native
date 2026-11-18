#include "ghidra_types.h"

extern undefined4 *DAT_005e33f8;
extern undefined4 *DAT_005e33fc;

// USA 005E33FC <- EU 005E33D4 (Ghidra, non-matching)
// GLOBAL DAT_005e33f8 undefined4 *
// GLOBAL DAT_005e33fc undefined4 *

void func_005E33FC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e33f8;
  *DAT_005e33f8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e33fc;
  *DAT_005e33fc = 0;
  puVar1[1] = 0;
  return;
}

