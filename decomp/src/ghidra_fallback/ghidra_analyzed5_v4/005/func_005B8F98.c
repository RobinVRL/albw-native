#include "ghidra_types.h"

extern undefined4 *DAT_005b8f94;
extern undefined4 *DAT_005b8f98;

// USA 005B8F98 <- EU 005B8F70 (Ghidra, non-matching)
// GLOBAL DAT_005b8f94 undefined4 *
// GLOBAL DAT_005b8f98 undefined4 *

void func_005B8F98(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b8f94;
  *DAT_005b8f94 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8f98;
  *DAT_005b8f98 = 0;
  puVar1[1] = 0;
  return;
}

