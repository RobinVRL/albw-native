#include "ghidra_types.h"

extern undefined4 *DAT_005ede94;
extern undefined4 *DAT_005ede98;

// USA 005EDE98 <- EU 005EDE70 (Ghidra, non-matching)
// GLOBAL DAT_005ede94 undefined4 *
// GLOBAL DAT_005ede98 undefined4 *

void func_005EDE98(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ede94;
  *DAT_005ede94 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ede98;
  *DAT_005ede98 = 0;
  puVar1[1] = 0;
  return;
}

