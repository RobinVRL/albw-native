#include "ghidra_types.h"

extern undefined4 *DAT_005e0a54;
extern undefined4 *DAT_005e0a58;

// USA 005E0A58 <- EU 005E0A30 (Ghidra, non-matching)
// GLOBAL DAT_005e0a54 undefined4 *
// GLOBAL DAT_005e0a58 undefined4 *

void func_005E0A58(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e0a54;
  *DAT_005e0a54 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e0a58;
  *DAT_005e0a58 = 0;
  puVar1[1] = 0;
  return;
}

