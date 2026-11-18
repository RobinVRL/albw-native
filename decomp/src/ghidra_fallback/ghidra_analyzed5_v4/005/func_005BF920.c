#include "ghidra_types.h"

extern undefined4 *DAT_005bf91c;
extern undefined4 *DAT_005bf920;

// USA 005BF920 <- EU 005BF8F8 (Ghidra, non-matching)
// GLOBAL DAT_005bf91c undefined4 *
// GLOBAL DAT_005bf920 undefined4 *

void func_005BF920(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005bf91c;
  *DAT_005bf91c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bf920;
  *DAT_005bf920 = 0;
  puVar1[1] = 0;
  return;
}

