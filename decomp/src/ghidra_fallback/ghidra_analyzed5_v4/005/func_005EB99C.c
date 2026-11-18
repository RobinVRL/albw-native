#include "ghidra_types.h"

extern undefined4 *DAT_005eb998;
extern undefined4 *DAT_005eb99c;

// USA 005EB99C <- EU 005EB974 (Ghidra, non-matching)
// GLOBAL DAT_005eb998 undefined4 *
// GLOBAL DAT_005eb99c undefined4 *

void func_005EB99C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb998;
  *DAT_005eb998 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb99c;
  *DAT_005eb99c = 0;
  puVar1[1] = 0;
  return;
}

