#include "ghidra_types.h"

extern undefined4 *DAT_005b9c60;
extern undefined4 *DAT_005b9c64;

// USA 005B9C64 <- EU 005B9C3C (Ghidra, non-matching)
// GLOBAL DAT_005b9c60 undefined4 *
// GLOBAL DAT_005b9c64 undefined4 *

void func_005B9C64(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9c60;
  *DAT_005b9c60 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9c64;
  *DAT_005b9c64 = 0;
  puVar1[1] = 0;
  return;
}

