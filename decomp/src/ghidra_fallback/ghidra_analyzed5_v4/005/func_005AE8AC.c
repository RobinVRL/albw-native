#include "ghidra_types.h"

extern undefined4 *DAT_005ae8a8;
extern undefined4 *DAT_005ae8ac;

// USA 005AE8AC <- EU 005AE884 (Ghidra, non-matching)
// GLOBAL DAT_005ae8a8 undefined4 *
// GLOBAL DAT_005ae8ac undefined4 *

void func_005AE8AC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ae8a8;
  *DAT_005ae8a8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ae8ac;
  *DAT_005ae8ac = 0;
  puVar1[1] = 0;
  return;
}

