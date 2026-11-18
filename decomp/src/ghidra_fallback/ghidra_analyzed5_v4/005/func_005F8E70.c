#include "ghidra_types.h"

extern undefined4 *DAT_005f8e6c;
extern undefined4 *DAT_005f8e70;

// USA 005F8E70 <- EU 005F8E48 (Ghidra, non-matching)
// GLOBAL DAT_005f8e6c undefined4 *
// GLOBAL DAT_005f8e70 undefined4 *

void func_005F8E70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f8e6c;
  *DAT_005f8e6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f8e70;
  *DAT_005f8e70 = 0;
  puVar1[1] = 0;
  return;
}

