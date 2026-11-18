#include "ghidra_types.h"

extern undefined4 *DAT_005c1d78;
extern undefined4 *DAT_005c1d7c;

// USA 005C1D7C <- EU 005C1D54 (Ghidra, non-matching)
// GLOBAL DAT_005c1d78 undefined4 *
// GLOBAL DAT_005c1d7c undefined4 *

void func_005C1D7C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c1d78;
  *DAT_005c1d78 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c1d7c;
  *DAT_005c1d7c = 0;
  puVar1[1] = 0;
  return;
}

