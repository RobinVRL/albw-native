#include "ghidra_types.h"

extern undefined4 *DAT_005c23cc;
extern undefined4 *DAT_005c23d0;

// USA 005C23D0 <- EU 005C23A8 (Ghidra, non-matching)
// GLOBAL DAT_005c23cc undefined4 *
// GLOBAL DAT_005c23d0 undefined4 *

void func_005C23D0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c23cc;
  *DAT_005c23cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c23d0;
  *DAT_005c23d0 = 0;
  puVar1[1] = 0;
  return;
}

