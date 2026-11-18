#include "ghidra_types.h"

extern undefined4 *DAT_005fdb60;
extern undefined4 *DAT_005fdb64;

// USA 005FDB64 <- EU 005FDB3C (Ghidra, non-matching)
// GLOBAL DAT_005fdb60 undefined4 *
// GLOBAL DAT_005fdb64 undefined4 *

void func_005FDB64(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fdb60;
  *DAT_005fdb60 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fdb64;
  *DAT_005fdb64 = 0;
  puVar1[1] = 0;
  return;
}

