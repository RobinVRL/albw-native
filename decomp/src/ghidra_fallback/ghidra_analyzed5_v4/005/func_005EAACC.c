#include "ghidra_types.h"

extern undefined4 *DAT_005eaac8;
extern undefined4 *DAT_005eaacc;

// USA 005EAACC <- EU 005EAAA4 (Ghidra, non-matching)
// GLOBAL DAT_005eaac8 undefined4 *
// GLOBAL DAT_005eaacc undefined4 *

void func_005EAACC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eaac8;
  *DAT_005eaac8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eaacc;
  *DAT_005eaacc = 0;
  puVar1[1] = 0;
  return;
}

