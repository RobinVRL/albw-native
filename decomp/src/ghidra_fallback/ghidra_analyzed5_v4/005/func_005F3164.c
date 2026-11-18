#include "ghidra_types.h"

extern undefined4 *DAT_005f3160;
extern undefined4 *DAT_005f3164;

// USA 005F3164 <- EU 005F313C (Ghidra, non-matching)
// GLOBAL DAT_005f3160 undefined4 *
// GLOBAL DAT_005f3164 undefined4 *

void func_005F3164(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f3160;
  *DAT_005f3160 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f3164;
  *DAT_005f3164 = 0;
  puVar1[1] = 0;
  return;
}

