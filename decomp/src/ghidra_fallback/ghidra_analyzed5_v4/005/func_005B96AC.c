#include "ghidra_types.h"

extern undefined4 *DAT_005b96a8;
extern undefined4 *DAT_005b96ac;

// USA 005B96AC <- EU 005B9684 (Ghidra, non-matching)
// GLOBAL DAT_005b96a8 undefined4 *
// GLOBAL DAT_005b96ac undefined4 *

void func_005B96AC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b96a8;
  *DAT_005b96a8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b96ac;
  *DAT_005b96ac = 0;
  puVar1[1] = 0;
  return;
}

