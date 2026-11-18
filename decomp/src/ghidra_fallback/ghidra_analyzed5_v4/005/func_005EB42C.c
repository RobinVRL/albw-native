#include "ghidra_types.h"

extern int DAT_005eb428;
extern undefined4 *DAT_005eb42c;

// USA 005EB42C <- EU 005EB404 (Ghidra, non-matching)
// GLOBAL DAT_005eb428 int
// GLOBAL DAT_005eb42c undefined4 *

void func_005EB42C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005eb428;
  *(undefined4 *)(DAT_005eb428 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005eb42c;
  *DAT_005eb42c = 0;
  puVar2[1] = 0;
  return;
}

