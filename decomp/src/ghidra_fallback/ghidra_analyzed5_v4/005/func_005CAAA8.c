#include "ghidra_types.h"

extern undefined4 *DAT_005caaa4;
extern undefined4 *DAT_005caaa8;

// USA 005CAAA8 <- EU 005CAA80 (Ghidra, non-matching)
// GLOBAL DAT_005caaa4 undefined4 *
// GLOBAL DAT_005caaa8 undefined4 *

void func_005CAAA8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005caaa4;
  *DAT_005caaa4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005caaa8;
  *DAT_005caaa8 = 0;
  puVar1[1] = 0;
  return;
}

