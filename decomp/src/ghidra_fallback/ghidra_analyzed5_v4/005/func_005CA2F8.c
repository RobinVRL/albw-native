#include "ghidra_types.h"

extern undefined4 *DAT_005ca2f4;
extern undefined4 *DAT_005ca2f8;

// USA 005CA2F8 <- EU 005CA2D0 (Ghidra, non-matching)
// GLOBAL DAT_005ca2f4 undefined4 *
// GLOBAL DAT_005ca2f8 undefined4 *

void func_005CA2F8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ca2f4;
  *DAT_005ca2f4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca2f8;
  *DAT_005ca2f8 = 0;
  puVar1[1] = 0;
  return;
}

