#include "ghidra_types.h"

extern undefined4 *DAT_005fdbb8;
extern undefined4 *DAT_005fdbbc;

// USA 005FDBBC <- EU 005FDB94 (Ghidra, non-matching)
// GLOBAL DAT_005fdbb8 undefined4 *
// GLOBAL DAT_005fdbbc undefined4 *

void func_005FDBBC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fdbb8;
  *DAT_005fdbb8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fdbbc;
  *DAT_005fdbbc = 0;
  puVar1[1] = 0;
  return;
}

