#include "ghidra_types.h"

extern undefined4 *DAT_005ebd6c;
extern undefined4 *DAT_005ebd70;

// USA 005EBD70 <- EU 005EBD48 (Ghidra, non-matching)
// GLOBAL DAT_005ebd6c undefined4 *
// GLOBAL DAT_005ebd70 undefined4 *

void func_005EBD70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ebd6c;
  *DAT_005ebd6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ebd70;
  *DAT_005ebd70 = 0;
  puVar1[1] = 0;
  return;
}

