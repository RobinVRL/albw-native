#include "ghidra_types.h"

extern undefined4 *DAT_005f6a6c;
extern undefined4 *DAT_005f6a70;

// USA 005F6A70 <- EU 005F6A48 (Ghidra, non-matching)
// GLOBAL DAT_005f6a6c undefined4 *
// GLOBAL DAT_005f6a70 undefined4 *

void func_005F6A70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f6a6c;
  *DAT_005f6a6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f6a70;
  *DAT_005f6a70 = 0;
  puVar1[1] = 0;
  return;
}

