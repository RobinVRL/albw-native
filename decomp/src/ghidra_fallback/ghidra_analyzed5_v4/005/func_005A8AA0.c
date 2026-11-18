#include "ghidra_types.h"

extern undefined4 *DAT_005a8a9c;
extern undefined4 *DAT_005a8aa0;

// USA 005A8AA0 <- EU 005A8A78 (Ghidra, non-matching)
// GLOBAL DAT_005a8a9c undefined4 *
// GLOBAL DAT_005a8aa0 undefined4 *

void func_005A8AA0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a8a9c;
  *DAT_005a8a9c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a8aa0;
  *DAT_005a8aa0 = 0;
  puVar1[1] = 0;
  return;
}

