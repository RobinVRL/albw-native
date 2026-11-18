#include "ghidra_types.h"

extern undefined4 *DAT_005b9598;
extern undefined4 *DAT_005b959c;

// USA 005B959C <- EU 005B9574 (Ghidra, non-matching)
// GLOBAL DAT_005b9598 undefined4 *
// GLOBAL DAT_005b959c undefined4 *

void func_005B959C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9598;
  *DAT_005b9598 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b959c;
  *DAT_005b959c = 0;
  puVar1[1] = 0;
  return;
}

