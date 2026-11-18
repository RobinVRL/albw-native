#include "ghidra_types.h"

extern undefined4 *DAT_0059fae4;
extern undefined4 *DAT_0059fae8;

// USA 0059FAE8 <- EU 0059FAC0 (Ghidra, non-matching)
// GLOBAL DAT_0059fae4 undefined4 *
// GLOBAL DAT_0059fae8 undefined4 *

void func_0059FAE8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059fae4;
  *DAT_0059fae4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059fae8;
  *DAT_0059fae8 = 0;
  puVar1[1] = 0;
  return;
}

