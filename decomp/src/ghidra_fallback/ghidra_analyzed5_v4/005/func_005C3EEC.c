#include "ghidra_types.h"

extern undefined4 *DAT_005c3ee8;
extern undefined4 *DAT_005c3eec;

// USA 005C3EEC <- EU 005C3EC4 (Ghidra, non-matching)
// GLOBAL DAT_005c3ee8 undefined4 *
// GLOBAL DAT_005c3eec undefined4 *

void func_005C3EEC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c3ee8;
  *DAT_005c3ee8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c3eec;
  *DAT_005c3eec = 0;
  puVar1[1] = 0;
  return;
}

