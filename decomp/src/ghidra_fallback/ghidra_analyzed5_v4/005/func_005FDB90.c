#include "ghidra_types.h"

extern undefined4 *DAT_005fdb8c;
extern undefined4 *DAT_005fdb90;

// USA 005FDB90 <- EU 005FDB68 (Ghidra, non-matching)
// GLOBAL DAT_005fdb8c undefined4 *
// GLOBAL DAT_005fdb90 undefined4 *

void func_005FDB90(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fdb8c;
  *DAT_005fdb8c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fdb90;
  *DAT_005fdb90 = 0;
  puVar1[1] = 0;
  return;
}

