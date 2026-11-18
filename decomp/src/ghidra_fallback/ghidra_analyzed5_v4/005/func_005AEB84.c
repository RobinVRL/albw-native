#include "ghidra_types.h"

extern undefined4 *DAT_005aeb80;
extern undefined4 *DAT_005aeb84;

// USA 005AEB84 <- EU 005AEB5C (Ghidra, non-matching)
// GLOBAL DAT_005aeb80 undefined4 *
// GLOBAL DAT_005aeb84 undefined4 *

void func_005AEB84(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aeb80;
  *DAT_005aeb80 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aeb84;
  *DAT_005aeb84 = 0;
  puVar1[1] = 0;
  return;
}

