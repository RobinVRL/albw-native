#include "ghidra_types.h"

extern undefined4 *DAT_005ede08;
extern undefined4 *DAT_005ede0c;

// USA 005EDE0C <- EU 005EDDE4 (Ghidra, non-matching)
// GLOBAL DAT_005ede08 undefined4 *
// GLOBAL DAT_005ede0c undefined4 *

void func_005EDE0C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ede08;
  *DAT_005ede08 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ede0c;
  *DAT_005ede0c = 0;
  puVar1[1] = 0;
  return;
}

