#include "ghidra_types.h"

extern int DAT_005cfe10;
extern undefined4 *DAT_005cfe14;

// USA 005CFE08 <- EU 005CFDE0 (Ghidra, non-matching)
// GLOBAL DAT_005cfe10 int
// GLOBAL DAT_005cfe14 undefined4 *

void func_005CFE08(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cfe10;
  *(undefined4 *)(DAT_005cfe10 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005cfe14;
  *DAT_005cfe14 = 0;
  puVar2[1] = 0;
  puVar2[-4] = 0x10000000;
  return;
}

