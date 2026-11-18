#include "ghidra_types.h"

extern undefined4 *DAT_005a38b0;
extern undefined4 *DAT_005a38b4;

// USA 005A38B4 <- EU 005A388C (Ghidra, non-matching)
// GLOBAL DAT_005a38b0 undefined4 *
// GLOBAL DAT_005a38b4 undefined4 *

void func_005A38B4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a38b0;
  *DAT_005a38b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a38b4;
  *DAT_005a38b4 = 0;
  puVar1[1] = 0;
  return;
}

