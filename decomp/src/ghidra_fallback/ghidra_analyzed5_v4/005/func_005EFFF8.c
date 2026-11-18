#include "ghidra_types.h"

extern undefined4 *DAT_005efff4;
extern undefined4 *DAT_005efff8;

// USA 005EFFF8 <- EU 005EFFD0 (Ghidra, non-matching)
// GLOBAL DAT_005efff4 undefined4 *
// GLOBAL DAT_005efff8 undefined4 *

void func_005EFFF8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005efff4;
  *DAT_005efff4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005efff8;
  *DAT_005efff8 = 0;
  puVar1[1] = 0;
  return;
}

