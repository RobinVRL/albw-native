#include "ghidra_types.h"

extern int DAT_005aafdc;
extern undefined4 *DAT_005aafe0;

// USA 005AAFE0 <- EU 005AAFB8 (Ghidra, non-matching)
// GLOBAL DAT_005aafdc int
// GLOBAL DAT_005aafe0 undefined4 *

void func_005AAFE0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005aafdc;
  *(undefined4 *)(DAT_005aafdc + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005aafe0;
  *DAT_005aafe0 = 0;
  puVar2[1] = 0;
  return;
}

