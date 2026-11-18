#include "ghidra_types.h"

extern int DAT_005ebba0;
extern undefined4 *DAT_005ebba4;

// USA 005EBBA4 <- EU 005EBB7C (Ghidra, non-matching)
// GLOBAL DAT_005ebba0 int
// GLOBAL DAT_005ebba4 undefined4 *

void func_005EBBA4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ebba0;
  *(undefined4 *)(DAT_005ebba0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ebba4;
  *DAT_005ebba4 = 0;
  puVar2[1] = 0;
  return;
}

