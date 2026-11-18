#include "ghidra_types.h"

extern undefined4 *DAT_005fe650;
extern undefined4 *DAT_005fe654;

// USA 005FE654 <- EU 005FE62C (Ghidra, non-matching)
// GLOBAL DAT_005fe650 undefined4 *
// GLOBAL DAT_005fe654 undefined4 *

void func_005FE654(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fe650;
  *DAT_005fe650 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fe654;
  *DAT_005fe654 = 0;
  puVar1[1] = 0;
  return;
}

