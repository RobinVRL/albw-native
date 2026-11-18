#include "ghidra_types.h"

extern undefined4 *DAT_0059f734;
extern undefined4 *DAT_0059f738;

// USA 0059F738 <- EU 0059F710 (Ghidra, non-matching)
// GLOBAL DAT_0059f734 undefined4 *
// GLOBAL DAT_0059f738 undefined4 *

void func_0059F738(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059f734;
  *DAT_0059f734 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f738;
  *DAT_0059f738 = 0;
  puVar1[1] = 0;
  return;
}

