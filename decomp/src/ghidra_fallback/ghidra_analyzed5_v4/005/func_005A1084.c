#include "ghidra_types.h"

extern undefined4 *DAT_005a1080;
extern undefined4 *DAT_005a1084;

// USA 005A1084 <- EU 005A105C (Ghidra, non-matching)
// GLOBAL DAT_005a1080 undefined4 *
// GLOBAL DAT_005a1084 undefined4 *

void func_005A1084(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a1080;
  *DAT_005a1080 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a1084;
  *DAT_005a1084 = 0;
  puVar1[1] = 0;
  return;
}

