#include "ghidra_types.h"

extern undefined4 *DAT_005b9848;
extern undefined4 *DAT_005b984c;

// USA 005B984C <- EU 005B9824 (Ghidra, non-matching)
// GLOBAL DAT_005b9848 undefined4 *
// GLOBAL DAT_005b984c undefined4 *

void func_005B984C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9848;
  *DAT_005b9848 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b984c;
  *DAT_005b984c = 0;
  puVar1[1] = 0;
  return;
}

