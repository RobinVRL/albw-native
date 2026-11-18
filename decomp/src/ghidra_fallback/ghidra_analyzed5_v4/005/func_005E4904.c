#include "ghidra_types.h"

extern undefined4 *DAT_005e4900;
extern undefined4 *DAT_005e4904;

// USA 005E4904 <- EU 005E48DC (Ghidra, non-matching)
// GLOBAL DAT_005e4900 undefined4 *
// GLOBAL DAT_005e4904 undefined4 *

void func_005E4904(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4900;
  *DAT_005e4900 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4904;
  *DAT_005e4904 = 0;
  puVar1[1] = 0;
  return;
}

