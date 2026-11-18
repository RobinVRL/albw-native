#include "ghidra_types.h"

extern undefined4 *DAT_005ebd40;
extern undefined4 *DAT_005ebd44;

// USA 005EBD44 <- EU 005EBD1C (Ghidra, non-matching)
// GLOBAL DAT_005ebd40 undefined4 *
// GLOBAL DAT_005ebd44 undefined4 *

void func_005EBD44(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ebd40;
  *DAT_005ebd40 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ebd44;
  *DAT_005ebd44 = 0;
  puVar1[1] = 0;
  return;
}

