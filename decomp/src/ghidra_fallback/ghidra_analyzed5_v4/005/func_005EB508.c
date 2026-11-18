#include "ghidra_types.h"

extern int DAT_005eb504;
extern undefined4 *DAT_005eb508;

// USA 005EB508 <- EU 005EB4E0 (Ghidra, non-matching)
// GLOBAL DAT_005eb504 int
// GLOBAL DAT_005eb508 undefined4 *

void func_005EB508(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005eb504;
  *(undefined4 *)(DAT_005eb504 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005eb508;
  *DAT_005eb508 = 0;
  puVar2[1] = 0;
  return;
}

