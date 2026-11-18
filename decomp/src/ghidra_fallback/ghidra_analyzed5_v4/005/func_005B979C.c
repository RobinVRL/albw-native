#include "ghidra_types.h"

extern undefined4 *DAT_005b9798;
extern undefined4 *DAT_005b979c;

// USA 005B979C <- EU 005B9774 (Ghidra, non-matching)
// GLOBAL DAT_005b9798 undefined4 *
// GLOBAL DAT_005b979c undefined4 *

void func_005B979C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9798;
  *DAT_005b9798 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b979c;
  *DAT_005b979c = 0;
  puVar1[1] = 0;
  return;
}

