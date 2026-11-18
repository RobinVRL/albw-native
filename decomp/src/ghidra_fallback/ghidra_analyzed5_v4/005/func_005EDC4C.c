#include "ghidra_types.h"

extern undefined4 *DAT_005edc48;
extern undefined4 *DAT_005edc4c;

// USA 005EDC4C <- EU 005EDC24 (Ghidra, non-matching)
// GLOBAL DAT_005edc48 undefined4 *
// GLOBAL DAT_005edc4c undefined4 *

void func_005EDC4C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edc48;
  *DAT_005edc48 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edc4c;
  *DAT_005edc4c = 0;
  puVar1[1] = 0;
  return;
}

