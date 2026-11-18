#include "ghidra_types.h"

extern int DAT_005fbcc4;
extern undefined4 *DAT_005fbcc8;

// USA 005FBCC8 <- EU 005FBCA0 (Ghidra, non-matching)
// GLOBAL DAT_005fbcc4 int
// GLOBAL DAT_005fbcc8 undefined4 *

void func_005FBCC8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005fbcc4;
  *(undefined4 *)(DAT_005fbcc4 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005fbcc8;
  *DAT_005fbcc8 = 0;
  puVar2[1] = 0;
  return;
}

