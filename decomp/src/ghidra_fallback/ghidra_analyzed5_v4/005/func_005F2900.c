#include "ghidra_types.h"

extern undefined4 *DAT_005f28fc;
extern undefined4 *DAT_005f2900;

// USA 005F2900 <- EU 005F28D8 (Ghidra, non-matching)
// GLOBAL DAT_005f28fc undefined4 *
// GLOBAL DAT_005f2900 undefined4 *

void func_005F2900(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f28fc;
  *DAT_005f28fc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f2900;
  *DAT_005f2900 = 0;
  puVar1[1] = 0;
  return;
}

