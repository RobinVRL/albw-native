#include "ghidra_types.h"

extern int DAT_005c2808;
extern undefined4 *DAT_005c280c;

// USA 005C280C <- EU 005C27E4 (Ghidra, non-matching)
// GLOBAL DAT_005c2808 int
// GLOBAL DAT_005c280c undefined4 *

void func_005C280C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c2808;
  *(undefined4 *)(DAT_005c2808 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c280c;
  *DAT_005c280c = 0;
  puVar2[1] = 0;
  return;
}

