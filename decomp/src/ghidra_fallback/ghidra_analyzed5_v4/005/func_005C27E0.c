#include "ghidra_types.h"

extern undefined4 *DAT_005c27dc;
extern undefined4 *DAT_005c27e0;

// USA 005C27E0 <- EU 005C27B8 (Ghidra, non-matching)
// GLOBAL DAT_005c27dc undefined4 *
// GLOBAL DAT_005c27e0 undefined4 *

void func_005C27E0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c27dc;
  *DAT_005c27dc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c27e0;
  *DAT_005c27e0 = 0;
  puVar1[1] = 0;
  return;
}

