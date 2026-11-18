#include "ghidra_types.h"

extern undefined4 *DAT_005f87fc;
extern undefined4 *DAT_005f8800;

// USA 005F8800 <- EU 005F87D8 (Ghidra, non-matching)
// GLOBAL DAT_005f87fc undefined4 *
// GLOBAL DAT_005f8800 undefined4 *

void func_005F8800(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f87fc;
  *DAT_005f87fc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f8800;
  *DAT_005f8800 = 0;
  puVar1[1] = 0;
  return;
}

