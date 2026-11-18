#include "ghidra_types.h"

extern undefined4 *DAT_005d0ce8;
extern undefined4 *DAT_005d0cec;

// USA 005D0CEC <- EU 005D0CC4 (Ghidra, non-matching)
// GLOBAL DAT_005d0ce8 undefined4 *
// GLOBAL DAT_005d0cec undefined4 *

void func_005D0CEC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0ce8;
  *DAT_005d0ce8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0cec;
  *DAT_005d0cec = 0;
  puVar1[1] = 0;
  return;
}

