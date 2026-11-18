#include "ghidra_types.h"

extern undefined4 *DAT_005f7af4;
extern undefined4 *DAT_005f7af8;

// USA 005F7AF8 <- EU 005F7AD0 (Ghidra, non-matching)
// GLOBAL DAT_005f7af4 undefined4 *
// GLOBAL DAT_005f7af8 undefined4 *

void func_005F7AF8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f7af4;
  *DAT_005f7af4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f7af8;
  *DAT_005f7af8 = 0;
  puVar1[1] = 0;
  return;
}

