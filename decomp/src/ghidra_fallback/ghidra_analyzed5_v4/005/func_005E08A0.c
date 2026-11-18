#include "ghidra_types.h"

extern undefined4 *DAT_005e089c;
extern undefined4 *DAT_005e08a0;

// USA 005E08A0 <- EU 005E0878 (Ghidra, non-matching)
// GLOBAL DAT_005e089c undefined4 *
// GLOBAL DAT_005e08a0 undefined4 *

void func_005E08A0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e089c;
  *DAT_005e089c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e08a0;
  *DAT_005e08a0 = 0;
  puVar1[1] = 0;
  return;
}

