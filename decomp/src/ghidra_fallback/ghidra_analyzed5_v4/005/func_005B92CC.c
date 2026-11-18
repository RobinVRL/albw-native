#include "ghidra_types.h"

extern undefined4 *DAT_005b92c8;
extern undefined4 *DAT_005b92cc;

// USA 005B92CC <- EU 005B92A4 (Ghidra, non-matching)
// GLOBAL DAT_005b92c8 undefined4 *
// GLOBAL DAT_005b92cc undefined4 *

void func_005B92CC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b92c8;
  *DAT_005b92c8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b92cc;
  *DAT_005b92cc = 0;
  puVar1[1] = 0;
  return;
}

