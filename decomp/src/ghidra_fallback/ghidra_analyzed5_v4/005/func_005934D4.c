#include "ghidra_types.h"

extern int DAT_005934d0;
extern undefined4 *DAT_005934d4;

// USA 005934D4 <- EU 005934AC (Ghidra, non-matching)
// GLOBAL DAT_005934d0 int
// GLOBAL DAT_005934d4 undefined4 *

void func_005934D4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005934d0;
  *(undefined4 *)(DAT_005934d0 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005934d4;
  *DAT_005934d4 = 0;
  puVar2[1] = 0;
  return;
}

