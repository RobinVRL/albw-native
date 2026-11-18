#include "ghidra_types.h"

extern undefined4 *DAT_005cb744;
extern undefined4 *DAT_005cb748;

// USA 005CB748 <- EU 005CB720 (Ghidra, non-matching)
// GLOBAL DAT_005cb744 undefined4 *
// GLOBAL DAT_005cb748 undefined4 *

void func_005CB748(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb744;
  *DAT_005cb744 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb748;
  *DAT_005cb748 = 0;
  puVar1[1] = 0;
  return;
}

