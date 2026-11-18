#include "ghidra_types.h"

extern undefined4 *DAT_005cb58c;
extern undefined4 *DAT_005cb590;

// USA 005CB590 <- EU 005CB568 (Ghidra, non-matching)
// GLOBAL DAT_005cb58c undefined4 *
// GLOBAL DAT_005cb590 undefined4 *

void func_005CB590(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb58c;
  *DAT_005cb58c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb590;
  *DAT_005cb590 = 0;
  puVar1[1] = 0;
  return;
}

