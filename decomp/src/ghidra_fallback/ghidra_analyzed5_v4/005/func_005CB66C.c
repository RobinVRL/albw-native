#include "ghidra_types.h"

extern undefined4 *DAT_005cb668;
extern undefined4 *DAT_005cb66c;

// USA 005CB66C <- EU 005CB644 (Ghidra, non-matching)
// GLOBAL DAT_005cb668 undefined4 *
// GLOBAL DAT_005cb66c undefined4 *

void func_005CB66C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb668;
  *DAT_005cb668 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb66c;
  *DAT_005cb66c = 0;
  puVar1[1] = 0;
  return;
}

