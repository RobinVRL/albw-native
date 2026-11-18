#include "ghidra_types.h"

extern undefined4 *DAT_005a3fa8;
extern undefined4 *DAT_005a3fac;

// USA 005A3FAC <- EU 005A3F84 (Ghidra, non-matching)
// GLOBAL DAT_005a3fa8 undefined4 *
// GLOBAL DAT_005a3fac undefined4 *

void func_005A3FAC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a3fa8;
  *DAT_005a3fa8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a3fac;
  *DAT_005a3fac = 0;
  puVar1[1] = 0;
  return;
}

