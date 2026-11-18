#include "ghidra_types.h"

extern undefined4 *DAT_005a89b8;
extern undefined4 *DAT_005a89bc;

// USA 005A89BC <- EU 005A8994 (Ghidra, non-matching)
// GLOBAL DAT_005a89b8 undefined4 *
// GLOBAL DAT_005a89bc undefined4 *

void func_005A89BC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a89b8;
  *DAT_005a89b8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a89bc;
  *DAT_005a89bc = 0;
  puVar1[1] = 0;
  return;
}

