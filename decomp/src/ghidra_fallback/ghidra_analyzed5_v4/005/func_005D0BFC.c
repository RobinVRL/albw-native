#include "ghidra_types.h"

extern undefined4 *DAT_005d0bf8;
extern undefined4 *DAT_005d0bfc;

// USA 005D0BFC <- EU 005D0BD4 (Ghidra, non-matching)
// GLOBAL DAT_005d0bf8 undefined4 *
// GLOBAL DAT_005d0bfc undefined4 *

void func_005D0BFC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0bf8;
  *DAT_005d0bf8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0bfc;
  *DAT_005d0bfc = 0;
  puVar1[1] = 0;
  return;
}

