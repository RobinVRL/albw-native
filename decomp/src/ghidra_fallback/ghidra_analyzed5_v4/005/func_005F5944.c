#include "ghidra_types.h"

extern undefined4 *DAT_005f5940;
extern undefined4 *DAT_005f5944;

// USA 005F5944 <- EU 005F591C (Ghidra, non-matching)
// GLOBAL DAT_005f5940 undefined4 *
// GLOBAL DAT_005f5944 undefined4 *

void func_005F5944(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f5940;
  *DAT_005f5940 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f5944;
  *DAT_005f5944 = 0;
  puVar1[1] = 0;
  return;
}

