#include "ghidra_types.h"

extern undefined4 *DAT_005eec64;
extern undefined4 *DAT_005eec68;

// USA 005EEC68 <- EU 005EEC40 (Ghidra, non-matching)
// GLOBAL DAT_005eec64 undefined4 *
// GLOBAL DAT_005eec68 undefined4 *

void func_005EEC68(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eec64;
  *DAT_005eec64 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eec68;
  *DAT_005eec68 = 0;
  puVar1[1] = 0;
  return;
}

