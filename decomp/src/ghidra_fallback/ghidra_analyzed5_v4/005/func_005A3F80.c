#include "ghidra_types.h"

extern int DAT_005a3f7c;
extern undefined4 *DAT_005a3f80;

// USA 005A3F80 <- EU 005A3F58 (Ghidra, non-matching)
// GLOBAL DAT_005a3f7c int
// GLOBAL DAT_005a3f80 undefined4 *

void func_005A3F80(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a3f7c;
  *(undefined4 *)(DAT_005a3f7c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a3f80;
  *DAT_005a3f80 = 0;
  puVar2[1] = 0;
  return;
}

