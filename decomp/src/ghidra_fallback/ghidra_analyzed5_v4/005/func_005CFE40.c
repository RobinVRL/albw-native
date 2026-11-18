#include "ghidra_types.h"

extern undefined4 *DAT_005cfe3c;
extern undefined4 *DAT_005cfe40;

// USA 005CFE40 <- EU 005CFE18 (Ghidra, non-matching)
// GLOBAL DAT_005cfe3c undefined4 *
// GLOBAL DAT_005cfe40 undefined4 *

void func_005CFE40(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cfe3c;
  *DAT_005cfe3c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cfe40;
  *DAT_005cfe40 = 0;
  puVar1[1] = 0;
  return;
}

