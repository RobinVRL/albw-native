#include "ghidra_types.h"

extern undefined4 *DAT_005cfaf0;
extern undefined4 *DAT_005cfaf4;

// USA 005CFAF4 <- EU 005CFACC (Ghidra, non-matching)
// GLOBAL DAT_005cfaf0 undefined4 *
// GLOBAL DAT_005cfaf4 undefined4 *

void func_005CFAF4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cfaf0;
  *DAT_005cfaf0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cfaf4;
  *DAT_005cfaf4 = 0;
  puVar1[1] = 0;
  return;
}

