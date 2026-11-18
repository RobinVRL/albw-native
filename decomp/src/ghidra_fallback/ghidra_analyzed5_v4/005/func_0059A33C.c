#include "ghidra_types.h"

extern undefined4 *DAT_0059a338;
extern undefined4 *DAT_0059a33c;

// USA 0059A33C <- EU 0059A314 (Ghidra, non-matching)
// GLOBAL DAT_0059a338 undefined4 *
// GLOBAL DAT_0059a33c undefined4 *

void func_0059A33C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059a338;
  *DAT_0059a338 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059a33c;
  *DAT_0059a33c = 0;
  puVar1[1] = 0;
  return;
}

