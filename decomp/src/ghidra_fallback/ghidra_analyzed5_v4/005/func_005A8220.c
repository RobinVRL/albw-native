#include "ghidra_types.h"

extern int DAT_005a821c;
extern undefined4 *DAT_005a8220;

// USA 005A8220 <- EU 005A81F8 (Ghidra, non-matching)
// GLOBAL DAT_005a821c int
// GLOBAL DAT_005a8220 undefined4 *

void func_005A8220(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a821c;
  *(undefined4 *)(DAT_005a821c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a8220;
  *DAT_005a8220 = 0;
  puVar2[1] = 0;
  return;
}

