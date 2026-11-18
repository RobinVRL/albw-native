#include "ghidra_types.h"

extern undefined4 *DAT_005bbe18;
extern undefined4 *DAT_005bbe1c;

// USA 005BBE1C <- EU 005BBDF4 (Ghidra, non-matching)
// GLOBAL DAT_005bbe18 undefined4 *
// GLOBAL DAT_005bbe1c undefined4 *

void func_005BBE1C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005bbe18;
  *DAT_005bbe18 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bbe1c;
  *DAT_005bbe1c = 0;
  puVar1[1] = 0;
  return;
}

