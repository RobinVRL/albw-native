#include "ghidra_types.h"

extern undefined4 *DAT_005fcd9c;
extern undefined4 *DAT_005fcda0;

// USA 005FCDA0 <- EU 005FCD78 (Ghidra, non-matching)
// GLOBAL DAT_005fcd9c undefined4 *
// GLOBAL DAT_005fcda0 undefined4 *

void func_005FCDA0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fcd9c;
  *DAT_005fcd9c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fcda0;
  *DAT_005fcda0 = 0;
  puVar1[1] = 0;
  return;
}

