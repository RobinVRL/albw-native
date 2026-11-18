#include "ghidra_types.h"

extern undefined4 *DAT_005d02ac;
extern undefined4 *DAT_005d02b0;

// USA 005D02B0 <- EU 005D0288 (Ghidra, non-matching)
// GLOBAL DAT_005d02ac undefined4 *
// GLOBAL DAT_005d02b0 undefined4 *

void func_005D02B0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d02ac;
  *DAT_005d02ac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d02b0;
  *DAT_005d02b0 = 0;
  puVar1[1] = 0;
  return;
}

