#include "ghidra_types.h"

extern undefined4 *DAT_005eb96c;
extern undefined4 *DAT_005eb970;

// USA 005EB970 <- EU 005EB948 (Ghidra, non-matching)
// GLOBAL DAT_005eb96c undefined4 *
// GLOBAL DAT_005eb970 undefined4 *

void func_005EB970(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb96c;
  *DAT_005eb96c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb970;
  *DAT_005eb970 = 0;
  puVar1[1] = 0;
  return;
}

