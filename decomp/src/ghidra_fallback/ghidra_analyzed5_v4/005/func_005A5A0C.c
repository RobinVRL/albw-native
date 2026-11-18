#include "ghidra_types.h"

extern undefined4 *DAT_005a5a08;
extern undefined4 *DAT_005a5a0c;

// USA 005A5A0C <- EU 005A59E4 (Ghidra, non-matching)
// GLOBAL DAT_005a5a08 undefined4 *
// GLOBAL DAT_005a5a0c undefined4 *

void func_005A5A0C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a5a08;
  *DAT_005a5a08 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a5a0c;
  *DAT_005a5a0c = 0;
  puVar1[1] = 0;
  return;
}

