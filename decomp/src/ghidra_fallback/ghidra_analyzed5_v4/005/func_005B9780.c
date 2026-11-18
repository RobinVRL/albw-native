#include "ghidra_types.h"

extern undefined4 *DAT_005b9770;

// USA 005B9780 <- EU 005B9758 (Ghidra, non-matching)
// GLOBAL DAT_005b9770 undefined4 *

void func_005B9780(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9770;
  *DAT_005b9770 = 0xbe0;
  puVar1[1] = 0xe60;
  puVar1[2] = 0x820;
  return;
}

