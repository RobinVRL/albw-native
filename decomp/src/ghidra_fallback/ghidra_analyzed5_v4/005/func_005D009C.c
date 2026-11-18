#include "ghidra_types.h"

extern undefined4 *DAT_005d0098;
extern undefined4 *DAT_005d009c;

// USA 005D009C <- EU 005D0074 (Ghidra, non-matching)
// GLOBAL DAT_005d0098 undefined4 *
// GLOBAL DAT_005d009c undefined4 *

void func_005D009C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0098;
  *DAT_005d0098 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d009c;
  *DAT_005d009c = 0;
  puVar1[1] = 0;
  return;
}

