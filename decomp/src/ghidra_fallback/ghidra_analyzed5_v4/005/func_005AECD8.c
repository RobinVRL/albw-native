#include "ghidra_types.h"

extern undefined4 *DAT_005aecd4;
extern undefined4 *DAT_005aecd8;

// USA 005AECD8 <- EU 005AECB0 (Ghidra, non-matching)
// GLOBAL DAT_005aecd4 undefined4 *
// GLOBAL DAT_005aecd8 undefined4 *

void func_005AECD8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aecd4;
  *DAT_005aecd4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aecd8;
  *DAT_005aecd8 = 0;
  puVar1[1] = 0;
  return;
}

