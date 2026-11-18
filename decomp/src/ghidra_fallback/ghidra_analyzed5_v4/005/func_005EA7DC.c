#include "ghidra_types.h"

extern undefined4 *DAT_005ea804;
extern undefined4 *DAT_005ea808;
extern undefined4 DAT_005ea80c;

// USA 005EA7DC <- EU 005EA7B4 (Ghidra, non-matching)
// GLOBAL DAT_005ea804 undefined4 *
// GLOBAL DAT_005ea808 undefined4 *
// GLOBAL DAT_005ea80c undefined4

void func_005EA7DC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_005ea80c;
  puVar1 = DAT_005ea804;
  *DAT_005ea804 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ea808;
  *DAT_005ea808 = 0;
  puVar1[1] = 0;
  puVar1[4] = uVar2;
  puVar1[7] = uVar2;
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar2;
  puVar1[0x10] = uVar2;
  puVar1[0x13] = uVar2;
  puVar1[0x16] = uVar2;
  puVar1[0x19] = uVar2;
  puVar1[0x1c] = uVar2;
  return;
}

