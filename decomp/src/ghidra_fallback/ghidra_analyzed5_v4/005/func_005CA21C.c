#include "ghidra_types.h"

extern undefined4 *DAT_005ca218;
extern undefined4 *DAT_005ca21c;

// USA 005CA21C <- EU 005CA1F4 (Ghidra, non-matching)
// GLOBAL DAT_005ca218 undefined4 *
// GLOBAL DAT_005ca21c undefined4 *

void func_005CA21C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ca218;
  *DAT_005ca218 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca21c;
  *DAT_005ca21c = 0;
  puVar1[1] = 0;
  return;
}

