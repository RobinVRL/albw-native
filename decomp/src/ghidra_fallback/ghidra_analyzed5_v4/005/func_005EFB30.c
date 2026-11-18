#include "ghidra_types.h"

extern undefined4 *DAT_005efb2c;
extern undefined4 *DAT_005efb30;

// USA 005EFB30 <- EU 005EFB08 (Ghidra, non-matching)
// GLOBAL DAT_005efb2c undefined4 *
// GLOBAL DAT_005efb30 undefined4 *

void func_005EFB30(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005efb2c;
  *DAT_005efb2c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005efb30;
  *DAT_005efb30 = 0;
  puVar1[1] = 0;
  return;
}

