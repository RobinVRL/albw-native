#include "ghidra_types.h"

extern undefined4 *DAT_005cff90;
extern undefined4 *DAT_005cff94;

// USA 005CFF94 <- EU 005CFF6C (Ghidra, non-matching)
// GLOBAL DAT_005cff90 undefined4 *
// GLOBAL DAT_005cff94 undefined4 *

void func_005CFF94(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cff90;
  *DAT_005cff90 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cff94;
  *DAT_005cff94 = 0;
  puVar1[1] = 0;
  return;
}

