#include "ghidra_types.h"

extern undefined4 *DAT_005cb6ec;
extern undefined4 *DAT_005cb6f0;

// USA 005CB6F0 <- EU 005CB6C8 (Ghidra, non-matching)
// GLOBAL DAT_005cb6ec undefined4 *
// GLOBAL DAT_005cb6f0 undefined4 *

void func_005CB6F0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb6ec;
  *DAT_005cb6ec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb6f0;
  *DAT_005cb6f0 = 0;
  puVar1[1] = 0;
  return;
}

