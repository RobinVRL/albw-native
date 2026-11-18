#include "ghidra_types.h"

extern undefined4 *DAT_005b8fc0;
extern undefined4 *DAT_005b8fc4;

// USA 005B8FC4 <- EU 005B8F9C (Ghidra, non-matching)
// GLOBAL DAT_005b8fc0 undefined4 *
// GLOBAL DAT_005b8fc4 undefined4 *

void func_005B8FC4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b8fc0;
  *DAT_005b8fc0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8fc4;
  *DAT_005b8fc4 = 0;
  puVar1[1] = 0;
  return;
}

