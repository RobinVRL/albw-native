#include "ghidra_types.h"

extern undefined4 *DAT_005cb6c0;
extern undefined4 *DAT_005cb6c4;

// USA 005CB6C4 <- EU 005CB69C (Ghidra, non-matching)
// GLOBAL DAT_005cb6c0 undefined4 *
// GLOBAL DAT_005cb6c4 undefined4 *

void func_005CB6C4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb6c0;
  *DAT_005cb6c0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb6c4;
  *DAT_005cb6c4 = 0;
  puVar1[1] = 0;
  return;
}

