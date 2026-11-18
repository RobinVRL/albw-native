#include "ghidra_types.h"

extern undefined4 *DAT_005a7eec;
extern undefined4 *DAT_005a7ef0;

// USA 005A7EF0 <- EU 005A7EC8 (Ghidra, non-matching)
// GLOBAL DAT_005a7eec undefined4 *
// GLOBAL DAT_005a7ef0 undefined4 *

void func_005A7EF0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a7eec;
  *DAT_005a7eec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a7ef0;
  *DAT_005a7ef0 = 0;
  puVar1[1] = 0;
  return;
}

