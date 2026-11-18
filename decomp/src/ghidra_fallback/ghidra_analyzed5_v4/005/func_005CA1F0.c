#include "ghidra_types.h"

extern undefined4 *DAT_005ca1ec;
extern undefined4 *DAT_005ca1f0;

// USA 005CA1F0 <- EU 005CA1C8 (Ghidra, non-matching)
// GLOBAL DAT_005ca1ec undefined4 *
// GLOBAL DAT_005ca1f0 undefined4 *

void func_005CA1F0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ca1ec;
  *DAT_005ca1ec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca1f0;
  *DAT_005ca1f0 = 0;
  puVar1[1] = 0;
  return;
}

