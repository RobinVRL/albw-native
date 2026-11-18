#include "ghidra_types.h"

extern undefined4 *DAT_005af248;
extern undefined4 *DAT_005af24c;

// USA 005AF24C <- EU 005AF224 (Ghidra, non-matching)
// GLOBAL DAT_005af248 undefined4 *
// GLOBAL DAT_005af24c undefined4 *

void func_005AF24C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005af248;
  *DAT_005af248 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005af24c;
  *DAT_005af24c = 0;
  puVar1[1] = 0;
  return;
}

