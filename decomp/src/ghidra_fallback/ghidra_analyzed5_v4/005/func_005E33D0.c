#include "ghidra_types.h"

extern undefined4 *DAT_005e33cc;
extern undefined4 *DAT_005e33d0;

// USA 005E33D0 <- EU 005E33A8 (Ghidra, non-matching)
// GLOBAL DAT_005e33cc undefined4 *
// GLOBAL DAT_005e33d0 undefined4 *

void func_005E33D0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e33cc;
  *DAT_005e33cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e33d0;
  *DAT_005e33d0 = 0;
  puVar1[1] = 0;
  return;
}

