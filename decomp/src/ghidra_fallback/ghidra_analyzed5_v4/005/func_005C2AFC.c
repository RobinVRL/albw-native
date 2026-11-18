#include "ghidra_types.h"

extern undefined4 *DAT_005c2af8;
extern undefined4 *DAT_005c2afc;

// USA 005C2AFC <- EU 005C2AD4 (Ghidra, non-matching)
// GLOBAL DAT_005c2af8 undefined4 *
// GLOBAL DAT_005c2afc undefined4 *

void func_005C2AFC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c2af8;
  *DAT_005c2af8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c2afc;
  *DAT_005c2afc = 0;
  puVar1[1] = 0;
  return;
}

