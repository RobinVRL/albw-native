#include "ghidra_types.h"

extern undefined4 *DAT_005d02d8;
extern undefined4 *DAT_005d02dc;

// USA 005D02DC <- EU 005D02B4 (Ghidra, non-matching)
// GLOBAL DAT_005d02d8 undefined4 *
// GLOBAL DAT_005d02dc undefined4 *

void func_005D02DC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d02d8;
  *DAT_005d02d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d02dc;
  *DAT_005d02dc = 0;
  puVar1[1] = 0;
  return;
}

