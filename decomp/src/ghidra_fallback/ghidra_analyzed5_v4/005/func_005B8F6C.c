#include "ghidra_types.h"

extern undefined4 *DAT_005b8f68;
extern undefined4 *DAT_005b8f6c;

// USA 005B8F6C <- EU 005B8F44 (Ghidra, non-matching)
// GLOBAL DAT_005b8f68 undefined4 *
// GLOBAL DAT_005b8f6c undefined4 *

void func_005B8F6C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b8f68;
  *DAT_005b8f68 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8f6c;
  *DAT_005b8f6c = 0;
  puVar1[1] = 0;
  return;
}

