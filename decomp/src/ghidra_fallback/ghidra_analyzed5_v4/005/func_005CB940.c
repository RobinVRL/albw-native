#include "ghidra_types.h"

extern undefined4 *DAT_005cb93c;
extern undefined4 *DAT_005cb940;

// USA 005CB940 <- EU 005CB918 (Ghidra, non-matching)
// GLOBAL DAT_005cb93c undefined4 *
// GLOBAL DAT_005cb940 undefined4 *

void func_005CB940(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb93c;
  *DAT_005cb93c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb940;
  *DAT_005cb940 = 0;
  puVar1[1] = 0;
  return;
}

