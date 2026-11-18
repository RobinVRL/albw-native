#include "ghidra_types.h"

extern undefined4 *DAT_005efdb4;
extern undefined4 *DAT_005efdb8;

// USA 005EFDB8 <- EU 005EFD90 (Ghidra, non-matching)
// GLOBAL DAT_005efdb4 undefined4 *
// GLOBAL DAT_005efdb8 undefined4 *

void func_005EFDB8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005efdb4;
  *DAT_005efdb4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005efdb8;
  *DAT_005efdb8 = 0;
  puVar1[1] = 0;
  return;
}

