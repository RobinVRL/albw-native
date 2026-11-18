#include "ghidra_types.h"

extern undefined4 *DAT_005fe5a0;
extern undefined4 *DAT_005fe5a4;

// USA 005FE5A4 <- EU 005FE57C (Ghidra, non-matching)
// GLOBAL DAT_005fe5a0 undefined4 *
// GLOBAL DAT_005fe5a4 undefined4 *

void func_005FE5A4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fe5a0;
  *DAT_005fe5a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fe5a4;
  *DAT_005fe5a4 = 0;
  puVar1[1] = 0;
  return;
}

