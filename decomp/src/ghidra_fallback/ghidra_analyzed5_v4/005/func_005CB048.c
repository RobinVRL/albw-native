#include "ghidra_types.h"

extern undefined4 *DAT_005cb044;
extern undefined4 *DAT_005cb048;

// USA 005CB048 <- EU 005CB020 (Ghidra, non-matching)
// GLOBAL DAT_005cb044 undefined4 *
// GLOBAL DAT_005cb048 undefined4 *

void func_005CB048(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb044;
  *DAT_005cb044 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb048;
  *DAT_005cb048 = 0;
  puVar1[1] = 0;
  return;
}

