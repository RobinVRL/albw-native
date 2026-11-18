#include "ghidra_types.h"

extern undefined4 *DAT_005a7f9c;
extern undefined4 *DAT_005a7fa0;

// USA 005A7FA0 <- EU 005A7F78 (Ghidra, non-matching)
// GLOBAL DAT_005a7f9c undefined4 *
// GLOBAL DAT_005a7fa0 undefined4 *

void func_005A7FA0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a7f9c;
  *DAT_005a7f9c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a7fa0;
  *DAT_005a7fa0 = 0;
  puVar1[1] = 0;
  return;
}

