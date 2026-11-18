#include "ghidra_types.h"

extern undefined4 *DAT_005e4cb8;
extern undefined4 *DAT_005e4cbc;

// USA 005E4CBC <- EU 005E4C94 (Ghidra, non-matching)
// GLOBAL DAT_005e4cb8 undefined4 *
// GLOBAL DAT_005e4cbc undefined4 *

void func_005E4CBC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4cb8;
  *DAT_005e4cb8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4cbc;
  *DAT_005e4cbc = 0;
  puVar1[1] = 0;
  return;
}

