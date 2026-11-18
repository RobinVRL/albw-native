#include "ghidra_types.h"

extern undefined4 *DAT_005a7fc8;
extern undefined4 *DAT_005a7fcc;

// USA 005A7FCC <- EU 005A7FA4 (Ghidra, non-matching)
// GLOBAL DAT_005a7fc8 undefined4 *
// GLOBAL DAT_005a7fcc undefined4 *

void func_005A7FCC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a7fc8;
  *DAT_005a7fc8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a7fcc;
  *DAT_005a7fcc = 0;
  puVar1[1] = 0;
  return;
}

