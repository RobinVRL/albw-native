#include "ghidra_types.h"

extern undefined4 *DAT_005e4ae8;
extern undefined4 *DAT_005e4aec;

// USA 005E4AEC <- EU 005E4AC4 (Ghidra, non-matching)
// GLOBAL DAT_005e4ae8 undefined4 *
// GLOBAL DAT_005e4aec undefined4 *

void func_005E4AEC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4ae8;
  *DAT_005e4ae8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4aec;
  *DAT_005e4aec = 0;
  puVar1[1] = 0;
  return;
}

