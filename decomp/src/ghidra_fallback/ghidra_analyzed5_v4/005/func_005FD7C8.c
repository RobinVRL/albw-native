#include "ghidra_types.h"

extern undefined4 *DAT_005fd7c4;
extern undefined4 *DAT_005fd7c8;

// USA 005FD7C8 <- EU 005FD7A0 (Ghidra, non-matching)
// GLOBAL DAT_005fd7c4 undefined4 *
// GLOBAL DAT_005fd7c8 undefined4 *

void func_005FD7C8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fd7c4;
  *DAT_005fd7c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fd7c8;
  *DAT_005fd7c8 = 0;
  puVar1[1] = 0;
  return;
}

