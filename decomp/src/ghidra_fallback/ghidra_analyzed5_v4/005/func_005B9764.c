#include "ghidra_types.h"

extern undefined4 *DAT_005b9754;

// USA 005B9764 <- EU 005B973C (Ghidra, non-matching)
// GLOBAL DAT_005b9754 undefined4 *

void func_005B9764(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9754;
  *DAT_005b9754 = 0xbe0;
  puVar1[1] = 0xe60;
  puVar1[2] = 0x820;
  return;
}

