#include "ghidra_types.h"

extern undefined4 *DAT_005a9398;
extern undefined4 *DAT_005a939c;

// USA 005A939C <- EU 005A9374 (Ghidra, non-matching)
// GLOBAL DAT_005a9398 undefined4 *
// GLOBAL DAT_005a939c undefined4 *

void func_005A939C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a9398;
  *DAT_005a9398 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a939c;
  *DAT_005a939c = 0;
  puVar1[1] = 0;
  return;
}

