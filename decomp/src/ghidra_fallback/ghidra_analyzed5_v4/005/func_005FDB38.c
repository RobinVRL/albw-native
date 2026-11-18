#include "ghidra_types.h"

extern undefined4 *DAT_005fdb34;
extern undefined4 *DAT_005fdb38;

// USA 005FDB38 <- EU 005FDB10 (Ghidra, non-matching)
// GLOBAL DAT_005fdb34 undefined4 *
// GLOBAL DAT_005fdb38 undefined4 *

void func_005FDB38(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fdb34;
  *DAT_005fdb34 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fdb38;
  *DAT_005fdb38 = 0;
  puVar1[1] = 0;
  return;
}

