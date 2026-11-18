#include "ghidra_types.h"

extern undefined4 *DAT_005f7b78;
extern undefined4 *DAT_005f7b7c;

// USA 005F7B7C <- EU 005F7B54 (Ghidra, non-matching)
// GLOBAL DAT_005f7b78 undefined4 *
// GLOBAL DAT_005f7b7c undefined4 *

void func_005F7B7C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f7b78;
  *DAT_005f7b78 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f7b7c;
  *DAT_005f7b7c = 0;
  puVar1[1] = 0;
  return;
}

