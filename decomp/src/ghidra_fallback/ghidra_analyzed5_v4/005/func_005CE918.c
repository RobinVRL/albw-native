#include "ghidra_types.h"

extern undefined4 *DAT_005ce914;
extern undefined4 *DAT_005ce918;

// USA 005CE918 <- EU 005CE8F0 (Ghidra, non-matching)
// GLOBAL DAT_005ce914 undefined4 *
// GLOBAL DAT_005ce918 undefined4 *

void func_005CE918(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ce914;
  *DAT_005ce914 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ce918;
  *DAT_005ce918 = 0;
  puVar1[1] = 0;
  return;
}

