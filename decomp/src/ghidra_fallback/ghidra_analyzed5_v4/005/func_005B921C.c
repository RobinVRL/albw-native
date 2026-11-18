#include "ghidra_types.h"

extern undefined4 *DAT_005b9218;
extern undefined4 *DAT_005b921c;

// USA 005B921C <- EU 005B91F4 (Ghidra, non-matching)
// GLOBAL DAT_005b9218 undefined4 *
// GLOBAL DAT_005b921c undefined4 *

void func_005B921C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9218;
  *DAT_005b9218 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b921c;
  *DAT_005b921c = 0;
  puVar1[1] = 0;
  return;
}

