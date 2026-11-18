#include "ghidra_types.h"

extern undefined4 *DAT_005b95f8;
extern undefined4 DAT_005b95fc;

// USA 005B95F4 <- EU 005B95CC (Ghidra, non-matching)
// GLOBAL DAT_005b95f8 undefined4 *
// GLOBAL DAT_005b95fc undefined4

void func_005B95F4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b95f8;
  DAT_005b95f8[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar1 = DAT_005b95fc;
  puVar1[1] = 0;
  return;
}

