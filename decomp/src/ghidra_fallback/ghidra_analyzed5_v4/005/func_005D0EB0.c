#include "ghidra_types.h"

extern undefined4 *DAT_005d0eac;
extern undefined4 *DAT_005d0eb0;

// USA 005D0EB0 <- EU 005D0E88 (Ghidra, non-matching)
// GLOBAL DAT_005d0eac undefined4 *
// GLOBAL DAT_005d0eb0 undefined4 *

void func_005D0EB0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0eac;
  *DAT_005d0eac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0eb0;
  *DAT_005d0eb0 = 0;
  puVar1[1] = 0;
  return;
}

