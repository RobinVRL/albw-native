#include "ghidra_types.h"

extern undefined4 *DAT_005b9514;
extern undefined4 *DAT_005b9518;

// USA 005B9518 <- EU 005B94F0 (Ghidra, non-matching)
// GLOBAL DAT_005b9514 undefined4 *
// GLOBAL DAT_005b9518 undefined4 *

void func_005B9518(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9514;
  *DAT_005b9514 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9518;
  *DAT_005b9518 = 0;
  puVar1[1] = 0;
  return;
}

