#include "ghidra_types.h"

extern undefined4 *DAT_005cb874;
extern undefined4 *DAT_005cb878;

// USA 005CB878 <- EU 005CB850 (Ghidra, non-matching)
// GLOBAL DAT_005cb874 undefined4 *
// GLOBAL DAT_005cb878 undefined4 *

void func_005CB878(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb874;
  *DAT_005cb874 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb878;
  *DAT_005cb878 = 0;
  puVar1[1] = 0;
  return;
}

