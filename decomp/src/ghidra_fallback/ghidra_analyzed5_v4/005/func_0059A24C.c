#include "ghidra_types.h"

extern undefined4 *DAT_0059a248;
extern undefined4 *DAT_0059a24c;

// USA 0059A24C <- EU 0059A224 (Ghidra, non-matching)
// GLOBAL DAT_0059a248 undefined4 *
// GLOBAL DAT_0059a24c undefined4 *

void func_0059A24C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059a248;
  *DAT_0059a248 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059a24c;
  *DAT_0059a24c = 0;
  puVar1[1] = 0;
  return;
}

