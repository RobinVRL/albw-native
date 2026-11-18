#include "ghidra_types.h"

extern undefined4 *DAT_005fe5cc;
extern undefined4 *DAT_005fe5d0;

// USA 005FE5D0 <- EU 005FE5A8 (Ghidra, non-matching)
// GLOBAL DAT_005fe5cc undefined4 *
// GLOBAL DAT_005fe5d0 undefined4 *

void func_005FE5D0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fe5cc;
  *DAT_005fe5cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fe5d0;
  *DAT_005fe5d0 = 0;
  puVar1[1] = 0;
  return;
}

