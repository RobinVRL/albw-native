#include "ghidra_types.h"

extern int DAT_005a7cbc;
extern undefined4 *DAT_005a7cc0;

// USA 005A7CC0 <- EU 005A7C98 (Ghidra, non-matching)
// GLOBAL DAT_005a7cbc int
// GLOBAL DAT_005a7cc0 undefined4 *

void func_005A7CC0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a7cbc;
  *(undefined4 *)(DAT_005a7cbc + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a7cc0;
  *DAT_005a7cc0 = 0;
  puVar2[1] = 0;
  return;
}

