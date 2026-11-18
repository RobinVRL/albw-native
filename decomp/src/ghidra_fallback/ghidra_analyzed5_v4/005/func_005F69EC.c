#include "ghidra_types.h"

extern undefined4 *DAT_005f69e8;
extern undefined4 *DAT_005f69ec;

// USA 005F69EC <- EU 005F69C4 (Ghidra, non-matching)
// GLOBAL DAT_005f69e8 undefined4 *
// GLOBAL DAT_005f69ec undefined4 *

void func_005F69EC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f69e8;
  *DAT_005f69e8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f69ec;
  *DAT_005f69ec = 0;
  puVar1[1] = 0;
  return;
}

