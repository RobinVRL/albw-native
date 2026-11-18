#include "ghidra_types.h"

extern undefined4 *DAT_005f7ba4;
extern undefined4 *DAT_005f7ba8;

// USA 005F7BA8 <- EU 005F7B80 (Ghidra, non-matching)
// GLOBAL DAT_005f7ba4 undefined4 *
// GLOBAL DAT_005f7ba8 undefined4 *

void func_005F7BA8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f7ba4;
  *DAT_005f7ba4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f7ba8;
  *DAT_005f7ba8 = 0;
  puVar1[1] = 0;
  return;
}

