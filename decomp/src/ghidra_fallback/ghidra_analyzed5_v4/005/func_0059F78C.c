#include "ghidra_types.h"

extern undefined4 *DAT_0059f788;
extern undefined4 *DAT_0059f78c;

// USA 0059F78C <- EU 0059F764 (Ghidra, non-matching)
// GLOBAL DAT_0059f788 undefined4 *
// GLOBAL DAT_0059f78c undefined4 *

void func_0059F78C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059f788;
  *DAT_0059f788 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f78c;
  *DAT_0059f78c = 0;
  puVar1[1] = 0;
  return;
}

