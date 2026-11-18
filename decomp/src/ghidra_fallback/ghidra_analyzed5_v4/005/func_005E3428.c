#include "ghidra_types.h"

extern undefined4 *DAT_005e3470;

// USA 005E3428 <- EU 005E3400 (Ghidra, non-matching)
// GLOBAL DAT_005e3470 undefined4 *

void func_005E3428(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e3470;
  DAT_005e3470[10] = 0xffffffff;
  puVar1[0xb] = 0xffffffff;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0x58] = puVar1[6];
  puVar1[0x5b] = puVar1[2];
  puVar1[0x5e] = puVar1[1];
  puVar1[0x61] = *puVar1;
  puVar1[100] = puVar1[3];
  puVar1[0x67] = puVar1[4];
  puVar1[0x6a] = puVar1[5];
  puVar1[8] = puVar1[7];
  return;
}

