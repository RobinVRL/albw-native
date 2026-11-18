#include "ghidra_types.h"

extern undefined4 *DAT_005a7e68;
extern undefined4 *DAT_005a7e6c;

// USA 005A7E6C <- EU 005A7E44 (Ghidra, non-matching)
// GLOBAL DAT_005a7e68 undefined4 *
// GLOBAL DAT_005a7e6c undefined4 *

void func_005A7E6C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a7e68;
  *DAT_005a7e68 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a7e6c;
  *DAT_005a7e6c = 0;
  puVar1[1] = 0;
  return;
}

