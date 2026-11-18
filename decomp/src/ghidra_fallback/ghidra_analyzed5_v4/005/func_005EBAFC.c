#include "ghidra_types.h"

extern int DAT_005ebaf8;
extern undefined4 *DAT_005ebafc;

// USA 005EBAFC <- EU 005EBAD4 (Ghidra, non-matching)
// GLOBAL DAT_005ebaf8 int
// GLOBAL DAT_005ebafc undefined4 *

void func_005EBAFC(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ebaf8;
  *(undefined4 *)(DAT_005ebaf8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ebafc;
  *DAT_005ebafc = 0;
  puVar2[1] = 0;
  return;
}

