#include "ghidra_types.h"

extern undefined4 *DAT_005eebe0;
extern undefined4 *DAT_005eebe4;

// USA 005EEBE4 <- EU 005EEBBC (Ghidra, non-matching)
// GLOBAL DAT_005eebe0 undefined4 *
// GLOBAL DAT_005eebe4 undefined4 *

void func_005EEBE4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eebe0;
  *DAT_005eebe0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eebe4;
  *DAT_005eebe4 = 0;
  puVar1[1] = 0;
  return;
}

