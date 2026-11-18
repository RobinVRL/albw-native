#include "ghidra_types.h"

extern undefined4 *DAT_005edeec;
extern undefined4 *DAT_005edef0;

// USA 005EDEF0 <- EU 005EDEC8 (Ghidra, non-matching)
// GLOBAL DAT_005edeec undefined4 *
// GLOBAL DAT_005edef0 undefined4 *

void func_005EDEF0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edeec;
  *DAT_005edeec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edef0;
  *DAT_005edef0 = 0;
  puVar1[1] = 0;
  return;
}

