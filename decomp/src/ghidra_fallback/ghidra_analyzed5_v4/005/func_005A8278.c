#include "ghidra_types.h"

extern undefined4 *DAT_005a8274;
extern undefined4 *DAT_005a8278;

// USA 005A8278 <- EU 005A8250 (Ghidra, non-matching)
// GLOBAL DAT_005a8274 undefined4 *
// GLOBAL DAT_005a8278 undefined4 *

void func_005A8278(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a8274;
  *DAT_005a8274 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a8278;
  *DAT_005a8278 = 0;
  puVar1[1] = 0;
  return;
}

