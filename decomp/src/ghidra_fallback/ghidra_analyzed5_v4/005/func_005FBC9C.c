#include "ghidra_types.h"

extern undefined4 *DAT_005fbc98;
extern undefined4 *DAT_005fbc9c;

// USA 005FBC9C <- EU 005FBC74 (Ghidra, non-matching)
// GLOBAL DAT_005fbc98 undefined4 *
// GLOBAL DAT_005fbc9c undefined4 *

void func_005FBC9C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fbc98;
  *DAT_005fbc98 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fbc9c;
  *DAT_005fbc9c = 0;
  puVar1[1] = 0;
  return;
}

