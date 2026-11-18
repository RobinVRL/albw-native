#include "ghidra_types.h"

extern undefined4 *DAT_005fe574;
extern undefined4 *DAT_005fe578;

// USA 005FE578 <- EU 005FE550 (Ghidra, non-matching)
// GLOBAL DAT_005fe574 undefined4 *
// GLOBAL DAT_005fe578 undefined4 *

void func_005FE578(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fe574;
  *DAT_005fe574 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fe578;
  *DAT_005fe578 = 0;
  puVar1[1] = 0;
  return;
}

