#include "ghidra_types.h"

extern undefined4 *DAT_005ca168;
extern undefined4 *DAT_005ca16c;

// USA 005CA16C <- EU 005CA144 (Ghidra, non-matching)
// GLOBAL DAT_005ca168 undefined4 *
// GLOBAL DAT_005ca16c undefined4 *

void func_005CA16C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ca168;
  *DAT_005ca168 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca16c;
  *DAT_005ca16c = 0;
  puVar1[1] = 0;
  return;
}

