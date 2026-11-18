#include "ghidra_types.h"

extern undefined4 *DAT_005e492c;
extern undefined4 *DAT_005e4930;

// USA 005E4930 <- EU 005E4908 (Ghidra, non-matching)
// GLOBAL DAT_005e492c undefined4 *
// GLOBAL DAT_005e4930 undefined4 *

void func_005E4930(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e492c;
  *DAT_005e492c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4930;
  *DAT_005e4930 = 0;
  puVar1[1] = 0;
  return;
}

