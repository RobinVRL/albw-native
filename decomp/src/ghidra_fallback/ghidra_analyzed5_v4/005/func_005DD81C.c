#include "ghidra_types.h"

extern undefined4 *DAT_005dd818;
extern undefined4 *DAT_005dd81c;

// USA 005DD81C <- EU 005DD7F4 (Ghidra, non-matching)
// GLOBAL DAT_005dd818 undefined4 *
// GLOBAL DAT_005dd81c undefined4 *

void func_005DD81C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005dd818;
  *DAT_005dd818 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005dd81c;
  *DAT_005dd81c = 0;
  puVar1[1] = 0;
  return;
}

