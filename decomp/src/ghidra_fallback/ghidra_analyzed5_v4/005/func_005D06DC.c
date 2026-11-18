#include "ghidra_types.h"

extern undefined4 *DAT_005d06d8;
extern undefined4 *DAT_005d06dc;

// USA 005D06DC <- EU 005D06B4 (Ghidra, non-matching)
// GLOBAL DAT_005d06d8 undefined4 *
// GLOBAL DAT_005d06dc undefined4 *

void func_005D06DC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d06d8;
  *DAT_005d06d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d06dc;
  *DAT_005d06dc = 0;
  puVar1[1] = 0;
  return;
}

