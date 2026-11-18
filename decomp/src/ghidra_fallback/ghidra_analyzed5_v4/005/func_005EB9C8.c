#include "ghidra_types.h"

extern int DAT_005eb9c4;
extern undefined4 *DAT_005eb9c8;

// USA 005EB9C8 <- EU 005EB9A0 (Ghidra, non-matching)
// GLOBAL DAT_005eb9c4 int
// GLOBAL DAT_005eb9c8 undefined4 *

void func_005EB9C8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005eb9c4;
  *(undefined4 *)(DAT_005eb9c4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005eb9c8;
  *DAT_005eb9c8 = 0;
  puVar2[1] = 0;
  return;
}

