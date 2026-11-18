#include "ghidra_types.h"

extern undefined4 *DAT_005b967c;
extern undefined4 *DAT_005b9680;

// USA 005B9680 <- EU 005B9658 (Ghidra, non-matching)
// GLOBAL DAT_005b967c undefined4 *
// GLOBAL DAT_005b9680 undefined4 *

void func_005B9680(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b967c;
  *DAT_005b967c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9680;
  *DAT_005b9680 = 0;
  puVar1[1] = 0;
  return;
}

