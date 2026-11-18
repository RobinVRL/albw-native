#include "ghidra_types.h"

extern undefined4 *DAT_005b95c4;
extern undefined4 *DAT_005b95c8;

// USA 005B95C8 <- EU 005B95A0 (Ghidra, non-matching)
// GLOBAL DAT_005b95c4 undefined4 *
// GLOBAL DAT_005b95c8 undefined4 *

void func_005B95C8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b95c4;
  *DAT_005b95c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b95c8;
  *DAT_005b95c8 = 0;
  puVar1[1] = 0;
  return;
}

