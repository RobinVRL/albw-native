#include "ghidra_types.h"

extern undefined4 *DAT_005f68c4;
extern undefined4 *DAT_005f68c8;

// USA 005F68C8 <- EU 005F68A0 (Ghidra, non-matching)
// GLOBAL DAT_005f68c4 undefined4 *
// GLOBAL DAT_005f68c8 undefined4 *

void func_005F68C8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f68c4;
  *DAT_005f68c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f68c8;
  *DAT_005f68c8 = 0;
  puVar1[1] = 0;
  return;
}

