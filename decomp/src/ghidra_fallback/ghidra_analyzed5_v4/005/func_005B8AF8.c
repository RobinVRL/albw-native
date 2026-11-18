#include "ghidra_types.h"

extern undefined4 *DAT_005b8af4;
extern undefined4 *DAT_005b8af8;

// USA 005B8AF8 <- EU 005B8AD0 (Ghidra, non-matching)
// GLOBAL DAT_005b8af4 undefined4 *
// GLOBAL DAT_005b8af8 undefined4 *

void func_005B8AF8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b8af4;
  *DAT_005b8af4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8af8;
  *DAT_005b8af8 = 0;
  puVar1[1] = 0;
  return;
}

