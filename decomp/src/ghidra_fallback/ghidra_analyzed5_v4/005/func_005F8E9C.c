#include "ghidra_types.h"

extern undefined4 *DAT_005f8e98;
extern undefined4 *DAT_005f8e9c;

// USA 005F8E9C <- EU 005F8E74 (Ghidra, non-matching)
// GLOBAL DAT_005f8e98 undefined4 *
// GLOBAL DAT_005f8e9c undefined4 *

void func_005F8E9C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f8e98;
  *DAT_005f8e98 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f8e9c;
  *DAT_005f8e9c = 0;
  puVar1[1] = 0;
  return;
}

