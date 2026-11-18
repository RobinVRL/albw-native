#include "ghidra_types.h"

extern undefined4 *DAT_005eba74;
extern undefined4 *DAT_005eba78;

// USA 005EBA78 <- EU 005EBA50 (Ghidra, non-matching)
// GLOBAL DAT_005eba74 undefined4 *
// GLOBAL DAT_005eba78 undefined4 *

void func_005EBA78(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eba74;
  *DAT_005eba74 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eba78;
  *DAT_005eba78 = 0;
  puVar1[1] = 0;
  return;
}

