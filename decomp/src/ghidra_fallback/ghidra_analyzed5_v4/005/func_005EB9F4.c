#include "ghidra_types.h"

extern int DAT_005eb9f0;
extern undefined4 *DAT_005eb9f4;

// USA 005EB9F4 <- EU 005EB9CC (Ghidra, non-matching)
// GLOBAL DAT_005eb9f0 int
// GLOBAL DAT_005eb9f4 undefined4 *

void func_005EB9F4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005eb9f0;
  *(undefined4 *)(DAT_005eb9f0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005eb9f4;
  *DAT_005eb9f4 = 0;
  puVar2[1] = 0;
  return;
}

