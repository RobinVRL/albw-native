#include "ghidra_types.h"

extern undefined4 *DAT_005e4324;
extern undefined4 *DAT_005e4328;

// USA 005E4328 <- EU 005E4300 (Ghidra, non-matching)
// GLOBAL DAT_005e4324 undefined4 *
// GLOBAL DAT_005e4328 undefined4 *

void func_005E4328(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4324;
  *DAT_005e4324 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4328;
  *DAT_005e4328 = 0;
  puVar1[1] = 0;
  return;
}

